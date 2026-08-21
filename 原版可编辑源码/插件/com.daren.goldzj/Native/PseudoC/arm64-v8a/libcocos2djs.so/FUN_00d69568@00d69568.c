
void FUN_00d69568(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *__src;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(long **)(param_1 + 0x140) != (long *)0x0) &&
     (lVar2 = **(long **)(param_1 + 0x140), lVar2 != 0)) {
    __src = *(void **)(lVar2 + 0x18);
    if ((__src != (void *)0x0) && (uVar1 = *(ulong *)(lVar2 + 0x20), param_3 <= uVar1)) {
      memcpy(param_2,__src,param_3);
      *(ulong *)(lVar2 + 0x18) = (long)__src + param_3;
      *(ulong *)(lVar2 + 0x20) = uVar1 - param_3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"read beyond end of data");
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"invalid memory read");
}

