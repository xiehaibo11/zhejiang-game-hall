
/* v8::internal::Handle<v8::internal::FixedArray>
   v8::internal::Factory::CopyArrayAndGrow<v8::internal::FixedArray>(v8::internal::Handle<v8::internal::FixedArray>,
   int, v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::CopyArrayAndGrow<v8::internal::FixedArray>
          (Factory *this,long *param_2,uint param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  iVar3 = *(int *)(*param_2 + 3) >> 1;
  uVar2 = iVar3 + param_3;
  if (0x7fffffd < uVar2) {
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory((Heap *)(this + 0x8850),"invalid array length");
  }
  uVar6 = AllocateRawArray(this,uVar2 * 4 + 8,param_4);
  *(undefined4 *)(uVar6 - 1) = *(undefined4 *)(*param_2 + -1);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(this + 0x95a0);
    if (puVar7 == *(ulong **)(this + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar6;
    uVar8 = uVar6;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
    uVar8 = *puVar7;
  }
  *(uint *)(uVar8 + 3) = uVar2 * 2;
  uVar8 = *puVar7;
  if (iVar3 != 0) {
    uVar6 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    iVar5 = (uint)((uVar6 & 0x18) == 0) << 2;
    if ((uVar6 & 0x40000) != 0) {
      iVar5 = 4;
    }
    Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar8,uVar8 + 7,*param_2 + 7,iVar3,iVar5);
    uVar8 = *puVar7;
  }
  if (param_3 != 0) {
    uVar4 = *(undefined4 *)(this + 0xa0);
    lVar1 = uVar8 + (long)iVar3 * 4;
    uVar6 = (ulong)(int)param_3;
    if (param_3 < 8) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar6 & 0xfffffffffffffff8;
      puVar12 = (undefined8 *)(lVar1 + 0x17);
      uVar8 = uVar11;
      do {
        puVar12[-1] = CONCAT44(uVar4,uVar4);
        puVar12[-2] = CONCAT44(uVar4,uVar4);
        puVar12[1] = CONCAT44(uVar4,uVar4);
        *puVar12 = CONCAT44(uVar4,uVar4);
        uVar8 = uVar8 - 8;
        puVar12 = puVar12 + 4;
      } while (uVar8 != 0);
      if (uVar11 == uVar6) {
        return puVar7;
      }
    }
    lVar10 = uVar6 - uVar11;
    puVar9 = (undefined4 *)(lVar1 + 7 + uVar11 * 4);
    do {
      lVar10 = lVar10 + -1;
      *puVar9 = uVar4;
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  return puVar7;
}

