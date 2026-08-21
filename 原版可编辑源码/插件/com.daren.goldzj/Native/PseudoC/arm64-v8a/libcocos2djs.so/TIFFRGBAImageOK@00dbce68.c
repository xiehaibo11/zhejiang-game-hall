
undefined8 TIFFRGBAImageOK(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  char *__format;
  char *pcVar3;
  ulong uVar4;
  ushort local_28 [2];
  ushort local_24 [2];
  
  if (*(int *)(param_1 + 0x2b8) == 0) {
    builtin_strncpy(param_2,"Sorry, requested compression method is not configured",0x36);
    return 0;
  }
  if ((0x10 < *(ushort *)(param_1 + 0x74)) ||
     ((1 << (ulong)(*(ushort *)(param_1 + 0x74) & 0x1f) & 0x10116U) == 0)) {
    sprintf(param_2,"Sorry, can not handle images with %d-bit samples");
    return 0;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x82) - (uint)*(ushort *)(param_1 + 0xd4);
  iVar2 = TIFFGetField(param_1,0x106,local_24);
  if (iVar2 == 0) {
    if (uVar1 == 3) {
      return 1;
    }
    if (uVar1 != 1) {
      sprintf(param_2,"Missing needed %s tag","PhotometricInterpretation");
      return 0;
    }
    uVar4 = 1;
    local_24[0] = 1;
switchD_00dbceec_caseD_0:
    if (((*(short *)(param_1 + 0xaa) != 1) || (*(short *)(param_1 + 0x82) == 1)) ||
       (7 < *(ushort *)(param_1 + 0x74))) {
switchD_00dbceec_caseD_6:
      return 1;
    }
    sprintf(param_2,"Sorry, can not handle contiguous data with %s=%d, and %s=%d and Bits/Sample=%d"
            ,"PhotometricInterpretation",uVar4,"Samples/pixel");
  }
  else {
    uVar4 = (ulong)local_24[0];
    switch(uVar4) {
    case 0:
    case 1:
    case 3:
      goto switchD_00dbceec_caseD_0;
    case 2:
      if (2 < (int)uVar1) {
        return 1;
      }
      __format = "Sorry, can not handle RGB image with %s=%d";
      pcVar3 = "Color channels";
      uVar4 = (ulong)uVar1;
      break;
    case 4:
    case 7:
switchD_00dbceec_caseD_4:
      __format = "Sorry, can not handle image with %s=%d";
      pcVar3 = "PhotometricInterpretation";
      break;
    case 5:
      TIFFGetFieldDefaulted(param_1,0x14c,local_28);
      uVar4 = (ulong)local_28[0];
      if (local_28[0] == 1) {
        uVar4 = (ulong)*(ushort *)(param_1 + 0x82);
        if (3 < *(ushort *)(param_1 + 0x82)) {
          return 1;
        }
        __format = "Sorry, can not handle separated image with %s=%d";
        pcVar3 = "Samples/pixel";
      }
      else {
        __format = "Sorry, can not handle separated image with %s=%d";
        pcVar3 = "InkSet";
      }
      break;
    case 6:
    case 8:
      goto switchD_00dbceec_caseD_6;
    default:
      if (local_24[0] == 0x804c) {
        if (*(short *)(param_1 + 0x78) == -0x788c) {
          return 1;
        }
        __format = "Sorry, LogL data must have %s=%d";
        pcVar3 = "Compression";
        uVar4 = 0x8774;
      }
      else {
        if (local_24[0] != 0x804d) goto switchD_00dbceec_caseD_4;
        if (*(ushort *)(param_1 + 0x78) >> 1 != 0x43ba) {
          sprintf(param_2,"Sorry, LogLuv data must have %s=%d or %d","Compression",0x8774,0x8775);
          return 0;
        }
        uVar4 = (ulong)*(ushort *)(param_1 + 0xaa);
        if (*(ushort *)(param_1 + 0xaa) == 1) {
          return 1;
        }
        __format = "Sorry, can not handle LogLuv images with %s=%d";
        pcVar3 = "Planarconfiguration";
      }
    }
    sprintf(param_2,__format,pcVar3,uVar4);
  }
  return 0;
}

