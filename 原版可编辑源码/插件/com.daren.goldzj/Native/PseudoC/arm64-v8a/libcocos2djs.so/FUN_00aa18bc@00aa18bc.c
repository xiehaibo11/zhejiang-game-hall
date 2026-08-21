
undefined8 FUN_00aa18bc(byte *param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  bVar2 = *param_1;
joined_r0x00aa18c0:
  uVar3 = (uint)bVar2;
  pbVar1 = param_2;
  do {
    if (param_3 == 0) {
      *param_1 = bVar2;
      return 0;
    }
    param_2 = pbVar1 + 1;
    bVar2 = *pbVar1;
    uVar4 = (uint)bVar2;
    if (uVar3 == 0) {
      if ((char)bVar2 < '\0') {
        if (0x32 < (uVar4 + 0x3e & 0xff)) {
          return 1;
        }
        if (0xdf < uVar4) break;
        uVar3 = 0x8c;
        bVar2 = 0x8c;
      }
      else {
        uVar3 = 0;
        bVar2 = 0;
      }
    }
    else {
      if (uVar4 < (uVar3 & 0xf0)) {
        return 1;
      }
      if ((uVar3 & 0xf0) + (uVar3 & 0xc) * 4 + 0x10 <= uVar4) {
        return 1;
      }
      bVar2 = (&DAT_0189e6c3)[uVar3 & 3];
      uVar3 = (uint)bVar2;
    }
    param_3 = param_3 + -1;
    pbVar1 = param_2;
  } while( true );
  bVar2 = "ERROR on binding fd %d to port %d (%d %d)\n"[(ulong)bVar2 + 0x18];
  param_3 = param_3 + -1;
  goto joined_r0x00aa18c0;
}

