
/* cocos2d::ui::TextField::initRenderer() */

void __thiscall cocos2d::ui::TextField::initRenderer(TextField *this)

{
  TextFieldTTF *this_00;
  
  this_00 = operator_new(0x750,(nothrow_t *)&std::nothrow);
  if (this_00 != (TextFieldTTF *)0x0) {
    TextFieldTTF::TextFieldTTF(this_00);
    *(undefined ***)this_00 = &PTR__UICCTextField_016e0e30;
    *(undefined ***)(this_00 + 0x300) = &PTR__UICCTextField_016e1538;
    *(undefined ***)(this_00 + 0x2f8) = &PTR__UICCTextField_016e1508;
    *(undefined ***)(this_00 + 0x6a0) = &PTR__UICCTextField_016e1568;
    *(undefined ***)(this_00 + 0x738) = &PTR__UICCTextField_016e15f8;
    this_00[0x740] = (TextFieldTTF)0x0;
    *(undefined8 *)(this_00 + 0x744) = 0;
    Ref::autorelease((Ref *)this_00);
  }
  *(TextFieldTTF **)(this + 0x4f0) = this_00;
                    /* WARNING: Could not recover jumptable at 0x00dcf180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x540))(this,this_00,0xffffffff,0xffffffff);
  return;
}

