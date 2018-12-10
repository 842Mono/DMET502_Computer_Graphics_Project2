//#include "./globals.cpp"


void Animation()
{
	//planeRotationY -= 0.1;
	//carRotationY -= 0.1;




	if(ufoAnim)
	{
		if(ufoVerticalTranslation >= 0.7)
			ufoVerticalToggle = false;
		if(ufoVerticalTranslation <= 0)
			ufoVerticalToggle = true;

		if(ufoVerticalToggle)
			ufoVerticalTranslation += 0.002;
		else
			ufoVerticalTranslation -= 0.002;
	}


	if(rotate)
		camRot += 0.01;

	std::cout << camRot << std::endl;

	if(copterAnim1)
	{
		copterBladesRotation += 1;

		copterTailRotation += 1;


		double* p = bezier(t1,p0,p1,p2,p3);
		copterYTrans = res1[1];
		// std::cout << res1[1] << std::endl;
		t1+=0.002;
		if(t1 >= 1)
			t1 = 0;
	}

	if(copterAnim2)
	{
		copterBladesRotation += 1;

		copterTailRotation += 1;

		if(slightFront > 15)
			ca2rot += 0.5;


		if(slightFront < 20)
			slightFront += 0.1;
		
		if(verticalElevation < 3)
			verticalElevation += 0.01;
	}
	else
	{
		if(slightFront > 0)
			slightFront -= 0.1;
		
		if(verticalElevation > 0)
			verticalElevation -= 0.01;

		if(verticalElevation > 0 || slightFront > 0)
		{
			copterBladesRotation += 1;

			copterTailRotation += 1;

			ca2rot += 0.5;
		}
	}

	if(baloonAnim)
	{
		double* p2 = bezierb(tb, p0b, p1b, p2b, p3b);
		baloonRotAnim = resb[1]*10;
		tb+=0.002;
		if(tb >= 1)
			tb = 0;
	}




	//car animation
	if(carAnim)
	{
		if(carPhaseCtrl == 0)
			carTranslationx += 0.05;
		if(carPhaseCtrl == 0 && carTranslationx >= 3)
			carPhaseCtrl = 1;
		if(carPhaseCtrl == 1)
			++carPhaseCounter;
		if(carPhaseCounter >= 200)
		{
			carPhaseCtrl = 2;
			carPhaseCounter = 0;
		}
		if(carPhaseCtrl == 2)
			carTranslationx -= 0.05;
		if(carPhaseCtrl == 2 && carTranslationx <= 0)
			carPhaseCtrl = 3;
		if(carPhaseCtrl == 3)
			++carPhaseCounter;
		if(carPhaseCtrl == 3 && carPhaseCounter >= 200)
		{
			carPhaseCtrl = 0;
			carPhaseCounter = 0;
		}
		std::cout << carPhaseCounter << std::endl;
	}


	if(rocketAnim)
	{
		double* p3 = bezierc(tc, p0c, p1c, p2c, p3c);
		rocketVertical = resc[1];
		tc+=0.001;
		if(tc >= 1)
			tc = 0;
	}


	if(planeAnim1)
	{
		// double* p4 = bezierd(td, p0d, p1d, p2d, p3d);

		// planeTranslationx = resd[1];
		// planeTranslationy = resd[0];
		
		// td+=0.001;
		// if(td >= 1)
		// 	td = 0;

		planeTranslationy = fabs(0.5 * planeTranslationx);

		//if(planeState1 == 0)
			planeTranslationx += 0.02;


		if(planeState1 == 0 && planeTranslationx >= 20)
		{
			planeState1 = 1;
			planeTranslationx = -20;
		}

		//if(planeState1 == 1)
		// 	planeTranslationx -= 0.1;
		
		if(planeState1 == 1 && planeTranslationx >= 0)
		{
			planeState1 = 0;
		}
	}

	if(planeAnim2)
	{
		if(tailsDegree > 20)
			tailsDegree -= 0.7;
		if(flapsDegree < 90)
			flapsDegree += 0.7;
	}
	else
	{
		if(tailsDegree < 90)
			tailsDegree += 0.7;
		if(flapsDegree > 0)
			flapsDegree -= 0.7;
	}

	
	/*double* p =bezier(t1,p0,p1,p2,p3);
	//glVertex3f(p[0],p[1],0);	std::cout << res1[1] << std::endl;
	ufoVerticalTranslation = res1[1];
	std::cout << res1[1] << std::endl;

	t1+=0.002;
	if(t1 >= 1)
		t1 = 0;*/







	// if(sphereTranslation > 1.0)
	// 	upDown = false;
	// if(sphereTranslation < 0.0)
	// 	upDown = true;

	// if(upDown)
	// 	sphereTranslation += 0.01;
	// else
	// 	sphereTranslation -= 0.01;

	// std::cout << potRotation << std::endl;

	// potRotation += 0.1;
	// if(potRotation > 360)
	// 	potRotation = 0;

    //std::cout << sphereTranslation << std::endl;

	glutPostRedisplay();  
}


void initBezier()
{
	p0[0]=0;
	p0[1]=0;

	p1[0]=15;
	p1[1]=1;
	
	p2[0]=30;
	p2[1]=-1;
	
	p3[0]=45;
	p3[1]=0;



	p0b[0]=0;
	p0b[1]=0;

	p1b[0]=15;
	p1b[1]=1;
	
	p2b[0]=30;
	p2b[1]=-1;
	
	p3b[0]=45;
	p3b[1]=0;




	p0c[0]=-100;
	p0c[1]=-100;

	p1c[0]=-100;
	p1c[1]=100;
	
	p2c[0]=100;
	p2c[1]=-100;
	
	p3c[0]=100;
	p3c[1]=100;


	

	p0d[0]=-100;
	p0d[1]=100;

	p1d[0]=-20;
	p1d[1]=-20;
	
	p2d[0]=20;
	p2d[1]=-20;
	
	p3d[0]=100;
	p3d[1]=100;
}