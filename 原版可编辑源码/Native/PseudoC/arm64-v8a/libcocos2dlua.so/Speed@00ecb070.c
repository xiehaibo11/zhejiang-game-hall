
/* cocos2d::Speed::Speed() */

void __thiscall cocos2d::Speed::Speed(Speed *this)

{
  undefined4 uVar1;
  long *plVar2;
  
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffff;
  *(undefined ***)this = &PTR__Action_016f5448;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f54a8;
  plVar2 = (long *)ScriptEngineManager::getInstance();
  uVar1 = 0;
  if ((long *)*plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*(long *)*plVar2 + 0x10))();
  }
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR__Speed_016f54d0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5530;
  return;
}

