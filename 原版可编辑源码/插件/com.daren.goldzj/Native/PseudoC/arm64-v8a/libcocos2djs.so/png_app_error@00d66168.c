
void png_app_error(long param_1)

{
  if ((*(byte *)(param_1 + 0x16a) >> 6 & 1) != 0) {
    png_warning();
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error();
}

