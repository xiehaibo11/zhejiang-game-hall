
/* v8::internal::Factory::NewRawOneByteString(int, v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::NewRawOneByteString(Factory *this,uint param_1,ulong param_3)

{
  Factory *pFVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  pFVar1 = this + 0x95a0;
  if (0xffffff0 < param_1) {
    if (FLAG_correctness_fuzzer_suppressions == '\0') {
      if (*(int *)(*(long *)(this + 0xed0) + 0xb) == 2) {
        Protectors::InvalidateStringLengthOverflowLookupChain((Isolate *)this);
      }
      uVar7 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
      uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)
                                                   ) + 0x13)) + 0x397);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pFVar1;
        if (puVar4 == *(ulong **)(this + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
        }
        *(ulong **)pFVar1 = puVar4 + 1;
        *puVar4 = uVar7;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
      }
      puVar6 = (undefined8 *)NewError(this,puVar4,0xca,0,0,0);
      Isolate::Throw((Isolate *)this,*puVar6,0);
      return (ulong *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Aborting on invalid string length");
  }
  uVar9 = *(undefined8 *)(this + 0x100);
  uVar2 = param_1 + 0xf & 0xfffffffc;
  uVar7 = (ulong)uVar2;
  if (((param_3 & 0xff) == 0) && ((int)uVar2 < 0x20001)) {
    lVar8 = *(long *)(this + 0x8938);
    lVar3 = *(long *)(lVar8 + 0x68);
    if ((uVar7 <= (ulong)(*(long *)(lVar8 + 0x70) - lVar3)) &&
       ((FLAG_inline_new != '\0' && (FLAG_gc_interval == 0)))) {
      uVar5 = lVar3 + 1;
      *(ulong *)(lVar8 + 0x68) = lVar3 + uVar7;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar3,uVar7,1,1);
      goto LAB_00f6db34;
    }
  }
  uVar5 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar7,param_3,1,0);
LAB_00f6db34:
  *(int *)(uVar5 - 1) = (int)uVar9;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pFVar1;
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
    uVar5 = *puVar4;
  }
  *(uint *)(uVar5 + 7) = param_1;
  *(undefined4 *)(*puVar4 + 3) = 7;
  return puVar4;
}

