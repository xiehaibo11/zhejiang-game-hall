
long FUN_014fed10(ulong *param_1,undefined8 param_2,ulong *param_3,undefined8 *param_4)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  double dVar4;
  ulong local_38;
  uint local_14;
  
  local_38 = *param_1;
  if ((local_38 & 1) == 0) {
    uVar3 = (long)(local_38 << 0x20) >> 0x21;
  }
  else {
    uVar3 = local_38 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) == 0x42) {
      dVar4 = *(double *)(local_38 + 3);
      if (dVar4 < -9007199254740991.0) {
        return 2;
      }
      if (dVar4 <= 9007199254740991.0) {
        *param_3 = (long)dVar4;
        return (ulong)(dVar4 != (double)(long)dVar4) << 1;
      }
      return 2;
    }
    uVar2 = *(ushort *)(uVar3 + *(uint *)(local_38 - 1));
    if (0x3f < *(ushort *)(uVar3 + *(uint *)(local_38 - 1))) {
      if (uVar2 != 0x40) {
        return 2;
      }
LAB_014fee28:
      *param_4 = param_1;
      return 1;
    }
    if (0x1f < uVar2) {
      param_1 = (ulong *)v8::internal::StringTable::LookupString(param_2,param_1);
      local_38 = *param_1;
    }
    uVar1 = *(uint *)(local_38 + 3);
    if ((uVar1 & 0xc0000003) == 0) {
      local_14 = uVar1 >> 3 & 0xffffff;
    }
    else {
      if (((uVar1 & 3) == 2) ||
         (uVar3 = v8::internal::String::SlowAsArrayIndex((String *)&local_38,&local_14),
         (uVar3 & 1) == 0)) goto LAB_014fee28;
      if ((int)local_14 < 0) {
        return 2;
      }
    }
    uVar3 = (ulong)local_14;
  }
  *param_3 = uVar3;
  return 0;
}

