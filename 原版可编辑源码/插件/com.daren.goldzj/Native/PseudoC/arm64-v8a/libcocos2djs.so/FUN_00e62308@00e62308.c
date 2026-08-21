
void FUN_00e62308(long *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  uint local_a464;
  long local_a460;
  uint local_a458 [2];
  long local_a450;
  undefined8 local_a448;
  undefined8 uStack_a440;
  undefined8 local_a438;
  undefined8 uStack_a430;
  undefined8 local_a428;
  uint local_a410;
  undefined8 local_32b8;
  undefined1 auStack_32b0 [64];
  int local_3270;
  ulong local_3268;
  int local_2888;
  ulong local_2880;
  undefined4 local_1ea0;
  uint *local_1e98;
  
  uVar8 = *(undefined8 *)(param_2 + 0xb8);
  memset(auStack_32b0,0,0x1430);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x721) = 0;
  pcVar5 = *(char **)((&PTR_DAT_01c97170)[*(uint *)(*param_1 + 8)] + 0x20);
  local_32b8 = uVar8;
  do {
    cVar1 = *pcVar5;
    if (cVar1 == '\0') goto LAB_00e623c0;
    while (cVar1 == ' ') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    pcVar5 = (char *)FUN_00e62148(pcVar5,param_1,&local_a460,local_a458);
  } while ((1 < local_a458[0]) || (local_a460 == 0));
  iVar4 = FT_Load_Glyph(param_2,local_a460,1);
  if ((iVar4 == 0) && (lVar9 = *(long *)(param_2 + 0x98), 0 < *(short *)(lVar9 + 0xca))) {
    memset(local_a458,0,0x71a0);
    local_a410 = *(uint *)(param_1 + 9);
    local_1ea0 = 0;
    uStack_a440 = 0x10000;
    local_a448 = 0x10000;
    local_a438 = 0;
    uStack_a430 = 0;
    local_a428 = 0;
    local_a450 = param_2;
    local_1e98 = local_a458;
    iVar4 = FUN_00e6266c(&local_32b8,lVar9 + 200);
    if (iVar4 == 0) {
      local_a464 = 0;
      iVar4 = FUN_00e62d8c(&local_32b8,0);
      if (iVar4 == 0) {
        FUN_00e63588(&local_32b8,0,0,0);
        if (0 < local_3270) {
          local_a464 = 0;
          uVar6 = local_3268 + (long)local_3270 * 0x50;
          do {
            uVar7 = *(ulong *)(local_3268 + 0x20);
            if ((((uVar7 != 0) && (local_3268 < uVar7)) && (local_3268 == *(ulong *)(uVar7 + 0x20)))
               && (local_a464 < 0x10)) {
              uVar3 = (ulong)local_a464;
              local_a464 = local_a464 + 1;
              lVar2 = (long)*(short *)(local_3268 + 2) - (long)*(short *)(uVar7 + 2);
              lVar9 = -lVar2;
              if (-1 < lVar2) {
                lVar9 = lVar2;
              }
              param_1[uVar3 * 3 + 0xd] = lVar9;
            }
            local_3268 = local_3268 + 0x50;
          } while (local_3268 < uVar6);
        }
        FUN_00e637c8(&local_a464,param_1 + 0xd,(ulong)local_a410 / 100);
        *(uint *)(param_1 + 0xc) = local_a464;
        local_a464 = 0;
        iVar4 = FUN_00e62d8c(&local_32b8,1);
        if (iVar4 == 0) {
          FUN_00e63588(&local_32b8,0,0,1);
          if (0 < local_2888) {
            local_a464 = 0;
            uVar6 = local_2880 + (long)local_2888 * 0x50;
            do {
              uVar7 = *(ulong *)(local_2880 + 0x20);
              if (((uVar7 != 0) && (local_2880 < uVar7)) &&
                 ((local_2880 == *(ulong *)(uVar7 + 0x20) && (local_a464 < 0x10)))) {
                uVar3 = (ulong)local_a464;
                local_a464 = local_a464 + 1;
                lVar2 = (long)*(short *)(local_2880 + 2) - (long)*(short *)(uVar7 + 2);
                lVar9 = -lVar2;
                if (-1 < lVar2) {
                  lVar9 = lVar2;
                }
                param_1[uVar3 * 3 + 0x722] = lVar9;
              }
              local_2880 = local_2880 + 0x50;
            } while (local_2880 < uVar6);
          }
          FUN_00e637c8(&local_a464,param_1 + 0x722,(ulong)local_a410 / 100);
          *(uint *)(param_1 + 0x721) = local_a464;
          iVar4 = (int)param_1[0xc];
          goto joined_r0x00e623c4;
        }
      }
    }
  }
LAB_00e623c0:
  iVar4 = (int)param_1[0xc];
joined_r0x00e623c4:
  if (iVar4 == 0) {
    uVar6 = (ulong)*(uint *)(param_1 + 9) * 0x32 >> 0xb;
  }
  else {
    uVar6 = param_1[0xd];
  }
  param_1[0x3d] = (long)uVar6 / 5;
  param_1[0x3e] = uVar6;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  if ((int)param_1[0x721] == 0) {
    uVar6 = (ulong)*(uint *)(param_1 + 9) * 0x32 >> 0xb;
  }
  else {
    uVar6 = param_1[0x722];
  }
  param_1[0x753] = uVar6;
  param_1[0x752] = (long)uVar6 / 5;
  *(undefined1 *)(param_1 + 0x754) = 0;
  FUN_00e639fc(&local_32b8);
  return;
}

