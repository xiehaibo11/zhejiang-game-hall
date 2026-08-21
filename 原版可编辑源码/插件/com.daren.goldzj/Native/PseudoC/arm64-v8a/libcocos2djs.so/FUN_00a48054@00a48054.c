
int FUN_00a48054(long param_1)

{
  char *file;
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar auStack_88 [64];
  long local_48;
  
                    /* try { // try from 00a4806c to 00b480c3 has its CatchHandler @ 00a4806c
                       catch() { ... } // from try @ 00a4806c with catch @ 00a4806c
                       catch() { ... } // from try @ 00a48224 with catch @ 00a4806c */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_01d38c00 & 1) == 0) {
    iVar2 = RAND_status();
    if (iVar2 == 0) {
      if (*(char **)(param_1 + 0x788) == (char *)0x0) {
                    /* try { // try from 00a480f0 to 00b480fb has its CatchHandler @ 00a4829c */
        iVar2 = 0;
      }
      else {
        iVar2 = RAND_load_file(*(char **)(param_1 + 0x788),0x400);
                    /* try { // try from 00a480e4 to 00b480ef has its CatchHandler @ 00a482a0 */
        iVar3 = RAND_status();
        if (iVar3 != 0) goto LAB_00a480a4;
      }
                    /* try { // try from 00a480fc to 00b48223 has its CatchHandler @ 00a482b4 */
      file = (char *)(param_1 + 0xb08);
      do {
        iVar3 = RAND_bytes(auStack_88,0x40);
        if (iVar3 == 0) break;
        RAND_add(auStack_88,0x40,32.0);
        iVar3 = RAND_status();
      } while (iVar3 == 0);
      *file = '\0';
      RAND_file_name(file,0x4000);
      if (*file != '\0') {
        iVar3 = RAND_load_file(file,0x400);
        iVar4 = RAND_status();
        if (iVar4 != 0) {
          iVar2 = iVar3 + iVar2;
          goto LAB_00a480a4;
        }
      }
      FUN_00a22d58(param_1,"libcurl is now using a weak random seed!\n");
      iVar2 = 0x23;
    }
    else {
      iVar2 = 0;
      DAT_01d38c00 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
LAB_00a480a4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a480c4 to 00b480db has its CatchHandler @ 00a482a4 */
  return iVar2;
}

