#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PS5ControllerInputMapper.generated.h"

UCLASS()
class APS5ControllerInputMapper : public APlayerController
{
    GENERATED_BODY()

public:
    virtual void SetupInputComponent() override
    {
        Super::SetupInputComponent();

        // Map PS5 controller inputs to functions
        InputComponent->BindAxis("MoveForward", this, &APS5ControllerInputMapper::MoveForward);
        InputComponent->BindAxis("MoveRight", this, &APS5ControllerInputMapper::MoveRight);
        InputComponent->BindAxis("LookUp", this, &APS5ControllerInputMapper::LookUp);
        InputComponent->BindAxis("LookRight", this, &APS5ControllerInputMapper::LookRight);
        InputComponent->BindAction("Jump", IE_Pressed, this, &APS5ControllerInputMapper::Jump);
        InputComponent->BindAction("Fire", IE_Pressed, this, &APS5ControllerInputMapper::Fire);
    }

    void MoveForward(float Value)
    {
        // Handle forward movement
        // Implement your logic here
    }

    void MoveRight(float Value)
    {
        // Handle right movement
        // Implement your logic here
    }

    void LookUp(float Value)
    {
        // Handle vertical look
        // Implement your logic here
    }

    void LookRight(float Value)
    {
        // Handle horizontal look
        // Implement your logic here
    }

    void Jump()
    {
        // Handle jump action
        // Implement your logic here
    }

    void Fire()
    {
        // Handle fire action
        // Implement your logic here
    }
};