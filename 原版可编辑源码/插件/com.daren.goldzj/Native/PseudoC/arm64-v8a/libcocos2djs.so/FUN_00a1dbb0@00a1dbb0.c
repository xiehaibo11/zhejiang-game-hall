
undefined8 FUN_00a1dbb0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (*(code *)PTR_calloc_01d1b760)(1,0x88);
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    uVar2 = 0;
    *(long *)(*param_1 + 0x218) = lVar1;
  }
  return uVar2;
}

