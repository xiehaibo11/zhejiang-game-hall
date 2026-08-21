
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
    if (pBVar1 == (BranchesTask *)0x0) goto LAB_009e063c;
    pcVar2 = *(code **)(*(long *)pBVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009e063c:
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  core::Provided::~Provided((Provided *)this);
  operator_delete(this);
  return;
}

