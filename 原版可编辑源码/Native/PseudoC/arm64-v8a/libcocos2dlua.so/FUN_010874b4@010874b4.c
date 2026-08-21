
int FUN_010874b4(byte *param_1,undefined8 *param_2,undefined4 param_3,long param_4,long param_5,
                undefined8 param_6)

{
  byte *__s;
  int iVar1;
  long lVar2;
  long local_3a8;
  undefined8 local_3a0;
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [776];
  undefined1 *local_78;
  undefined4 local_70;
  byte *local_68;
  long local_58;
  
  local_58 = 0;
  memset(auStack_398,0,0x330);
  local_70 = 0x1000;
  local_3a0 = param_6;
  local_78 = auStack_380;
  local_68 = param_1;
  memset(param_1 + 0x18,0,0x120);
  param_1[8] = 0xff;
  param_1[9] = 0xff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xff;
  param_1[0xd] = 0xff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0] = 0xff;
  param_1[1] = 0xff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xff;
  param_1[5] = 0xff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x3c] = 2;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 1;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x110] = 0x10;
  param_1[0x111] = 0x22;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x10] = 0xff;
  param_1[0x11] = 0xff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0xff;
  param_1[0x15] = 0xff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0xe0] = 0xff;
  param_1[0xe1] = 0xff;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0xff;
  param_1[0xe5] = 0xff;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0xff;
  param_1[0xe9] = 0xff;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(char **)(param_1 + 0x30) = "tonAnimationi11spEventTypeP12spTrackEntryP7spEvent";
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x9c;
  param_1[0x2b] = 0xff;
  param_1[0x2c] = 0xff;
  param_1[0x2d] = 0xff;
  param_1[0x2e] = 0xff;
  param_1[0x2f] = 0xff;
  param_1[0x130] = 0xff;
  param_1[0x131] = 0xff;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  iVar1 = FUN_01080bdc(param_2,param_3,&local_58,&local_3a8);
  if (iVar1 == 0) {
    iVar1 = FUN_01087720(&local_3a0,local_58,local_58 + local_3a8);
    lVar2 = param_2[6];
  }
  else {
    lVar2 = param_2[6];
  }
  if (lVar2 == 0) {
    FT_Stream_ReleaseFrame(*param_2,&local_58);
  }
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*(int *)(param_1 + 0xe4) == 0xffff) {
    lVar2 = *(long *)(param_1 + 200);
    if ((lVar2 != 0) && (*(long *)(param_1 + 0xd0) != 0)) {
      __s = param_1 + 0x138;
      memset(__s,0,0x2c8);
      param_1[0x2d0] = 1;
      param_1[0x2d1] = 0;
      param_1[0x2d2] = 0;
      param_1[0x2d3] = 0;
      param_1[0x2d4] = 0;
      param_1[0x2d5] = 0;
      param_1[0x2d6] = 0;
      param_1[0x2d7] = 0;
      param_1[0x3d0] = 0xff;
      param_1[0x3d1] = 0xff;
      param_1[0x3d2] = 0xff;
      param_1[0x3d3] = 0xff;
      param_1[0x3d8] = 0x5c;
      param_1[0x3d9] = 0xf;
      param_1[0x3da] = 0;
      param_1[0x3db] = 0;
      param_1[0x3dc] = 0;
      param_1[0x3dd] = 0;
      param_1[0x3de] = 0;
      param_1[0x3df] = 0;
      param_1[0x2c8] = 7;
      param_1[0x2c9] = 0;
      param_1[0x2ca] = 0;
      param_1[0x2cb] = 0;
      param_1[0x2cc] = 0;
      param_1[0x2cd] = 0;
      param_1[0x2ce] = 0;
      param_1[0x2cf] = 0;
      param_1[0x2c0] = 0;
      param_1[0x2c1] = 0xa0;
      param_1[0x2c2] = 0x27;
      param_1[0x2c3] = 0;
      param_1[0x2c4] = 0;
      param_1[0x2c5] = 0;
      param_1[0x2c6] = 0;
      param_1[0x2c7] = 0;
      memset(auStack_398,0,0x330);
      local_70 = 0x2000;
      local_3a0 = param_6;
      local_78 = auStack_380;
      local_68 = __s;
      iVar1 = FT_Stream_Seek(param_4,lVar2 + param_5);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FT_Stream_EnterFrame(param_4,*(undefined8 *)(param_1 + 0xd0));
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_01087720(&local_3a0,*(undefined8 *)(param_4 + 0x40),
                           *(undefined8 *)(param_4 + 0x48));
      FT_Stream_ExitFrame(param_4);
      if (iVar1 != 0) {
        return iVar1;
      }
      *__s = *__s & 0xfe;
    }
    if (*(long *)(param_1 + 1000) != 0) {
      iVar1 = FT_Stream_Seek(param_4,*(long *)(param_1 + 1000) + param_5 + *(long *)(param_1 + 200))
      ;
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_01086fdc(param_1 + 0x400,param_4,1);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_01087160(param_1 + 0x400,param_1 + 0x438,0);
      return iVar1;
    }
  }
  return 0;
}

