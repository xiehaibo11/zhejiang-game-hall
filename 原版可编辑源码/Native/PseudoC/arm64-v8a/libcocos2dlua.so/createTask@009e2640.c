
/* universe::core::Flags::createTask() */

void __thiscall universe::core::Flags::createTask(Flags *this)

{
  long lVar1;
  Provided *pPVar2;
  Service *pSVar3;
  Provided *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pPVar2 = operator_new(0x28);
                    /* try { // try from 009e2670 to 00ae2687 has its CatchHandler @ 009e26c4 */
  Provided::Provided(pPVar2);
  *(undefined ***)pPVar2 = &PTR__Provided_016a0318;
                    /* try { // try from 009e2688 to 00ae26e3 has its CatchHandler @ 009e2600 */
  *(undefined4 *)(this + 100) = *(undefined4 *)(pPVar2 + 8);
  *(Flags **)(pPVar2 + 0x20) = this;
  pSVar3 = (Service *)Service::getInstance();
  local_40 = pPVar2;
  Service::addTask(pSVar3,&local_40);
  pPVar2 = local_40;
  local_40 = (Provided *)0x0;
  if (pPVar2 != (Provided *)0x0) {
    (**(code **)(*(long *)pPVar2 + 8))();
  }
                    /* catch() { ... } // from try @ 009e2670 with catch @ 009e26c4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

