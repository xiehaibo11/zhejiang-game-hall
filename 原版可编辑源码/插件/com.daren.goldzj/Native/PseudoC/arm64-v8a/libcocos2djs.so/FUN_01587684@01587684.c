
uint FUN_01587684(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = *param_2;
  uVar2 = **(ulong **)(param_1 + 8);
  if ((int)uVar2 == (int)local_18) {
    uVar1 = 1;
  }
  else if ((*(ushort *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) < 0x20
           ) && (*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) < 0x20)
          ) {
    uVar1 = 0;
  }
  else {
    uVar1 = v8::internal::String::SlowEquals((String *)&local_18);
  }
  return uVar1 & 1;
}

