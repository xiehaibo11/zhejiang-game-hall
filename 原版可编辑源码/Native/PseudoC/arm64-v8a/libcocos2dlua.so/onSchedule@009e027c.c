
/* universe::BranchesTask::onSchedule() */

bool __thiscall universe::BranchesTask::onSchedule(BranchesTask *this)

{
  FILE *__s;
  char *pcVar1;
  BranchesTask *pBVar2;
  BranchesTask BVar3;
  
  if (((byte)this[0x20] & 1) == 0) {
    pBVar2 = this + 0x21;
  }
  else {
    pBVar2 = *(BranchesTask **)(this + 0x30);
  }
  __s = fopen((char *)pBVar2,"wb");
  if (__s == (FILE *)0x0) {
    pcVar1 = (char *)Translated::getInstance();
    if (((byte)this[0x20] & 1) == 0) {
      pBVar2 = this + 0x21;
    }
    else {
      pBVar2 = *(BranchesTask **)(this + 0x30);
    }
    Translated::log(pcVar1,"BranchesTask: write %s failed.",pBVar2);
    BVar3 = (BranchesTask)0x0;
  }
  else {
    BVar3 = (BranchesTask)0x1;
    fwrite(*(void **)(this + 0x38),*(size_t *)(this + 0x40),1,__s);
    fclose(__s);
  }
  this[0x48] = BVar3;
  free(*(void **)(this + 0x38));
  return *(long *)(this + 0x70) != 0;
}

