
int FUN_00a53784(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 auVar5 [16];
  long local_38;
  
  lVar3 = *param_1;
  puVar4 = *(undefined4 **)(lVar3 + 0x218);
  if ((puVar4 == (undefined4 *)0x0) || (param_1[0xce] == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    if (((*(char *)(lVar3 + 0x641) == '\0') && (*(char *)(lVar3 + 0x621) != '\0')) &&
       (*(long *)(lVar3 + 0x870) != 0)) {
      if ((*(char *)(puVar4 + 8) == '\0') && (*(long *)(lVar3 + 0x8cf8) != 0)) {
        lVar2 = (*(code *)PTR_strdup_01769a10)(&DAT_013c894b);
        lVar3 = 5;
      }
      else {
        lVar2 = (*(code *)PTR_strdup_01769a10)(&DAT_013c894d);
        lVar3 = 3;
      }
      if (lVar2 == 0) {
        return 0x1b;
      }
      iVar1 = FUN_00a38cd0(param_1,*(undefined4 *)((long)param_1 + 0x41c),lVar2,lVar3,&local_38);
      if (iVar1 != 0) {
        (*(code *)PTR_free_01769a00)(lVar2);
        return iVar1;
      }
      if (lVar3 - local_38 == 0) {
        auVar5 = FUN_00a2e828();
        *(undefined1 (*) [16])(param_1 + 0xcb) = auVar5;
        (*(code *)PTR_free_01769a00)(lVar2);
      }
      else {
        param_1[200] = lVar2;
        param_1[0xca] = lVar3;
        param_1[0xc9] = lVar3 - local_38;
      }
      *(undefined4 *)(param_1 + 0xd1) = 0xb;
      do {
        param_2 = FUN_00a54a20(param_1 + 0xc3,1);
        if (param_2 != 0) break;
      } while ((int)param_1[0xd1] != 0);
    }
    else {
      param_2 = 0;
    }
  }
  else {
    FUN_00a26ce8(param_1,1);
  }
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(puVar4 + 2));
  *(undefined8 *)(puVar4 + 2) = 0;
  *puVar4 = 0;
  return param_2;
}

