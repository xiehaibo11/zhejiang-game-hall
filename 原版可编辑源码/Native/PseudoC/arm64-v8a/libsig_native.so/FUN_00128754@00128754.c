
void FUN_00128754(long param_1,undefined8 param_2)

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
      if ((uVar2 & 1) != 0) goto LAB_001287cc;
      plVar1 = *(long **)(param_1 + 0x18);
    }
    if ((*(char *)((long)plVar1 + 0xb) != '\0') &&
       ((*(char *)((long)plVar1 + 0xb) != '\x02' ||
        (uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2), (uVar2 & 1) == 0)))) {
      pcVar4 = "operator\"\" ";
      goto LAB_001287e0;
    }
  }
LAB_001287cc:
  pcVar4 = "sizeof... (";
LAB_001287e0:
  pcVar4 = pcVar4 + 10;
  lVar3 = __strlen_chk(pcVar4,2);
  FUN_0011bcc0(param_2,pcVar4,pcVar4 + lVar3);
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if (*(char *)((long)plVar1 + 9) != '\x01') {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  lVar3 = __strlen_chk(&DAT_0012f5a0,4);
  FUN_0011bcc0(param_2,&DAT_0012f5a0,&DAT_0012f5a0 + lVar3);
  return;
}

