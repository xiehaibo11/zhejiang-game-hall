
void FUN_0125f540(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    lVar1 = __strlen_chk(&DAT_014a8448,3);
    FUN_01258064(param_2,&DAT_014a8448,&DAT_014a8448 + lVar1);
  }
  lVar1 = __strlen_chk("delete",7);
  FUN_01258064(param_2,"delete","operator delete" + lVar1 + 9);
  if (*(char *)(param_1 + 0x19) != '\0') {
    lVar1 = __strlen_chk(&DAT_014a8035,4);
    FUN_01258064(param_2,&DAT_014a8035,&DAT_014a8035 + lVar1);
  }
  plVar2 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  if (*(char *)((long)plVar2 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0125f624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  return;
}

