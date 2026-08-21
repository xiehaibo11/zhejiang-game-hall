
/* universe::BranchesTask::~BranchesTask() */

void __thiscall universe::BranchesTask::~BranchesTask(BranchesTask *this)

{
  BranchesTask *pBVar1;
  code *pcVar2;
  
  pBVar1 = *(BranchesTask **)(this + 0x70);
  *(undefined ***)this = &PTR__BranchesTask_01c6c688;
  if (this + 0x50 == pBVar1) {
                    /* try { // try from 009fdba4 to 00afdbaf has its CatchHandler @ 009fdc68 */
    pcVar2 = *(code **)(*(long *)pBVar1 + 0x20);
  }
  else {
    if (pBVar1 == (BranchesTask *)0x0) goto LAB_009fdbac;
    pcVar2 = *(code **)(*(long *)pBVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009fdbac:
                    /* try { // try from 009fdbb0 to 00afdbb7 has its CatchHandler @ 009fdc64 */
  if (((byte)this[0x20] & 1) != 0) {
                    /* try { // try from 009fdbb8 to 00afdc2b has its CatchHandler @ 009fdc70 */
    operator_delete(*(void **)(this + 0x30));
  }
  core::Provided::~Provided((Provided *)this);
  operator_delete(this);
  return;
}

