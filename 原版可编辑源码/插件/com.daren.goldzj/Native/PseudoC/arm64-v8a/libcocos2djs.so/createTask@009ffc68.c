
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
  Provided::Provided(pPVar2);
                    /* try { // try from 009ffc9c to 00affca3 has its CatchHandler @ 009fffbc */
                    /* try { // try from 009ffca4 to 00affe63 has its CatchHandler @ 009ffc44 */
  *(undefined ***)pPVar2 = &PTR__Provided_01c6c780;
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
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

