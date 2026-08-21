
/* cocos2d::ui::RadioButton::~RadioButton() */

void __thiscall cocos2d::ui::RadioButton::~RadioButton(RadioButton *this)

{
  RadioButton *pRVar1;
  code *pcVar2;
  
                    /* try { // try from 00dc55b8 to 00ec55db has its CatchHandler @ 00dc5aa4 */
  pRVar1 = *(RadioButton **)(this + 0x5e0);
  *(undefined8 *)(this + 0x5e0) = 0;
                    /* try { // try from 00dc55e0 to 00ec55eb has its CatchHandler @ 00dc5a68 */
  *(undefined ***)this = &PTR__RadioButton_016dd648;
  *(undefined ***)(this + 0x318) = &PTR__RadioButton_016ddd20;
  if (this + 0x5c0 == pRVar1) {
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x20);
LAB_00dc5608:
    (*pcVar2)();
  }
  else if (pRVar1 != (RadioButton *)0x0) {
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x28);
    goto LAB_00dc5608;
  }
  pRVar1 = *(RadioButton **)(this + 0x5e0);
                    /* try { // try from 00dc5610 to 00ec561f has its CatchHandler @ 00dc5aa0 */
  *(undefined8 *)(this + 0x5f0) = 0;
  if (this + 0x5c0 == pRVar1) {
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x20);
  }
  else {
    if (pRVar1 == (RadioButton *)0x0) goto LAB_00dc5638;
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00dc5638:
  AbstractCheckButton::~AbstractCheckButton((AbstractCheckButton *)this);
                    /* try { // try from 00dc5640 to 00ec564f has its CatchHandler @ 00dc5aec */
  operator_delete(this);
  return;
}

