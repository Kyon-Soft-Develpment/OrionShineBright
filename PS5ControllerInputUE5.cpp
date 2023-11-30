
#include "Ps5Input.h"
#include "PS5Controller.h"
#include "UEAssets.h"
#include "UEInput.h"

//Plugin for Unreal Engine 5.3.1
//Plugin for project "This darkness of mine"
//Max Lamas 
//November 20th, 2023

//initialize module for the ps5 controller 
void UPs5Input::Initialize()
{

    PS5Controller::Initialize();
}
//void for the ps5 controller update
void UPs5Input::Update()
{
//when the ps5 controller updates
    PS5Controller::Update();
    
//bindings and inputs for the ps5 controller 

//floats for the ps5 joysticks 
//Both left stick and right stick
    float leftStickX = PS5Controller::GetLeftStickX();
    float leftStickY = PS5Controller::GetLeftStickY();
    float rightStickX = PS5Controller::GetRightStickX();
    float rightStickY = PS5Controller::GetRightStickY();
   //Boolean for the PS5 buttons
    //When pressed
    bool buttonX = PS5Controller::IsButtonPressed(EPS5Button::X);
    bool buttonCircle = PS5Controller::IsButtonPressed(EPS5Button::Circle);
    bool buttonTriangle = PS5Controller::IsButtonPressed(EPS5Button::Triangle);
    bool buttonSquare = PS5Controller::IsButtonPressed(EPS5Button::Square);
    //When not pressed 
    bool buttonx = PS5Controller::Buttonnotpressed(EPS5Button::x);
    bool buttonCircle = PS5Controller::Buttonnotpressed(EPS5Button::Circle);
    bool buttonTriangle = PS5Controller::Buttonnotpressed(EPS5Button::Triangle);
    bool buttonSquare = PS5Controller::Buttonnotpressed(EPS5Button::Square);
    //Floats for the PS5 triggers
    //bindings for the triggers 
    float leftTrigger = PS5Controller::GetLeftTrigger();
    float rightTrigger = PS5Controller::GetRightTrigger();
    //Boolean for the PS5 bumpers 
    //bindings for the bumpers
    //When Pressed 
    bool leftBumper = PS5Controller::IsButtonPressed(EPS5Button::LeftBumper);
    bool rightBumper = PS5Controller::IsButtonPressed(EPS5Button::RightBumper);
    //When not pressed
    bool leftBumper = PS5Controller::ButtonnotPressed(EPS5Button::LeftBumper);
    bool rightBumper = PS5Controller::Buttonnotpressex(EPS5Button::RightBumper);
   //Floats for the PS5 motion sensor 
    //Motion sensor bindings
    float motionSensor = PS5Controller::GetMotionSesnsorX();
    float motionSensor = PS5Controller::GetMotionSensorY();
    //Floats for the PS5 controller touchpad
    //Controller touchpad bindings
    float TouchPad = PS5Controller::GetTouchPaX();
    float TouchPad = PS5Controller::GetTouchPadY();
    //Vibration suage value
    float leftTrigger = PS5Controller::HidP_GetUsageValue();
    float rightTrigger = PS5Controller::HidP_GetUsageValue();
    //Vibration feedback     
// Vibration feedback for the PS5 controller
void UPs5Input::Vibrate(float leftMotorSpeed, float rightMotorSpeed)
{
//Motor values for rumble controllers 
    int leftMotorValue = static_cast<int>(leftMotorSpeed * 55000);
    int rightMotorValue = static_cast<int>(rightMotorSpeed * 55000);
    //Rumble VALUES with HidP Usage value 
    PS5Controller::HidP_SetUsageValue(EPS5Usage::LeftMotor, leftMotorValue);
    PS5Controller::HidP_SetUsageValue(EPS5Usage::RightMotor, rightMotorValue);
    //when does it rumble
    //if value is greater than 7
    if (leftTrigger,rightTrigger > 7){
        return 
        leftMotorValue = static_cast<int>(leftMotorSpeed * 55000);
        rightMotorValue = static_cast<int>(rightMotorSpeed * 55000)
    }
    //if value is lower than 7 

    else {
        return 
        leftMotorValue = static_cast<int>(leftTrigger * 10000)
        rightMotorValue = static_cast<int>(leftTrigger * 10000)
        
    }
    //if button x is pressed initialize rumble x10000
    if (buttonx = PS5Controller::IsButtonPressed(EPS5Button::buttonx){
        leftMotorValue = static_cast<int>(buttonx * 10000)
        rightMotorValue = static_cast<int>(buttonx * 10000)
    }
    //Touchpad controls
// Bindings for the PS5 controller touchpad
void UPs5Input::BindTouchpad()
{
    // Get the touchpad X and Y values
    float touchpadX = PS5Controller::GetTouchPadX();
    float touchpadY = PS5Controller::GetTouchPadY();
    if (touchpadX > 0.5f)
    {
    }
    else if (touchpadX < -0.5f)
    {
      
    }

    if (touchpadY > 0.5f)
    {
       
    }
    else if (touchpadY < -0.5f)
    {
        
    }
}

    )
}
}
