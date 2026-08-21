
/* WARNING: Type propagation algorithm not settling */

void FUN_00e72cdc(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  byte *local_48;
  
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  pbVar5 = (byte *)param_1[2];
  local_48 = (byte *)*param_1;
  while (local_48 < pbVar5) {
    bVar2 = *local_48;
    if (0x25 < bVar2) break;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar2 != 0x25) break;
      bVar1 = 0x25;
      while ((local_48 = local_48 + 1, bVar2 != 10 && (bVar1 != 0xd))) {
        if (pbVar5 <= local_48) goto LAB_00e72d38;
        bVar1 = *local_48;
        bVar2 = bVar1;
      }
    }
    else {
LAB_00e72d38:
      local_48 = local_48 + 1;
    }
  }
  *param_1 = (long)local_48;
  if (pbVar5 <= local_48) {
    return;
  }
  bVar2 = *local_48;
  if (bVar2 == 0x7b) {
    *(undefined4 *)(param_2 + 2) = 3;
    *param_2 = local_48;
    iVar3 = FUN_00e785c4(&local_48,pbVar5);
joined_r0x00e72dfc:
    if (iVar3 == 0) {
      param_2[1] = local_48;
      pbVar5 = local_48;
      goto joined_r0x00e72fd4;
    }
  }
  else {
    if (bVar2 != 0x5b) {
      if (bVar2 == 0x28) {
        *(undefined4 *)(param_2 + 2) = 2;
        *param_2 = local_48;
        iVar3 = FUN_00e787ec(&local_48,pbVar5);
      }
      else {
        *param_2 = local_48;
        uVar4 = 4;
        if (*local_48 != 0x2f) {
          uVar4 = 1;
        }
        *(undefined4 *)(param_2 + 2) = uVar4;
        FUN_00e71d34(param_1);
        local_48 = (byte *)*param_1;
        iVar3 = (int)param_1[3];
      }
      goto joined_r0x00e72dfc;
    }
    *(undefined4 *)(param_2 + 2) = 3;
    *param_2 = local_48;
    *param_1 = (long)(local_48 + 1);
    local_48 = local_48 + 1;
    while (local_48 < pbVar5) {
      bVar2 = *local_48;
      if (0x25 < bVar2) break;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100003601U) == 0) {
        if ((ulong)bVar2 != 0x25) break;
        bVar1 = 0x25;
        while ((local_48 = local_48 + 1, bVar2 != 10 && (bVar1 != 0xd))) {
          if (pbVar5 <= local_48) goto LAB_00e72e4c;
          bVar1 = *local_48;
          bVar2 = bVar1;
        }
      }
      else {
LAB_00e72e4c:
        local_48 = local_48 + 1;
      }
    }
    *param_1 = (long)local_48;
    if (local_48 < pbVar5) {
      iVar3 = 1;
      do {
        if ((int)param_1[3] != 0) break;
        if (*local_48 == 0x5d) {
          iVar6 = iVar3 + -1;
          if (iVar6 == 0 || iVar3 < 1) {
            local_48 = local_48 + 1;
            param_2[1] = local_48;
            goto LAB_00e72fec;
          }
        }
        else {
          iVar6 = iVar3;
          if (*local_48 == 0x5b) {
            iVar6 = iVar3 + 1;
          }
        }
        *param_1 = (long)local_48;
        FUN_00e71d34(param_1);
        local_48 = (byte *)*param_1;
        while (local_48 < (byte *)param_1[2]) {
          bVar2 = *local_48;
          if (0x25 < bVar2) break;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100003601U) == 0) {
            if ((ulong)bVar2 != 0x25) break;
            bVar1 = 0x25;
            while ((local_48 = local_48 + 1, bVar2 != 10 && (bVar1 != 0xd))) {
              if ((byte *)param_1[2] <= local_48) goto LAB_00e72f2c;
              bVar1 = *local_48;
              bVar2 = bVar1;
            }
          }
          else {
LAB_00e72f2c:
            local_48 = local_48 + 1;
          }
        }
        *param_1 = (long)local_48;
        iVar3 = iVar6;
      } while (local_48 < pbVar5);
    }
  }
  pbVar5 = (byte *)param_2[1];
joined_r0x00e72fd4:
  if (pbVar5 == (byte *)0x0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 2) = 0;
  }
LAB_00e72fec:
  *param_1 = (long)local_48;
  return;
}

