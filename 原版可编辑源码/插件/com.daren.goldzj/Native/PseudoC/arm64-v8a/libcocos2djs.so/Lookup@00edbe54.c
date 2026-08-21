
/* v8::internal::Builtins::Lookup(unsigned long) */

undefined * __thiscall v8::internal::Builtins::Lookup(Builtins *this,ulong param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  int iVar5;
  undefined **ppuVar6;
  ulong local_48;
  
  lVar2 = InstructionStream::TryLookupCode(*(Isolate **)this,param_1);
  if ((int)lVar2 == 0) {
    if (this[8] != (Builtins)0x0) {
      iVar5 = 0;
      ppuVar6 = &PTR_s_RecordWrite_01a41e5c_0x21_01c98618;
      do {
        local_48 = Heap::builtin((Heap *)(*(long *)this + 0x8850),iVar5);
        if ((((*(int *)(local_48 + 0x17) < 0) &&
             (uVar4 = Code::OffHeapInstructionStart((Code *)&local_48), uVar4 <= param_1)) &&
            (uVar4 = Code::OffHeapInstructionEnd((Code *)&local_48), param_1 < uVar4)) ||
           ((uVar4 = local_48 - 1, uVar4 <= param_1 &&
            (iVar1 = HeapObject::SizeFromMap
                               ((HeapObject *)&local_48,
                                local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 - 1)),
            param_1 < uVar4 + (long)iVar1)))) {
          return *ppuVar6;
        }
        iVar5 = iVar5 + 1;
        ppuVar6 = ppuVar6 + 3;
      } while (iVar5 != 0x5bc);
    }
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = (&PTR_s_RecordWrite_01a41e5c_0x21_01c98618)[(long)*(int *)(lVar2 + 0x27) * 3];
  }
  return puVar3;
}

