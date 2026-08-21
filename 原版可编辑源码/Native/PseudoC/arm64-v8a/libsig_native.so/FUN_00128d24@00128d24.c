
void FUN_00128d24(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  iVar6 = *(int *)(param_1 + 0x18);
  lVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
  while (*(char *)(lVar3 + 8) == '\f') {
    plVar5 = *(long **)(lVar3 + 0x10);
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar6 <= *(int *)(lVar3 + 0x18)) {
      iVar1 = iVar6;
    }
    lVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
    iVar6 = iVar1;
  }
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 10) == '\0') {
LAB_00128dd8:
    lVar3 = __strlen_chk(" ",2);
    FUN_0011bcc0(param_2," ","operator\"\" " + lVar3 + 10);
LAB_00128dfc:
    if ((*(char *)((long)plVar5 + 10) != '\0') &&
       ((*(char *)((long)plVar5 + 10) != '\x02' ||
        (uVar4 = (**(code **)(*plVar5 + 8))(plVar5,param_2), (uVar4 & 1) == 0)))) goto LAB_00128e24;
  }
  else {
    if (*(char *)((long)plVar5 + 10) == '\x02') {
      uVar4 = (**(code **)(*plVar5 + 8))(plVar5,param_2);
      if ((uVar4 & 1) != 0) goto LAB_00128dd8;
      goto LAB_00128dfc;
    }
LAB_00128e24:
    if ((*(char *)((long)plVar5 + 0xb) != '\0') &&
       ((*(char *)((long)plVar5 + 0xb) != '\x02' ||
        (uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,param_2), (uVar4 & 1) == 0))))
    goto LAB_00128e70;
  }
  lVar3 = __strlen_chk("(",2);
  FUN_0011bcc0(param_2,"(","sizeof... (" + lVar3 + 10);
LAB_00128e70:
  puVar2 = &DAT_0012f489;
  if (iVar6 != 0) {
    puVar2 = &DAT_0012f48c;
  }
  lVar3 = __strlen_chk(puVar2,3);
  FUN_0011bcc0(param_2,puVar2,puVar2 + lVar3);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}

