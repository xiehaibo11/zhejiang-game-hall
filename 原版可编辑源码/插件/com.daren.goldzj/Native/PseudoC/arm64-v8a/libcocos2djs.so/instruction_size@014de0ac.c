
/* v8::internal::CodeReference::instruction_size() const */

ulong __thiscall v8::internal::CodeReference::instruction_size(CodeReference *this)

{
  int iVar1;
  ulong uVar2;
  long local_18;
  
  iVar1 = *(int *)this;
  if (iVar1 == 3) {
    uVar2 = (ulong)*(uint *)(*(long *)(this + 8) + 0xc);
  }
  else if (iVar1 == 2) {
    uVar2 = (ulong)*(uint *)(*(long *)(this + 8) + 8);
  }
  else {
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_18 = **(long **)(this + 8);
    if (*(int *)(local_18 + 0x17) < 0) {
      uVar2 = Code::OffHeapInstructionSize((Code *)&local_18);
    }
    else {
      uVar2 = (ulong)*(uint *)(local_18 + 0x13);
    }
  }
  return uVar2;
}

