
undefined8
FUN_010a2238(undefined8 param_1,long param_2,long *param_3,long *param_4,int param_5,
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
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  Factory *this;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  double dVar21;
  uint local_6c;
  Factory *local_68;
  
  iVar4 = *(int *)(*param_4 + 3);
  uVar2 = iVar4 >> 1;
  uVar20 = *(int *)(*param_3 + 7) >> 1;
  this = (Factory *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if (0x7fffffd - uVar2 < uVar20) {
    puVar7 = (undefined8 *)v8::internal::Factory::NewRangeError(this,0xbe,0,0,0);
    v8::internal::Isolate::Throw((Isolate *)this,*puVar7,0);
    return 0;
  }
  lVar8 = v8::internal::Factory::TryNewFixedArray(this,uVar20 + uVar2,0);
  if (lVar8 == 0) {
    lVar8 = v8::internal::Factory::NewFixedArray(this,uVar2 + (*(int *)(*param_3 + 7) >> 1),0,0);
  }
  local_6c = 0;
  puVar9 = (ulong *)FUN_010a3ca8(this,param_3,param_6,lVar8,&local_6c,0);
  uVar20 = local_6c;
  lVar8 = *puVar9 + 7;
  lVar1 = lVar8 + (long)(int)local_6c * 4;
  local_68 = this;
  FUN_01082940(lVar8,lVar1,&local_68);
  v8::internal::Heap::WriteBarrierForRange<v8::internal::CompressedObjectSlot>
            ((Heap *)(this + 0x8850),*puVar9,lVar8,lVar1);
  if ((param_5 == 0) && (uVar20 != 0)) {
    iVar16 = 0;
    uVar17 = 0;
    do {
      uVar20 = *(uint *)((long)iVar16 + 7 + *puVar9);
      if ((uVar20 & 1) == 0) {
        dVar21 = (double)((int)uVar20 >> 1);
      }
      else {
        dVar21 = *(double *)((*puVar9 & 0xffffffff00000000 | (ulong)uVar20) + 3);
      }
      puVar10 = (ulong *)v8::internal::Factory::SizeToString(this,(ulong)(uint)(int)dVar21,true);
      uVar19 = *puVar9;
      uVar18 = *puVar10;
      puVar13 = (undefined4 *)(uVar19 + (long)iVar16 + 7);
      *puVar13 = (int)uVar18;
      if ((uVar18 & 1) != 0) {
        uVar12 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar19,puVar13,uVar18);
          uVar12 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar19,puVar13,uVar18);
        }
      }
      uVar17 = uVar17 + 1;
      iVar16 = iVar16 + 4;
      uVar20 = local_6c;
    } while (uVar17 < local_6c);
  }
  lVar8 = *param_4;
  uVar18 = *puVar9;
  uVar17 = uVar2;
  if (iVar4 < 0) {
    iVar4 = *(int *)(uVar18 + 3) >> 1;
    uVar17 = *(int *)(lVar8 + 3) >> 1;
    uVar5 = iVar4 - uVar20;
    if (uVar5 <= uVar17) {
      uVar17 = uVar5;
    }
    uVar5 = iVar4 - (uVar17 + uVar20);
    if (0 < (int)uVar5) {
      uVar3 = *(undefined4 *)(this + 0xa8);
      lVar1 = uVar18 + (long)(int)((uVar17 + uVar20) * 4);
      uVar19 = (ulong)uVar5;
      if (uVar5 < 8) {
        uVar15 = 0;
      }
      else {
        uVar15 = uVar19 & 0xfffffff8;
        puVar7 = (undefined8 *)(lVar1 + 0x17);
        uVar12 = uVar15;
        do {
          puVar7[-1] = CONCAT44(uVar3,uVar3);
          puVar7[-2] = CONCAT44(uVar3,uVar3);
          puVar7[1] = CONCAT44(uVar3,uVar3);
          *puVar7 = CONCAT44(uVar3,uVar3);
          uVar12 = uVar12 - 8;
          puVar7 = puVar7 + 4;
        } while (uVar12 != 0);
        if (uVar15 == uVar19) goto LAB_010a24cc;
      }
      lVar14 = uVar15 - uVar19;
      puVar13 = (undefined4 *)(lVar1 + 7 + uVar15 * 4);
      do {
        bVar6 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        *puVar13 = uVar3;
        puVar13 = puVar13 + 1;
      } while (bVar6);
    }
  }
LAB_010a24cc:
  if (uVar17 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar18,uVar18 + (long)(int)(uVar20 << 2) + 7,lVar8 + 7,uVar17
               ,4);
  }
  uVar11 = v8::internal::FixedArray::ShrinkOrEmpty(this,puVar9,local_6c + uVar2);
  return uVar11;
}

