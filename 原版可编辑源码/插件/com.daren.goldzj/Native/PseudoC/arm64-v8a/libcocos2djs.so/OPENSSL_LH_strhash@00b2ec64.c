
ulong OPENSSL_LH_strhash(byte *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar2 = 0;
  if (param_1 != (byte *)0x0) {
    uVar4 = (uint)*param_1;
    if (*param_1 == 0) {
      return 0;
    }
    uVar2 = 0;
    uVar3 = 0x100;
    do {
      param_1 = param_1 + 1;
      uVar1 = (uVar4 ^ uVar4 >> 2) & 0xf;
      uVar5 = (ulong)uVar4;
      uVar4 = (uint)*param_1;
      uVar5 = uVar3 | uVar5;
      uVar3 = uVar3 + 0x100;
      uVar2 = (ulong)((uint)(uVar2 >> ((ulong)(0x20 - uVar1) & 0x3f)) | (uint)(uVar2 << uVar1)) ^
              uVar5 * uVar5;
    } while (uVar4 != 0);
    uVar2 = uVar2 ^ uVar2 >> 0x10;
  }
  return uVar2;
}

