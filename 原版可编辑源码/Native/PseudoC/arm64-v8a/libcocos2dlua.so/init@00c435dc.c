
/* cocostudio::DisplayManager::init(cocostudio::Bone*) */

undefined8 __thiscall cocostudio::DisplayManager::init(DisplayManager *this,Bone *param_1)

{
  undefined8 uVar1;
  
  *(Bone **)(this + 0x60) = param_1;
  uVar1 = (**(code **)(*(long *)param_1 + 0x560))(param_1);
  (**(code **)(*(long *)this + 0x10))(this,uVar1);
  return 1;
}

