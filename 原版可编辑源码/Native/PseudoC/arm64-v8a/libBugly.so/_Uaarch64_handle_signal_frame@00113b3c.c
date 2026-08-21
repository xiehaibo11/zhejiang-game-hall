
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Uaarch64_handle_signal_frame(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_10 [8];
  long local_8;
  
  lVar5 = param_1[2];
  local_8 = ___stack_chk_guard;
  if ((lVar5 != 0) &&
     (iVar2 = (**(code **)(param_1[1] + 0x18))(param_1[1],lVar5,auStack_10,0,*param_1), -1 < iVar2))
  {
    iVar2 = _Uaarch64_is_signal_frame(param_1);
    log2Console(3,"Bugly-libunwind","unw_is_signal_frame()=%d\n",iVar2);
    param_1[0xda] = param_1[2];
    param_1[0xdb] = param_1[3];
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xd8) = 1;
      param_1[0xd9] = lVar5 + 0x130;
      param_1[0xb] = lVar5 + 0x138;
      param_1[0xd] = lVar5 + 0x140;
      param_1[0xf] = lVar5 + 0x148;
      param_1[0x11] = lVar5 + 0x150;
      param_1[0x13] = lVar5 + 0x158;
      param_1[0x15] = lVar5 + 0x160;
      param_1[0x17] = lVar5 + 0x168;
      param_1[0x19] = lVar5 + 0x170;
      param_1[0x1b] = lVar5 + 0x178;
      param_1[0x1d] = lVar5 + 0x180;
      param_1[0x1f] = lVar5 + 0x188;
      param_1[0x21] = lVar5 + 400;
      param_1[0x23] = lVar5 + 0x198;
      param_1[0x25] = lVar5 + 0x1a0;
      param_1[0x27] = lVar5 + 0x1a8;
      param_1[0x29] = lVar5 + 0x1b0;
      param_1[0xc] = 0;
      param_1[0xe] = 0;
      param_1[0x10] = 0;
      param_1[0x12] = 0;
      param_1[0x14] = 0;
      param_1[0x16] = 0;
      param_1[0x18] = 0;
      param_1[0x1a] = 0;
      lVar1 = lVar5 + 0x230;
      param_1[0x1c] = 0;
      uVar4 = lVar5 + 0x238;
      param_1[0x1e] = 0;
      param_1[0x20] = 0;
      param_1[0x22] = 0;
      param_1[0x24] = 0;
      param_1[0x26] = 0;
      param_1[0x28] = 0;
      param_1[0x2a] = 0;
      param_1[0x2b] = lVar5 + 0x1b8;
      param_1[0x2c] = 0;
      param_1[0x2d] = lVar5 + 0x1c0;
      param_1[0x2e] = 0;
      param_1[0x2f] = lVar5 + 0x1c8;
      param_1[0x30] = 0;
      param_1[0x31] = lVar5 + 0x1d0;
      param_1[0x32] = 0;
      param_1[0x33] = lVar5 + 0x1d8;
      param_1[0x34] = 0;
      param_1[0x35] = lVar5 + 0x1e0;
      param_1[0x36] = 0;
      param_1[0x37] = lVar5 + 0x1e8;
      param_1[0x38] = 0;
      param_1[0x39] = lVar5 + 0x1f0;
      param_1[0x3a] = 0;
      param_1[0x3b] = lVar5 + 0x1f8;
      param_1[0x3c] = 0;
      param_1[0x3d] = lVar5 + 0x200;
      param_1[0x3e] = 0;
      param_1[0x3f] = lVar5 + 0x208;
      param_1[0x40] = 0;
      param_1[0x41] = lVar5 + 0x210;
      param_1[0x42] = 0;
      param_1[0x43] = lVar5 + 0x218;
      param_1[0x44] = 0;
      param_1[0x45] = lVar5 + 0x220;
      param_1[0x46] = 0;
      param_1[0x47] = lVar5 + 0x228;
      param_1[0x48] = 0;
      param_1[0x49] = lVar1;
      param_1[0x4a] = 0;
      param_1[0x4b] = uVar4;
      param_1[0x4c] = 0;
      param_1[0x4d] = lVar5 + 0x240;
      param_1[0x4e] = 0;
      if (lVar1 == 0) {
        if (uVar4 != 0) {
LAB_00113dec:
          (**(code **)(param_1[1] + 0x18))(param_1[1],uVar4,param_1 + 3,0,*param_1);
          uVar3 = 1;
          *(byte *)(param_1 + 0xcd) = *(byte *)(param_1 + 0xcd) & 0xfb;
          goto LAB_00113b6c;
        }
      }
      else {
        (**(code **)(param_1[1] + 0x18))(param_1[1],lVar1,param_1 + 2,0,*param_1);
        uVar4 = param_1[0x4b];
        if (param_1[0x4c] != 0 || uVar4 != 0) {
          if (((uint)param_1[0x4c] >> 1 & 1) != 0) {
            (**(code **)(param_1[1] + 0x20))(param_1[1],uVar4 & 0xffffffff,param_1 + 3,0,*param_1);
            uVar3 = 1;
            *(byte *)(param_1 + 0xcd) = *(byte *)(param_1 + 0xcd) & 0xfb;
            goto LAB_00113b6c;
          }
          goto LAB_00113dec;
        }
      }
      uVar3 = 1;
      *(byte *)(param_1 + 0xcd) = *(byte *)(param_1 + 0xcd) & 0xfb;
      goto LAB_00113b6c;
    }
  }
  uVar3 = 0xffffffff;
LAB_00113b6c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

