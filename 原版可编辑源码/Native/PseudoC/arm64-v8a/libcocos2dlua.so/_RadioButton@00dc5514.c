
/* non-virtual thunk to cocos2d::ui::RadioButton::~RadioButton() */

void __thiscall cocos2d::ui::RadioButton::~RadioButton(RadioButton *this)

{
  RadioButton *pRVar1;
  code *pcVar2;
  
  *(undefined ***)(this + -0x318) = &PTR__RadioButton_016dd648;
  pRVar1 = *(RadioButton **)(this + 0x2c8);
                    /* try { // try from 00dc5548 to 00ec5553 has its CatchHandler @ 00dc5a3c */
  *(undefined ***)this = &PTR__RadioButton_016ddd20;
  *(undefined8 *)(this + 0x2c8) = 0;
  if (this + 0x2a8 == pRVar1) {
                    /* try { // try from 00dc556c to 00ec556f has its CatchHandler @ 00dc5a34 */
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x20);
LAB_00dc5570:
    (*pcVar2)();
  }
  else if (pRVar1 != (RadioButton *)0x0) {
                    /* try { // try from 00dc555c to 00ec5567 has its CatchHandler @ 00dc5a38 */
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x28);
    goto LAB_00dc5570;
  }
  pRVar1 = *(RadioButton **)(this + 0x2c8);
  *(undefined8 *)(this + 0x2d8) = 0;
                    /* try { // try from 00dc557c to 00ec5597 has its CatchHandler @ 00dc5a40 */
  if (this + 0x2a8 == pRVar1) {
                    /* try { // try from 00dc5598 to 00ec55a3 has its CatchHandler @ 00dc5a68 */
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x20);
  }
  else {
    if (pRVar1 == (RadioButton *)0x0) goto LAB_00dc55a0;
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00dc55a0:
  AbstractCheckButton::~AbstractCheckButton((AbstractCheckButton *)(this + -0x318));
  return;
}

