
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__handle_type(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  socklen_t local_94 [3];
  sockaddr local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_94[0] = 0x80;
  local_88.sa_family = 0;
  local_88.sa_data[0] = '\0';
  local_88.sa_data[1] = '\0';
  local_88.sa_data[2] = '\0';
  local_88.sa_data[3] = '\0';
  local_88.sa_data[4] = '\0';
  local_88.sa_data[5] = '\0';
  local_88.sa_data[6] = '\0';
  local_88.sa_data[7] = '\0';
  local_88.sa_data[8] = '\0';
  local_88.sa_data[9] = '\0';
  local_88.sa_data[10] = '\0';
  local_88.sa_data[0xb] = '\0';
  local_88.sa_data[0xc] = '\0';
  local_88.sa_data[0xd] = '\0';
  local_8 = ___stack_chk_guard;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  iVar1 = getsockname(param_1,&local_88,local_94);
  if (iVar1 == 0) {
    local_94[1] = 4;
    iVar1 = getsockopt(param_1,1,3,local_94 + 2,local_94 + 1);
    if (iVar1 == 0) {
      if (local_94[2] == 1) {
        if ((local_88.sa_family == 2) || (local_88.sa_family == 10)) {
          uVar2 = 0xc;
        }
        else {
          uVar2 = 7;
          if (local_88.sa_family != 1) {
            uVar2 = 0;
          }
        }
      }
      else {
        uVar2 = 0;
        if ((local_94[2] == 2) && (uVar2 = 0, (local_88.sa_family & 0xfff7) == 2)) {
          uVar2 = 0xf;
        }
      }
      goto LAB_00bf2f84;
    }
  }
  uVar2 = 0;
LAB_00bf2f84:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

