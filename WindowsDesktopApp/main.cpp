#include "MainForm.h"

#include <iostream>

//[System::STAThreadAttribute]

void main() 
{
	std::cout << "Starting..." << std::endl;
	
	//System::Windows::Forms::Application::EnableVisualStyles();
	//System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	WindowsDesktopApp::MainForm form;
	System::Windows::Forms::Application::Run(%form);
	
	std::cout << "Closing..." << std::endl;
	std::cin.get();
}