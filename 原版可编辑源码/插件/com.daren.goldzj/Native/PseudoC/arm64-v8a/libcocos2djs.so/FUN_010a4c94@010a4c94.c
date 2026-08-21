
undefined8 FUN_010a4c94(undefined8 param_1,ulong *param_2,ulong *param_3,long *param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long lVar17;
  ulong uVar18;
  Factory *this;
  int iVar19;
  uint uVar20;
  uint uVar21;
  double dVar22;
  uint local_6c;
  Factory *local_68;
  
  uVar14 = *param_3;
  uVar15 = *param_2;
  iVar5 = *(int *)(*param_4 + 3);
  this = (Factory *)(uVar15 & 0xffffffff00000000);
  piVar3 = (int *)(uVar15 + 0xb);
  if (*(short *)(((ulong)this | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0x423) {
    piVar3 = (int *)((uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb)) + 3);
  }
  uVar2 = iVar5 >> 1;
  uVar21 = ((*piVar3 >> 1) + (*(int *)(uVar14 + 3) >> 1)) - 2;
  if (0x7fffffd - uVar2 < uVar21) {
    puVar8 = (undefined8 *)v8::internal::Factory::NewRangeError(this,0xbe,0,0,0);
    v8::internal::Isolate::Throw((Isolate *)this,*puVar8,0);
    return 0;
  }
  iVar19 = uVar21 + uVar2;
  lVar9 = v8::internal::Factory::TryNewFixedArray(this,iVar19,0);
  if (lVar9 == 0) {
    lVar9 = v8::internal::Factory::NewFixedArray(this,iVar19,0);
  }
  local_6c = 0;
  puVar10 = (ulong *)FUN_010a685c(this,param_2,param_3,1,lVar9,&local_6c);
  uVar21 = local_6c;
  lVar9 = *puVar10 + 7;
  lVar1 = lVar9 + (long)(int)local_6c * 4;
  local_68 = this;
  FUN_01082940(lVar9,lVar1,&local_68);
  v8::internal::Heap::WriteBarrierForRange<v8::internal::CompressedObjectSlot>
            ((Heap *)(this + 0x8850),*puVar10,lVar9,lVar1);
  if ((param_5 == 0) && (uVar21 != 0)) {
    iVar19 = 0;
    uVar20 = 0;
    do {
      uVar21 = *(uint *)((long)iVar19 + 7 + *puVar10);
      if ((uVar21 & 1) == 0) {
        dVar22 = (double)((int)uVar21 >> 1);
      }
      else {
        dVar22 = *(double *)((*puVar10 & 0xffffffff00000000 | (ulong)uVar21) + 3);
      }
      puVar11 = (ulong *)v8::internal::Factory::SizeToString(this,(ulong)(uint)(int)dVar22,true);
      uVar15 = *puVar10;
      uVar14 = *puVar11;
      puVar16 = (undefined4 *)(uVar15 + (long)iVar19 + 7);
      *puVar16 = (int)uVar14;
      if ((uVar14 & 1) != 0) {
        uVar13 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar15,puVar16,uVar14);
          uVar13 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar15,puVar16,uVar14);
        }
      }
      uVar20 = uVar20 + 1;
      iVar19 = iVar19 + 4;
      uVar21 = local_6c;
    } while (uVar20 < local_6c);
  }
  lVar9 = *param_4;
  uVar14 = *puVar10;
  uVar20 = uVar2;
  if (iVar5 < 0) {
    iVar5 = *(int *)(uVar14 + 3) >> 1;
    uVar20 = *(int *)(lVar9 + 3) >> 1;
    uVar6 = iVar5 - uVar21;
    if (uVar6 <= uVar20) {
      uVar20 = uVar6;
    }
    uVar6 = iVar5 - (uVar20 + uVar21);
    if (0 < (int)uVar6) {
      uVar4 = *(undefined4 *)(this + 0xa8);
      lVar1 = uVar14 + (long)(int)((uVar20 + uVar21) * 4);
      uVar15 = (ulong)uVar6;
      if (uVar6 < 8) {
        uVar18 = 0;
      }
      else {
        uVar18 = uVar15 & 0xfffffff8;
        puVar8 = (undefined8 *)(lVar1 + 0x17);
        uVar13 = uVar18;
        do {
          puVar8[-1] = CONCAT44(uVar4,uVar4);
          puVar8[-2] = CONCAT44(uVar4,uVar4);
          puVar8[1] = CONCAT44(uVar4,uVar4);
          *puVar8 = CONCAT44(uVar4,uVar4);
          uVar13 = uVar13 - 8;
          puVar8 = puVar8 + 4;
        } while (uVar13 != 0);
        if (uVar18 == uVar15) goto LAB_010a4f58;
      }
      lVar17 = uVar18 - uVar15;
      puVar16 = (undefined4 *)(lVar1 + 7 + uVar18 * 4);
      do {
        bVar7 = lVar17 != -1;
        lVar17 = lVar17 + 1;
        *puVar16 = uVar4;
        puVar16 = puVar16 + 1;
      } while (bVar7);
    }
  }
LAB_010a4f58:
  if (uVar20 != 0) {
    v8::internal::Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar14,uVar14 + (long)(int)(uVar21 << 2) + 7,lVar9 + 7,uVar20
               ,4);
  }
  uVar12 = v8::internal::FixedArray::ShrinkOrEmpty(this,puVar10,local_6c + uVar2);
  return uVar12;
}

