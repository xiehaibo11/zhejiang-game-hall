
/* cocostudio::ArmatureMovementDispatcher::ArmatureMovementDispatcher() */

void __thiscall
cocostudio::ArmatureMovementDispatcher::ArmatureMovementDispatcher(ArmatureMovementDispatcher *this)

{
  undefined8 *puVar1;
  
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__ArmatureMovementDispatcher_016ca8c0;
  puVar1 = operator_new(0x28,(nothrow_t *)&std::nothrow);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  }
  *(undefined8 **)(this + 0x28) = puVar1;
  return;
}

