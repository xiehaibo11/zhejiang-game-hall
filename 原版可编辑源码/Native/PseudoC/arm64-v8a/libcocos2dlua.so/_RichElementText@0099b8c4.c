
/* cocos2d::ui::RichElementText::~RichElementText() */

void __thiscall cocos2d::ui::RichElementText::~RichElementText(RichElementText *this)

{
  RichElementText RVar1;
  
                    /* try { // try from 0099b8cc to 00a9b937 has its CatchHandler @ 0099ba48 */
  *(undefined ***)this = &PTR__RichElementText_0169e128;
  if (((byte)this[0x68] & 1) == 0) {
    RVar1 = this[0x48];
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    RVar1 = this[0x48];
  }
  if (((byte)RVar1 & 1) == 0) {
    RVar1 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    RVar1 = this[0x30];
  }
  if (((byte)RVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  Ref::~Ref((Ref *)this);
  return;
}

