
void _Uaarch64_handle_signal_frame(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar6 = param_1[2];
  if ((lVar6 != 0) &&
     (iVar2 = (**(code **)(param_1[1] + 0x18))(param_1[1],lVar6,auStack_70,0,*param_1), -1 < iVar2))
  {
    iVar2 = _Uaarch64_is_signal_frame(param_1);
    log2Console(3,"Bugly-libunwind","unw_is_signal_frame()=%d\n",iVar2);
    param_1[0xdb] = param_1[3];
    param_1[0xda] = param_1[2];
    if (iVar2 != 0) {
      param_1[0xb] = lVar6 + 0x138;
      param_1[0xc] = 0;
      param_1[0xd9] = lVar6 + 0x130;
      param_1[0xd] = lVar6 + 0x140;
      param_1[0xe] = 0;
      param_1[0x41] = lVar6 + 0x210;
      param_1[0x43] = lVar6 + 0x218;
      param_1[0xf] = lVar6 + 0x148;
      param_1[0x10] = 0;
      param_1[0x45] = lVar6 + 0x220;
      param_1[0x11] = lVar6 + 0x150;
      param_1[0x12] = 0;
      *(undefined4 *)(param_1 + 0xd8) = 1;
      param_1[0x47] = lVar6 + 0x228;
      lVar5 = lVar6 + 0x230;
      param_1[0x42] = 0;
      param_1[0x44] = 0;
      param_1[0x46] = 0;
      param_1[0x48] = 0;
      param_1[0x4a] = 0;
      param_1[0x4c] = 0;
      param_1[0x13] = lVar6 + 0x158;
      param_1[0x14] = 0;
      param_1[0x15] = lVar6 + 0x160;
      param_1[0x16] = 0;
      param_1[0x17] = lVar6 + 0x168;
      param_1[0x18] = 0;
      param_1[0x19] = lVar6 + 0x170;
      param_1[0x1a] = 0;
      param_1[0x1b] = lVar6 + 0x178;
      param_1[0x1c] = 0;
      param_1[0x1d] = lVar6 + 0x180;
      param_1[0x1e] = 0;
      param_1[0x1f] = lVar6 + 0x188;
      param_1[0x20] = 0;
      param_1[0x21] = lVar6 + 400;
      param_1[0x22] = 0;
      param_1[0x23] = lVar6 + 0x198;
      param_1[0x24] = 0;
      param_1[0x25] = lVar6 + 0x1a0;
      param_1[0x26] = 0;
      param_1[0x27] = lVar6 + 0x1a8;
      param_1[0x28] = 0;
      param_1[0x29] = lVar6 + 0x1b0;
      param_1[0x2a] = 0;
      param_1[0x2b] = lVar6 + 0x1b8;
      param_1[0x2c] = 0;
      param_1[0x2d] = lVar6 + 0x1c0;
      param_1[0x2e] = 0;
      param_1[0x2f] = lVar6 + 0x1c8;
      param_1[0x30] = 0;
      param_1[0x31] = lVar6 + 0x1d0;
      param_1[0x32] = 0;
      param_1[0x33] = lVar6 + 0x1d8;
      param_1[0x34] = 0;
      param_1[0x35] = lVar6 + 0x1e0;
      param_1[0x36] = 0;
      param_1[0x37] = lVar6 + 0x1e8;
      param_1[0x38] = 0;
      param_1[0x39] = lVar6 + 0x1f0;
      param_1[0x3a] = 0;
      param_1[0x3b] = lVar6 + 0x1f8;
      param_1[0x3c] = 0;
      param_1[0x3d] = lVar6 + 0x200;
      param_1[0x3e] = 0;
      param_1[0x3f] = lVar6 + 0x208;
      param_1[0x40] = 0;
      param_1[0x49] = lVar5;
      param_1[0x4b] = lVar6 + 0x238;
      param_1[0x4d] = lVar6 + 0x240;
      param_1[0x4e] = 0;
      if (lVar5 == 0) {
        lVar5 = 0;
        lVar6 = 8;
LAB_001179d8:
        lVar3 = param_1[1];
        if (((uint)lVar5 >> 1 & 1) == 0) {
          (**(code **)(lVar3 + 0x18))();
        }
        else {
          (**(code **)(lVar3 + 0x20))(lVar3,lVar6,param_1 + 3,0,*param_1);
        }
      }
      else {
        (**(code **)(param_1[1] + 0x18))(param_1[1],lVar5,param_1 + 2,0,*param_1);
        lVar6 = param_1[0x4b];
        lVar5 = param_1[0x4c];
        if (lVar5 != 0 || lVar6 != 0) goto LAB_001179d8;
      }
      uVar4 = 1;
      *(byte *)(param_1 + 0xcd) = *(byte *)(param_1 + 0xcd) & 0xfb;
      goto LAB_00117a18;
    }
  }
  uVar4 = 0xffffffff;
LAB_00117a18:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

