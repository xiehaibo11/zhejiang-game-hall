
undefined8 png_image_error(long *param_1,undefined8 param_2)

{
  png_safecat((long)param_1 + 0x24,0x40,0,param_2);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
                    /* try { // try from 010c1970 to 011c1977 has its CatchHandler @ 010c1a14 */
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (*(long *)(*param_1 + 0x10) == 0)) {
    png_safe_execute(param_1,FUN_010c1878,param_1);
    *param_1 = 0;
  }
  return 0;
}

