
long png_set_longjmp_fn(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x108);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    if (param_3 < 0x101) {
      *(undefined8 *)(param_1 + 0x100) = param_2;
      *(long *)(param_1 + 0x108) = param_1;
      return param_1;
    }
    lVar1 = png_malloc_warn(param_1,param_3);
    *(long *)(param_1 + 0x108) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    *(ulong *)(param_1 + 0x110) = param_3;
  }
  else if (*(ulong *)(param_1 + 0x110) == 0) {
    if (lVar1 != param_1) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Libpng jmp_buf still allocated");
    }
    if (param_3 != 0x100) goto LAB_010c2a18;
  }
  else if (*(ulong *)(param_1 + 0x110) != param_3) {
LAB_010c2a18:
    png_warning(param_1,"Application jmp_buf size changed");
    return 0;
  }
  *(undefined8 *)(param_1 + 0x100) = param_2;
  return lVar1;
}

