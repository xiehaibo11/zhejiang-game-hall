
void png_malloc_default(long param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 != 0) && ((param_2 == 0 || (pvVar1 = malloc(param_2), pvVar1 == (void *)0x0)))) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Out of Memory");
  }
  return;
}

