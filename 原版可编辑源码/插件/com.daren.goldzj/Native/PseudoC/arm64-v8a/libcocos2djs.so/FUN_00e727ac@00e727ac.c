
ulong FUN_00e727ac(long *param_1,int param_2,undefined2 *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  byte bVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *local_58;
  
  pbVar6 = (byte *)param_1[2];
  pbVar8 = (byte *)*param_1;
  while (pbVar8 < pbVar6) {
    bVar5 = *pbVar8;
    if (0x25 < bVar5) break;
    if ((1L << ((ulong)bVar5 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar5 != 0x25) break;
      bVar2 = 0x25;
      while ((pbVar8 = pbVar8 + 1, bVar5 != 10 && (bVar2 != 0xd))) {
        if (pbVar6 <= pbVar8) goto LAB_00e72804;
        bVar5 = *pbVar8;
        bVar2 = bVar5;
      }
    }
    else {
LAB_00e72804:
      pbVar8 = pbVar8 + 1;
    }
  }
  *param_1 = (long)pbVar8;
  if (pbVar8 < pbVar6) {
    bVar5 = 0x7d;
    if (*pbVar8 != 0x7b) {
      bVar5 = 0;
    }
    bVar2 = 0x5d;
    if (*pbVar8 != 0x5b) {
      bVar2 = bVar5;
    }
    if (bVar2 != 0) {
      pbVar8 = pbVar8 + 1;
    }
    bVar4 = pbVar8 < pbVar6;
    if (param_3 == (undefined2 *)0x0) {
      if (bVar2 == 0) {
        if (bVar4) {
          while (pbVar8 < pbVar6) {
            bVar5 = *pbVar8;
            if (0x25 < bVar5) break;
            if ((1L << ((ulong)bVar5 & 0x3f) & 0x100003601U) == 0) {
              if ((ulong)bVar5 != 0x25) break;
              bVar2 = 0x25;
              while ((pbVar8 = pbVar8 + 1, bVar5 != 10 && (bVar2 != 0xd))) {
                if (pbVar6 <= pbVar8) goto LAB_00e72b54;
                bVar5 = *pbVar8;
                bVar2 = bVar5;
              }
            }
            else {
LAB_00e72b54:
              pbVar8 = pbVar8 + 1;
            }
          }
          if (pbVar8 < pbVar6) {
            if (*pbVar8 != 0) {
              local_58 = pbVar8;
              FUN_00e775a0(&local_58,pbVar6,0);
LAB_00e72bd0:
              uVar1 = 1;
              if (local_58 == pbVar8) {
                uVar1 = 0xffffffff;
              }
              uVar7 = (ulong)uVar1;
              goto LAB_00e72bec;
            }
LAB_00e72c20:
            uVar7 = 0;
LAB_00e72c24:
            local_58 = pbVar8 + 1;
            goto LAB_00e72bec;
          }
          goto LAB_00e72c10;
        }
      }
      else if (bVar4) {
        uVar7 = 0;
joined_r0x00e729a4:
        do {
          if (pbVar8 < pbVar6) {
            bVar5 = *pbVar8;
            if (bVar5 < 0x26) {
              if ((1L << ((ulong)bVar5 & 0x3f) & 0x100003601U) != 0) {
LAB_00e729c0:
                pbVar8 = pbVar8 + 1;
                goto joined_r0x00e729a4;
              }
              if ((ulong)bVar5 == 0x25) {
                bVar3 = 0x25;
                while ((pbVar8 = pbVar8 + 1, bVar5 != 10 && (bVar3 != 0xd))) {
                  if (pbVar6 <= pbVar8) goto LAB_00e729c0;
                  bVar5 = *pbVar8;
                  bVar3 = bVar5;
                }
                goto joined_r0x00e729a4;
              }
            }
          }
          local_58 = pbVar8;
          if (pbVar6 <= pbVar8) break;
          if (*pbVar8 == bVar2) goto LAB_00e72c24;
          FUN_00e775a0(&local_58,pbVar6,0);
          if (local_58 == pbVar8) goto LAB_00e72c18;
          uVar7 = uVar7 + 1;
          pbVar8 = local_58;
        } while (local_58 < pbVar6);
        goto LAB_00e72bec;
      }
    }
    else if (bVar2 == 0) {
      if (bVar4) {
        while (pbVar8 < pbVar6) {
          bVar5 = *pbVar8;
          if (0x25 < bVar5) break;
          if ((1L << ((ulong)bVar5 & 0x3f) & 0x100003601U) == 0) {
            if ((ulong)bVar5 != 0x25) break;
            bVar2 = 0x25;
            while ((pbVar8 = pbVar8 + 1, bVar5 != 10 && (bVar2 != 0xd))) {
              if (pbVar6 <= pbVar8) goto LAB_00e72a94;
              bVar5 = *pbVar8;
              bVar2 = bVar5;
            }
          }
          else {
LAB_00e72a94:
            pbVar8 = pbVar8 + 1;
          }
        }
        if (pbVar8 < pbVar6) {
          if (*pbVar8 == 0) goto LAB_00e72c20;
          if (0 < param_2) {
            local_58 = pbVar8;
            FUN_00e775a0(&local_58,pbVar6,0);
            *param_3 = extraout_var_00;
            goto LAB_00e72bd0;
          }
        }
LAB_00e72c10:
        uVar7 = 0;
        local_58 = pbVar8;
        goto LAB_00e72bec;
      }
    }
    else if (bVar4) {
      uVar7 = 0;
joined_r0x00e728bc:
      do {
        if (pbVar8 < pbVar6) {
          bVar5 = *pbVar8;
          if (bVar5 < 0x26) {
            if ((1L << ((ulong)bVar5 & 0x3f) & 0x100003601U) != 0) {
LAB_00e728d8:
              pbVar8 = pbVar8 + 1;
              goto joined_r0x00e728bc;
            }
            if ((ulong)bVar5 == 0x25) {
              bVar3 = 0x25;
              while ((pbVar8 = pbVar8 + 1, bVar5 != 10 && (bVar3 != 0xd))) {
                if (pbVar6 <= pbVar8) goto LAB_00e728d8;
                bVar5 = *pbVar8;
                bVar3 = bVar5;
              }
              goto joined_r0x00e728bc;
            }
          }
        }
        local_58 = pbVar8;
        if (pbVar6 <= pbVar8) break;
        if (*pbVar8 == bVar2) goto LAB_00e72c24;
        if ((long)param_2 <= (long)uVar7) break;
        FUN_00e775a0(&local_58,pbVar6,0);
        param_3[uVar7] = extraout_var;
        if (local_58 == pbVar8) goto LAB_00e72c18;
        uVar7 = uVar7 + 1;
        pbVar8 = local_58;
      } while (local_58 < pbVar6);
      goto LAB_00e72bec;
    }
  }
  uVar7 = 0;
  local_58 = pbVar8;
LAB_00e72bec:
  *param_1 = (long)local_58;
  return uVar7 & 0xffffffff;
LAB_00e72c18:
  uVar7 = 0xffffffff;
  local_58 = pbVar8;
  goto LAB_00e72bec;
}

