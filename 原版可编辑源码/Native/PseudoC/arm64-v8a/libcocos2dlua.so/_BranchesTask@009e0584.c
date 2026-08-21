
/* universe::BranchesTask::~BranchesTask() */

void __thiscall universe::BranchesTask::~BranchesTask(BranchesTask *this)

{
  BranchesTask *pBVar1;
  code *pcVar2;
  
  pBVar1 = *(BranchesTask **)(this + 0x70);
  *(undefined ***)this = &PTR__BranchesTask_016a0220;
  if (this + 0x50 == pBVar1) {
    pcVar2 = *(code **)(*(long *)pBVar1 + 0x20);
  }
  else {
    if (pBVar1 == (BranchesTask *)0x0) goto LAB_009e05d0;
    pcVar2 = *(code **)(*(long *)pBVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009e05d0:
                    /* catch() { ... } // from try @ 009e055c with catch @ 009e05d0 */
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
                    /* try { // try from 009e05ec to 00ae0673 has its CatchHandler @ 009e05ec
                       catch() { ... } // from try @ 009e05ec with catch @ 009e05ec
                       catch() { ... } // from try @ 009e06e0 with catch @ 009e05ec */
  core::Provided::~Provided((Provided *)this);
  return;
}

