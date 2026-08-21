
void png_set_text(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = png_set_text_2();
  if (iVar1 == 0) {
    return;
  }
                    /* try { // try from 010d44b4 to 011d44bf has its CatchHandler @ 010d5220 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 010d44c0 to 011d4523 has its CatchHandler @ 010d4230 */
  png_error(param_1,"Insufficient memory to store text");
}

