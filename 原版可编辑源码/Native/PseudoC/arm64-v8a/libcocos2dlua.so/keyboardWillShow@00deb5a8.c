
/* cocos2d::ui::EditBox::keyboardWillShow(cocos2d::IMEKeyboardNotificationInfo&) */

void cocos2d::ui::EditBox::keyboardWillShow(IMEKeyboardNotificationInfo *param_1)

{
  long lVar1;
  Size *pSVar2;
  ulong uVar3;
  long in_x1;
  Mat4 *in_x2;
  float fVar4;
  float fVar5;
  Rect aRStack_b0 [4];
  float local_ac;
  Rect aRStack_a0 [16];
  float local_90;
  float fStack_8c;
  Mat4 aMStack_88 [64];
  long local_48;
  
                    /* try { // try from 00deb5a8 to 00eeb5af has its CatchHandler @ 00deb5e0 */
                    /* try { // try from 00deb5b0 to 00eeb5ff has its CatchHandler @ 00deb554 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pSVar2 = (Size *)(**(code **)(*(long *)param_1 + 0x168))();
                    /* catch() { ... } // from try @ 00deb5a8 with catch @ 00deb5e0 */
                    /* catch() { ... } // from try @ 00deb58c with catch @ 00deb5e8 */
  Size::Size((Size *)&local_90,pSVar2);
  Rect::Rect(aRStack_a0,0.0,0.0,local_90,fStack_8c);
                    /* try { // try from 00deb600 to 00eeb637 has its CatchHandler @ 00deb600
                       catch() { ... } // from try @ 00deb600 with catch @ 00deb600
                       catch() { ... } // from try @ 00deb65c with catch @ 00deb600 */
  (**(code **)(*(long *)param_1 + 0x430))(aMStack_88,param_1);
  RectApplyTransform((cocos2d *)aRStack_a0,aMStack_88,in_x2);
  Mat4::~Mat4(aMStack_88);
                    /* try { // try from 00deb638 to 00eeb643 has its CatchHandler @ 00deb694 */
  local_ac = local_ac + -4.0;
  uVar3 = Rect::intersectsRect(aRStack_b0,(Rect *)(in_x1 + 0x10));
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 00deb654 to 00eeb65b has its CatchHandler @ 00deb68c */
    fVar4 = (float)Rect::getMaxY((Rect *)(in_x1 + 0x10));
                    /* try { // try from 00deb65c to 00eeb6ab has its CatchHandler @ 00deb600 */
    fVar5 = (float)Rect::getMinY(aRStack_b0);
    *(float *)(param_1 + 0x5c8) = fVar4 - fVar5;
    if (*(long **)(param_1 + 0x5b8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x5b8) + 0xe0))(*(undefined4 *)(in_x1 + 0x20));
    }
  }
                    /* catch() { ... } // from try @ 00deb654 with catch @ 00deb68c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00deb638 with catch @ 00deb694 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

