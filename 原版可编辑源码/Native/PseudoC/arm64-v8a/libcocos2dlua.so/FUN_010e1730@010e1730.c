
void FUN_010e1730(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xff;
  lVar4 = puVar2[1];
  puVar2[1] = lVar4 + -1;
  if ((lVar4 + -1 == 0) && (iVar1 = (*(code *)puVar2[3])(param_1), iVar1 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x19;
    (*(code *)*puVar2)(param_1);
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xd9;
  lVar4 = puVar2[1];
  puVar2[1] = lVar4 + -1;
  if ((lVar4 + -1 == 0) && (iVar1 = (*(code *)puVar2[3])(param_1), iVar1 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x010e17f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(param_1);
    return;
  }
  return;
}

