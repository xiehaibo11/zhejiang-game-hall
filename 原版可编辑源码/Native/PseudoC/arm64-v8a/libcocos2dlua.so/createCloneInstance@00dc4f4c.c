
/* cocos2d::ui::CheckBox::createCloneInstance() */

AbstractCheckButton * cocos2d::ui::CheckBox::createCloneInstance(void)

{
  AbstractCheckButton *this;
  ulong uVar1;
  
  this = operator_new(0x610,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00dc4f68 to 00ec4f6f has its CatchHandler @ 00dc519c */
  if (this != (AbstractCheckButton *)0x0) {
                    /* try { // try from 00dc4f70 to 00ec4fa7 has its CatchHandler @ 00dc4ab8 */
    AbstractCheckButton::AbstractCheckButton(this);
    *(undefined8 *)(this + 0x600) = 0;
    *(undefined8 *)(this + 0x5c0) = 0;
    *(undefined8 *)(this + 0x5d0) = 0;
    *(undefined ***)this = &PTR__CheckBox_016dcf30;
    *(undefined ***)(this + 0x318) = &PTR__CheckBox_016dd608;
    *(undefined8 *)(this + 0x5c8) = 0;
    uVar1 = AbstractCheckButton::init(this);
                    /* try { // try from 00dc4fa8 to 00ec4fb7 has its CatchHandler @ 00dc51d0 */
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (AbstractCheckButton *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00dc4fd4 to 00ec4fdf has its CatchHandler @ 00dc527c */
  return this;
}

