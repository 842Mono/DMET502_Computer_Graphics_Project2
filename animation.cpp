//#include "./globals.cpp"


void Animation()
{
	planeRotationY -= 0.1;
	carRotationY -= 0.1;


	if(ufoVerticalTranslation >= 0.7)
		ufoVerticalToggle = false;
	if(ufoVerticalTranslation <= 0)
		ufoVerticalToggle = true;

	if(ufoVerticalToggle)
		ufoVerticalTranslation += 0.002;
	else
		ufoVerticalTranslation -= 0.002;
	
	
	/*double* p =bezier(t1,p0,p1,p2,p3);
	//glVertex3f(p[0],p[1],0);
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

	p1[0]=0;
	p1[1]=3;
	
	p2[0]=3;
	p2[1]=3;
	
	p3[0]=3;
	p3[1]=0;
}