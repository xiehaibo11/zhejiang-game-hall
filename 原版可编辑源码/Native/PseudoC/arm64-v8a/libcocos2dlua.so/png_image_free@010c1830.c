
void png_image_free(long *param_1)

{
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (*(long *)(*param_1 + 0x10) == 0)) {
    png_safe_execute(param_1,FUN_010c1878,param_1);
                    /* try { // try from 010c1868 to 011c1877 has its CatchHandler @ 010c1a74 */
    *param_1 = 0;
  }
  return;
}

