
uint FUN_0115f078(ulong *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  uVar3 = 0;
  if (0 < param_2) {
    uVar5 = (uint)param_1[1];
    uVar4 = *(uint *)((long)param_1 + 0xc);
    param_2 = param_2 + 1;
    do {
      if ((int)uVar4 < 0) {
        puVar6 = (ulong *)param_1[2];
        if (puVar6 < (ulong *)param_1[4]) {
          uVar7 = *puVar6;
          uVar4 = uVar4 + 0x38;
          *(uint *)((long)param_1 + 0xc) = uVar4;
          param_1[2] = (ulong)((long)puVar6 + 7);
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = (uVar7 >> 0x20 | uVar7 << 0x20) >> 8 | *param_1 << 0x38;
        }
        else if (puVar6 < (ulong *)param_1[3]) {
          uVar4 = uVar4 + 8;
          *(uint *)((long)param_1 + 0xc) = uVar4;
          param_1[2] = (ulong)((long)puVar6 + 1);
          uVar7 = (ulong)(byte)*puVar6 | *param_1 << 8;
        }
        else {
          if ((int)param_1[5] != 0) {
            uVar4 = 0;
            *(undefined4 *)((long)param_1 + 0xc) = 0;
            goto LAB_0115f130;
          }
          uVar4 = uVar4 + 8;
          *(uint *)((long)param_1 + 0xc) = uVar4;
          *(undefined4 *)(param_1 + 5) = 1;
          uVar7 = *param_1 << 8;
        }
        *param_1 = uVar7;
      }
LAB_0115f130:
      uVar1 = uVar5 >> 1 & 0xffffff;
      bVar2 = uVar1 < (uint)(*param_1 >> ((ulong)uVar4 & 0x3f));
      if (bVar2) {
        *param_1 = *param_1 - ((ulong)(uVar1 + 1) << ((ulong)uVar4 & 0x3f));
        uVar1 = uVar5 - (uVar1 + 1);
      }
      uVar5 = uVar1;
      uVar1 = param_2 - 2;
      if (uVar5 < 0x7f) {
        uVar7 = (ulong)uVar5;
        uVar5 = (uint)(byte)(&DAT_014998c0)[uVar5];
        uVar4 = uVar4 - (byte)(&DAT_01499840)[uVar7];
        *(uint *)((long)param_1 + 0xc) = uVar4;
      }
      param_2 = param_2 + -1;
      uVar3 = (uint)bVar2 << (ulong)(uVar1 & 0x1f) | uVar3;
      *(uint *)(param_1 + 1) = uVar5;
    } while (1 < param_2);
  }
  return uVar3;
}

