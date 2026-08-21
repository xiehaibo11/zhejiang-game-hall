
void FUN_00a15a1c(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 local_3c;
  byte local_3b;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar6 = (uint)*param_3;
  if ((param_4 < 2) || (*param_3 != 0x28)) {
LAB_00a15a94:
    if ((8 < uVar6 - 0x21) && (0x47 < (uVar6 - 0x30 & 0xff))) goto LAB_00a15b34;
    if (1 < param_4) goto LAB_00a15ac8;
LAB_00a15b6c:
    uVar5 = 0xfffffffe;
  }
  else {
    if (param_3[1] - 0x21 < 0x20) {
      local_3c = 0x2b;
      local_3b = param_3[1];
      uVar5 = FUN_00a200b8(param_2,&local_3c,2);
      if ((int)uVar5 != -1) goto LAB_00a15ba4;
      uVar6 = (uint)*param_3;
      goto LAB_00a15a94;
    }
    uVar6 = 0x28;
    if (param_4 < 2) goto LAB_00a15b6c;
LAB_00a15ac8:
    if (param_3[1] - 0x21 < 0x5e) {
      iVar2 = (uint)param_3[1] + uVar6 * 0x5e;
      uVar3 = iVar2 - 0xc3f;
      if (0x581 < uVar3) {
        if (uVar3 >> 1 < 0xff9) {
          puVar7 = (ushort *)(&DAT_013132e6 + (ulong)(iVar2 - 0x11c1) * 2);
          goto LAB_00a15b24;
        }
        goto LAB_00a15b34;
      }
      if (0x33e < uVar3) goto LAB_00a15b34;
      puVar7 = (ushort *)(&DAT_01312c68 + (ulong)uVar3 * 2);
LAB_00a15b24:
      if (*puVar7 == 0xfffd) goto LAB_00a15b34;
      *param_2 = (uint)*puVar7;
    }
    else {
LAB_00a15b34:
      if (uVar6 != 0x2a) {
        uVar5 = FUN_00a200b8(param_2,param_3,param_4);
        goto LAB_00a15ba4;
      }
      if (param_4 < 2) goto LAB_00a15b6c;
      bVar1 = param_3[1];
      uVar6 = (uint)bVar1;
      if (0x5d < bVar1 - 0x21) {
        uVar5 = 0xffffffff;
        goto LAB_00a15ba4;
      }
      if (bVar1 == 0x7e) {
        uVar6 = 0x203e;
      }
      else if (bVar1 == 0x24) {
        uVar6 = 0xa5;
      }
      *param_2 = uVar6;
    }
    uVar5 = 2;
  }
LAB_00a15ba4:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

