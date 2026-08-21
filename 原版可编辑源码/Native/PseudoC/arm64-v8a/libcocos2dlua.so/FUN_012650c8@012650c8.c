
void FUN_012650c8(long param_1,undefined8 param_2)

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
LAB_0126517c:
    lVar3 = __strlen_chk(" ",2);
    FUN_01258064(param_2," ",
                 "%s has wrong number of arguments: %d, was expecting 0~2\n " + lVar3 + 0x38);
LAB_012651a0:
    if ((*(char *)((long)plVar5 + 10) != '\0') &&
       ((*(char *)((long)plVar5 + 10) != '\x02' ||
        (uVar4 = (**(code **)(*plVar5 + 8))(plVar5,param_2), (uVar4 & 1) == 0)))) goto LAB_012651c8;
  }
  else {
    if (*(char *)((long)plVar5 + 10) == '\x02') {
      uVar4 = (**(code **)(*plVar5 + 8))(plVar5,param_2);
      if ((uVar4 & 1) != 0) goto LAB_0126517c;
      goto LAB_012651a0;
    }
LAB_012651c8:
    if ((*(char *)((long)plVar5 + 0xb) != '\0') &&
       ((*(char *)((long)plVar5 + 0xb) != '\x02' ||
        (uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,param_2), (uVar4 & 1) == 0))))
    goto LAB_01265214;
  }
  lVar3 = __strlen_chk("(",2);
  FUN_01258064(param_2,"(","sizeof... (" + lVar3 + 10);
LAB_01265214:
  puVar2 = &DAT_014a8474;
  if (iVar6 != 0) {
    puVar2 = &DAT_014a8477;
  }
  lVar3 = __strlen_chk(puVar2,3);
  FUN_01258064(param_2,puVar2,puVar2 + lVar3);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}

