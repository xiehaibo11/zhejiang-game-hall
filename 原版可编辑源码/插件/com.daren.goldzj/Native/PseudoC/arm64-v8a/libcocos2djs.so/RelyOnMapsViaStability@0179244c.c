
/* v8::internal::compiler::MapInference::RelyOnMapsViaStability(v8::internal::compiler::CompilationDependencies*)
    */

uint __thiscall
v8::internal::compiler::MapInference::RelyOnMapsViaStability
          (MapInference *this,CompilationDependencies *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) == *(long *)(this + 0x18)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","HaveMaps()");
  }
  local_38 = 0;
  local_30 = 0xffffffff;
  uVar2 = RelyOnMapsHelper(this,param_1,(JSGraph *)0x0,(Node **)0x0,(Node *)0x0,
                           (FeedbackSource *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

