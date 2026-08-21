
void FUN_010e1c08(undefined8 *param_1,undefined1 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  plVar2 = (long *)param_1[5];
  puVar4 = (undefined1 *)*plVar2;
  *plVar2 = (long)(puVar4 + 1);
  *puVar4 = param_2;
  lVar5 = plVar2[1];
  plVar2[1] = lVar5 + -1;
  if ((lVar5 + -1 == 0) && (iVar1 = (*(code *)plVar2[3])(param_1), iVar1 == 0)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x010e1c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(param_1);
    return;
  }
  return;
}

