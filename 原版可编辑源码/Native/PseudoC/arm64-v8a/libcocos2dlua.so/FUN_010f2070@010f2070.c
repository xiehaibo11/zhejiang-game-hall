
void FUN_010f2070(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  
  lVar9 = param_1[0x46];
  uVar2 = (ulong)((*(int *)(lVar9 + 0x20) + (int)*(long *)(lVar9 + 0x18)) - 1) & 0xffff0000;
  uVar4 = uVar2 | 0x8000;
  if (*(long *)(lVar9 + 0x18) <= (long)uVar2) {
    uVar4 = uVar2;
  }
  iVar1 = *(int *)(lVar9 + 0x3c);
  uVar4 = uVar4 << ((ulong)*(uint *)(lVar9 + 0x38) & 0x3f);
  *(ulong *)(lVar9 + 0x18) = uVar4;
  if ((uVar4 & 0xf8000000) != 0) {
    if (-1 < iVar1) {
      if (*(long *)(lVar9 + 0x30) != 0) {
        do {
          puVar3 = (undefined8 *)param_1[5];
          puVar5 = (undefined1 *)*puVar3;
          *puVar3 = puVar5 + 1;
          *puVar5 = 0;
          lVar6 = puVar3[1];
          puVar3[1] = lVar6 + -1;
          if ((lVar6 + -1 == 0) && (iVar1 = (*(code *)puVar3[3])(param_1), iVar1 == 0)) {
            puVar3 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar3 + 5) = 0x19;
            (*(code *)*puVar3)(param_1);
          }
          lVar6 = *(long *)(lVar9 + 0x30) + -1;
          *(long *)(lVar9 + 0x30) = lVar6;
        } while (lVar6 != 0);
        iVar1 = *(int *)(lVar9 + 0x3c);
      }
      plVar7 = (long *)param_1[5];
      pcVar8 = (char *)*plVar7;
      *plVar7 = (long)(pcVar8 + 1);
      *pcVar8 = (char)iVar1 + '\x01';
      lVar6 = plVar7[1];
      plVar7[1] = lVar6 + -1;
      if ((lVar6 + -1 == 0) && (iVar1 = (*(code *)plVar7[3])(param_1), iVar1 == 0)) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x19;
        (*(code *)*puVar3)(param_1);
      }
      if (*(int *)(lVar9 + 0x3c) == 0xfe) {
        puVar3 = (undefined8 *)param_1[5];
        puVar5 = (undefined1 *)*puVar3;
        *puVar3 = puVar5 + 1;
        *puVar5 = 0;
        lVar6 = puVar3[1];
        puVar3[1] = lVar6 + -1;
        if ((lVar6 + -1 == 0) && (iVar1 = (*(code *)puVar3[3])(param_1), iVar1 == 0)) {
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x19;
          (*(code *)*puVar3)(param_1);
        }
      }
    }
    lVar6 = *(long *)(lVar9 + 0x28);
    *(undefined8 *)(lVar9 + 0x28) = 0;
    *(long *)(lVar9 + 0x30) = *(long *)(lVar9 + 0x30) + lVar6;
    goto LAB_010f23c8;
  }
  if (iVar1 == 0) {
    *(long *)(lVar9 + 0x30) = *(long *)(lVar9 + 0x30) + 1;
LAB_010f22b4:
    lVar6 = *(long *)(lVar9 + 0x28);
  }
  else {
    if (iVar1 < 0) goto LAB_010f22b4;
    if (*(long *)(lVar9 + 0x30) != 0) {
      do {
        puVar3 = (undefined8 *)param_1[5];
        puVar5 = (undefined1 *)*puVar3;
        *puVar3 = puVar5 + 1;
        *puVar5 = 0;
        lVar6 = puVar3[1];
        puVar3[1] = lVar6 + -1;
        if ((lVar6 + -1 == 0) && (iVar1 = (*(code *)puVar3[3])(param_1), iVar1 == 0)) {
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x19;
          (*(code *)*puVar3)(param_1);
        }
        lVar6 = *(long *)(lVar9 + 0x30) + -1;
        *(long *)(lVar9 + 0x30) = lVar6;
      } while (lVar6 != 0);
      iVar1 = *(int *)(lVar9 + 0x3c);
    }
    plVar7 = (long *)param_1[5];
    puVar5 = (undefined1 *)*plVar7;
    *plVar7 = (long)(puVar5 + 1);
    *puVar5 = (char)iVar1;
    lVar6 = plVar7[1];
    plVar7[1] = lVar6 + -1;
    if ((lVar6 + -1 != 0) || (iVar1 = (*(code *)plVar7[3])(param_1), iVar1 != 0)) goto LAB_010f22b4;
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x19;
    (*(code *)*puVar3)(param_1);
    lVar6 = *(long *)(lVar9 + 0x28);
  }
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar9 + 0x30);
    while (lVar6 != 0) {
      puVar3 = (undefined8 *)param_1[5];
      puVar5 = (undefined1 *)*puVar3;
      *puVar3 = puVar5 + 1;
      *puVar5 = 0;
      lVar6 = puVar3[1];
      puVar3[1] = lVar6 + -1;
      if ((lVar6 + -1 == 0) && (iVar1 = (*(code *)puVar3[3])(param_1), iVar1 == 0)) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x19;
        (*(code *)*puVar3)(param_1);
      }
      lVar6 = *(long *)(lVar9 + 0x30) + -1;
      *(long *)(lVar9 + 0x30) = lVar6;
    }
    do {
      puVar3 = (undefined8 *)param_1[5];
      puVar5 = (undefined1 *)*puVar3;
      *puVar3 = puVar5 + 1;
      *puVar5 = 0xff;
      lVar6 = puVar3[1];
      puVar3[1] = lVar6 + -1;
      if ((lVar6 + -1 == 0) && (iVar1 = (*(code *)puVar3[3])(param_1), iVar1 == 0)) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x19;
        (*(code *)*puVar3)(param_1);
      }
      puVar3 = (undefined8 *)param_1[5];
      puVar5 = (undefined1 *)*puVar3;
      *puVar3 = puVar5 + 1;
      *puVar5 = 0;
      lVar6 = puVar3[1];
      puVar3[1] = lVar6 + -1;
      if ((lVar6 + -1 == 0) && (iVar1 = (*(code *)puVar3[3])(param_1), iVar1 == 0)) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x19;
        (*(code *)*puVar3)(param_1);
      }
      lVar6 = *(long *)(lVar9 + 0x28) + -1;
      *(long *)(lVar9 + 0x28) = lVar6;
    } while (lVar6 != 0);
  }
LAB_010f23c8:
  uVar4 = *(ulong *)(lVar9 + 0x18);
  if ((uVar4 & 0x7fff800) != 0) {
    if (*(long *)(lVar9 + 0x30) != 0) {
      do {
        puVar3 = (undefined8 *)param_1[5];
        puVar5 = (undefined1 *)*puVar3;
        *puVar3 = puVar5 + 1;
        *puVar5 = 0;
        lVar6 = puVar3[1];
        puVar3[1] = lVar6 + -1;
        if ((lVar6 + -1 == 0) && (iVar1 = (*(code *)puVar3[3])(param_1), iVar1 == 0)) {
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x19;
          (*(code *)*puVar3)(param_1);
        }
        lVar6 = *(long *)(lVar9 + 0x30) + -1;
        *(long *)(lVar9 + 0x30) = lVar6;
      } while (lVar6 != 0);
      uVar4 = *(ulong *)(lVar9 + 0x18);
    }
    plVar7 = (long *)param_1[5];
    puVar5 = (undefined1 *)*plVar7;
    *plVar7 = (long)(puVar5 + 1);
    *puVar5 = (char)(uVar4 >> 0x13);
    lVar6 = plVar7[1];
    plVar7[1] = lVar6 + -1;
    if ((lVar6 + -1 == 0) && (iVar1 = (*(code *)plVar7[3])(param_1), iVar1 == 0)) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x19;
      (*(code *)*puVar3)(param_1);
    }
    if ((~*(uint *)(lVar9 + 0x18) & 0x7f80000) == 0) {
      puVar3 = (undefined8 *)param_1[5];
      puVar5 = (undefined1 *)*puVar3;
      *puVar3 = puVar5 + 1;
      *puVar5 = 0;
      lVar6 = puVar3[1];
      puVar3[1] = lVar6 + -1;
      if ((lVar6 + -1 == 0) && (iVar1 = (*(code *)puVar3[3])(param_1), iVar1 == 0)) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x19;
        (*(code *)*puVar3)(param_1);
      }
    }
    uVar4 = *(ulong *)(lVar9 + 0x18);
    if ((uVar4 & 0x7f800) != 0) {
      plVar7 = (long *)param_1[5];
      puVar5 = (undefined1 *)*plVar7;
      *plVar7 = (long)(puVar5 + 1);
      *puVar5 = (char)(uVar4 >> 0xb);
      lVar6 = plVar7[1];
      plVar7[1] = lVar6 + -1;
      if ((lVar6 + -1 == 0) && (iVar1 = (*(code *)plVar7[3])(param_1), iVar1 == 0)) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x19;
        (*(code *)*puVar3)(param_1);
      }
      if ((~*(uint *)(lVar9 + 0x18) & 0x7f800) == 0) {
        puVar3 = (undefined8 *)param_1[5];
        puVar5 = (undefined1 *)*puVar3;
        *puVar3 = puVar5 + 1;
        *puVar5 = 0;
        lVar9 = puVar3[1];
        puVar3[1] = lVar9 + -1;
        if ((lVar9 + -1 == 0) && (iVar1 = (*(code *)puVar3[3])(param_1), iVar1 == 0)) {
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x010f25b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(param_1);
          return;
        }
      }
    }
  }
  return;
}

