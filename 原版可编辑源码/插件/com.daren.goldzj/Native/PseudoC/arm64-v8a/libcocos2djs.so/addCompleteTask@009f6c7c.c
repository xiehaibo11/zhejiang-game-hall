
/* universe::core::Service::addCompleteTask(std::__ndk1::unique_ptr<universe::core::Provided,
   std::__ndk1::default_delete<universe::core::Provided> >) */

void __thiscall universe::core::Service::addCompleteTask(Service *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *local_30;
  long local_28;
  
                    /* try { // try from 009f6c8c to 00af6c93 has its CatchHandler @ 009f6cbc */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009f6c94 to 00af6c9b has its CatchHandler @ 009f6c9c */
  plVar2 = (long *)*param_2;
                    /* catch() { ... } // from try @ 009f6c20 with catch @ 009f6c9c
                       catch() { ... } // from try @ 009f6c94 with catch @ 009f6c9c
                       try { // try from 009f6c9c to 00af6d37 has its CatchHandler @ 009f6ac0 */
  if (plVar2 != (long *)0x0) {
    *param_2 = 0;
    local_30 = plVar2;
    Computational::push((Computational *)(this + 0x70),&local_30);
    plVar2 = local_30;
    local_30 = (long *)0x0;
                    /* catch() { ... } // from try @ 009f6b98 with catch @ 009f6cbc
                       catch() { ... } // from try @ 009f6c8c with catch @ 009f6cbc */
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

