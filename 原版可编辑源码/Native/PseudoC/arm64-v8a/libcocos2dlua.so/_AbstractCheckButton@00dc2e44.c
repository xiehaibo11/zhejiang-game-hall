
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::ui::AbstractCheckButton::~AbstractCheckButton() */

void __thiscall cocos2d::ui::AbstractCheckButton::~AbstractCheckButton(AbstractCheckButton *this)

{
  AbstractCheckButton AVar1;
  
  *(undefined ***)this = &PTR__AbstractCheckButton_016dc818;
  *(undefined ***)(this + 0x318) = &PTR__AbstractCheckButton_016dcef0;
                    /* try { // try from 00dc2e70 to 00ec2e7b has its CatchHandler @ 00dc30f0 */
  if (((byte)this[0x5a8] & 1) == 0) {
    AVar1 = this[0x590];
  }
  else {
    operator_delete(*(void **)(this + 0x5b8));
    AVar1 = this[0x590];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x578];
  }
  else {
    operator_delete(*(void **)(this + 0x5a0));
    AVar1 = this[0x578];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x560];
  }
  else {
    operator_delete(*(void **)(this + 0x588));
    AVar1 = this[0x560];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x548];
  }
  else {
                    /* try { // try from 00dc2ee0 to 00ec2f1b has its CatchHandler @ 00dc3100 */
    operator_delete(*(void **)(this + 0x570));
    AVar1 = this[0x548];
  }
  if (((byte)AVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x558));
  }
  Widget::~Widget((Widget *)this);
  return;
}

