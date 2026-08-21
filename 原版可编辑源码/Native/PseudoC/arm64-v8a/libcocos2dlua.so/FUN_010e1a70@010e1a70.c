
void FUN_010e1a70(long *param_1,undefined1 param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  
  if (0xfffd < param_3) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0xc;
    (*(code *)*puVar2)(param_1);
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar4 = (undefined1 *)*puVar2;
  *puVar2 = puVar4 + 1;
  *puVar4 = 0xff;
  lVar5 = puVar2[1];
  puVar2[1] = lVar5 + -1;
  if ((lVar5 + -1 == 0) && (iVar1 = (*(code *)puVar2[3])(param_1), iVar1 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x19;
    (*(code *)*puVar2)(param_1);
  }
  plVar3 = (long *)param_1[5];
  puVar4 = (undefined1 *)*plVar3;
  *plVar3 = (long)(puVar4 + 1);
  *puVar4 = param_2;
  lVar5 = plVar3[1];
  plVar3[1] = lVar5 + -1;
  if ((lVar5 + -1 == 0) && (iVar1 = (*(code *)plVar3[3])(param_1), iVar1 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x19;
    (*(code *)*puVar2)(param_1);
  }
  plVar3 = (long *)param_1[5];
  puVar4 = (undefined1 *)*plVar3;
  *plVar3 = (long)(puVar4 + 1);
  *puVar4 = (char)(param_3 + 2 >> 8);
  lVar5 = plVar3[1];
  plVar3[1] = lVar5 + -1;
  if ((lVar5 + -1 == 0) && (iVar1 = (*(code *)plVar3[3])(param_1), iVar1 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x19;
    (*(code *)*puVar2)(param_1);
  }
  plVar3 = (long *)param_1[5];
  puVar4 = (undefined1 *)*plVar3;
  *plVar3 = (long)(puVar4 + 1);
  *puVar4 = (char)(param_3 + 2);
  lVar5 = plVar3[1];
  plVar3[1] = lVar5 + -1;
  if ((lVar5 + -1 == 0) && (iVar1 = (*(code *)plVar3[3])(param_1), iVar1 == 0)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x010e1c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(param_1);
    return;
  }
  return;
}

