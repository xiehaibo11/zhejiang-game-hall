
/* cocos2d::ui::RadioButtonGroup::create() */

Widget * cocos2d::ui::RadioButtonGroup::create(void)

{
  Widget *this;
  ulong uVar1;
  
  this = operator_new(0x550,(nothrow_t *)&std::nothrow);
  if (this != (Widget *)0x0) {
                    /* try { // try from 00dc620c to 00ec622b has its CatchHandler @ 00dc66c0 */
    Widget::Widget(this);
    *(undefined8 *)(this + 0x4f0) = 0;
    *(undefined8 *)(this + 0x500) = 0;
    *(undefined8 *)(this + 0x4f8) = 0;
    *(undefined8 *)(this + 0x530) = 0;
    *(undefined8 *)(this + 0x540) = 0;
                    /* try { // try from 00dc6238 to 00ec624b has its CatchHandler @ 00dc66b8 */
    *(undefined ***)this = &PTR__RadioButtonGroup_016ddd60;
    *(undefined ***)(this + 0x318) = &PTR__RadioButtonGroup_016de430;
    this[0x548] = (Widget)0x0;
                    /* try { // try from 00dc624c to 00ec6257 has its CatchHandler @ 00dc66a8 */
    uVar1 = Widget::init(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Widget *)0x0;
    }
    else {
                    /* try { // try from 00dc6258 to 00ec6263 has its CatchHandler @ 00dc66bc */
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00dc6278 to 00ec62bb has its CatchHandler @ 00dc66d8 */
  return this;
}

