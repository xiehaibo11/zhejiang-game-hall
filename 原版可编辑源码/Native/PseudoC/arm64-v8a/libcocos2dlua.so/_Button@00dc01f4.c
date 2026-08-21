
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::ui::Button::~Button() */

void __thiscall cocos2d::ui::Button::~Button(Button *this)

{
  Button BVar1;
  
                    /* try { // try from 00dc0208 to 00ec0213 has its CatchHandler @ 00dc0830 */
  *(undefined ***)this = &PTR__Button_016dc118;
  *(undefined ***)(this + 0x318) = &PTR__Button_016dc7d8;
  if (((byte)this[0x5c0] & 1) == 0) {
    BVar1 = this[0x598];
  }
  else {
    operator_delete(*(void **)(this + 0x5d0));
    BVar1 = this[0x598];
  }
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = this[0x580];
  }
  else {
    operator_delete(*(void **)(this + 0x5a8));
    BVar1 = this[0x580];
  }
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = this[0x568];
  }
  else {
    operator_delete(*(void **)(this + 0x590));
    BVar1 = this[0x568];
  }
  if (((byte)BVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x578));
  }
  Widget::~Widget((Widget *)this);
  return;
}

