
/* cocostudio::timeline::Timeline::binarySearchKeyFrame(unsigned int) */

void __thiscall cocostudio::timeline::Timeline::binarySearchKeyFrame(Timeline *this,uint param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  
  puVar2 = *(undefined8 **)(this + 0x28);
  lVar10 = *(long *)(this + 0x30);
  uVar4 = (**(code **)(*(long *)*puVar2 + 0x18))();
  if (param_1 < uVar4) {
    uVar4 = *(uint *)(this + 0x48);
    uVar5 = (**(code **)(*(long *)**(undefined8 **)(this + 0x28) + 0x18))();
    *(undefined4 *)(this + 0x50) = 0;
    plVar9 = (long *)**(undefined8 **)(this + 0x28);
    *(undefined8 *)(this + 0x48) = 0;
    uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9);
    *(undefined4 *)(this + 0x54) = uVar6;
    plVar12 = plVar9;
    if (uVar5 <= uVar4) goto LAB_00ca9924;
  }
  else {
    lVar10 = lVar10 - (long)puVar2;
    lVar11 = (lVar10 >> 3) + -1;
    uVar4 = (**(code **)(**(long **)(*(long *)(this + 0x28) + lVar11 * 8) + 0x18))();
    if (param_1 < uVar4) {
      if (lVar10 < 8) {
        uVar4 = 0xffffffff;
        uVar13 = 0xffffffffffffffff;
        *(undefined4 *)(this + 0x4c) = 0xffffffff;
      }
      else {
        lVar14 = 0;
        do {
          lVar1 = lVar11 + lVar14;
          if (lVar1 < 0) {
            lVar1 = lVar1 + 1;
          }
          uVar13 = lVar1 >> 1;
          uVar4 = (**(code **)(**(long **)(*(long *)(this + 0x28) + uVar13 * 8) + 0x18))();
          if ((uVar4 <= param_1) &&
             (uVar4 = (**(code **)(**(long **)(*(long *)(this + 0x28) + (uVar13 + 1) * 8) + 0x18))()
             , param_1 < uVar4)) goto LAB_00ca9890;
          uVar4 = (**(code **)(**(long **)(*(long *)(this + 0x28) + uVar13 * 8) + 0x18))();
          lVar1 = uVar13 - 1;
          if (uVar4 <= param_1) {
            lVar1 = lVar11;
            lVar14 = uVar13 + 1;
          }
          lVar11 = lVar1;
        } while (lVar14 <= lVar1);
        uVar13 = 0xffffffffffffffff;
LAB_00ca9890:
        uVar4 = (uint)uVar13;
        *(uint *)(this + 0x4c) = uVar4;
        if (8 < lVar10) {
          uVar4 = uVar4 + 1;
        }
      }
      *(uint *)(this + 0x50) = uVar4;
      plVar9 = *(long **)(*(long *)(this + 0x28) + (uVar13 & 0xffffffff) * 8);
      plVar12 = *(long **)(*(long *)(this + 0x28) + (ulong)uVar4 * 8);
      if (uVar13 == 0) {
        uVar4 = *(uint *)(this + 0x48);
        uVar5 = (**(code **)(*plVar9 + 0x18))(plVar9);
        bVar3 = uVar4 < uVar5;
      }
      else {
        bVar3 = false;
      }
      uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9);
      *(undefined4 *)(this + 0x48) = uVar6;
      iVar7 = (**(code **)(*plVar12 + 0x18))(plVar12);
      iVar8 = (**(code **)(*plVar9 + 0x18))(plVar9);
      *(int *)(this + 0x54) = iVar7 - iVar8;
      if (bVar3) goto LAB_00ca9924;
    }
    else {
      *(int *)(this + 0x4c) = (int)lVar11;
      *(undefined4 *)(this + 0x50) = 0;
      plVar9 = *(long **)(*(long *)(this + 0x28) + lVar11 * 8);
      uVar13 = (**(code **)(*plVar9 + 0x70))(plVar9);
      plVar12 = *(long **)(*(long *)(this + 0x28) + lVar11 * 8);
      uVar6 = (**(code **)(*plVar12 + 0x18))(plVar12);
      *(undefined4 *)(this + 0x48) = uVar6;
      *(undefined4 *)(this + 0x54) = 0;
      plVar12 = plVar9;
      if ((uVar13 & 1) != 0) goto LAB_00ca9924;
    }
  }
  if (*(long **)(this + 0x40) == plVar9) {
    return;
  }
LAB_00ca9924:
  *(long **)(this + 0x40) = plVar9;
                    /* WARNING: Could not recover jumptable at 0x00ca9950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x78))(plVar9,plVar12,param_1);
  return;
}

