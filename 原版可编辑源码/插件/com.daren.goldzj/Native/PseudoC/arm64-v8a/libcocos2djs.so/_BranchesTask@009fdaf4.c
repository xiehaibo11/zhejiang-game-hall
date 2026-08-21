
/* universe::BranchesTask::~BranchesTask() */

void __thiscall universe::BranchesTask::~BranchesTask(BranchesTask *this)

{
  BranchesTask *pBVar1;
  code *pcVar2;
  
  pBVar1 = *(BranchesTask **)(this + 0x70);
  *(undefined ***)this = &PTR__BranchesTask_01c6c688;
  if (this + 0x50 == pBVar1) {
    pcVar2 = *(code **)(*(long *)pBVar1 + 0x20);
  }
  else {
    if (pBVar1 == (BranchesTask *)0x0) goto LAB_009fdb40;
    pcVar2 = *(code **)(*(long *)pBVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009fdb40:
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
                    /* try { // try from 009fdb50 to 00afdba3 has its CatchHandler @ 009fdb50
                       catch() { ... } // from try @ 009fdb50 with catch @ 009fdb50
                       catch() { ... } // from try @ 009fdc2c with catch @ 009fdb50 */
  core::Provided::~Provided((Provided *)this);
  return;
}

