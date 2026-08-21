
undefined8 FUN_00a61a9c(long *param_1,undefined1 *param_2)

{
  char *__file;
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  size_t local_50;
  char *local_48;
  
  lVar4 = *param_1;
  puVar5 = *(undefined8 **)(lVar4 + 0x218);
  uVar2 = FUN_00a45500(lVar4,*(undefined8 *)(lVar4 + 0x8cc0),0,&local_48,&local_50,0);
  __file = local_48;
  if ((int)uVar2 == 0) {
                    /* catch() { ... } // from try @ 00a61a68 with catch @ 00a61af0 */
    pvVar3 = memchr(local_48,0,local_50);
    if (pvVar3 == (void *)0x0) {
      iVar1 = open(__file,0);
      *puVar5 = local_48;
      *(int *)(puVar5 + 2) = iVar1;
      puVar5[1] = local_48;
      if ((iVar1 == -1) && (*(char *)(lVar4 + 0x621) == '\0')) {
        FUN_00a38a08(lVar4,"Couldn\'t open file %s",*(undefined8 *)(lVar4 + 0x8cc0));
        puVar5 = *(undefined8 **)(*param_1 + 0x218);
        if (puVar5 != (undefined8 *)0x0) {
          (*(code *)PTR_free_01769a00)(puVar5[1]);
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
      (*(code *)PTR_free_01769a00)(__file);
      uVar2 = 3;
    }
  }
  return uVar2;
}

