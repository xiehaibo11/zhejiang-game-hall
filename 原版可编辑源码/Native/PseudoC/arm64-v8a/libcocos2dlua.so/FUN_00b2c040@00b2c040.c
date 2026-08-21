
ulong FUN_00b2c040(int param_1,int param_2,undefined8 *param_3,int *param_4,ulong *param_5,
                  int *param_6)

{
  uint uVar1;
  ERR_STATE *pEVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  pEVar2 = ERR_get_state();
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar4 = pEVar2->err_line[0xd];
    iVar3 = pEVar2->err_line[0xc];
    if (iVar4 == iVar3) {
      uVar5 = 0;
    }
    else {
      if (param_2 == 0) {
        uVar1 = iVar4 + 0x10;
        if (-1 < iVar4 + 1) {
          uVar1 = iVar4 + 1;
        }
        iVar3 = (iVar4 + 1) - (uVar1 & 0xfffffff0);
      }
      uVar5 = pEVar2->err_buffer[(long)iVar3 + -2];
      if (param_1 != 0) {
        pEVar2->err_line[0xd] = iVar3;
        pEVar2->err_buffer[(long)iVar3 + -2] = 0;
      }
      if ((param_3 != (undefined8 *)0x0) && (param_4 != (int *)0x0)) {
        if (pEVar2->err_file[(long)iVar3 + -2] == (char *)0x0) {
          *param_3 = &DAT_013e8b12;
          iVar4 = 0;
        }
        else {
          *param_3 = pEVar2->err_file[(long)iVar3 + -2];
          iVar4 = pEVar2->err_line[(long)iVar3 + -4];
        }
        *param_4 = iVar4;
      }
      if (param_5 == (ulong *)0x0) {
        if (param_1 == 0) {
          return uVar5;
        }
        param_6 = pEVar2->err_data_flags + (long)iVar3 + -4;
        if ((pEVar2->err_data_flags[(long)iVar3 + -4] & 1) != 0) {
          CRYPTO_free((void *)pEVar2->err_buffer[(long)iVar3 + 0xe]);
          pEVar2->err_buffer[(long)iVar3 + 0xe] = 0;
        }
      }
      else {
        if (pEVar2->err_buffer[(long)iVar3 + 0xe] != 0) {
          *param_5 = pEVar2->err_buffer[(long)iVar3 + 0xe];
          if (param_6 == (int *)0x0) {
            return uVar5;
          }
          *param_6 = pEVar2->err_data_flags[(long)iVar3 + -4];
          return uVar5;
        }
        *param_5 = (ulong)&DAT_013c996e;
        if (param_6 == (int *)0x0) {
          return uVar5;
        }
      }
      *param_6 = 0;
    }
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = &DAT_013c996e;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (ulong *)0x0) {
      *param_5 = (ulong)&DAT_013c996e;
    }
    if (param_6 == (int *)0x0) {
      uVar5 = 0x44;
    }
    else {
      *param_6 = 0;
      uVar5 = 0x44;
    }
  }
  return uVar5;
}

