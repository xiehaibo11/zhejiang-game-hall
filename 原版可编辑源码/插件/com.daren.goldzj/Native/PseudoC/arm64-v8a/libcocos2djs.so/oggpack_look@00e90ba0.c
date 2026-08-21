
ulong oggpack_look(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  
  uVar2 = *param_1;
  lVar9 = *(long *)(param_1 + 4);
  iVar1 = uVar2 + param_2;
  uVar4 = (ulong)iVar1;
  if ((long)uVar4 < lVar9 * 8) {
    pbVar6 = *(byte **)(param_1 + 2);
    uVar3 = (uint)(*pbVar6 >> (ulong)(uVar2 & 0x1f));
    uVar4 = (ulong)(int)uVar3;
    if (iVar1 < 9) goto LAB_00e90d44;
    uVar3 = (uint)pbVar6[1] << (ulong)(8 - uVar2 & 0x1f) | uVar3;
    uVar4 = (ulong)(int)uVar3;
    if (iVar1 < 0x11) goto LAB_00e90d44;
    uVar3 = (uint)pbVar6[2] << (ulong)(0x10 - uVar2 & 0x1f) | uVar3;
    uVar4 = (ulong)(int)uVar3;
    if (iVar1 < 0x19) goto LAB_00e90d44;
    uVar3 = (uint)pbVar6[3] << (ulong)(0x18 - uVar2 & 0x1f) | uVar3;
    uVar4 = (ulong)(int)uVar3;
    if ((uVar2 == 0) || (iVar1 < 0x21)) goto LAB_00e90d44;
    uVar5 = (uint)pbVar6[4];
  }
  else {
    if ((int)lVar9 < 0) {
      return 0xffffffffffffffff;
    }
    if (iVar1 == 0) goto LAB_00e90d44;
    puVar7 = *(undefined8 **)(param_1 + 6);
    if ((int)lVar9 == 0) {
      do {
        puVar7 = (undefined8 *)puVar7[3];
        if (puVar7 == (undefined8 *)0x0) {
          return 0xffffffffffffffff;
        }
        lVar9 = puVar7[2];
      } while ((int)lVar9 == 0);
      pbVar6 = (byte *)(*(long *)*puVar7 + puVar7[1]);
    }
    else {
      pbVar6 = *(byte **)(param_1 + 2);
    }
    uVar3 = (uint)(*pbVar6 >> (ulong)(uVar2 & 0x1f));
    uVar4 = (ulong)(int)uVar3;
    if (iVar1 < 9) goto LAB_00e90d44;
    iVar8 = (int)lVar9 + -1;
    if (iVar8 == 0) {
      do {
        puVar7 = (undefined8 *)puVar7[3];
        if (puVar7 == (undefined8 *)0x0) {
          return 0xffffffffffffffff;
        }
        iVar8 = (int)puVar7[2];
      } while (iVar8 == 0);
      pbVar6 = (byte *)(*(long *)*puVar7 + puVar7[1]);
    }
    else {
      pbVar6 = pbVar6 + 1;
    }
    uVar3 = (uint)*pbVar6 << (ulong)(8 - uVar2 & 0x1f) | uVar3;
    uVar4 = (ulong)(int)uVar3;
    if (iVar1 < 0x11) goto LAB_00e90d44;
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) {
      do {
        puVar7 = (undefined8 *)puVar7[3];
        if (puVar7 == (undefined8 *)0x0) {
          return 0xffffffffffffffff;
        }
        iVar8 = (int)puVar7[2];
      } while (iVar8 == 0);
      pbVar6 = (byte *)(*(long *)*puVar7 + puVar7[1]);
    }
    else {
      pbVar6 = pbVar6 + 1;
    }
    uVar3 = (uint)*pbVar6 << (ulong)(0x10 - uVar2 & 0x1f) | uVar3;
    uVar4 = (ulong)(int)uVar3;
    if (iVar1 < 0x19) goto LAB_00e90d44;
    iVar8 = iVar8 + -1;
    if (iVar8 == 0) {
      do {
        puVar7 = (undefined8 *)puVar7[3];
        if (puVar7 == (undefined8 *)0x0) {
          return 0xffffffffffffffff;
        }
        iVar8 = (int)puVar7[2];
      } while (iVar8 == 0);
      pbVar6 = (byte *)(*(long *)*puVar7 + puVar7[1]);
    }
    else {
      pbVar6 = pbVar6 + 1;
    }
    uVar3 = (uint)*pbVar6 << (ulong)(0x18 - uVar2 & 0x1f) | uVar3;
    uVar4 = (ulong)(int)uVar3;
    if ((uVar2 == 0) || (iVar1 < 0x21)) goto LAB_00e90d44;
    if (iVar8 == 1) {
      do {
        puVar7 = (undefined8 *)puVar7[3];
        if (puVar7 == (undefined8 *)0x0) {
          return 0xffffffffffffffff;
        }
      } while (*(int *)(puVar7 + 2) == 0);
      uVar5 = (uint)*(byte *)(*(long *)*puVar7 + puVar7[1]);
    }
    else {
      uVar5 = (uint)pbVar6[1];
    }
  }
  uVar4 = (ulong)(int)(uVar5 << (ulong)(-uVar2 & 0x1f) | uVar3);
LAB_00e90d44:
  return uVar4 & *(ulong *)(&DAT_01994e90 + (long)param_2 * 8);
}

