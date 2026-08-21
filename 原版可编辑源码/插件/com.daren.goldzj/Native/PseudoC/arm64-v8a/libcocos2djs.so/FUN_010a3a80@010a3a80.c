
undefined8 FUN_010a3a80(undefined8 param_1,ulong *param_2,KeyAccumulator *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  Factory *pFVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  Factory *local_68;
  
  if (((byte)param_3[0x24] >> 3 & 1) == 0) {
    pFVar7 = *(Factory **)param_3;
    puVar4 = (ulong *)v8::internal::Factory::NewFixedArray(pFVar7,*(int *)(*param_2 + 7) >> 1,0);
    uVar5 = *param_2;
    uVar9 = 0;
    if ((int)*(uint *)(uVar5 + 0xf) >> 1 != 0) {
      uVar2 = *(uint *)(param_3 + 0x24);
      lVar11 = (long)((ulong)*(uint *)(uVar5 + 0xf) << 0x20) >> 0x21;
      lVar12 = 0x1800000000;
      lVar13 = 0x1000000000;
      do {
        lVar11 = lVar11 + -1;
        uVar3 = *(uint *)(uVar5 + 7 + (lVar13 >> 0x20));
        if ((uVar3 != *(uint *)(pFVar7 + 0xa8)) && (uVar3 != *(uint *)(pFVar7 + 0xa0))) {
          uVar8 = uVar5 & 0xffffffff00000000 | (ulong)uVar3;
          if ((uVar2 & 7 & *(uint *)(uVar5 + 7 + (lVar12 >> 0x20)) >> 4) == 0) {
            if ((uVar3 & 1) == 0) {
              dVar14 = (double)((int)uVar3 >> 1);
            }
            else {
              dVar14 = *(double *)(uVar8 + 3);
            }
            if ((int)dVar14 != -1) {
              uVar10 = *puVar4;
              lVar1 = uVar10 + (long)(int)(uVar9 << 2);
              *(uint *)(lVar1 + 7) = uVar3;
              if ((uVar3 & 1) != 0) {
                uVar6 = uVar5 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
                uVar5 = *(ulong *)(uVar6 + 8);
                lVar1 = lVar1 + 7;
                if (((uint)uVar5 >> 0x12 & 1) != 0) {
                  v8::internal::Heap_MarkingBarrierSlow(uVar10,lVar1,uVar8);
                  uVar5 = *(ulong *)(uVar6 | 8);
                }
                if (((uVar5 & 0x18) != 0) &&
                   ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                  v8::internal::Heap_GenerationalBarrierSlow(uVar10,lVar1,uVar8);
                }
              }
              uVar9 = uVar9 + 1;
              goto joined_r0x010a3bfc;
            }
          }
          v8::internal::KeyAccumulator::AddShadowingKey(param_3,uVar8);
        }
joined_r0x010a3bfc:
        if (lVar11 == 0) break;
        uVar5 = *param_2;
        lVar12 = lVar12 + 0xc00000000;
        lVar13 = lVar13 + 0xc00000000;
      } while( true );
    }
    lVar13 = *puVar4 + 7;
    lVar12 = lVar13 + (long)(int)uVar9 * 4;
    local_68 = pFVar7;
    FUN_01082940(lVar13,lVar12,&local_68);
    v8::internal::Heap::WriteBarrierForRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(pFVar7 + 0x8850),*puVar4,lVar13,lVar12);
    if (0 < (int)uVar9) {
      lVar12 = 0;
      do {
        uVar5 = v8::internal::KeyAccumulator::AddKey
                          (param_3,*puVar4 & 0xffffffff00000000 |
                                   (ulong)*(uint *)(*puVar4 + (long)(int)lVar12 + 7),0);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        lVar12 = lVar12 + 4;
      } while ((ulong)uVar9 * 4 - lVar12 != 0);
    }
  }
  return 1;
}

