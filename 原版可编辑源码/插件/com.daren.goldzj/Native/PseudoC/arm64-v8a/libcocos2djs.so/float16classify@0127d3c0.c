
/* v8::internal::float16classify(unsigned short) */

undefined4 v8::internal::float16classify(ushort param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1 >> 10 & 0x1f;
  if (uVar1 == 0x1f) {
    uVar2 = 1;
    if ((param_1 & 0x3ff) != 0) {
      uVar2 = 2;
    }
    return uVar2;
  }
  if (uVar1 == 0) {
    uVar2 = 0x10;
    if ((param_1 & 0x3ff) != 0) {
      uVar2 = 8;
    }
    return uVar2;
  }
  return 4;
}

