
/* WARNING: Removing unreachable block (ram,0x00e7875c) */
/* WARNING: Removing unreachable block (ram,0x00e78770) */

undefined8 FUN_00e785c4(long *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  byte *local_38;
  
  local_38 = (byte *)*param_1;
  if (param_2 <= local_38) {
    uVar3 = 0;
    goto LAB_00e787c8;
  }
  iVar6 = 0;
LAB_00e7860c:
  bVar5 = *local_38;
  uVar3 = 0;
  if (bVar5 < 0x3c) {
    if (bVar5 == 0x25) {
      bVar5 = 0x25;
      local_38 = local_38 + 1;
      do {
        pbVar4 = local_38;
        if (bVar5 == 0xd) break;
        if (param_2 <= local_38) goto LAB_00e7879c;
        pbVar4 = local_38 + 1;
        bVar5 = *local_38;
        local_38 = pbVar4;
      } while (bVar5 != 10);
      local_38 = pbVar4 + -1;
LAB_00e7879c:
      uVar3 = 0;
    }
    else if (bVar5 == 0x28) {
      uVar3 = FUN_00e787ec(&local_38,param_2);
      local_38 = local_38 + 1;
      if ((int)uVar3 == 0) goto LAB_00e787b0;
      goto LAB_00e787b8;
    }
  }
  else {
    if (bVar5 == 0x3c) {
      while (local_38 = local_38 + 1, local_38 < param_2) {
        do {
          while( true ) {
            bVar5 = *local_38;
            if (0x25 < bVar5) goto LAB_00e786c8;
            if ((1L << ((ulong)bVar5 & 0x3f) & 0x100003601U) == 0) break;
LAB_00e78668:
            local_38 = local_38 + 1;
            if (param_2 <= local_38) goto LAB_00e786c8;
          }
          if ((ulong)bVar5 != 0x25) break;
          bVar1 = 0x25;
          while ((local_38 = local_38 + 1, bVar5 != 10 && (bVar1 != 0xd))) {
            if (param_2 <= local_38) goto LAB_00e78668;
            bVar1 = *local_38;
            bVar5 = bVar1;
          }
        } while (local_38 < param_2);
LAB_00e786c8:
        if ((param_2 <= local_38) ||
           ((9 < *local_38 - 0x30 &&
            ((uVar2 = *local_38 - 0x41, 0x25 < uVar2 ||
             ((1L << ((ulong)uVar2 & 0x3f) & 0x3f0000003fU) == 0)))))) break;
      }
      if ((local_38 < param_2) && (*local_38 != 0x3e)) {
        uVar3 = 3;
      }
      else {
        uVar3 = 0;
        local_38 = local_38 + 1;
      }
      goto LAB_00e787a4;
    }
    if (bVar5 == 0x7b) {
      uVar3 = 0;
      iVar6 = iVar6 + 1;
      local_38 = local_38 + 1;
      goto LAB_00e787b0;
    }
    if (bVar5 == 0x7d) {
      uVar3 = 0;
      iVar6 = iVar6 + -1;
      if (iVar6 != 0) goto LAB_00e787a4;
      local_38 = local_38 + 1;
      goto LAB_00e787c8;
    }
  }
LAB_00e787a4:
  local_38 = local_38 + 1;
  if ((int)uVar3 != 0) goto LAB_00e787b8;
LAB_00e787b0:
  if (param_2 <= local_38) goto LAB_00e787b8;
  goto LAB_00e7860c;
LAB_00e787b8:
  if (iVar6 != 0) {
    uVar3 = 3;
  }
LAB_00e787c8:
  *param_1 = (long)local_38;
  return uVar3;
}

