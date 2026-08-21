
/* universe::BranchesTask::onComplete() */

void __thiscall universe::BranchesTask::onComplete(BranchesTask *this)

{
  long lVar1;
  long *plVar2;
  BranchesTask local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009fd8b4 to 00afd8bb has its CatchHandler @ 009fdad8 */
  plVar2 = *(long **)(this + 0x70);
                    /* try { // try from 009fd8c0 to 00afd8c7 has its CatchHandler @ 009fdad0 */
  if (plVar2 != (long *)0x0) {
    local_2c[0] = this[0x48];
                    /* try { // try from 009fd8c8 to 00afd8d7 has its CatchHandler @ 009fdac8 */
    (**(code **)(*plVar2 + 0x30))(plVar2,local_2c);
  }
                    /* try { // try from 009fd8e0 to 00afd91b has its CatchHandler @ 009fdae0 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

