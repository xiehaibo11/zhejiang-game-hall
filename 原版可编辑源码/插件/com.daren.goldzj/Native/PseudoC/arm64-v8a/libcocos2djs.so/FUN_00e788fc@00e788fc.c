
ulong FUN_00e788fc(long *param_1,byte *param_2,int param_3,long param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *local_68;
  
  local_68 = (byte *)*param_1;
  if (local_68 < param_2) {
    bVar4 = 0x7d;
    if (*local_68 != 0x7b) {
      bVar4 = 0;
    }
    bVar1 = 0x5d;
    if (*local_68 != 0x5b) {
      bVar1 = bVar4;
    }
    if (bVar1 != 0) {
      local_68 = local_68 + 1;
    }
    if (param_4 == 0) {
      uVar5 = 0;
      do {
        pbVar6 = local_68;
        if (param_2 <= local_68) break;
        for (; pbVar6 < param_2; pbVar6 = pbVar6 + 1) {
          bVar4 = *pbVar6;
          if (0x25 < bVar4) break;
          if ((1L << ((ulong)bVar4 & 0x3f) & 0x100003601U) == 0) {
            if ((ulong)bVar4 != 0x25) break;
            bVar2 = 0x25;
            while ((pbVar6 = pbVar6 + 1, bVar4 != 10 && (bVar2 != 0xd))) {
              if (param_2 <= pbVar6) goto LAB_00e78aa0;
              bVar2 = *pbVar6;
              bVar4 = bVar2;
            }
            pbVar6 = pbVar6 + -1;
          }
LAB_00e78aa0:
        }
        local_68 = pbVar6;
        if (param_2 <= pbVar6) break;
        if (*pbVar6 == bVar1) goto LAB_00e78b50;
        FUN_00e775a0(&local_68,param_2,(long)param_5);
        if (local_68 == pbVar6) goto LAB_00e78b5c;
        uVar5 = uVar5 + 1;
      } while (bVar1 != 0);
    }
    else {
      uVar5 = 0;
      do {
        pbVar6 = local_68;
        if (param_2 <= local_68) break;
        for (; pbVar6 < param_2; pbVar6 = pbVar6 + 1) {
          bVar4 = *pbVar6;
          if (0x25 < bVar4) break;
          if ((1L << ((ulong)bVar4 & 0x3f) & 0x100003601U) == 0) {
            if ((ulong)bVar4 != 0x25) break;
            bVar2 = 0x25;
            while ((pbVar6 = pbVar6 + 1, bVar4 != 10 && (bVar2 != 0xd))) {
              if (param_2 <= pbVar6) goto LAB_00e7898c;
              bVar2 = *pbVar6;
              bVar4 = bVar2;
            }
            pbVar6 = pbVar6 + -1;
          }
LAB_00e7898c:
        }
        local_68 = pbVar6;
        if (param_2 <= pbVar6) break;
        if (*pbVar6 == bVar1) goto LAB_00e78b50;
        if ((long)param_3 <= (long)uVar5) break;
        uVar3 = FUN_00e775a0(&local_68,param_2,(long)param_5);
        *(undefined8 *)(param_4 + uVar5 * 8) = uVar3;
        if (local_68 == pbVar6) goto LAB_00e78b5c;
        uVar5 = uVar5 + 1;
      } while (bVar1 != 0);
    }
  }
  else {
    uVar5 = 0;
  }
LAB_00e78a50:
  *param_1 = (long)local_68;
  return uVar5 & 0xffffffff;
LAB_00e78b50:
  local_68 = pbVar6 + 1;
  goto LAB_00e78a50;
LAB_00e78b5c:
  uVar5 = 0xffffffff;
  goto LAB_00e78a50;
}

