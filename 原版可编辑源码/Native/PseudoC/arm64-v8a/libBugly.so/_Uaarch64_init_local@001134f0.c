
undefined8 _Uaarch64_init_local(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar5;
  undefined8 *puVar4;
  
  if (DAT_00176330 == 0) {
    FUN_00114120();
  }
  log2Console(3,"Bugly-libunwind","(cursor=%p)\n",param_1);
  param_1[0xd] = 1;
  param_1[0x11] = 3;
  param_1[0x13] = 4;
  param_1[0x15] = 5;
  param_1[0x17] = 6;
  param_1[0x19] = 7;
  param_1[0x1b] = 8;
  param_1[0x1d] = 9;
  param_1[0x1f] = 10;
  param_1[0x21] = 0xb;
  param_1[0x23] = 0xc;
  puVar1 = _Uaarch64_local_addr_space;
  param_1[0x25] = 0xd;
  param_1[0xb] = 0;
  param_1[0x27] = 0xe;
  param_1[0xc] = 2;
  param_1[1] = puVar1;
  *param_1 = param_2;
  param_1[0xe] = 2;
  param_1[0xf] = 2;
  param_1[0x10] = 2;
  param_1[0x12] = 2;
  param_1[0x14] = 2;
  param_1[0x16] = 2;
  param_1[0x18] = 2;
  param_1[0x1a] = 2;
  param_1[0x1c] = 2;
  param_1[0x1e] = 2;
  param_1[0x20] = 2;
  param_1[0x22] = 2;
  param_1[0x24] = 2;
  param_1[0x26] = 2;
  param_1[0x28] = 2;
  param_1[0x29] = 0xf;
  param_1[0x2b] = 0x10;
  param_1[0x2d] = 0x11;
  param_1[0x2f] = 0x12;
  param_1[0x31] = 0x13;
  param_1[0x33] = 0x14;
  param_1[0x35] = 0x15;
  param_1[0x37] = 0x16;
  param_1[0x39] = 0x17;
  param_1[0x3b] = 0x18;
  param_1[0x3d] = 0x19;
  param_1[0x3f] = 0x1a;
  param_1[0x47] = 0x1e;
  param_1[0x41] = 0x1b;
  param_1[0x49] = 0x1f;
  param_1[0x43] = 0x1c;
  param_1[0x2a] = 2;
  param_1[0x45] = 0x1d;
  param_1[0x2c] = 2;
  param_1[0x2e] = 2;
  param_1[0x30] = 2;
  param_1[0x32] = 2;
  param_1[0x34] = 2;
  param_1[0x36] = 2;
  param_1[0x38] = 2;
  param_1[0x3a] = 2;
  param_1[0x3c] = 2;
  param_1[0x3e] = 2;
  param_1[0x40] = 2;
  param_1[0x42] = 2;
  param_1[0x44] = 2;
  param_1[0x46] = 2;
  param_1[0x48] = 2;
  param_1[0x4a] = 2;
  param_1[0x4b] = 0x20;
  param_1[0x4d] = 0x21;
  param_1[0x8b] = 0x40;
  param_1[0x8d] = 0x41;
  param_1[0x8f] = 0x42;
  param_1[0x91] = 0x43;
  param_1[0x93] = 0x44;
  param_1[0x95] = 0x45;
  param_1[0x97] = 0x46;
  param_1[0x99] = 0x47;
  param_1[0x9b] = 0x48;
  param_1[0x9d] = 0x49;
  param_1[0x9f] = 0x4a;
  param_1[0xa1] = 0x4b;
  param_1[0xa3] = 0x4c;
  param_1[0xa5] = 0x4d;
  param_1[0x4c] = 2;
  param_1[0xa7] = 0x4e;
  param_1[0x4e] = 2;
  param_1[0x8c] = 2;
  param_1[0x8e] = 2;
  param_1[0x90] = 2;
  param_1[0x92] = 2;
  param_1[0x94] = 2;
  param_1[0x96] = 2;
  param_1[0x98] = 2;
  param_1[0x9a] = 2;
  param_1[0x9c] = 2;
  param_1[0x9e] = 2;
  param_1[0xa0] = 2;
  param_1[0xa2] = 2;
  param_1[0xa4] = 2;
  param_1[0xa6] = 2;
  param_1[0xa8] = 2;
  param_1[0xa9] = 0x4f;
  param_1[0xab] = 0x50;
  param_1[0xad] = 0x51;
  param_1[0xaf] = 0x52;
  param_1[0xb1] = 0x53;
  param_1[0xb3] = 0x54;
  param_1[0xb5] = 0x55;
  param_1[0xb7] = 0x56;
  param_1[0xb9] = 0x57;
  param_1[0xbb] = 0x58;
  param_1[0xbd] = 0x59;
  param_1[0xbf] = 0x5a;
  param_1[0xc1] = 0x5b;
  param_1[0xc3] = 0x5c;
  param_1[0xc5] = 0x5d;
  param_1[0xaa] = 2;
  param_1[199] = 0x5e;
  param_1[0xac] = 2;
  param_1[0xae] = 2;
  param_1[0xb0] = 2;
  param_1[0xb2] = 2;
  param_1[0xb4] = 2;
  param_1[0xb6] = 2;
  param_1[0xb8] = 2;
  param_1[0xba] = 2;
  param_1[0xbc] = 2;
  param_1[0xbe] = 2;
  param_1[0xc0] = 2;
  param_1[0xc2] = 2;
  param_1[0xc4] = 2;
  param_1[0xc6] = 2;
  param_1[200] = 2;
  param_1[0xc9] = 0x5f;
  param_1[0xca] = 2;
  puVar3 = param_1 + 0x4f;
  do {
    puVar4 = puVar3 + 2;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3 = puVar4;
  } while (puVar4 != param_1 + 0x8b);
  if (param_1[0x4c] != 0 || param_1[0x4b] != 0) {
    if (((uint)param_1[0x4c] >> 1 & 1) == 0) {
      uVar2 = (**(code **)(puVar1 + 0x18))();
    }
    else {
      uVar2 = (**(code **)(puVar1 + 0x20))(puVar1,param_1[0x4b],param_1 + 3,0,param_2);
    }
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    lVar5 = param_1[0x49];
    if (param_1[0x4a] != 0 || lVar5 != 0) {
      if (((uint)param_1[0x4a] >> 1 & 1) == 0) {
        uVar2 = (**(code **)(param_1[1] + 0x18))(param_1[1],lVar5,param_1 + 2,0,*param_1);
      }
      else {
        uVar2 = (**(code **)(param_1[1] + 0x20))(param_1[1],lVar5,param_1 + 2,0,*param_1);
      }
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *(undefined4 *)(param_1 + 0xd8) = 0;
      param_1[0xd9] = 0;
      param_1[0xda] = 0;
      param_1[0xdb] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(byte *)(param_1 + 0xcd) = *(byte *)(param_1 + 0xcd) & 0xf0 | 2;
      *(undefined2 *)(param_1 + 0xd7) = 0;
      *(undefined2 *)((long)param_1 + 0x6ba) = 0;
      *(undefined4 *)((long)param_1 + 0x54) = 0;
      return 0;
    }
  }
  return 0xfffffffd;
}

