
/* cocos2d::LuaStack::create() */

Ref * cocos2d::LuaStack::create(void)

{
  Ref *this;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x30) = 0;
    this[0x34] = (Ref)0x0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined ***)this = &PTR__LuaStack_01698498;
    *(undefined4 *)(this + 0x50) = 0;
  }
  init((LuaStack *)this);
  Ref::autorelease(this);
  return this;
}

