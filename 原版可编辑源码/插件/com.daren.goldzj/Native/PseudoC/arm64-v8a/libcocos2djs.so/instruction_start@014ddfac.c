
/* v8::internal::CodeReference::instruction_start() const */

long __thiscall v8::internal::CodeReference::instruction_start(CodeReference *this)

{
  int iVar1;
  long local_18;
  
  iVar1 = *(int *)this;
  if ((iVar1 == 3) || (iVar1 == 2)) {
    local_18 = **(long **)(this + 8);
  }
  else {
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_18 = **(long **)(this + 8);
    if (*(int *)(local_18 + 0x17) < 0) {
      local_18 = Code::OffHeapInstructionStart((Code *)&local_18);
    }
    else {
      local_18 = local_18 + 0x3f;
    }
  }
  return local_18;
}

