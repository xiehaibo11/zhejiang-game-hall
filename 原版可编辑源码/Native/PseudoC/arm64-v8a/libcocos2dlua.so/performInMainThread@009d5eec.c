
/* universe::core::Service::performInMainThread(std::__ndk1::function<void ()> const&) */

void __thiscall universe::core::Service::performInMainThread(Service *this,function *param_1)

{
  long lVar1;
  Provided *pPVar2;
  Provided *local_40;
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
  SimpleProvided::setCompleteFunction((SimpleProvided *)pPVar2,param_1);
  local_40 = pPVar2;
  Computational::push((Computational *)(this + 0x70),&local_40);
  pPVar2 = local_40;
  local_40 = (Provided *)0x0;
  if (pPVar2 != (Provided *)0x0) {
    (**(code **)(*(long *)pPVar2 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

