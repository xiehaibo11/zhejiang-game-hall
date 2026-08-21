
void FUN_010e2004(long *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined4 *puVar11;
  
  puVar5 = (undefined8 *)param_1[5];
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0xff;
                    /* catch() { ... } // from try @ 010e1fb8 with catch @ 010e2034 */
  lVar8 = puVar5[1];
  puVar5[1] = lVar8 + -1;
  if ((lVar8 + -1 == 0) && (iVar3 = (*(code *)puVar5[3])(param_1), iVar3 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  plVar6 = (long *)param_1[5];
  puVar7 = (undefined1 *)*plVar6;
                    /* try { // try from 010e2078 to 011e2087 has its CatchHandler @ 010e20a8 */
  *plVar6 = (long)(puVar7 + 1);
  *puVar7 = param_2;
  lVar8 = plVar6[1];
  plVar6[1] = lVar8 + -1;
  if ((lVar8 + -1 == 0) && (iVar3 = (*(code *)plVar6[3])(param_1), iVar3 == 0)) {
    puVar5 = (undefined8 *)*param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010e2078 with catch @ 010e20a8
                        */
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  plVar6 = (long *)param_1[5];
  puVar7 = (undefined1 *)*plVar6;
  iVar3 = *(int *)((long)param_1 + 0x5c) * 3 + 8;
  *plVar6 = (long)(puVar7 + 1);
  *puVar7 = (char)((uint)iVar3 >> 8);
  lVar8 = plVar6[1];
  plVar6[1] = lVar8 + -1;
  if ((lVar8 + -1 == 0) && (iVar4 = (*(code *)plVar6[3])(param_1), iVar4 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  plVar6 = (long *)param_1[5];
  puVar7 = (undefined1 *)*plVar6;
  *plVar6 = (long)(puVar7 + 1);
  *puVar7 = (char)iVar3;
  lVar8 = plVar6[1];
  plVar6[1] = lVar8 + -1;
  if ((lVar8 + -1 == 0) && (iVar3 = (*(code *)plVar6[3])(param_1), iVar3 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
    sVar2 = *(short *)((long)param_1 + 0x56);
  }
  else {
    sVar2 = *(short *)((long)param_1 + 0x56);
  }
  if ((sVar2 != 0) || (0xffff < *(uint *)(param_1 + 10))) {
    puVar5 = (undefined8 *)*param_1;
    puVar5[5] = 0xffff0000002a;
    (*(code *)*puVar5)(param_1);
  }
  plVar6 = (long *)param_1[5];
  lVar8 = param_1[0xb];
  puVar7 = (undefined1 *)*plVar6;
  *plVar6 = (long)(puVar7 + 1);
  *puVar7 = (char)(int)lVar8;
  lVar8 = plVar6[1];
  plVar6[1] = lVar8 + -1;
  if ((lVar8 + -1 == 0) && (iVar3 = (*(code *)plVar6[3])(param_1), iVar3 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  plVar6 = (long *)param_1[5];
  uVar1 = *(undefined4 *)((long)param_1 + 0x54);
  puVar7 = (undefined1 *)*plVar6;
  *plVar6 = (long)(puVar7 + 1);
  *puVar7 = (char)((uint)uVar1 >> 8);
  lVar8 = plVar6[1];
  plVar6[1] = lVar8 + -1;
  if ((lVar8 + -1 == 0) && (iVar3 = (*(code *)plVar6[3])(param_1), iVar3 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  plVar6 = (long *)param_1[5];
  puVar7 = (undefined1 *)*plVar6;
  *plVar6 = (long)(puVar7 + 1);
  *puVar7 = (char)uVar1;
  lVar8 = plVar6[1];
  plVar6[1] = lVar8 + -1;
  if ((lVar8 + -1 == 0) && (iVar3 = (*(code *)plVar6[3])(param_1), iVar3 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  plVar6 = (long *)param_1[5];
  lVar8 = param_1[10];
  puVar7 = (undefined1 *)*plVar6;
  *plVar6 = (long)(puVar7 + 1);
  *puVar7 = (char)((uint)(int)lVar8 >> 8);
  lVar9 = plVar6[1];
  plVar6[1] = lVar9 + -1;
  if ((lVar9 + -1 == 0) && (iVar3 = (*(code *)plVar6[3])(param_1), iVar3 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  plVar6 = (long *)param_1[5];
  puVar7 = (undefined1 *)*plVar6;
  *plVar6 = (long)(puVar7 + 1);
  *puVar7 = (char)(int)lVar8;
  lVar8 = plVar6[1];
  plVar6[1] = lVar8 + -1;
  if ((lVar8 + -1 == 0) && (iVar3 = (*(code *)plVar6[3])(param_1), iVar3 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  plVar6 = (long *)param_1[5];
  uVar1 = *(undefined4 *)((long)param_1 + 0x5c);
  puVar7 = (undefined1 *)*plVar6;
  *plVar6 = (long)(puVar7 + 1);
  *puVar7 = (char)uVar1;
  lVar8 = plVar6[1];
  plVar6[1] = lVar8 + -1;
  if ((lVar8 + -1 == 0) && (iVar3 = (*(code *)plVar6[3])(param_1), iVar3 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  if (0 < *(int *)((long)param_1 + 0x5c)) {
    puVar11 = (undefined4 *)param_1[0xd];
    iVar3 = 0;
    do {
      plVar6 = (long *)param_1[5];
      uVar1 = *puVar11;
      puVar7 = (undefined1 *)*plVar6;
      *plVar6 = (long)(puVar7 + 1);
      *puVar7 = (char)uVar1;
      lVar8 = plVar6[1];
      plVar6[1] = lVar8 + -1;
      if ((lVar8 + -1 == 0) && (iVar4 = (*(code *)plVar6[3])(param_1), iVar4 == 0)) {
        puVar5 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar5 + 5) = 0x19;
        (*(code *)*puVar5)(param_1);
      }
      plVar6 = (long *)param_1[5];
      iVar4 = puVar11[2];
      uVar1 = puVar11[3];
      pcVar10 = (char *)*plVar6;
      *plVar6 = (long)(pcVar10 + 1);
      *pcVar10 = (char)uVar1 + (char)(iVar4 << 4);
      lVar8 = plVar6[1];
      plVar6[1] = lVar8 + -1;
      if ((lVar8 + -1 == 0) && (iVar4 = (*(code *)plVar6[3])(param_1), iVar4 == 0)) {
        puVar5 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar5 + 5) = 0x19;
        (*(code *)*puVar5)(param_1);
      }
      plVar6 = (long *)param_1[5];
      uVar1 = puVar11[4];
      puVar7 = (undefined1 *)*plVar6;
      *plVar6 = (long)(puVar7 + 1);
      *puVar7 = (char)uVar1;
      lVar8 = plVar6[1];
      plVar6[1] = lVar8 + -1;
      if ((lVar8 + -1 == 0) && (iVar4 = (*(code *)plVar6[3])(param_1), iVar4 == 0)) {
        puVar5 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar5 + 5) = 0x19;
        (*(code *)*puVar5)(param_1);
      }
      iVar3 = iVar3 + 1;
      puVar11 = puVar11 + 0x18;
    } while (iVar3 < *(int *)((long)param_1 + 0x5c));
  }
  return;
}

