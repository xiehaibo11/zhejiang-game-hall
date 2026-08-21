
undefined8 FUN_00da3d1c(undefined8 *param_1,ulong param_2,int param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  
  plVar7 = (long *)param_1[4];
  pbVar8 = (byte *)*param_1;
  lVar10 = param_1[1];
  if (*(int *)((long)plVar7 + 0x23c) == 0) {
    iVar6 = param_3;
    if (param_3 < 0x19) {
      do {
        pbVar9 = pbVar8;
        if (lVar10 == 0) {
          uVar3 = (**(code **)(plVar7[5] + 0x18))(plVar7);
          if ((int)uVar3 == 0) {
            return uVar3;
          }
          pbVar9 = *(byte **)plVar7[5];
          lVar10 = ((undefined8 *)plVar7[5])[1];
        }
        pbVar8 = pbVar9 + 1;
        uVar5 = (ulong)*pbVar9;
        lVar10 = lVar10 + -1;
        pbVar9 = pbVar8;
        if (uVar5 == 0xff) {
          do {
            if (lVar10 == 0) {
              uVar3 = (**(code **)(plVar7[5] + 0x18))(plVar7);
              if ((int)uVar3 == 0) {
                return uVar3;
              }
              pbVar9 = *(byte **)plVar7[5];
              lVar10 = ((undefined8 *)plVar7[5])[1];
            }
            pbVar8 = pbVar9 + 1;
            bVar2 = *pbVar9;
            lVar10 = lVar10 + -1;
            pbVar9 = pbVar8;
          } while (bVar2 == 0xff);
          if (bVar2 != 0) {
            *(uint *)((long)plVar7 + 0x23c) = (uint)bVar2;
            param_3 = iVar6;
            goto joined_r0x00da3e3c;
          }
          uVar5 = 0xff;
        }
        param_2 = uVar5 | param_2 << 8;
        param_3 = iVar6 + 8;
        bVar1 = iVar6 < 0x11;
        iVar6 = param_3;
      } while (bVar1);
    }
  }
  else {
joined_r0x00da3e3c:
    if (param_3 < param_4) {
      if (*(int *)(plVar7[0x4e] + 0x3c) == 0) {
        lVar4 = *plVar7;
        *(undefined4 *)(lVar4 + 0x28) = 0x78;
        (**(code **)(lVar4 + 8))(plVar7,0xffffffff);
        *(undefined4 *)(plVar7[0x4e] + 0x3c) = 1;
      }
      param_2 = param_2 << ((ulong)(0x19 - param_3) & 0x3f);
      param_3 = 0x19;
    }
  }
  *param_1 = pbVar8;
  param_1[1] = lVar10;
  param_1[2] = param_2;
  *(int *)(param_1 + 3) = param_3;
  return 1;
}

