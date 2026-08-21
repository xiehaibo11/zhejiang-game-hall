
/* cocos2d::extension::ScrollView::setContentOffset(cocos2d::Vec2, bool) */

void cocos2d::extension::ScrollView::setContentOffset
               (undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e15008 to 00f15017 has its CatchHandler @ 00e15204 */
  fVar6 = (float)param_1;
  fVar9 = (float)param_2;
  local_70 = fVar6;
  fStack_6c = fVar9;
  if ((param_4 & 1) == 0) {
    if (*(char *)(param_3 + 0x35c) == '\0') {
      uVar2 = (**(code **)(**(long **)(param_3 + 0x340) + 0x200))();
      if ((uVar2 & 1) == 0) {
                    /* try { // try from 00e15064 to 00f1506f has its CatchHandler @ 00e1523c */
        pfVar3 = (float *)(**(code **)(**(long **)(param_3 + 0x340) + 0x150))();
      }
      else {
                    /* try { // try from 00e15050 to 00f1505b has its CatchHandler @ 00e15218 */
        pfVar3 = (float *)&Vec2::ZERO;
      }
      fVar10 = *pfVar3;
      fVar12 = pfVar3[1];
      pfVar3 = (float *)(**(code **)(**(long **)(param_3 + 0x340) + 0x168))
                                  (*(long **)(param_3 + 0x340));
      fVar11 = *pfVar3;
                    /* try { // try from 00e15088 to 00f1508f has its CatchHandler @ 00e15210 */
      fVar7 = (float)(**(code **)(**(long **)(param_3 + 0x340) + 0x58))(*(long **)(param_3 + 0x340))
      ;
                    /* try { // try from 00e1509c to 00f150a3 has its CatchHandler @ 00e15224 */
      lVar4 = (**(code **)(**(long **)(param_3 + 0x340) + 0x168))();
      fVar13 = *(float *)(lVar4 + 4);
      fVar8 = (float)(**(code **)(**(long **)(param_3 + 0x340) + 0x68))(*(long **)(param_3 + 0x340))
      ;
      fVar10 = *(float *)(param_3 + 0x390) - (1.0 - fVar10) * fVar11 * fVar7;
      fVar7 = *(float *)(param_3 + 0x394) - (1.0 - fVar12) * fVar13 * fVar8;
      uVar2 = (**(code **)(**(long **)(param_3 + 0x340) + 0x200))();
      if ((uVar2 & 1) == 0) {
        pfVar3 = (float *)(**(code **)(**(long **)(param_3 + 0x340) + 0x150))();
      }
      else {
        pfVar3 = (float *)&Vec2::ZERO;
      }
                    /* try { // try from 00e15120 to 00f1512f has its CatchHandler @ 00e15204 */
      fVar8 = *pfVar3;
      fVar11 = pfVar3[1];
      pfVar3 = (float *)(**(code **)(**(long **)(param_3 + 0x340) + 0x168))
                                  (*(long **)(param_3 + 0x340));
      fVar14 = *pfVar3;
                    /* try { // try from 00e1513c to 00f15143 has its CatchHandler @ 00e151b8 */
                    /* try { // try from 00e15144 to 00f15277 has its CatchHandler @ 00e14e1c */
      fVar12 = (float)(**(code **)(**(long **)(param_3 + 0x340) + 0x58))
                                (*(long **)(param_3 + 0x340));
      lVar4 = (**(code **)(**(long **)(param_3 + 0x340) + 0x168))();
      fVar15 = *(float *)(lVar4 + 4);
      fVar13 = (float)(**(code **)(**(long **)(param_3 + 0x340) + 0x68))
                                (*(long **)(param_3 + 0x340));
      fVar8 = fVar8 * fVar14 * fVar12;
      if (fVar6 <= fVar8) {
        fVar8 = fVar6;
      }
      fVar11 = fVar11 * fVar15 * fVar13;
      local_70 = fVar10;
      if (fVar10 <= fVar8) {
        local_70 = fVar8;
      }
                    /* catch() { ... } // from try @ 00e14e8c with catch @ 00e15194 */
      if (fVar9 <= fVar11) {
        fVar11 = fVar9;
      }
      fStack_6c = fVar7;
      if (fVar7 <= fVar11) {
        fStack_6c = fVar11;
      }
    }
                    /* catch() { ... } // from try @ 00e14e74 with catch @ 00e151a8 */
                    /* catch() { ... } // from try @ 00e15024 with catch @ 00e151b4 */
                    /* catch() { ... } // from try @ 00e1513c with catch @ 00e151b8 */
    (**(code **)(**(long **)(param_3 + 0x340) + 0x98))(*(long **)(param_3 + 0x340),&local_70);
    plVar5 = *(long **)(param_3 + 0x328);
    if (plVar5 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00e14fb0 with catch @ 00e151cc */
      (**(code **)(*plVar5 + 0x10))(plVar5,param_3);
    }
  }
  else {
                    /* try { // try from 00e15024 to 00f1502b has its CatchHandler @ 00e151b4 */
    setContentOffsetInDuration(param_1,param_2,0x3e19999a,param_3);
  }
                    /* catch() { ... } // from try @ 00e14f94 with catch @ 00e151dc */
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 00e14f74 with catch @ 00e151ec */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00e14f5c with catch @ 00e15204
                       catch() { ... } // from try @ 00e15008 with catch @ 00e15204
                       catch() { ... } // from try @ 00e15120 with catch @ 00e15204 */
  __stack_chk_fail();
}

