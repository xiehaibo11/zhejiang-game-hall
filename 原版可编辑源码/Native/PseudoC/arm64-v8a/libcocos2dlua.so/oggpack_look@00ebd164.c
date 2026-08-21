
ulong oggpack_look(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  byte *pbVar8;
  
  pbVar8 = *(byte **)(param_1 + 2);
  if (pbVar8 == (byte *)0x0) {
    return 0;
  }
  uVar2 = *param_1;
  iVar1 = uVar2 + param_2;
  if ((long)iVar1 < *(long *)(param_1 + 4) * 8) {
    uVar3 = (uint)(*pbVar8 >> (ulong)(uVar2 & 0x1f));
    uVar4 = (ulong)(int)uVar3;
    if (iVar1 < 9) goto LAB_00ebd374;
    uVar3 = (uint)pbVar8[1] << (ulong)(8 - uVar2 & 0x1f) | uVar3;
    uVar4 = (ulong)(int)uVar3;
    if (iVar1 < 0x11) goto LAB_00ebd374;
    uVar3 = (uint)pbVar8[2] << (ulong)(0x10 - uVar2 & 0x1f) | uVar3;
    uVar4 = (ulong)(int)uVar3;
    if (iVar1 < 0x19) goto LAB_00ebd374;
    uVar3 = (uint)pbVar8[3] << (ulong)(0x18 - uVar2 & 0x1f) | uVar3;
    uVar4 = (ulong)(int)uVar3;
    if ((uVar2 == 0) || (iVar1 < 0x21)) goto LAB_00ebd374;
    uVar5 = (uint)pbVar8[4];
  }
  else {
    iVar7 = (int)*(long *)(param_1 + 4);
    if (iVar7 < 0) {
      return 0;
    }
    if (iVar7 == 0) {
      return 0;
    }
    puVar6 = *(undefined8 **)(param_1 + 6);
    if (puVar6 == (undefined8 *)0x0) {
      return 0;
    }
    if (iVar1 == 0) {
      uVar4 = 0;
      goto LAB_00ebd374;
    }
    uVar3 = (uint)(*pbVar8 >> (ulong)(uVar2 & 0x1f));
    uVar4 = (ulong)(int)uVar3;
    if (iVar1 < 9) goto LAB_00ebd374;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      do {
        puVar6 = (undefined8 *)puVar6[3];
        if (puVar6 == (undefined8 *)0x0) {
          return 0xffffffffffffffff;
        }
        iVar7 = (int)puVar6[2];
      } while (iVar7 == 0);
      pbVar8 = (byte *)(*(long *)*puVar6 + puVar6[1]);
    }
    else {
      pbVar8 = pbVar8 + 1;
    }
    uVar3 = (uint)*pbVar8 << (ulong)(8 - uVar2 & 0x1f) | uVar3;
    uVar4 = (ulong)(int)uVar3;
    if (iVar1 < 0x11) goto LAB_00ebd374;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      do {
        puVar6 = (undefined8 *)puVar6[3];
        if (puVar6 == (undefined8 *)0x0) {
          return 0xffffffffffffffff;
        }
        iVar7 = (int)puVar6[2];
      } while (iVar7 == 0);
      pbVar8 = (byte *)(*(long *)*puVar6 + puVar6[1]);
    }
    else {
      pbVar8 = pbVar8 + 1;
    }
    uVar3 = (uint)*pbVar8 << (ulong)(0x10 - uVar2 & 0x1f) | uVar3;
    uVar4 = (ulong)(int)uVar3;
    if (iVar1 < 0x19) goto LAB_00ebd374;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      do {
        puVar6 = (undefined8 *)puVar6[3];
        if (puVar6 == (undefined8 *)0x0) {
          return 0xffffffffffffffff;
        }
        iVar7 = (int)puVar6[2];
      } while (iVar7 == 0);
      pbVar8 = (byte *)(*(long *)*puVar6 + puVar6[1]);
    }
    else {
      pbVar8 = pbVar8 + 1;
    }
    uVar3 = (uint)*pbVar8 << (ulong)(0x18 - uVar2 & 0x1f) | uVar3;
    uVar4 = (ulong)(int)uVar3;
    if ((uVar2 == 0) || (iVar1 < 0x21)) goto LAB_00ebd374;
    if (iVar7 == 1) {
      do {
        puVar6 = (undefined8 *)puVar6[3];
        if (puVar6 == (undefined8 *)0x0) {
          return 0xffffffffffffffff;
        }
      } while (*(int *)(puVar6 + 2) == 0);
      uVar5 = (uint)*(byte *)(*(long *)*puVar6 + puVar6[1]);
    }
    else {
      uVar5 = (uint)pbVar8[1];
    }
  }
  uVar4 = (ulong)(int)(uVar5 << (ulong)(-uVar2 & 0x1f) | uVar3);
LAB_00ebd374:
  return uVar4 & *(ulong *)(&DAT_01434f28 + (long)param_2 * 8);
}

