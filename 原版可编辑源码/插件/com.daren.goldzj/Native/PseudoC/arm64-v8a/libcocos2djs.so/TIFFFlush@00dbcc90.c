
undefined8 TIFFFlush(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_38;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 1;
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 >> 6 & 1) != 0) {
    if ((uVar4 >> 0xc & 1) != 0) {
      *(uint *)(param_1 + 0x10) = uVar4 & 0xffffefff;
      uVar3 = (**(code **)(param_1 + 0x2f0))(param_1);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
    }
    uVar3 = TIFFFlushData1(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar4 = *(uint *)(param_1 + 0x10);
  }
  if (((uVar4 & 0x200008) != 0x200000) || (*(int *)(param_1 + 0xc) != 2)) goto LAB_00dbcde8;
  local_28 = 0;
  local_38 = 0;
  iVar2 = TIFFIsTiled(param_1);
  if (iVar2 == 0) {
    iVar2 = TIFFGetField(param_1,0x111,&local_28);
    if (((iVar2 != 0) && (iVar2 = TIFFGetField(param_1,0x117,&local_38), iVar2 != 0)) &&
       (iVar2 = _TIFFRewriteField(param_1,0x111,0x10,*(undefined4 *)(param_1 + 0xe4),local_28),
       iVar2 != 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0xe4);
      uVar3 = 0x117;
      goto LAB_00dbcdc4;
    }
  }
  else {
    iVar2 = TIFFGetField(param_1,0x144,&local_28);
    if (((iVar2 != 0) && (iVar2 = TIFFGetField(param_1,0x145,&local_38), iVar2 != 0)) &&
       (iVar2 = _TIFFRewriteField(param_1,0x144,0x10,*(undefined4 *)(param_1 + 0xe4),local_28),
       iVar2 != 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0xe4);
      uVar3 = 0x145;
LAB_00dbcdc4:
      iVar2 = _TIFFRewriteField(param_1,uVar3,0x10,uVar1,local_38);
      if (iVar2 != 0) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffdfffbf;
        return 1;
      }
    }
  }
  uVar4 = *(uint *)(param_1 + 0x10);
LAB_00dbcde8:
  if (((uVar4 & 0x200008) != 0) && (uVar3 = TIFFRewriteDirectory(param_1), (int)uVar3 == 0)) {
    return uVar3;
  }
  return 1;
}

