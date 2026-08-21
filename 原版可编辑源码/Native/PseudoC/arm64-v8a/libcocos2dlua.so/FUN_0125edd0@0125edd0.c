
void FUN_0125edd0(long param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  long *plVar5;
  
  lVar2 = __strlen_chk(">",2);
  pcVar3 = *(char **)(param_1 + 0x18);
  pcVar1 = *(char **)(param_1 + 0x20);
  if ((long)pcVar1 - (long)pcVar3 == lVar2) {
    if (pcVar3 != pcVar1) {
      pcVar4 = ">";
      do {
        if (*pcVar3 != *pcVar4) goto LAB_0125ee5c;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (pcVar1 != pcVar3);
    }
    lVar2 = __strlen_chk("(",2);
    FUN_01258064(param_2,"(","sizeof... (" + lVar2 + 10);
  }
LAB_0125ee5c:
  lVar2 = __strlen_chk("(",2);
  FUN_01258064(param_2,"(","sizeof... (" + lVar2 + 10);
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar2 = __strlen_chk(") ",3);
  FUN_01258064(param_2,") ",", not IAC SE!) " + lVar2 + 0xd);
  FUN_01258064(param_2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  lVar2 = __strlen_chk(" (",3);
  FUN_01258064(param_2," (","sizeof... (" + lVar2 + 9);
  plVar5 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar2 = __strlen_chk(&DAT_013d1656,2);
  FUN_01258064(param_2,&DAT_013d1656,&DAT_013d1656 + lVar2);
  lVar2 = __strlen_chk(">",2);
  pcVar3 = *(char **)(param_1 + 0x18);
  pcVar1 = *(char **)(param_1 + 0x20);
  if ((long)pcVar1 - (long)pcVar3 != lVar2) {
    return;
  }
  if (pcVar3 != pcVar1) {
    pcVar4 = ">";
    do {
      if (*pcVar3 != *pcVar4) {
        return;
      }
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar1 != pcVar3);
  }
  lVar2 = __strlen_chk(&DAT_013d1656,2);
  FUN_01258064(param_2,&DAT_013d1656,&DAT_013d1656 + lVar2);
  return;
}

