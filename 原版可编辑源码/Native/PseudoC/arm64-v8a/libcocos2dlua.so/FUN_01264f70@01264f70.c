
void FUN_01264f70(long param_1,undefined8 param_2)

{
  char *pcVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  
  if ((*(char *)(*(long *)(param_1 + 0x10) + 8) == '\n') &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), *(char *)(lVar4 + 8) == '\a')) {
    pcVar6 = *(char **)(lVar4 + 0x10);
    pcVar1 = *(char **)(lVar4 + 0x18);
    lVar4 = __strlen_chk("objc_object",0xc);
    if ((long)pcVar1 - (long)pcVar6 == lVar4) {
      if (pcVar6 != pcVar1) {
        pcVar5 = "objc_object";
        do {
          if (*pcVar6 != *pcVar5) goto LAB_01265008;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (pcVar1 != pcVar6);
      }
      return;
    }
  }
LAB_01265008:
  plVar2 = *(long **)(param_1 + 0x10);
  if (*(char *)((long)plVar2 + 10) != '\0') {
    if (*(char *)((long)plVar2 + 10) == '\x02') {
      uVar3 = (**(code **)(*plVar2 + 8))(plVar2,param_2);
      if ((uVar3 & 1) != 0) goto LAB_01265058;
      plVar2 = *(long **)(param_1 + 0x10);
    }
    if ((*(char *)((long)plVar2 + 0xb) != '\0') &&
       ((*(char *)((long)plVar2 + 0xb) != '\x02' ||
        (uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2), (uVar3 & 1) == 0))))
    goto LAB_0126507c;
  }
LAB_01265058:
  lVar4 = __strlen_chk(&DAT_013d1656,2);
  FUN_01258064(param_2,&DAT_013d1656,&DAT_013d1656 + lVar4);
LAB_0126507c:
                    /* WARNING: Could not recover jumptable at 0x01265098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  return;
}

