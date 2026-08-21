
undefined8 gzclose(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_1 + 0x18) == 0x1c4f) {
    uVar1 = gzclose_r();
    return uVar1;
  }
  uVar1 = gzclose_w();
  return uVar1;
}

