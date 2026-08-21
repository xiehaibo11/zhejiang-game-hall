
undefined8
FUN_010a8084(undefined8 param_1,long param_2,ulong *param_3,long *param_4,int param_5,
            undefined4 param_6)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  Factory *this;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  double dVar21;
  uint local_6c;
  Factory *local_68;
  
  uVar12 = *param_3;
  iVar4 = *(int *)(*param_4 + 3);
  uVar2 = iVar4 >> 1;
  uVar20 = ((*(int *)((uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0xb)) + 7) >> 1) +
           (*(int *)(uVar12 + 3) >> 1)) - 2;
  this = (Factory *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if (0x7fffffd - uVar2 < uVar20) {
    puVar7 = (undefined8 *)v8::internal::Factory::NewRangeError(this,0xbe,0,0,0);
    v8::internal::Isolate::Throw((Isolate *)this,*puVar7,0);
    return 0;
  }
  iVar17 = uVar20 + uVar2;
  lVar8 = v8::internal::Factory::TryNewFixedArray(this,iVar17,0);
  if (lVar8 == 0) {
    lVar8 = v8::internal::Factory::NewFixedArray(this,iVar17,0);
  }
  local_6c = 0;
  puVar9 = (ulong *)FUN_010a99e0(this,param_2,param_3,1,param_6,lVar8,&local_6c);
  uVar20 = local_6c;
  lVar8 = *puVar9 + 7;
  lVar1 = lVar8 + (long)(int)local_6c * 4;
  local_68 = this;
  FUN_01082940(lVar8,lVar1,&local_68);
  v8::internal::Heap::WriteBarrierForRange<v8::internal::CompressedObjectSlot>
            ((Heap *)(this + 0x8850),*puVar9,lVar8,lVar1);
  if ((param_5 == 0) && (uVar20 != 0)) {
    iVar17 = 0;
    uVar18 = 0;
    do {
      uVar20 = *(uint *)((long)iVar17 + 7 + *puVar9);
      if ((uVar20 & 1) == 0) {
        dVar21 = (double)((int)uVar20 >> 1);
      }
      else {
        dVar21 = *(double *)((*puVar9 & 0xffffffff00000000 | (ulong)uVar20) + 3);
      }
      puVar10 = (ulong *)v8::internal::Factory::SizeToString(this,(ulong)(uint)(int)dVar21,true);
      uVar19 = *puVar9;
      uVar12 = *puVar10;
      puVar14 = (undefined4 *)(uVar19 + (long)iVar17 + 7);
      *puVar14 = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar19,puVar14,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar19,puVar14,uVar12);
        }
      }
      uVar18 = uVar18 + 1;
      iVar17 = iVar17 + 4;
      uVar20 = local_6c;
    } while (uVar18 < local_6c);
  }
  lVar8 = *param_4;
  uVar12 = *puVar9;
  uVar18 = uVar2;
  if (iVar4 < 0) {
    iVar4 = *(int *)(uVar12 + 3) >> 1;
    uVar18 = *(int *)(lVar8 + 3) >> 1;
    uVar5 = iVar4 - uVar20;
    if (uVar5 <= uVar18) {
      uVar18 = uVar5;
    }
    uVar5 = iVar4 - (uVar18 + uVar20);
    if (0 < (int)uVar5) {
      uVar3 = *(undefined4 *)(this + 0xa8);
      lVar1 = uVar12 + (long)(int)((uVar18 + uVar20) * 4);
      uVar19 = (ulong)uVar5;
      if (uVar5 < 8) {
        uVar16 = 0;
      }
      else {
        uVar16 = uVar19 & 0xfffffff8;
        puVar7 = (undefined8 *)(lVar1 + 0x17);
        uVar13 = uVar16;
        do {
          puVar7[-1] = CONCAT44(uVar3,uVar3);
          puVar7[-2] = CONCAT44(uVar3,uVar3);
          puVar7[1] = CONCAT44(uVar3,uVar3);
          *puVar7 = CONCAT44(uVar3,uVar3);
          uVar13 = uVar13 - 8;
          puVar7 = puVar7 + 4;
        } while (uVar13 != 0);
        if (uVar16 == uVar19) goto LAB_010a8334;
      }
      lVar15 = uVar16 - uVar19;
      puVar14 = (undefined4 *)(lVar1 + 7 + uVar16 * 4);
      do {
        bVar6 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        *puVar14 = uVar3;
        puVar14 = puVar14 + 1;
      } while (bVar6);
    }
  }
LAB_010a8334:
  if (uVar18 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar12,uVar12 + (long)(int)(uVar20 << 2) + 7,lVar8 + 7,uVar18
               ,4);
  }
  uVar11 = v8::internal::FixedArray::ShrinkOrEmpty(this,puVar9,local_6c + uVar2);
  return uVar11;
}

