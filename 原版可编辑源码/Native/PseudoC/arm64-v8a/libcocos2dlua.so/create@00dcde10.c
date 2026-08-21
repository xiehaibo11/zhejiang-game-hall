
/* cocos2d::ui::UICCTextField::create() */

TextFieldTTF * cocos2d::ui::UICCTextField::create(void)

{
  TextFieldTTF *this;
  
  this = operator_new(0x750,(nothrow_t *)&std::nothrow);
  if (this != (TextFieldTTF *)0x0) {
                    /* try { // try from 00dcde34 to 00ecde47 has its CatchHandler @ 00dce8e8 */
    TextFieldTTF::TextFieldTTF(this);
                    /* try { // try from 00dcde4c to 00ecde73 has its CatchHandler @ 00dce968 */
    *(undefined ***)this = &PTR__UICCTextField_016e0e30;
    *(undefined ***)(this + 0x300) = &PTR__UICCTextField_016e1538;
    *(undefined ***)(this + 0x2f8) = &PTR__UICCTextField_016e1508;
    *(undefined ***)(this + 0x6a0) = &PTR__UICCTextField_016e1568;
    *(undefined ***)(this + 0x738) = &PTR__UICCTextField_016e15f8;
    this[0x740] = (TextFieldTTF)0x0;
    *(undefined8 *)(this + 0x744) = 0;
                    /* try { // try from 00dcde84 to 00ecdec3 has its CatchHandler @ 00dceb00 */
    Ref::autorelease((Ref *)this);
  }
  return this;
}

