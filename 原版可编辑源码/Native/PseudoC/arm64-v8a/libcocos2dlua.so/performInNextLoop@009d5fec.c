
/* universe::core::Service::performInNextLoop(std::__ndk1::function<void ()> const&) */

void __thiscall universe::core::Service::performInNextLoop(Service *this,function *param_1)

{
  long lVar1;
  Provided *pPVar2;
  long *plVar3;
  Provided **ppPVar4;
  Provided *pPVar5;
  code *pcVar6;
  long alStack_a0 [4];
  long *local_80;
  Provided *local_70 [4];
  Provided **local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pPVar2 = operator_new(0x50);
  *(undefined8 *)(pPVar2 + 8) = 0;
  *(undefined8 *)pPVar2 = 0;
  *(undefined8 *)(pPVar2 + 0x18) = 0;
  *(undefined8 *)(pPVar2 + 0x10) = 0;
  *(undefined8 *)(pPVar2 + 0x28) = 0;
  *(undefined8 *)(pPVar2 + 0x20) = 0;
  *(undefined8 *)(pPVar2 + 0x38) = 0;
  *(undefined8 *)(pPVar2 + 0x30) = 0;
  *(undefined8 *)(pPVar2 + 0x48) = 0;
  *(undefined8 *)(pPVar2 + 0x40) = 0;
  Provided::Provided(pPVar2);
  *(undefined8 *)(pPVar2 + 0x40) = 0;
  *(undefined ***)pPVar2 = &PTR__SimpleProvided_016a0390;
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar3) {
    local_80 = alStack_a0;
    (**(code **)(*plVar3 + 0x18))();
  }
  else {
    local_80 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  local_50 = (Provided **)0x0;
  ppPVar4 = operator_new(0x50);
  *ppPVar4 = (Provided *)&PTR_FUN_0169f980;
  ppPVar4[2] = (Provided *)this;
  if (local_80 == (long *)0x0) {
    ppPVar4[8] = (Provided *)0x0;
  }
  else if (alStack_a0 == local_80) {
    ppPVar4[8] = (Provided *)(ppPVar4 + 4);
    (**(code **)(*local_80 + 0x18))();
  }
  else {
    pPVar5 = (Provided *)(**(code **)(*local_80 + 0x10))();
    ppPVar4[8] = pPVar5;
  }
  local_50 = ppPVar4;
  SimpleProvided::setCompleteFunction((SimpleProvided *)pPVar2,(function *)local_70);
  if (local_70 == local_50) {
    pcVar6 = *(code **)(*local_50 + 0x20);
LAB_009d6134:
    (*pcVar6)();
  }
  else if (local_50 != (Provided **)0x0) {
    pcVar6 = *(code **)(*local_50 + 0x28);
    goto LAB_009d6134;
  }
  if (alStack_a0 == local_80) {
                    /* try { // try from 009d6160 to 00ad61cb has its CatchHandler @ 009d80b8 */
    pcVar6 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_009d6168;
    pcVar6 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar6)();
LAB_009d6168:
  local_70[0] = pPVar2;
  Computational::push((Computational *)(this + 0x70),local_70);
  pPVar2 = local_70[0];
  local_70[0] = (Provided *)0x0;
  if (pPVar2 != (Provided *)0x0) {
    (**(code **)(*(long *)pPVar2 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

