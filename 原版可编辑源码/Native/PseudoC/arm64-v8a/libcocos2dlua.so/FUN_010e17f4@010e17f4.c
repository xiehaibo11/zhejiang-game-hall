
void FUN_010e17f4(long *param_1)

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
  *puVar3 = 0xd8;
  lVar4 = puVar2[1];
  puVar2[1] = lVar4 + -1;
  if ((lVar4 + -1 == 0) && (iVar1 = (*(code *)puVar2[3])(param_1), iVar1 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x19;
    (*(code *)*puVar2)(param_1);
  }
  if (param_1[0xe] != 0) {
    FUN_010e1c78(param_1,0);
  }
  if (param_1[0xf] != 0) {
    FUN_010e1c78(param_1,1);
  }
  if (param_1[0x10] != 0) {
    FUN_010e1c78(param_1,2);
  }
  if (param_1[0x11] != 0) {
    FUN_010e1c78(param_1,3);
  }
  if (*(int *)((long)param_1 + 0x124) == 0) {
    if (param_1[0x14] != 0) {
      FUN_010e24a0(param_1,0,0);
    }
    if (param_1[0x18] != 0) {
      FUN_010e24a0(param_1,0,1);
    }
    if (param_1[0x15] != 0) {
      FUN_010e24a0(param_1,1,0);
    }
    if (param_1[0x19] != 0) {
      FUN_010e24a0(param_1,1,1);
    }
    if (param_1[0x16] != 0) {
      FUN_010e24a0(param_1,2,0);
    }
    if (param_1[0x1a] != 0) {
      FUN_010e24a0(param_1,2,1);
    }
    if (param_1[0x17] != 0) {
      FUN_010e24a0(param_1,3,0);
    }
    if (param_1[0x1b] != 0) {
      FUN_010e24a0(param_1,3,1);
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x010e1a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(param_1);
    return;
  }
  return;
}

