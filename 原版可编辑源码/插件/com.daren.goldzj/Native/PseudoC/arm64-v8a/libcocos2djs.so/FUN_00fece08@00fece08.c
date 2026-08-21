
undefined8 FUN_00fece08(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if ((((int)uVar2 != 3) && ((uVar2 & 1) != 0)) &&
     (uVar1 = *(uint *)((uVar2 & 0xfffffffffffffffd) - 1), (uVar1 & 1) == 0)) {
    *param_1 = (uVar2 & 0xffffffff00000000 | (ulong)uVar1) + 1;
  }
  return 1;
}

