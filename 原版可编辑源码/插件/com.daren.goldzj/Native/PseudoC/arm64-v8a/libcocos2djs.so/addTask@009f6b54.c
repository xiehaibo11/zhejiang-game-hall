
/* universe::core::Service::addTask(std::__ndk1::unique_ptr<universe::core::Provided,
   std::__ndk1::default_delete<universe::core::Provided> >) */

void __thiscall universe::core::Service::addTask(Service *this,long *param_2)

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
    Computational::push((Computational *)this,&local_30);
    plVar2 = local_30;
    local_30 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 009f6b98 to 00af6b9f has its CatchHandler @ 009f6cbc */
      (**(code **)(*plVar2 + 8))();
    }
  }
                    /* try { // try from 009f6ba0 to 00af6c1f has its CatchHandler @ 009f6ac0 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

