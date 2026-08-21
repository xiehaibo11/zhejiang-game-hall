
void png_chunk_error(long param_1,undefined8 param_2)

{
  undefined1 auStack_f8 [216];
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(0,param_2);
  }
  FUN_010c2628(*(undefined4 *)(param_1 + 0x250),auStack_f8,param_2);
                    /* WARNING: Subroutine does not return */
  png_error(param_1,auStack_f8);
}

