
void png_longjmp(long param_1)

{
  if (((param_1 != 0) && (*(code **)(param_1 + 0x100) != (code *)0x0)) &&
     (*(long *)(param_1 + 0x108) != 0)) {
    (**(code **)(param_1 + 0x100))();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

