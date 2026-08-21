
undefined8 FUN_00a1264c(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*param_3;
                    /* try { // try from 00a12668 to 00b12673 has its CatchHandler @ 00a12740 */
  if (((char)*param_3 < '\0') &&
     (uVar1 = (uint)*(ushort *)(&DAT_012fea74 + (long)(int)(uVar1 - 0x80) * 2), uVar1 == 0xfffd)) {
    return 0xffffffff;
  }
  *param_2 = uVar1;
  return 1;
}

