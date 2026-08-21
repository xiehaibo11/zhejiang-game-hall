
void FUN_00128864(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (*(char *)((long)plVar1 + 10) != '\0') {
    if (*(char *)((long)plVar1 + 10) == '\x02') {
      uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_001288cc;
      plVar1 = *(long **)(param_1 + 0x18);
    }
    if ((*(char *)((long)plVar1 + 0xb) != '\0') &&
       ((*(char *)((long)plVar1 + 0xb) != '\x02' ||
        (uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2), (uVar2 & 1) == 0))))
    goto LAB_001288f0;
  }
LAB_001288cc:
  lVar3 = __strlen_chk(")",2);
  FUN_0011bcc0(param_2,")","operator()" + lVar3 + 9);
LAB_001288f0:
                    /* WARNING: Could not recover jumptable at 0x0012890c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}

