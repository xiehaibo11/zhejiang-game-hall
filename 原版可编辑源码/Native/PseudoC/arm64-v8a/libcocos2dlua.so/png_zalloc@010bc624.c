
undefined8 png_zalloc(long param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    uVar3 = (ulong)param_3;
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = 0xffffffffffffffff / uVar3;
    }
    if ((param_2 & 0xffffffff) < uVar1) {
      uVar2 = png_malloc_warn(param_1,uVar3 * (param_2 & 0xffffffff));
      return uVar2;
    }
    png_warning(param_1,"Potential overflow in png_zalloc()");
  }
  return 0;
}

