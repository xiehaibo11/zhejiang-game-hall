
void FUN_01264da4(long param_1,undefined8 param_2)

{
  char *pcVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  
  if ((*(char *)(*(long *)(param_1 + 0x10) + 8) == '\n') &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), *(char *)(lVar4 + 8) == '\a')) {
    pcVar6 = *(char **)(lVar4 + 0x10);
    pcVar1 = *(char **)(lVar4 + 0x18);
    lVar4 = __strlen_chk("objc_object",0xc);
    if ((long)pcVar1 - (long)pcVar6 == lVar4) {
      if (pcVar6 != pcVar1) {
        pcVar5 = "objc_object";
        do {
          if (*pcVar6 != *pcVar5) goto LAB_01264e6c;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (pcVar1 != pcVar6);
      }
      lVar7 = *(long *)(param_1 + 0x10);
      lVar4 = __strlen_chk(&DAT_014a858a,4);
      FUN_01258064(param_2,&DAT_014a858a,&DAT_014a858a + lVar4);
      FUN_01258064(param_2,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20));
      pcVar6 = ">";
      goto LAB_01264f48;
    }
  }
LAB_01264e6c:
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))(*(long **)(param_1 + 0x10),param_2);
  plVar2 = *(long **)(param_1 + 0x10);
  if ((*(char *)((long)plVar2 + 10) == '\0') ||
     ((*(char *)((long)plVar2 + 10) == '\x02' &&
      (uVar3 = (**(code **)(*plVar2 + 8))(plVar2,param_2), (uVar3 & 1) != 0)))) {
    lVar4 = __strlen_chk(" ",2);
    FUN_01258064(param_2," ",
                 "%s has wrong number of arguments: %d, was expecting 0~2\n " + lVar4 + 0x38);
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if (*(char *)((long)plVar2 + 10) == '\0') {
LAB_01264f1c:
    lVar4 = __strlen_chk("(",2);
    FUN_01258064(param_2,"(","sizeof... (" + lVar4 + 10);
  }
  else {
    if (*(char *)((long)plVar2 + 10) == '\x02') {
      uVar3 = (**(code **)(*plVar2 + 8))(plVar2,param_2);
      if ((uVar3 & 1) != 0) goto LAB_01264f1c;
      plVar2 = *(long **)(param_1 + 0x10);
    }
    if ((*(char *)((long)plVar2 + 0xb) == '\0') ||
       ((*(char *)((long)plVar2 + 0xb) == '\x02' &&
        (uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2), (uVar3 & 1) != 0))))
    goto LAB_01264f1c;
  }
  pcVar6 = "*";
LAB_01264f48:
  lVar4 = __strlen_chk(pcVar6,2);
  FUN_01258064(param_2,pcVar6,pcVar6 + lVar4);
  return;
}

