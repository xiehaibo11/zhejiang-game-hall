
/* universe::core::Service::addCompleteTask(std::__ndk1::unique_ptr<universe::core::Provided,
   std::__ndk1::default_delete<universe::core::Provided> >) */

void __thiscall universe::core::Service::addCompleteTask(Service *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    *param_2 = 0;
    local_30 = plVar2;
                    /* try { // try from 009d5bc4 to 00ad5bd7 has its CatchHandler @ 009d7ff0 */
    Computational::push((Computational *)(this + 0x70),&local_30);
    plVar2 = local_30;
    local_30 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 009d5bdc to 00ad5c47 has its CatchHandler @ 009d80bc */
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

