
ulong uv__next_timeout(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x208) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x208) + 0x18);
    uVar1 = 0;
    if ((*(ulong *)(param_1 + 0x220) < uVar2) &&
       (uVar1 = uVar2 - *(ulong *)(param_1 + 0x220), 0x7fffffff < uVar1)) {
      uVar1 = 0x7fffffff;
    }
  }
  return uVar1 & 0xffffffff;
}

