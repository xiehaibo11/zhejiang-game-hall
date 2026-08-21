
/* cocos2d::Component::create() */

Ref * cocos2d::Component::create(void)

{
  undefined4 uVar1;
  Ref *this;
  long *plVar2;
  ulong uVar3;
  
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__Component_016fbe40;
    this[0x48] = (Ref)0x1;
    plVar2 = (long *)ScriptEngineManager::getInstance();
    uVar1 = 0;
    if ((long *)*plVar2 != (long *)0x0) {
      uVar1 = (**(code **)(*(long *)*plVar2 + 0x10))();
    }
    *(undefined4 *)(this + 0x4c) = uVar1;
    uVar3 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      Ref::autorelease(this);
    }
  }
  return this;
}

