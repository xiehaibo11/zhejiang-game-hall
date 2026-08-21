
/* cocos2d::Component::Component() */

void __thiscall cocos2d::Component::Component(Component *this)

{
  undefined4 uVar1;
  long *plVar2;
  
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__Component_016fbe40;
  this[0x48] = (Component)0x1;
  plVar2 = (long *)ScriptEngineManager::getInstance();
  uVar1 = 0;
  if ((long *)*plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*(long *)*plVar2 + 0x10))();
  }
  *(undefined4 *)(this + 0x4c) = uVar1;
  return;
}

