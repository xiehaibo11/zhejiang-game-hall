
/* universe::BranchesTask::onSchedule() */

bool __thiscall universe::BranchesTask::onSchedule(BranchesTask *this)

{
  FILE *__s;
  char *pcVar1;
  BranchesTask *pBVar2;
  
                    /* try { // try from 009fd7fc to 00afd85b has its CatchHandler @ 009fd754 */
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
                    /* try { // try from 009fd85c to 00afd8b3 has its CatchHandler @ 009fd85c
                       catch() { ... } // from try @ 009fd85c with catch @ 009fd85c
                       catch() { ... } // from try @ 009fda48 with catch @ 009fd85c */
      pBVar2 = this + 0x21;
    }
    else {
      pBVar2 = *(BranchesTask **)(this + 0x30);
    }
    Translated::log(pcVar1,"BranchesTask: write %s failed.",pBVar2);
    this[0x48] = (BranchesTask)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 009fd7b4 with catch @ 009fd834 */
                    /* catch() { ... } // from try @ 009fd7a8 with catch @ 009fd838 */
    fwrite(*(void **)(this + 0x38),*(size_t *)(this + 0x40),1,__s);
                    /* catch() { ... } // from try @ 009fd7bc with catch @ 009fd840 */
    fclose(__s);
    this[0x48] = (BranchesTask)0x1;
  }
  free(*(void **)(this + 0x38));
  return *(long *)(this + 0x70) != 0;
}

