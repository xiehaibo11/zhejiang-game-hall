
/* cocos2d::extension::ControlSlider::isTouchInside(cocos2d::Touch*) */

uint cocos2d::extension::ControlSlider::isTouchInside(Touch *param_1)

{
  long lVar1;
  uint uVar2;
  Node *this;
  float *pfVar3;
  Touch *in_x1;
  float local_40 [2];
  float local_38;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e11318 to 00f1131b has its CatchHandler @ 00e1131c */
                    /* catch() { ... } // from try @ 00e11270 with catch @ 00e1131c
                       catch() { ... } // from try @ 00e11318 with catch @ 00e1131c
                       try { // try from 00e1131c to 00f1133b has its CatchHandler @ 00e10e3c */
  local_30[0] = Touch::getLocation(in_x1);
                    /* catch() { ... } // from try @ 00e1114c with catch @ 00e11320 */
                    /* catch() { ... } // from try @ 00e11194 with catch @ 00e11328 */
  this = (Node *)(**(code **)(*(long *)param_1 + 0x260))(param_1);
  local_30[0] = Node::convertToNodeSpace(this,(Vec2 *)local_30);
                    /* try { // try from 00e11350 to 00f11463 has its CatchHandler @ 00e11350
                       catch() { ... } // from try @ 00e11350 with catch @ 00e11350
                       catch() { ... } // from try @ 00e11480 with catch @ 00e11350
                       catch() { ... } // from try @ 00e11988 with catch @ 00e11350
                       catch() { ... } // from try @ 00e11c9c with catch @ 00e11350
                       catch() { ... } // from try @ 00e11ce0 with catch @ 00e11350
                       catch() { ... } // from try @ 00e11d24 with catch @ 00e11350
                       catch() { ... } // from try @ 00e11ef4 with catch @ 00e11350
                       catch() { ... } // from try @ 00e11f38 with catch @ 00e11350
                       catch() { ... } // from try @ 00e11f7c with catch @ 00e11350
                       catch() { ... } // from try @ 00e12020 with catch @ 00e11350 */
  (**(code **)(*(long *)param_1 + 0x370))(local_40,param_1);
  pfVar3 = (float *)(**(code **)(**(long **)(param_1 + 0x370) + 0x168))();
  local_38 = *pfVar3 + local_38;
  pfVar3 = (float *)(**(code **)(**(long **)(param_1 + 0x370) + 0x168))();
  local_40[0] = local_40[0] + *pfVar3 * -0.5;
  uVar2 = Rect::containsPoint((Rect *)local_40,(Vec2 *)local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

