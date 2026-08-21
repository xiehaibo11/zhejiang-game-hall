
/* v8::internal::Handle<v8::internal::PropertyArray>
   v8::internal::Factory::CopyArrayAndGrow<v8::internal::PropertyArray>(v8::internal::Handle<v8::internal::PropertyArray>,
   int, v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::CopyArrayAndGrow<v8::internal::PropertyArray>
          (Factory *this,long *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  uVar11 = (ulong)(*(uint *)(*param_2 + 3) >> 1) & 0x3ff;
  uVar1 = (int)uVar11 + param_3;
  if (0x7fffffd < uVar1) {
                    /* WARNING: Subroutine does not return */
    Heap::FatalProcessOutOfMemory((Heap *)(this + 0x8850),"invalid array length");
  }
  uVar5 = AllocateRawArray(this,uVar1 * 4 + 8,param_4);
  *(undefined4 *)(uVar5 - 1) = *(undefined4 *)(*param_2 + -1);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(this + 0x95a0);
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar5;
    uVar7 = uVar5;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
    uVar7 = *puVar6;
  }
  *(uint *)(uVar7 + 3) = uVar1 * 2;
  uVar7 = *puVar6;
  if ((int)uVar11 != 0) {
    uVar5 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    iVar4 = (uint)((uVar5 & 0x18) == 0) << 2;
    if ((uVar5 & 0x40000) != 0) {
      iVar4 = 4;
    }
    Heap::CopyRange<v8::internal::CompressedObjectSlot>
              ((Heap *)(this + 0x8850),uVar7,uVar7 + 7,*param_2 + 7,uVar11,iVar4);
    uVar7 = *puVar6;
  }
  if (param_3 != 0) {
    uVar3 = *(undefined4 *)(this + 0xa0);
    lVar2 = uVar7 + uVar11 * 4;
    uVar11 = (ulong)(int)param_3;
    if (param_3 < 8) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar11 & 0xfffffffffffffff8;
      puVar10 = (undefined8 *)(lVar2 + 0x17);
      uVar5 = uVar7;
      do {
        puVar10[-1] = CONCAT44(uVar3,uVar3);
        puVar10[-2] = CONCAT44(uVar3,uVar3);
        puVar10[1] = CONCAT44(uVar3,uVar3);
        *puVar10 = CONCAT44(uVar3,uVar3);
        uVar5 = uVar5 - 8;
        puVar10 = puVar10 + 4;
      } while (uVar5 != 0);
      if (uVar7 == uVar11) {
        return puVar6;
      }
    }
    lVar9 = uVar11 - uVar7;
    puVar8 = (undefined4 *)(lVar2 + 7 + uVar7 * 4);
    do {
      lVar9 = lVar9 + -1;
      *puVar8 = uVar3;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
  }
  return puVar6;
}

