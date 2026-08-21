
/* cocos2d::ui::Layout::getClippingRect() */

Node * cocos2d::ui::Layout::getClippingRect(void)

{
  long lVar1;
  Node *in_x0;
  long lVar2;
  Node *pNVar3;
  ulong uVar4;
  Rect *pRVar5;
  float fVar6;
  float in_s1;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80 [3];
  float local_74;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (in_x0[0x5e8] != (Node)0x0) {
    fVar6 = (float)Node::convertToWorldSpace(in_x0,(Vec2 *)&Vec2::ZERO);
    (**(code **)(*(long *)in_x0 + 0x438))(local_80);
                    /* try { // try from 00daf3b0 to 00eaf3b7 has its CatchHandler @ 00daf488 */
    fVar12 = *(float *)(in_x0 + 0x80) * local_80[0];
    fVar11 = *(float *)(in_x0 + 0x84) * local_74;
                    /* try { // try from 00daf3b8 to 00eaf3f7 has its CatchHandler @ 00daf320 */
    Rect::Rect((Rect *)&local_90);
    pNVar3 = in_x0;
    do {
      lVar2 = (**(code **)(*(long *)pNVar3 + 0x260))(pNVar3);
      if ((lVar2 == 0) ||
         (pNVar3 = (Node *)__dynamic_cast(lVar2,&Node::typeinfo,&typeinfo,0), pNVar3 == (Node *)0x0)
         ) goto LAB_00daf410;
                    /* try { // try from 00daf3f8 to 00eaf403 has its CatchHandler @ 00daf478 */
                    /* try { // try from 00daf404 to 00eaf40f has its CatchHandler @ 00daf460 */
      uVar4 = (**(code **)(*(long *)pNVar3 + 0x688))();
    } while ((uVar4 & 1) == 0);
    *(Node **)(in_x0 + 0x5e0) = pNVar3;
LAB_00daf410:
                    /* try { // try from 00daf410 to 00eaf4a3 has its CatchHandler @ 00daf320 */
    if (*(long *)(in_x0 + 0x5e0) == 0) {
      local_90 = fVar6 - fVar12 * *(float *)(in_x0 + 0x78);
      fStack_8c = in_s1 - fVar11 * *(float *)(in_x0 + 0x7c);
    }
    else {
      pRVar5 = (Rect *)getClippingRect();
      Rect::operator=((Rect *)&local_90,pRVar5);
      fVar10 = fVar6 - local_90;
      fVar7 = (fVar6 + fVar12) - (local_90 + local_88);
      fVar8 = (in_s1 + fVar11) - (fStack_8c + fStack_84);
      fVar9 = fVar12 + fVar10;
      if (0.0 <= fVar10) {
        fVar9 = fVar12;
      }
                    /* catch() { ... } // from try @ 00daf404 with catch @ 00daf460 */
      if (0.0 <= fVar10) {
        local_90 = fVar6 - fVar12 * *(float *)(in_x0 + 0x78);
      }
      fVar12 = fVar9 - fVar7;
      if (fVar7 <= 0.0) {
        fVar12 = fVar9;
      }
                    /* catch() { ... } // from try @ 00daf3f8 with catch @ 00daf478 */
      fVar6 = fVar11 - fVar8;
      if (fVar8 <= 0.0) {
        fVar6 = fVar11;
      }
      fVar9 = fVar11 * *(float *)(in_x0 + 0x7c);
                    /* catch() { ... } // from try @ 00daf3b0 with catch @ 00daf488 */
      fVar11 = (in_s1 - fStack_8c) + fVar6;
      if (0.0 <= in_s1 - fStack_8c) {
        fStack_8c = in_s1 - fVar9;
        fVar11 = fVar6;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
                    /* try { // try from 00daf4a4 to 00eaf513 has its CatchHandler @ 00daf4a4
                       catch() { ... } // from try @ 00daf4a4 with catch @ 00daf4a4
                       catch() { ... } // from try @ 00daf5b0 with catch @ 00daf4a4
                       catch() { ... } // from try @ 00daf770 with catch @ 00daf4a4
                       catch() { ... } // from try @ 00daf8b0 with catch @ 00daf4a4 */
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
    }
    *(float *)(in_x0 + 0x5cc) = local_90;
    *(float *)(in_x0 + 0x5d0) = fStack_8c;
    *(float *)(in_x0 + 0x5d4) = fVar12;
    *(float *)(in_x0 + 0x5d8) = fVar11;
    in_x0[0x5e8] = (Node)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return in_x0 + 0x5cc;
}

