
/* v8::internal::OrderedHashSet::ConvertToKeysArray(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::OrderedHashSet>, v8::internal::GetKeysConversion) */

void v8::internal::OrderedHashSet::ConvertToKeysArray(Factory *param_1,ulong *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  double dVar12;
  
  uVar7 = *param_2;
  iVar6 = *(int *)(uVar7 + 7);
  uVar3 = *(uint *)(uVar7 + 0xf);
  uVar8 = *(ulong *)(param_1 + 0xe0);
  if ((int)uVar8 == 0) {
    *(undefined4 *)(uVar7 - 1) = 0;
  }
  else {
    Heap::VerifyObjectLayoutChange((Heap *)(uVar7 & 0xffffffff00000000 | 0x8850),uVar7,uVar8);
    *(int *)(uVar7 - 1) = (int)uVar8;
    if (((uVar8 & 1) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar7,0,uVar8);
    }
  }
  uVar7 = *(ulong *)(param_1 + 0x8890) >> 9;
  if (0x3fff < uVar7) {
    uVar7 = 0x4000;
  }
  iVar2 = iVar6 >> 1;
  if (1 < iVar6) {
    if (uVar7 < 0x201) {
      uVar7 = 0x200;
    }
    iVar11 = 0;
    uVar8 = 0;
    iVar6 = (uVar3 >> 1) * 4 + 0xc;
    do {
      uVar9 = *param_2;
      uVar3 = *(uint *)(uVar9 + (long)iVar6 + 7);
      uVar10 = uVar9 & 0xffffffff00000000 | (ulong)uVar3;
      if (param_3 == 0) {
        if ((uVar3 & 1) == 0) {
          if ((int)uVar3 < 0) goto LAB_01123228;
          dVar12 = (double)(ulong)(uVar3 >> 1);
LAB_01123120:
          puVar4 = (ulong *)Factory::SizeToString
                                      (param_1,(ulong)dVar12 & 0xffffffff,uVar8 < uVar7 << 1);
          uVar10 = *puVar4;
          uVar9 = *param_2;
        }
        else {
          uVar5 = uVar9 & 0xffffffff00000000 | 7;
          if (*(short *)(uVar5 + *(uint *)(uVar10 - 1)) == 0x42) {
            dVar12 = *(double *)(uVar10 + 3) + 4503599627370496.0;
            if ((((ulong)dVar12 >> 0x20 == 0x43300000) &&
                (*(double *)(uVar10 + 3) == (double)((ulong)dVar12 & 0xffffffff))) &&
               (SUB84(dVar12,0) != -1)) goto LAB_01123120;
          }
          if (0x40 < *(ushort *)(uVar5 + *(uint *)(uVar10 - 1))) {
LAB_01123228:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","key.IsName()");
          }
        }
      }
      *(int *)(uVar9 + (long)iVar11 + 7) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar5 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        lVar1 = uVar9 + (long)iVar11 + 7;
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,lVar1,uVar10);
          uVar5 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar10);
        }
      }
      uVar8 = uVar8 + 1;
      iVar11 = iVar11 + 4;
      iVar6 = iVar6 + 8;
    } while ((long)uVar8 < (long)iVar2);
  }
  FixedArray::ShrinkOrEmpty(param_1,param_2,iVar2);
  return;
}

