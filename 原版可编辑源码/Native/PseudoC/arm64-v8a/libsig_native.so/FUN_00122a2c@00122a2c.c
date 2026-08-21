
void FUN_00122a2c(long param_1,undefined8 param_2)

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
        if (*pcVar3 != *pcVar4) goto LAB_00122ab8;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (pcVar1 != pcVar3);
    }
    lVar2 = __strlen_chk("(",2);
    FUN_0011bcc0(param_2,"(","sizeof... (" + lVar2 + 10);
  }
LAB_00122ab8:
  lVar2 = __strlen_chk("(",2);
  FUN_0011bcc0(param_2,"(","sizeof... (" + lVar2 + 10);
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar2 = __strlen_chk(&DAT_0012f034,3);
  FUN_0011bcc0(param_2,&DAT_0012f034,&DAT_0012f034 + lVar2);
  FUN_0011bcc0(param_2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  lVar2 = __strlen_chk(" (",3);
  FUN_0011bcc0(param_2," (","sizeof... (" + lVar2 + 9);
  plVar5 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
  if (*(char *)((long)plVar5 + 9) != '\x01') {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar2 = __strlen_chk(")",2);
  FUN_0011bcc0(param_2,")","operator()" + lVar2 + 9);
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
  lVar2 = __strlen_chk(")",2);
  FUN_0011bcc0(param_2,")","operator()" + lVar2 + 9);
  return;
}

