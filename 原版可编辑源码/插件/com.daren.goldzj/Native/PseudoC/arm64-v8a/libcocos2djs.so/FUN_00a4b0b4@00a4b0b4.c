
undefined8 FUN_00a4b0b4(long *param_1,undefined1 *param_2)

{
  char *__file;
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  size_t local_50;
  char *local_48;
  
                    /* try { // try from 00a4b0b8 to 00b4b0cf has its CatchHandler @ 00a4b2a4 */
  lVar4 = *param_1;
                    /* try { // try from 00a4b0d8 to 00b4b0e3 has its CatchHandler @ 00a4b2a0 */
                    /* try { // try from 00a4b0e4 to 00b4b0ef has its CatchHandler @ 00a4b29c */
  puVar5 = *(undefined8 **)(lVar4 + 0x218);
                    /* try { // try from 00a4b0f0 to 00b4b227 has its CatchHandler @ 00a4b2b4 */
  uVar2 = FUN_00a2eb18(lVar4,*(undefined8 *)(lVar4 + 0x8cc0),0,&local_48,&local_50,0);
  __file = local_48;
  if ((int)uVar2 == 0) {
    pvVar3 = memchr(local_48,0,local_50);
    if (pvVar3 == (void *)0x0) {
      iVar1 = open(__file,0);
      *puVar5 = local_48;
      *(int *)(puVar5 + 2) = iVar1;
      puVar5[1] = local_48;
      if ((iVar1 == -1) && (*(char *)(lVar4 + 0x621) == '\0')) {
        FUN_00a23020(lVar4,"Couldn\'t open file %s",*(undefined8 *)(lVar4 + 0x8cc0));
        puVar5 = *(undefined8 **)(*param_1 + 0x218);
        if (puVar5 != (undefined8 *)0x0) {
          (*(code *)PTR_free_01d1b748)(puVar5[1]);
          *puVar5 = 0;
          puVar5[1] = 0;
          if (*(int *)(puVar5 + 2) != -1) {
            close(*(int *)(puVar5 + 2));
          }
          *(undefined4 *)(puVar5 + 2) = 0xffffffff;
        }
        uVar2 = 0x25;
      }
      else {
        uVar2 = 0;
        *param_2 = 1;
      }
    }
    else {
      (*(code *)PTR_free_01d1b748)(__file);
      uVar2 = 3;
    }
  }
  return uVar2;
}

