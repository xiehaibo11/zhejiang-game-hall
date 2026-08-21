
ulong FUN_00e42ef0(long *param_1,long param_2,char param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  uint local_38;
  byte abStack_34 [4];
  
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_2;
  lVar3 = FUN_00e1d4a0(param_2);
  param_1[1] = lVar3;
  if (param_4 == '\0') {
    uVar2 = FUN_00e1bcf8(param_2,&local_38);
    if (local_38 != 0) goto LAB_00e42fa0;
    uVar2 = uVar2 & 0xffff;
    *(undefined4 *)(param_1 + 2) = 3;
  }
  else {
    uVar2 = FUN_00e1c3a4();
    if (local_38 != 0) goto LAB_00e42fa0;
    *(undefined4 *)(param_1 + 2) = 5;
  }
  if (uVar2 == 0) {
    return 0;
  }
  bVar1 = FUN_00e1dabc(param_2,&local_38);
  if (local_38 == 0) {
    if ((byte)(bVar1 - 1) < 4) {
      lVar3 = (ulong)bVar1 * (ulong)(uVar2 + 1);
      *(byte *)(param_1 + 3) = bVar1;
      *(uint *)((long)param_1 + 0x14) = uVar2;
      param_1[4] = param_1[1] + lVar3 + (ulong)*(uint *)(param_1 + 2);
      local_38 = FUN_00e1bc6c(param_2,lVar3 - (ulong)bVar1);
      if ((local_38 != 0) ||
         (local_38 = FUN_00e1bbd0(*param_1,abStack_34,(char)param_1[3]), local_38 != 0))
      goto LAB_00e42fa0;
      uVar4 = (ulong)*(byte *)(param_1 + 3);
      if (uVar4 != 0) {
        uVar5 = 0;
        pbVar6 = abStack_34;
        do {
          uVar4 = uVar4 - 1;
          uVar5 = (ulong)*pbVar6 | uVar5 << 8;
          pbVar6 = pbVar6 + 1;
        } while (uVar4 != 0);
        local_38 = 0;
        if (uVar5 != 0) {
          param_1[5] = uVar5 - 1;
          if (param_3 == '\0') {
            uVar4 = FUN_00e1bc6c(param_2);
            local_38 = (uint)uVar4;
          }
          else {
            uVar4 = FUN_00e1d5c4(param_2,uVar5 - 1,param_1 + 7);
            local_38 = (uint)uVar4;
          }
          if (local_38 == 0) {
            return uVar4;
          }
          goto LAB_00e42fa0;
        }
      }
    }
    local_38 = 8;
  }
LAB_00e42fa0:
  FUN_00e139fc(uVar7,param_1[6]);
  param_1[6] = 0;
  return (ulong)local_38;
}

