
undefined8
FUN_0108a7b8(undefined8 param_1,ulong *param_2,long *param_3,long *param_4,undefined4 param_5)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  Factory *pFVar21;
  int local_34;
  
  uVar15 = *param_2;
  iVar6 = *(int *)(*param_4 + 3);
  pFVar21 = (Factory *)(uVar15 & 0xffffffff00000000);
  uVar3 = iVar6 >> 1;
  piVar4 = (int *)(uVar15 + 0xb);
  if (*(short *)(((ulong)pFVar21 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0x423) {
    piVar4 = (int *)(*param_3 + 3);
  }
  if (0x7fffffd - uVar3 < (uint)(*piVar4 >> 1)) {
    puVar9 = (undefined8 *)v8::internal::Factory::NewRangeError(pFVar21,0xbe,0,0,0);
    v8::internal::Isolate::Throw((Isolate *)pFVar21,*puVar9,0);
    return 0;
  }
  lVar10 = v8::internal::Factory::TryNewFixedArray(pFVar21,(*piVar4 >> 1) + uVar3,0);
  if (lVar10 == 0) {
    uVar15 = *param_2;
    piVar4 = (int *)(uVar15 + 0xb);
    if (*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0x423) {
      piVar4 = (int *)(*param_3 + 3);
    }
    if (*piVar4 >> 1 != 0) {
      lVar10 = 0;
      iVar14 = 0;
      puVar2 = (uint *)(*param_3 + 7);
      uVar18 = *puVar2;
      if ((uVar18 & 1) != 0) goto LAB_0108a8f0;
      do {
        iVar14 = iVar14 + 1;
        do {
          lVar10 = lVar10 + 4;
          if ((ulong)(uint)(*piVar4 >> 1) * 4 - lVar10 == 0) goto LAB_0108a904;
          uVar18 = *(uint *)((long)puVar2 + (long)(int)lVar10);
          if ((uVar18 & 1) == 0) break;
LAB_0108a8f0:
        } while (uVar18 == *(uint *)((uVar15 & 0xffffffff00000000) + 0xa8));
      } while( true );
    }
    iVar14 = 0;
LAB_0108a904:
    lVar10 = v8::internal::Factory::NewFixedArray(pFVar21,iVar14 + uVar3,0);
  }
  local_34 = 0;
  plVar11 = (long *)FUN_0108c23c(pFVar21,param_2,param_3,param_5,lVar10,&local_34,0);
  lVar13 = *param_4;
  lVar10 = *plVar11;
  uVar18 = uVar3;
  if (iVar6 < 0) {
    iVar6 = *(int *)(lVar10 + 3) >> 1;
    uVar18 = *(int *)(lVar13 + 3) >> 1;
    uVar7 = iVar6 - local_34;
    if (uVar7 <= uVar18) {
      uVar18 = uVar7;
    }
    uVar7 = iVar6 - (uVar18 + local_34);
    if (0 < (int)uVar7) {
      uVar5 = *(undefined4 *)(pFVar21 + 0xa8);
      lVar1 = lVar10 + (int)((uVar18 + local_34) * 4);
      uVar15 = (ulong)uVar7;
      if (uVar7 < 8) {
        uVar19 = 0;
      }
      else {
        uVar19 = uVar15 & 0xfffffff8;
        puVar9 = (undefined8 *)(lVar1 + 0x17);
        uVar20 = uVar19;
        do {
          puVar9[-1] = CONCAT44(uVar5,uVar5);
          puVar9[-2] = CONCAT44(uVar5,uVar5);
          puVar9[1] = CONCAT44(uVar5,uVar5);
          *puVar9 = CONCAT44(uVar5,uVar5);
          uVar20 = uVar20 - 8;
          puVar9 = puVar9 + 4;
        } while (uVar20 != 0);
        if (uVar19 == uVar15) goto LAB_0108a9dc;
      }
      lVar17 = uVar19 - uVar15;
      puVar16 = (undefined4 *)(lVar1 + 7 + uVar19 * 4);
      do {
        bVar8 = lVar17 != -1;
        lVar17 = lVar17 + 1;
        *puVar16 = uVar5;
        puVar16 = puVar16 + 1;
      } while (bVar8);
    }
  }
LAB_0108a9dc:
  if (uVar18 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(pFVar21 + 0x8850),lVar10,lVar10 + (local_34 << 2) + 7,lVar13 + 7,uVar18,4);
  }
  uVar12 = v8::internal::FixedArray::ShrinkOrEmpty(pFVar21,plVar11,local_34 + uVar3);
  return uVar12;
}

