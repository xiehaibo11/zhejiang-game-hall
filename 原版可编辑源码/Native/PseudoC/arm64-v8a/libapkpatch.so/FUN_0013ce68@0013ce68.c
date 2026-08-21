
undefined8 FUN_0013ce68(long *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  
  lVar5 = *param_1;
  uVar2 = *(uint *)(lVar5 + 8);
  uVar1 = uVar2;
  if (0x10015 < uVar2) {
    uVar1 = 0x10016;
  }
  if (uVar1 != 0) {
    lVar7 = param_1[0x11];
    uVar12 = uVar2;
    if (0x3fff < uVar1) {
      uVar12 = 0x4000;
    }
    uVar10 = (ulong)uVar12;
    iVar8 = uVar2 - uVar12;
    iVar4 = (**(code **)(lVar5 + 0x10))(lVar5,uVar2 - uVar12,lVar7,lVar7 + uVar10);
    if (iVar4 != 0) {
      uVar12 = 0;
      uVar11 = uVar10;
      do {
        while (uVar3 = uVar11 - 1, 0 < (long)uVar11) {
          uVar12 = (uint)*(byte *)(lVar7 + (uVar3 & 0xffffffff)) | uVar12 << 8;
          uVar11 = uVar3;
          if (uVar12 == 0x6054b50) {
            *param_2 = iVar8 + (int)uVar3;
            return 1;
          }
        }
        uVar9 = (uint)uVar10;
        uVar6 = uVar1 - uVar9;
        if (uVar1 < uVar9 || uVar6 == 0) {
          return 0;
        }
        if (0x3fff < uVar6) {
          uVar6 = 0x4000;
        }
        uVar11 = (ulong)uVar6;
        uVar10 = (ulong)(uVar6 + uVar9);
        iVar8 = uVar2 - (uVar6 + uVar9);
        iVar4 = (**(code **)(*param_1 + 0x10))(*param_1,iVar8,lVar7,lVar7 + uVar11);
      } while (iVar4 != 0);
    }
    FUN_0013fb24(&DAT_0016ba80,
                 "self->stream->read(self->stream,fileLength-readed_pos,buf,buf+readLen)",
                 DAT_0016ba88);
  }
  return 0;
}

