
/* v8::internal::Factory::CopyWeakArrayListAndGrow(v8::internal::Handle<v8::internal::WeakArrayList>,
   int, v8::internal::AllocationType) */

void __thiscall
v8::internal::Factory::CopyWeakArrayListAndGrow
          (Factory *this,long *param_2,int param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  iVar3 = *(int *)(*param_2 + 3) >> 1;
  uVar2 = iVar3 + param_3;
  if (0x7fffffc < uVar2) {
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory((Heap *)(this + 0x8850),"invalid array length");
  }
  uVar8 = AllocateRawArray(this,uVar2 * 4 + 0xc,param_4);
  *(undefined4 *)(uVar8 - 1) = *(undefined4 *)(*param_2 + -1);
  iVar4 = (int)*(uint *)(*param_2 + 7) >> 1;
  *(uint *)(uVar8 + 7) = *(uint *)(*param_2 + 7) & 0xfffffffe;
  *(uint *)(uVar8 + 3) = uVar2 * 2;
  if (iVar4 != 0) {
    uVar10 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    iVar6 = (uint)((uVar10 & 0x18) == 0) << 2;
    if ((uVar10 & 0x40000) != 0) {
      iVar6 = 4;
    }
    Heap::CopyRange<v8::internal::CompressedMaybeObjectSlot>
              ((Heap *)(this + 0x8850),uVar8,uVar8 + 0xb,*param_2 + 0xb,iVar4,iVar6);
    uVar2 = uVar2 - iVar4;
  }
  if (uVar2 != 0) {
    uVar5 = *(undefined4 *)(this + 0xa0);
    lVar1 = uVar8 + 0xb + (long)iVar4 * 4;
    if (uVar2 < 8) {
      uVar12 = 0;
    }
    else {
      uVar12 = (long)(int)uVar2 & 0xfffffffffffffff8;
      puVar14 = (undefined8 *)(lVar1 + 0x10);
      uVar10 = uVar12;
      do {
        puVar14[-1] = CONCAT44(uVar5,uVar5);
        puVar14[-2] = CONCAT44(uVar5,uVar5);
        puVar14[1] = CONCAT44(uVar5,uVar5);
        *puVar14 = CONCAT44(uVar5,uVar5);
        uVar10 = uVar10 - 8;
        puVar14 = puVar14 + 4;
      } while (uVar10 != 0);
      if (uVar12 == (long)(int)uVar2) goto LAB_00f748bc;
    }
    lVar13 = (uVar12 + (long)iVar4) - (long)(iVar3 + param_3);
    puVar11 = (undefined4 *)(lVar1 + uVar12 * 4);
    do {
      bVar7 = lVar13 != -1;
      lVar13 = lVar13 + 1;
      *puVar11 = uVar5;
      puVar11 = puVar11 + 1;
    } while (bVar7);
  }
LAB_00f748bc:
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(this + 0x95a0);
    if (puVar9 == *(ulong **)(this + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar8;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
  }
  return;
}

