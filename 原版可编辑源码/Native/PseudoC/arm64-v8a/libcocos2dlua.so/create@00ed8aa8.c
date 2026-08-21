
/* cocos2d::ToggleVisibility::create() */

Action * cocos2d::ToggleVisibility::create(void)

{
  Action *this;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* try { // try from 00ed8adc to 00fd8baf has its CatchHandler @ 00ed8adc
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed8adc with catch @ 00ed8adc
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed8d10 with catch @ 00ed8adc
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed8f74 with catch @ 00ed8adc
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed9040 with catch @ 00ed8adc
                        */
    *(undefined ***)this = &PTR__Action_016f8080;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f80e0;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

