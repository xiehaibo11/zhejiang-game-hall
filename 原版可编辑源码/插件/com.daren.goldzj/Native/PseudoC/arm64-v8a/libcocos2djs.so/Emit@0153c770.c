
/* v8::internal::EndNode::Emit(v8::internal::RegExpCompiler*, v8::internal::Trace*) */

void __thiscall v8::internal::EndNode::Emit(EndNode *this,RegExpCompiler *param_1,Trace *param_2)

{
  int iVar1;
  long *plVar2;
  
  if ((((*(long *)(param_2 + 0x10) != 0) || (*(long *)(param_2 + 8) != 0)) || (*(int *)param_2 != 0)
      ) || (((*(int *)(param_2 + 0x28) != 0 || (*(int *)(param_2 + 0x2c) != 0)) ||
            ((*(int *)(param_2 + 0x30) != 0 || (*(int *)(param_2 + 0x5c) != -1)))))) {
    Trace::Flush(param_2,param_1,(RegExpNode *)this);
    return;
  }
  plVar2 = *(long **)(param_1 + 0x28);
  if (-1 < *(int *)(this + 0x10)) {
    (**(code **)(*plVar2 + 0x40))(plVar2);
  }
  iVar1 = *(int *)(this + 0x38);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0153c828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xe0))(plVar2,*(undefined8 *)(param_2 + 0x10));
      return;
    }
    if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unimplemented code");
  }
                    /* WARNING: Could not recover jumptable at 0x0153c844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x158))(plVar2);
  return;
}

