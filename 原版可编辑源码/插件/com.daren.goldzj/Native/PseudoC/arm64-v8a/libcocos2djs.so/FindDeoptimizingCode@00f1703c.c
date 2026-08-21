
/* v8::internal::Deoptimizer::FindDeoptimizingCode(unsigned long) */

ulong __thiscall v8::internal::Deoptimizer::FindDeoptimizingCode(Deoptimizer *this,ulong param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong local_38;
  ulong local_18;
  
  uVar3 = *(ulong *)(this + 8);
  if ((uVar3 & 1) != 0) {
    local_38 = uVar3 & 0xffffffff00000000;
    lVar4 = *(long *)this;
    local_38 = local_38 |
               *(uint *)((local_38 | *(uint *)((local_38 | *(uint *)(uVar3 + 0xf)) - 1)) + 0x13);
    local_18 = NativeContext::DeoptimizedCodeListHead((NativeContext *)&local_38);
    if ((local_18 & 1) == 0) goto LAB_00f170b8;
    while ((int)local_18 != *(int *)(lVar4 + 0xa0)) {
LAB_00f170b8:
      do {
        if ((*(uint *)(local_18 + 0x17) & 0x3e) != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","code.kind() == Code::OPTIMIZED_FUNCTION");
        }
        if ((((int)*(uint *)(local_18 + 0x17) < 0) &&
            (uVar3 = Code::OffHeapInstructionStart((Code *)&local_18), uVar3 <= param_1)) &&
           (uVar3 = Code::OffHeapInstructionEnd((Code *)&local_18), param_1 < uVar3)) {
          return local_18;
        }
        uVar3 = local_18 - 1;
        if ((uVar3 <= param_1) &&
           (iVar2 = HeapObject::SizeFromMap
                              ((HeapObject *)&local_18,
                               local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 - 1)),
           param_1 < uVar3 + (long)iVar2)) {
          return local_18;
        }
        uVar1 = *(uint *)((local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 + 0xf)) + 3);
        local_18 = local_18 & 0xffffffff00000000 | (ulong)uVar1;
      } while ((uVar1 & 1) == 0);
    }
  }
  return 0;
}

