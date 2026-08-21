
void FUN_0125ddb4(long param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (3 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10))) {
    lVar1 = __strlen_chk("(",2);
    FUN_01258064(param_2,"(","sizeof... (" + lVar1 + 10);
    FUN_01258064(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    lVar1 = __strlen_chk(&DAT_013d1656,2);
    FUN_01258064(param_2,&DAT_013d1656,&DAT_013d1656 + lVar1);
  }
  pcVar2 = *(char **)(param_1 + 0x20);
  if (*pcVar2 == 'n') {
    lVar1 = __strlen_chk("-",2);
    FUN_01258064(param_2,"-","-- ALL --" + lVar1 + 8);
    pcVar2 = *(char **)(param_1 + 0x20);
    pcVar3 = *(char **)(param_1 + 0x28);
    if (pcVar3 != pcVar2) {
      pcVar2 = pcVar2 + 1;
    }
  }
  else {
    pcVar3 = *(char **)(param_1 + 0x28);
  }
  FUN_01258064(param_2,pcVar2,pcVar3);
  if (3 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10))) {
    return;
  }
  FUN_01258064(param_2);
  return;
}

