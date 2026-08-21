
ulong FUN_00c2b84c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar1 = (uVar1 & 0xfffffffffffffffe) << 0x12 | (uVar1 ^ uVar1 << 0x1f) >> 0x2d;
  uVar4 = (uVar4 & 0xffffffffffffffc0) << 0x1c | (uVar4 ^ uVar4 << 0x13) >> 0x1e;
  uVar3 = (uVar3 & 0xfffffffffffffe00) << 7 | (uVar3 ^ uVar3 << 0x18) >> 0x30;
  uVar2 = (uVar2 & 0xfffffffffffe0000) << 8 | (uVar2 ^ uVar2 << 0x15) >> 0x27;
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  return (uVar4 ^ uVar1 ^ uVar3 ^ uVar2) & 0xfffffffffffff | 0x3ff0000000000000;
}

