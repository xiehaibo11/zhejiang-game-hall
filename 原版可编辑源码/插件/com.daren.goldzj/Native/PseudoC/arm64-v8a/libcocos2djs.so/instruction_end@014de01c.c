
/* v8::internal::CodeReference::instruction_end() const */

long __thiscall v8::internal::CodeReference::instruction_end(CodeReference *this)

{
  int iVar1;
  long lVar2;
  long local_18;
  
  iVar1 = *(int *)this;
  if (iVar1 == 3) {
    lVar2 = **(long **)(this + 8) + (long)*(int *)((long)*(long **)(this + 8) + 0xc);
  }
  else if (iVar1 == 2) {
    lVar2 = **(long **)(this + 8) + (*(long **)(this + 8))[1];
  }
  else {
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_18 = **(long **)(this + 8);
    if (*(int *)(local_18 + 0x17) < 0) {
      lVar2 = Code::OffHeapInstructionEnd((Code *)&local_18);
    }
    else {
      lVar2 = local_18 + *(int *)(local_18 + 0x13) + 0x3f;
    }
  }
  return lVar2;
}

