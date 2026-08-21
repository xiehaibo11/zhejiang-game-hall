
void FUN_01264af8(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(char *)((long)plVar1 + 10) != '\0') {
    if (*(char *)((long)plVar1 + 10) == '\x02') {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_01264b70;
      plVar1 = *(long **)(param_1 + 0x18);
    }
    if ((*(char *)((long)plVar1 + 0xb) != '\0') &&
       ((*(char *)((long)plVar1 + 0xb) != '\x02' ||
        (uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2), (uVar2 & 1) == 0)))) {
      pcVar4 = " ";
      goto LAB_01264b84;
    }
  }
LAB_01264b70:
  pcVar4 = "(";
LAB_01264b84:
  lVar3 = __strlen_chk(pcVar4,2);
  FUN_01258064(param_2,pcVar4,pcVar4 + lVar3);
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if (*(char *)((long)plVar1 + 9) != '\x01') {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  lVar3 = __strlen_chk(&DAT_014a857a,4);
  FUN_01258064(param_2,&DAT_014a857a,&DAT_014a857a + lVar3);
  return;
}

