
/* v8::internal::compiler::MapInference::RelyOnMapsPreferStability(v8::internal::compiler::CompilationDependencies*,
   v8::internal::compiler::JSGraph*, v8::internal::compiler::Node**, v8::internal::compiler::Node*,
   v8::internal::compiler::FeedbackSource const&) */

void __thiscall
v8::internal::compiler::MapInference::RelyOnMapsPreferStability
          (MapInference *this,CompilationDependencies *param_1,JSGraph *param_2,Node **param_3,
          Node *param_4,FeedbackSource *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) == *(long *)(this + 0x18)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","HaveMaps()");
  }
  if (*(int *)(this + 0x28) == 2) {
    local_58 = 0;
    local_50 = 0xffffffff;
    uVar2 = RelyOnMapsHelper(this,param_1,(JSGraph *)0x0,(Node **)0x0,(Node *)0x0,
                             (FeedbackSource *)&local_58);
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto LAB_017926c8;
    }
    if (*(int *)(this + 0x28) == 2) {
      if ((*(long *)param_5 == 0) || (*(int *)(param_5 + 8) == -1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","RelyOnMapsHelper(nullptr, jsgraph, effect, control, feedback)"
                );
      }
      InsertMapChecks(this,param_2,param_3,param_4,param_5);
    }
  }
  uVar3 = 0;
LAB_017926c8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

