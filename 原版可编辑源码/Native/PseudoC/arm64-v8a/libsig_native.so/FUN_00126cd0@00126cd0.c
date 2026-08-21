
void FUN_00126cd0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if ((*(char *)((long)puVar2 + 9) != '\0') &&
       ((*(char *)((long)puVar2 + 9) != '\x02' ||
        (uVar3 = (**(code **)*puVar2)(puVar2,param_2), (uVar3 & 1) == 0)))) {
      lVar4 = __strlen_chk(" ",2);
      FUN_0011bcc0(param_2," ","operator\"\" " + lVar4 + 10);
    }
  }
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if (*(char *)((long)plVar1 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00126d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}

