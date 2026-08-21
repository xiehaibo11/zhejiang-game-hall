
undefined4 TIFFSetFileno(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = param_2;
  return uVar1;
}

