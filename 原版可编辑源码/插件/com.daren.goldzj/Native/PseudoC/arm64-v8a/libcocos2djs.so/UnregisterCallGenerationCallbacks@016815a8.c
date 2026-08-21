
/* v8::internal::compiler::CodeAssembler::UnregisterCallGenerationCallbacks() */

void __thiscall
v8::internal::compiler::CodeAssembler::UnregisterCallGenerationCallbacks(CodeAssembler *this)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar2 = *(long *)this;
  plVar1 = *(long **)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x60) = 0;
  if ((long *)(lVar2 + 0x40) == plVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_016815ec;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_016815ec:
  lVar2 = *(long *)this;
  plVar1 = *(long **)(lVar2 + 0x90);
  *(undefined8 *)(lVar2 + 0x90) = 0;
  if ((long *)(lVar2 + 0x70) == plVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x01681624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

