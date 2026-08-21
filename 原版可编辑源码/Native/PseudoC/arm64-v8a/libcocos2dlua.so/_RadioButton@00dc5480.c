
/* cocos2d::ui::RadioButton::~RadioButton() */

void __thiscall cocos2d::ui::RadioButton::~RadioButton(RadioButton *this)

{
  RadioButton *pRVar1;
  code *pcVar2;
  
  pRVar1 = *(RadioButton **)(this + 0x5e0);
  *(undefined8 *)(this + 0x5e0) = 0;
                    /* try { // try from 00dc54b0 to 00ec54bb has its CatchHandler @ 00dc5a4c */
  *(undefined ***)this = &PTR__RadioButton_016dd648;
  *(undefined ***)(this + 0x318) = &PTR__RadioButton_016ddd20;
  if (this + 0x5c0 == pRVar1) {
                    /* try { // try from 00dc54d0 to 00ec54db has its CatchHandler @ 00dc5a64 */
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x20);
LAB_00dc54d4:
    (*pcVar2)();
  }
  else {
                    /* try { // try from 00dc54bc to 00ec54cf has its CatchHandler @ 00dc5a48 */
    if (pRVar1 != (RadioButton *)0x0) {
      pcVar2 = *(code **)(*(long *)pRVar1 + 0x28);
      goto LAB_00dc54d4;
    }
  }
  pRVar1 = *(RadioButton **)(this + 0x5e0);
  *(undefined8 *)(this + 0x5f0) = 0;
  if (this + 0x5c0 == pRVar1) {
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x20);
  }
  else {
    if (pRVar1 == (RadioButton *)0x0) goto LAB_00dc5504;
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00dc5504:
                    /* try { // try from 00dc5508 to 00ec5523 has its CatchHandler @ 00dc5a44 */
  AbstractCheckButton::~AbstractCheckButton((AbstractCheckButton *)this);
  return;
}

