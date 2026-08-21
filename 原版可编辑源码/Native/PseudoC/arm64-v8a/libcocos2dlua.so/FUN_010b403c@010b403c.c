
ulong FUN_010b403c(long *param_1,int param_2,undefined2 *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *local_68;
  
  pbVar4 = (byte *)param_1[2];
  pbVar6 = (byte *)*param_1;
  do {
    if ((pbVar4 <= pbVar6) || (bVar3 = *pbVar6, 0x25 < bVar3)) break;
    if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar3 != 0x25) break;
      bVar3 = 0x25;
      while (((pbVar7 = pbVar6 + 1, bVar3 != 10 && (bVar3 != 0xd)) &&
             (pbVar6 = pbVar7, pbVar7 < pbVar4))) {
        bVar3 = *pbVar7;
      }
    }
    pbVar6 = pbVar6 + 1;
  } while( true );
  *param_1 = (long)pbVar6;
  if (pbVar6 < pbVar4) {
    bVar3 = 0x7d;
    if (*pbVar6 != 0x7b) {
      bVar3 = 0;
    }
    bVar2 = 0x5d;
    if (*pbVar6 != 0x5b) {
      bVar2 = bVar3;
    }
    if (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
    }
    if (param_3 == (undefined2 *)0x0) {
      if (bVar2 == 0) {
        if (pbVar6 < pbVar4) {
          do {
            if ((pbVar4 <= pbVar6) || (bVar3 = *pbVar6, 0x25 < bVar3)) goto LAB_010b441c;
            if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003601U) == 0) {
              if ((ulong)bVar3 != 0x25) goto LAB_010b441c;
              bVar3 = 0x25;
              while (((pbVar7 = pbVar6 + 1, bVar3 != 10 && (bVar3 != 0xd)) &&
                     (pbVar6 = pbVar7, pbVar7 < pbVar4))) {
                bVar3 = *pbVar7;
              }
            }
            pbVar6 = pbVar6 + 1;
          } while( true );
        }
      }
      else if (pbVar6 < pbVar4) {
        uVar5 = 0;
        do {
          for (; (pbVar6 < pbVar4 && (bVar3 = *pbVar6, bVar3 < 0x26)); pbVar6 = pbVar6 + 1) {
            if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003601U) == 0) {
              if ((ulong)bVar3 != 0x25) break;
              bVar3 = 0x25;
              while (((pbVar7 = pbVar6 + 1, bVar3 != 10 && (bVar3 != 0xd)) &&
                     (pbVar6 = pbVar7, pbVar7 < pbVar4))) {
                bVar3 = *pbVar7;
              }
            }
          }
          local_68 = pbVar6;
          if (pbVar4 <= pbVar6) break;
          if (*pbVar6 == bVar2) goto LAB_010b4494;
          FUN_010b9170(&local_68,pbVar4,0);
          if (local_68 == pbVar6) goto LAB_010b4484;
          uVar5 = uVar5 + 1;
          pbVar6 = local_68;
        } while (local_68 < pbVar4);
        goto LAB_010b445c;
      }
    }
    else if (bVar2 == 0) {
      if (pbVar6 < pbVar4) {
        do {
          if ((pbVar4 <= pbVar6) || (bVar3 = *pbVar6, 0x25 < bVar3)) goto LAB_010b435c;
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003601U) == 0) {
            if ((ulong)bVar3 != 0x25) goto LAB_010b435c;
            bVar3 = 0x25;
            while (((pbVar7 = pbVar6 + 1, bVar3 != 10 && (bVar3 != 0xd)) &&
                   (pbVar6 = pbVar7, pbVar7 < pbVar4))) {
              bVar3 = *pbVar7;
            }
          }
          pbVar6 = pbVar6 + 1;
        } while( true );
      }
    }
    else if (pbVar6 < pbVar4) {
      uVar5 = 0;
      do {
        for (; (pbVar6 < pbVar4 && (bVar3 = *pbVar6, bVar3 < 0x26)); pbVar6 = pbVar6 + 1) {
          if ((1L << ((ulong)bVar3 & 0x3f) & 0x100003601U) == 0) {
            if ((ulong)bVar3 != 0x25) break;
            bVar3 = 0x25;
            while (((pbVar7 = pbVar6 + 1, bVar3 != 10 && (bVar3 != 0xd)) &&
                   (pbVar6 = pbVar7, pbVar7 < pbVar4))) {
              bVar3 = *pbVar7;
            }
          }
        }
        local_68 = pbVar6;
        if (pbVar4 <= pbVar6) break;
        if (*pbVar6 == bVar2) goto LAB_010b4494;
        if ((long)param_2 <= (long)uVar5) break;
        FUN_010b9170(&local_68,pbVar4,0);
        param_3[uVar5] = extraout_var;
        if (local_68 == pbVar6) goto LAB_010b4484;
        uVar5 = uVar5 + 1;
        pbVar6 = local_68;
      } while (local_68 < pbVar4);
      goto LAB_010b445c;
    }
  }
  goto LAB_010b4458;
LAB_010b441c:
  if (pbVar6 < pbVar4) {
    if (*pbVar6 != 0) {
      local_68 = pbVar6;
      FUN_010b9170(&local_68,pbVar4,0);
LAB_010b4440:
      uVar1 = 1;
      if (local_68 == pbVar6) {
        uVar1 = 0xffffffff;
      }
      uVar5 = (ulong)uVar1;
      goto LAB_010b445c;
    }
LAB_010b448c:
    uVar5 = 0;
LAB_010b4494:
    local_68 = pbVar6 + 1;
    goto LAB_010b445c;
  }
  goto LAB_010b4458;
LAB_010b4484:
  uVar5 = 0xffffffff;
  goto LAB_010b445c;
LAB_010b435c:
  if (pbVar6 < pbVar4) {
    if (*pbVar6 == 0) goto LAB_010b448c;
    if (0 < param_2) {
      local_68 = pbVar6;
      FUN_010b9170(&local_68,pbVar4,0);
      *param_3 = extraout_var_00;
      goto LAB_010b4440;
    }
  }
LAB_010b4458:
  uVar5 = 0;
  local_68 = pbVar6;
LAB_010b445c:
  *param_1 = (long)local_68;
  return uVar5 & 0xffffffff;
}

