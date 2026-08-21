
undefined8 FUN_00e347b0(long *param_1,char param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  
  lVar10 = *(long *)(param_1[2] + 0x108);
  lVar9 = *(long *)(*param_1 + 0xb0);
  if (0 < lVar10) {
    memcpy((void *)param_1[0x1c],(void *)param_1[0x1d],(ulong)*(ushort *)((long)param_1 + 0xdc) << 4
          );
  }
  lVar7 = param_1[1];
  lVar8 = param_1[0x22];
  uVar12 = *(undefined8 *)(lVar7 + 0x158);
  uVar6 = *(undefined8 *)(lVar7 + 0x150);
  uVar13 = *(undefined8 *)(lVar7 + 0x160);
  *(undefined8 *)(lVar8 + 0x230) = *(undefined8 *)(lVar7 + 0x168);
  *(undefined8 *)(lVar8 + 0x228) = uVar13;
  *(undefined8 *)(lVar8 + 0x220) = uVar12;
  *(undefined8 *)(lVar8 + 0x218) = uVar6;
  uVar12 = *(undefined8 *)(lVar7 + 0x198);
  uVar6 = *(undefined8 *)(lVar7 + 400);
  uVar13 = *(undefined8 *)(lVar7 + 0x1a0);
  uVar17 = *(undefined8 *)(lVar7 + 0x178);
  uVar15 = *(undefined8 *)(lVar7 + 0x170);
  uVar21 = *(undefined8 *)(lVar7 + 0x188);
  uVar19 = *(undefined8 *)(lVar7 + 0x180);
  *(undefined8 *)(lVar8 + 0x270) = *(undefined8 *)(lVar7 + 0x1a8);
  *(undefined8 *)(lVar8 + 0x268) = uVar13;
  *(undefined8 *)(lVar8 + 0x260) = uVar12;
  *(undefined8 *)(lVar8 + 600) = uVar6;
  *(undefined8 *)(lVar8 + 0x250) = uVar21;
  *(undefined8 *)(lVar8 + 0x248) = uVar19;
  *(undefined8 *)(lVar8 + 0x240) = uVar17;
  *(undefined8 *)(lVar8 + 0x238) = uVar15;
  if (param_2 == '\0') {
    lVar7 = param_1[0x22];
    uVar6 = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 8);
    *(undefined8 *)(lVar7 + 0x1a0) = *(undefined8 *)(*(long *)(param_1[1] + 0x58) + 0x10);
    *(undefined8 *)(lVar7 + 0x198) = uVar6;
  }
  else {
    lVar7 = param_1[0x22];
    *(undefined8 *)(lVar7 + 0x1a0) = 0x10000;
    *(undefined8 *)(lVar7 + 0x198) = 0x10000;
    memcpy((void *)param_1[0x1e],(void *)param_1[0x1d],(ulong)*(ushort *)((long)param_1 + 0xdc) << 4
          );
  }
  lVar7 = param_1[0x1d] + (ulong)*(ushort *)((long)param_1 + 0xdc) * 0x10;
  *(ulong *)(lVar7 + -0x40) = *(long *)(lVar7 + -0x40) + 0x20U & 0xffffffffffffffc0;
  *(ulong *)(lVar7 + -0x30) = *(long *)(lVar7 + -0x30) + 0x20U & 0xffffffffffffffc0;
  *(ulong *)(lVar7 + -0x18) = *(long *)(lVar7 + -0x18) + 0x20U & 0xffffffffffffffc0;
  *(ulong *)(lVar7 + -8) = *(long *)(lVar7 + -8) + 0x20U & 0xffffffffffffffc0;
  if (0 < lVar10) {
    lVar7 = param_1[0x22];
    pbVar11 = *(byte **)(param_1[3] + 0x70);
    *(long *)(lVar7 + 0x330) = lVar10;
    *(char *)(lVar7 + 0x3c8) = param_2;
    *(undefined8 *)(lVar7 + 0x328) = *(undefined8 *)(lVar7 + 0x2c0);
    lVar8 = param_1[0x1f];
    lVar10 = param_1[0x1e];
    lVar14 = param_1[0x20];
    lVar18 = param_1[0x1b];
    lVar16 = param_1[0x1a];
    lVar22 = param_1[0x1d];
    lVar20 = param_1[0x1c];
    *(long *)(lVar7 + 0x140) = param_1[0x21];
    *(long *)(lVar7 + 0x138) = lVar14;
    *(long *)(lVar7 + 0x130) = lVar8;
    *(long *)(lVar7 + 0x128) = lVar10;
    *(long *)(lVar7 + 0x120) = lVar22;
    *(long *)(lVar7 + 0x118) = lVar20;
    *(long *)(lVar7 + 0x110) = lVar18;
    *(long *)(lVar7 + 0x108) = lVar16;
    plVar5 = (long *)param_1[0x22];
    plVar5[0x51] = 0;
    *(undefined4 *)(plVar5 + 0x4f) = 3;
    plVar1 = plVar5 + 0x27;
    plVar5[0x50] = plVar5[0x65];
    plVar5[0x52] = plVar5[0x66];
    plVar2 = plVar5 + 0x25;
    plVar3 = plVar5 + 0x23;
    plVar4 = plVar5 + 0x21;
    plVar5[0x10] = plVar5[0x28];
    plVar5[0xf] = *plVar1;
    plVar5[0xe] = plVar5[0x26];
    plVar5[0xd] = *plVar2;
    plVar5[0xc] = plVar5[0x24];
    plVar5[0xb] = *plVar3;
    plVar5[10] = plVar5[0x22];
    plVar5[9] = *plVar4;
    plVar5[0x18] = plVar5[0x28];
    plVar5[0x17] = *plVar1;
    plVar5[0x16] = plVar5[0x26];
    plVar5[0x15] = *plVar2;
    plVar5[0x14] = plVar5[0x24];
    plVar5[0x13] = *plVar3;
    plVar5[0x12] = plVar5[0x22];
    plVar5[0x11] = *plVar4;
    *(undefined2 *)((long)plVar5 + 0x26c) = 1;
    *(undefined2 *)((long)plVar5 + 0x26e) = 1;
    *(undefined2 *)(plVar5 + 0x4e) = 1;
    *(undefined2 *)((long)plVar5 + 0x222) = 0x4000;
    *(undefined2 *)((long)plVar5 + 0x224) = 0;
    plVar5[0x20] = plVar5[0x28];
    plVar5[0x1f] = *plVar1;
    plVar5[0x1e] = plVar5[0x26];
    plVar5[0x1d] = *plVar2;
    plVar5[0x1c] = plVar5[0x24];
    plVar5[0x1b] = *plVar3;
    plVar5[0x1a] = plVar5[0x22];
    plVar5[0x19] = *plVar4;
    *(undefined4 *)((long)plVar5 + 0x226) = *(undefined4 *)((long)plVar5 + 0x222);
    *(undefined4 *)((long)plVar5 + 0x21e) = *(undefined4 *)((long)plVar5 + 0x222);
    *(undefined4 *)(plVar5 + 0x48) = 1;
    plVar5[0x46] = 1;
    plVar5[4] = 0;
    *(undefined4 *)(plVar5 + 0x5e) = 0;
    uVar6 = (**(code **)(*plVar5 + 0x488))();
    if (((int)uVar6 != 0) && (*(char *)(param_1[0x22] + 0x3c9) != '\0')) {
      return uVar6;
    }
    *pbVar11 = *pbVar11 | *(char *)(param_1[0x22] + 0x268) << 5 | 4;
  }
  if ((*(int *)(lVar9 + 0x78) != 0x28) || (*(char *)(param_1[0x22] + 0x42b) == '\0')) {
    lVar9 = param_1[0x1d] + (ulong)*(ushort *)((long)param_1 + 0xdc) * 0x10;
    lVar10 = *(long *)(lVar9 + -0x40);
    param_1[0xf] = *(long *)(lVar9 + -0x38);
    param_1[0xe] = lVar10;
    lVar10 = *(long *)(lVar9 + -0x30);
    param_1[0x11] = *(long *)(lVar9 + -0x28);
    param_1[0x10] = lVar10;
    lVar10 = *(long *)(lVar9 + -0x20);
    param_1[0x28] = *(long *)(lVar9 + -0x18);
    param_1[0x27] = lVar10;
    lVar10 = *(long *)(lVar9 + -0x10);
    param_1[0x2a] = *(long *)(lVar9 + -8);
    param_1[0x29] = lVar10;
  }
  return 0;
}

