
ulong entry(int param_1,undefined4 param_2)

{
  ulong uVar1;
  uint *puVar2;
  undefined4 local_4;
  
  local_4 = param_2;
  do {
    uVar1 = write(param_1,&local_4,4);
    if (uVar1 != 0xffffffffffffffff) {
      return uVar1;
    }
    puVar2 = (uint *)__errno();
  } while (*puVar2 == 4);
  return (ulong)*puVar2;
}

