
int FUN_00a5ea3c(long param_1)

{
  char *file;
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar auStack_88 [64];
  long local_48;
  
                    /* try { // try from 00a5ea54 to 00b5eb3b has its CatchHandler @ 00a5ea54
                       catch() { ... } // from try @ 00a5ea54 with catch @ 00a5ea54
                       catch() { ... } // from try @ 00a5ebbc with catch @ 00a5ea54 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_01782500 & 1) == 0) {
    iVar2 = RAND_status();
    if (iVar2 == 0) {
      if (*(char **)(param_1 + 0x788) == (char *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = RAND_load_file(*(char **)(param_1 + 0x788),0x400);
        iVar3 = RAND_status();
        if (iVar3 != 0) goto LAB_00a5ea8c;
      }
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
                    /* try { // try from 00a5eb3c to 00b5eb6f has its CatchHandler @ 00a5ec3c */
        if (iVar4 != 0) {
          iVar2 = iVar3 + iVar2;
          goto LAB_00a5ea8c;
        }
      }
      FUN_00a38740(param_1,"libcurl is now using a weak random seed!\n");
      iVar2 = 0x23;
    }
    else {
      iVar2 = 0;
      DAT_01782500 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
LAB_00a5ea8c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

