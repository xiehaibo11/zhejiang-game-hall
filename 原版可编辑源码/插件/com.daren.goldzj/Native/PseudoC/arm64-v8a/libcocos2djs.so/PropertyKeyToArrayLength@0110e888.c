
/* v8::internal::PropertyKeyToArrayLength(v8::internal::Handle<v8::internal::Object>, unsigned int*)
    */

uint v8::internal::PropertyKeyToArrayLength(ulong *param_1,uint *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  ulong local_18;
  
  local_18 = *param_1;
  if ((local_18 & 1) == 0) {
    if (-1 < (int)local_18) {
      uVar1 = (uint)(local_18 >> 1) & 0x7fffffff;
LAB_0110e8a4:
      *param_2 = uVar1;
      uVar1 = 1;
      goto LAB_0110e940;
    }
  }
  else {
    if (*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x42) {
      dVar2 = *(double *)(local_18 + 3);
      dVar3 = dVar2 + 4503599627370496.0;
      if ((ulong)dVar3 >> 0x20 == 0x43300000) {
        *param_2 = SUB84(dVar3,0);
        if (dVar2 == (double)((ulong)dVar3 & 0xffffffff)) {
          uVar1 = 1;
          goto LAB_0110e940;
        }
        local_18 = *param_1;
        if ((local_18 & 1) == 0) goto LAB_0110e93c;
      }
    }
    if (*(ushort *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) < 0x40) {
      uVar1 = *(uint *)(local_18 + 3);
      if ((uVar1 & 0xc0000003) == 0) {
        uVar1 = uVar1 >> 3 & 0xffffff;
        goto LAB_0110e8a4;
      }
      if ((uVar1 & 3) != 2) {
        uVar1 = String::SlowAsArrayIndex((String *)&local_18,param_2);
        goto LAB_0110e940;
      }
    }
  }
LAB_0110e93c:
  uVar1 = 0;
LAB_0110e940:
  return uVar1 & 1;
}

