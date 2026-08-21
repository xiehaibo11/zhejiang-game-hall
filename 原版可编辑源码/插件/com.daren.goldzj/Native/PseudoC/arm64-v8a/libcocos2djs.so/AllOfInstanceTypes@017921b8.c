
/* v8::internal::compiler::MapInference::AllOfInstanceTypes(std::__ndk1::function<bool
   (v8::internal::InstanceType)>) */

uint __thiscall
v8::internal::compiler::MapInference::AllOfInstanceTypes(MapInference *this,long *param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  local_50 = alStack_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x10) == *(long *)(this + 0x18)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","HaveMaps()");
  }
  if (*(int *)(this + 0x28) == 1) {
    *(undefined4 *)(this + 0x28) = 2;
  }
  plVar3 = (long *)param_2[4];
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (param_2 == plVar3) {
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  uVar2 = AllOfInstanceTypesUnsafe(this,alStack_70);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_01792280;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)(local_50);
LAB_01792280:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

