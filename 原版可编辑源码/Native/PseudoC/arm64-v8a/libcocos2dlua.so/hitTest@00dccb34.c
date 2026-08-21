
/* cocos2d::ui::Slider::hitTest(cocos2d::Vec2 const&, cocos2d::Camera const*, cocos2d::Vec3*) const
    */

uint cocos2d::ui::Slider::hitTest(Vec2 *param_1,Camera *param_2,Vec3 *param_3)

{
  long lVar1;
  uint uVar2;
  Size *pSVar3;
  ulong uVar4;
  Rect aRStack_e8 [8];
  Size aSStack_e0 [8];
  Rect aRStack_d8 [8];
  Size aSStack_d0 [8];
  Mat4 aMStack_c8 [64];
  Mat4 aMStack_88 [64];
  long local_48;
  
                    /* catch() { ... } // from try @ 00dcbcec with catch @ 00dccb34 */
                    /* catch() { ... } // from try @ 00dcbce0 with catch @ 00dccb44 */
                    /* catch() { ... } // from try @ 00dcc13c with catch @ 00dccb48 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00dcbef4 with catch @ 00dccb5c */
  Rect::Rect(aRStack_d8);
                    /* catch() { ... } // from try @ 00dcba60 with catch @ 00dccb7c */
  pSVar3 = (Size *)(**(code **)(**(long **)(param_1 + 0x530) + 0x168))();
  Size::operator=(aSStack_d0,pSVar3);
                    /* catch() { ... } // from try @ 00dcbbfc with catch @ 00dccb90 */
                    /* catch() { ... } // from try @ 00dcb430 with catch @ 00dccb94 */
  (**(code **)(**(long **)(param_1 + 0x530) + 0x448))(aMStack_88);
                    /* catch() { ... } // from try @ 00dcb7c0 with catch @ 00dccba4 */
  Rect::Rect(aRStack_e8);
                    /* catch() { ... } // from try @ 00dcc284 with catch @ 00dccba8 */
                    /* catch() { ... } // from try @ 00dcb9cc with catch @ 00dccbac */
  pSVar3 = (Size *)(**(code **)(**(long **)(param_1 + 0x4f0) + 0x168))();
                    /* catch() { ... } // from try @ 00dcc08c with catch @ 00dccbbc */
  Size::operator=(aSStack_e0,pSVar3);
                    /* catch() { ... } // from try @ 00dcbe44 with catch @ 00dccbcc */
  (**(code **)(**(long **)(param_1 + 0x4f0) + 0x448))(aMStack_c8);
                    /* catch() { ... } // from try @ 00dcc4a0 with catch @ 00dccbec */
                    /* catch() { ... } // from try @ 00dcc51c with catch @ 00dccbf0 */
  uVar4 = isScreenPointInRect(param_2,(Camera *)param_3,aMStack_88,aRStack_d8,(Vec3 *)0x0);
                    /* catch() { ... } // from try @ 00dcbb14 with catch @ 00dccbf4 */
  if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 00dcb6d8 with catch @ 00dccc00 */
                    /* catch() { ... } // from try @ 00dcc1bc with catch @ 00dccc04 */
                    /* catch() { ... } // from try @ 00dcc19c with catch @ 00dccc08 */
                    /* catch() { ... } // from try @ 00dcb50c with catch @ 00dccc0c */
                    /* catch() { ... } // from try @ 00dcb338 with catch @ 00dccc10 */
    uVar2 = isScreenPointInRect(param_2,(Camera *)param_3,aMStack_c8,aRStack_e8,(Vec3 *)0x0);
  }
  else {
                    /* catch() { ... } // from try @ 00dcbb34 with catch @ 00dccbf8 */
    uVar2 = 1;
                    /* catch() { ... } // from try @ 00dcb6f8 with catch @ 00dccbfc */
  }
                    /* catch() { ... } // from try @ 00dcb34c with catch @ 00dccc20 */
  Mat4::~Mat4(aMStack_c8);
                    /* catch() { ... } // from try @ 00dcbfa4 with catch @ 00dccc24 */
                    /* catch() { ... } // from try @ 00dcbfc4 with catch @ 00dccc28 */
  Mat4::~Mat4(aMStack_88);
                    /* catch() { ... } // from try @ 00dcbd5c with catch @ 00dccc2c */
                    /* catch() { ... } // from try @ 00dcbd7c with catch @ 00dccc30 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

