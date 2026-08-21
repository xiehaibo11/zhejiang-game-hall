
/* cocos2d::Menu::alignItemsInColumnsWithArray(std::__ndk1::vector<cocos2d::Value,
   std::__ndk1::allocator<cocos2d::Value> > const&) */

void __thiscall cocos2d::Menu::alignItemsInColumnsWithArray(Menu *this,vector *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  Size *pSVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_a0 [2];
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  puVar9 = *(undefined8 **)(this + 0x178);
  puVar1 = *(undefined8 **)(this + 0x180);
  if (puVar9 == puVar1) {
    iVar8 = 0;
    iVar4 = -5;
  }
  else {
    lVar10 = 0;
    iVar11 = 0;
    iVar8 = 0;
    iVar4 = -5;
    do {
      iVar3 = cocos2d::Value::asInt((Value *)(*(long *)param_1 + lVar10 * 0x10));
      lVar5 = (**(code **)(*(long *)*puVar9 + 0x168))((long *)*puVar9);
      fVar12 = *(float *)(lVar5 + 4);
      fVar14 = (float)iVar11;
      iVar8 = iVar8 + 1;
      fVar17 = fVar14;
      if (!NAN(fVar12)) {
        fVar17 = fVar12;
      }
      if (fVar12 <= fVar14) {
        fVar17 = fVar14;
      }
      iVar11 = (int)fVar17;
      if (iVar3 <= iVar8) {
        iVar8 = 0;
        iVar4 = iVar4 + iVar11 + 5;
        lVar10 = lVar10 + 1;
        iVar11 = 0;
      }
      puVar9 = puVar9 + 1;
    } while (puVar1 != puVar9);
  }
  pSVar6 = (Size *)(**(code **)(*(long *)this + 0x168))(this);
  Size::Size((Size *)local_a0,pSVar6);
  puVar9 = *(undefined8 **)(this + 0x178);
  puVar1 = *(undefined8 **)(this + 0x180);
  if (puVar9 == puVar1) {
LAB_00f1bf7c:
    if (*(long *)(lVar2 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 1;
  }
  lVar10 = 0;
  iVar11 = 0;
  fVar17 = (float)(iVar4 >> 1);
  do {
    iVar4 = cocos2d::Value::asInt((Value *)(*(long *)param_1 + lVar10 * 0x10));
    fVar14 = local_a0[0] / (float)(iVar4 + 1);
    fVar12 = fVar14;
    do {
      lVar5 = (**(code **)(*(long *)*puVar9 + 0x168))();
      plVar7 = (long *)*puVar9;
      fVar13 = *(float *)(lVar5 + 4);
      fVar15 = (float)iVar11;
      fVar16 = fVar15;
      if (!NAN(fVar13)) {
        fVar16 = fVar13;
      }
      if (fVar13 <= fVar15) {
        fVar16 = fVar15;
      }
      fVar13 = local_a0[0] * 0.5;
      iVar11 = (int)fVar16;
      lVar5 = (**(code **)(*plVar7 + 0x168))(plVar7);
      (**(code **)(*plVar7 + 200))(fVar12 - fVar13,fVar17 - *(float *)(lVar5 + 4) * 0.5,plVar7);
      iVar8 = iVar8 + 1;
      if (iVar4 <= iVar8) {
        iVar4 = 0;
        iVar8 = 0;
        fVar17 = fVar17 - (float)(iVar11 + 5);
        lVar10 = lVar10 + 1;
        iVar11 = 0;
      }
      puVar9 = puVar9 + 1;
      fVar12 = fVar14 + fVar12;
      if (puVar1 == puVar9) goto LAB_00f1bf7c;
    } while (iVar4 != 0);
  } while( true );
}

