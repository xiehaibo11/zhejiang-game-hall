
/* cocos2d::Menu::alignItemsInRowsWithArray(std::__ndk1::vector<cocos2d::Value,
   std::__ndk1::allocator<cocos2d::Value> > const&) */

void __thiscall cocos2d::Menu::alignItemsInRowsWithArray(Menu *this,vector *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  Size *pSVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  Size aSStack_c8 [4];
  float local_c4;
  int local_c0;
  int local_bc;
  int *local_b8;
  int *local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  int *piStack_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00f1c2d4 with catch @ 00f1c224 */
  local_98 = (int *)0x0;
  piStack_90 = (int *)0x0;
  local_a8 = (int *)0x0;
  local_a0 = (int *)0x0;
  local_b8 = (int *)0x0;
  local_b0 = (int *)0x0;
  local_c0 = 0;
  local_bc = -5;
  puVar9 = *(undefined8 **)(this + 0x178);
  puVar1 = *(undefined8 **)(this + 0x180);
  if (puVar9 == puVar1) {
    iVar10 = 0;
    iVar5 = -10;
  }
  else {
    lVar11 = 0;
    iVar10 = 0;
    iVar5 = -10;
    do {
      iVar4 = cocos2d::Value::asInt((Value *)(*(long *)param_1 + lVar11 * 0x10));
      pfVar6 = (float *)(**(code **)(*(long *)*puVar9 + 0x168))();
      fVar13 = *pfVar6;
      bVar3 = true;
      if (((float)local_c0 < fVar13) && (bVar3 = true, !NAN(fVar13))) {
        bVar3 = false;
      }
      fVar15 = (float)local_c0;
      if (!bVar3) {
        fVar15 = fVar13;
      }
      local_c0 = (int)fVar15;
                    /* try { // try from 00f1c2cc to 0101c2d3 has its CatchHandler @ 00f1c318 */
      lVar7 = (**(code **)(*(long *)*puVar9 + 0x168))();
                    /* try { // try from 00f1c2d4 to 0101c3e7 has its CatchHandler @ 00f1c224 */
      iVar10 = iVar10 + 1;
      local_bc = local_bc + (int)(*(float *)(lVar7 + 4) + 5.0);
      if (iVar4 <= iVar10) {
        if (local_98 == piStack_90) {
                    /* catch() { ... } // from try @ 00f1c2cc with catch @ 00f1c318 */
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                    ((vector<int,std::__ndk1::allocator<int>> *)&local_a0,&local_c0);
        }
        else {
          *local_98 = local_c0;
          local_98 = local_98 + 1;
        }
        if (local_b0 == local_a8) {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                    ((vector<int,std::__ndk1::allocator<int>> *)&local_b8,&local_bc);
        }
        else {
          *local_b0 = local_bc;
          local_b0 = local_b0 + 1;
        }
        iVar4 = local_c0;
        iVar10 = 0;
        lVar11 = lVar11 + 1;
                    /* try { // try from 00f1c26c to 0101c273 has its CatchHandler @ 00f1c3a0 */
        local_c0 = 0;
        local_bc = -5;
        iVar5 = iVar5 + iVar4 + 10;
      }
      puVar9 = puVar9 + 1;
    } while (puVar1 != puVar9);
  }
  pSVar8 = (Size *)(**(code **)(*(long *)this + 0x168))(this);
  Size::Size(aSStack_c8,pSVar8);
  local_c0 = 0;
  puVar9 = *(undefined8 **)(this + 0x178);
  puVar1 = *(undefined8 **)(this + 0x180);
  if (puVar9 == puVar1) {
LAB_00f1c47c:
                    /* catch() { ... } // from try @ 00f1c460 with catch @ 00f1c480 */
    if (local_b8 != (int *)0x0) {
      local_b0 = local_b8;
      operator_delete(local_b8);
    }
    if (local_a0 != (int *)0x0) {
      local_98 = local_a0;
      operator_delete(local_a0);
    }
                    /* catch() { ... } // from try @ 00f1c4d4 with catch @ 00f1c49c */
    if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00f1c4d4 to 0101c537 has its CatchHandler @ 00f1c49c */
      __stack_chk_fail();
    }
                    /* try { // try from 00f1c4cc to 0101c4d3 has its CatchHandler @ 00f1c51c */
    return;
  }
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  lVar11 = 0;
  fVar13 = (float)-(iVar5 >> 1);
  do {
    iVar5 = cocos2d::Value::asInt((Value *)(*(long *)param_1 + lVar11 * 0x10));
    fVar15 = (float)local_b8[lVar11];
    do {
      pfVar6 = (float *)(**(code **)(*(long *)*puVar9 + 0x168))();
      fVar14 = *pfVar6;
      bVar3 = true;
      if (((float)local_c0 < fVar14) && (bVar3 = true, !NAN(fVar14))) {
        bVar3 = false;
      }
      fVar12 = (float)local_c0;
      if (!bVar3) {
        fVar12 = fVar14;
      }
      local_c0 = (int)fVar12;
      iVar4 = local_a0[lVar11];
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      (**(code **)(*(long *)*puVar9 + 200))(fVar13 + (float)(iVar4 >> 1),fVar15 + local_c4 * -0.5);
                    /* catch() { ... } // from try @ 00f1c468 with catch @ 00f1c43c */
      lVar7 = (**(code **)(*(long *)*puVar9 + 0x168))();
      iVar10 = iVar10 + 1;
      if (iVar5 <= iVar10) {
        iVar5 = 0;
                    /* try { // try from 00f1c460 to 0101c467 has its CatchHandler @ 00f1c480 */
        iVar10 = 0;
        lVar11 = lVar11 + 1;
                    /* try { // try from 00f1c468 to 0101c49b has its CatchHandler @ 00f1c43c */
        fVar13 = fVar13 + (float)(local_c0 + 5);
        local_c0 = 0;
      }
      puVar9 = puVar9 + 1;
                    /* catch() { ... } // from try @ 00f1c26c with catch @ 00f1c3a0 */
      fVar15 = fVar15 - (*(float *)(lVar7 + 4) + 10.0);
      if (puVar1 == puVar9) goto LAB_00f1c47c;
    } while (iVar5 != 0);
  } while( true );
}

