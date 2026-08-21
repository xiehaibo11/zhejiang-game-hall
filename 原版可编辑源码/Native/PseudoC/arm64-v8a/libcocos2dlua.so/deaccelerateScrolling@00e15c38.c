
/* cocos2d::extension::ScrollView::deaccelerateScrolling(float) */

void cocos2d::extension::ScrollView::deaccelerateScrolling(float param_1)

{
  long lVar1;
  ScrollView *in_x0;
  undefined8 *puVar2;
  ulong uVar3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  undefined4 in_register_00005004;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 00e15b5c with catch @ 00e15c44 */
                    /* try { // try from 00e15c58 to 00f15d1f has its CatchHandler @ 00e15c58
                       catch() { ... } // from try @ 00e15c58 with catch @ 00e15c58
                       catch() { ... } // from try @ 00e15d58 with catch @ 00e15c58 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (in_x0[0x334] == (ScrollView)0x0) {
    plVar6 = *(long **)(in_x0 + 0x340);
    puVar2 = (undefined8 *)
             (**(code **)(*plVar6 + 0xb0))(CONCAT44(in_register_00005004,param_1),plVar6);
    local_70 = CONCAT44((float)((ulong)*puVar2 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(in_x0 + 0x360) >> 0x20),
                        (float)*puVar2 + (float)*(undefined8 *)(in_x0 + 0x360));
    (**(code **)(*plVar6 + 0x98))(plVar6,&local_70);
    if (in_x0[0x35c] == (ScrollView)0x0) {
      uVar3 = (**(code **)(**(long **)(in_x0 + 0x340) + 0x200))();
      if ((uVar3 & 1) == 0) {
        pfVar4 = (float *)(**(code **)(**(long **)(in_x0 + 0x340) + 0x150))();
      }
      else {
        pfVar4 = (float *)&Vec2::ZERO;
      }
      fVar9 = *pfVar4;
      fVar10 = pfVar4[1];
                    /* try { // try from 00e15d20 to 00f15d27 has its CatchHandler @ 00e15e0c */
      pfVar4 = (float *)(**(code **)(**(long **)(in_x0 + 0x340) + 0x168))(*(long **)(in_x0 + 0x340))
      ;
      fVar7 = *pfVar4;
                    /* try { // try from 00e15d3c to 00f15d43 has its CatchHandler @ 00e15e14 */
      fVar11 = (float)(**(code **)(**(long **)(in_x0 + 0x340) + 0x58))(*(long **)(in_x0 + 0x340));
                    /* try { // try from 00e15d50 to 00f15d57 has its CatchHandler @ 00e15dfc */
      lVar5 = (**(code **)(**(long **)(in_x0 + 0x340) + 0x168))();
                    /* try { // try from 00e15d58 to 00f15e2f has its CatchHandler @ 00e15c58 */
      fVar8 = *(float *)(lVar5 + 4);
      fVar13 = (float)(**(code **)(**(long **)(in_x0 + 0x340) + 0x68))(*(long **)(in_x0 + 0x340));
      uVar3 = (**(code **)(**(long **)(in_x0 + 0x340) + 0x200))();
      if ((uVar3 & 1) == 0) {
        pfVar4 = (float *)(**(code **)(**(long **)(in_x0 + 0x340) + 0x150))();
      }
      else {
        pfVar4 = (float *)&Vec2::ZERO;
      }
      fVar12 = *pfVar4;
      fVar14 = pfVar4[1];
      fVar9 = fVar9 * fVar7 * fVar11;
      fVar10 = fVar10 * fVar8 * fVar13;
      pfVar4 = (float *)(**(code **)(**(long **)(in_x0 + 0x340) + 0x168))(*(long **)(in_x0 + 0x340))
      ;
      fVar7 = *pfVar4;
      fVar11 = (float)(**(code **)(**(long **)(in_x0 + 0x340) + 0x58))(*(long **)(in_x0 + 0x340));
      lVar5 = (**(code **)(**(long **)(in_x0 + 0x340) + 0x168))();
      fVar8 = *(float *)(lVar5 + 4);
                    /* catch() { ... } // from try @ 00e15d50 with catch @ 00e15dfc */
      fVar13 = (float)(**(code **)(**(long **)(in_x0 + 0x340) + 0x68))(*(long **)(in_x0 + 0x340));
                    /* catch() { ... } // from try @ 00e15d20 with catch @ 00e15e0c */
                    /* catch() { ... } // from try @ 00e15d3c with catch @ 00e15e14 */
      fVar11 = *(float *)(in_x0 + 0x390) - (1.0 - fVar12) * fVar7 * fVar11;
      fVar13 = *(float *)(in_x0 + 0x394) - (1.0 - fVar14) * fVar8 * fVar13;
    }
    else {
      fVar9 = *(float *)(in_x0 + 0x34c);
      fVar10 = *(float *)(in_x0 + 0x350);
      fVar11 = *(float *)(in_x0 + 0x354);
      fVar13 = *(float *)(in_x0 + 0x358);
    }
                    /* try { // try from 00e15e30 to 00f15e8b has its CatchHandler @ 00e15e30
                       catch() { ... } // from try @ 00e15e30 with catch @ 00e15e30
                       catch() { ... } // from try @ 00e15ed0 with catch @ 00e15e30 */
    pfVar4 = (float *)(**(code **)(**(long **)(in_x0 + 0x340) + 0xb0))();
    fVar7 = *pfVar4;
    lVar5 = (**(code **)(**(long **)(in_x0 + 0x340) + 0xb0))(*(long **)(in_x0 + 0x340));
    fVar8 = *(float *)(lVar5 + 4);
    *(ulong *)(in_x0 + 0x360) =
         CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x360) >> 0x20) * 0.95,
                  (float)*(undefined8 *)(in_x0 + 0x360) * 0.95);
    setContentOffset(fVar7,fVar8);
                    /* try { // try from 00e15e8c to 00f15e93 has its CatchHandler @ 00e15f5c */
                    /* try { // try from 00e15eb0 to 00f15eb7 has its CatchHandler @ 00e15f4c */
                    /* try { // try from 00e15ec8 to 00f15ecf has its CatchHandler @ 00e15f3c */
                    /* try { // try from 00e15ed0 to 00f15f6f has its CatchHandler @ 00e15e30 */
    if ((((ABS(*(float *)(in_x0 + 0x360)) <= 1.0) && (ABS(*(float *)(in_x0 + 0x364)) <= 1.0)) ||
        ((*(uint *)(in_x0 + 0x330) - 1 < 2 && ((fVar10 <= fVar8 || (fVar8 <= fVar13)))))) ||
       (((*(uint *)(in_x0 + 0x330) | 2) == 2 && ((fVar9 <= fVar7 || (fVar7 <= fVar11)))))) {
      Node::unschedule((_func_void_float *)in_x0);
      relocateContainer(in_x0,true);
    }
  }
  else {
    Node::unschedule((_func_void_float *)in_x0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

