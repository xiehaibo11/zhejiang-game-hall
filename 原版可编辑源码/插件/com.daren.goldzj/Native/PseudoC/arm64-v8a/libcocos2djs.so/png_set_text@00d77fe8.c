
void png_set_text(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = png_set_text_2();
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Insufficient memory to store text");
}

