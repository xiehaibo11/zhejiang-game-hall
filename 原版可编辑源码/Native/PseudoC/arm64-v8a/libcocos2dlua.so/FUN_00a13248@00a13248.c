
undefined8 FUN_00a13248(undefined8 param_1,uint *param_2,byte *param_3)

{
  uint uVar1;
  
                    /* try { // try from 00a13248 to 00b1329b has its CatchHandler @ 00a131e8 */
  uVar1 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    uVar1 = (uint)*(ushort *)(&DAT_012ffdc0 + (long)(int)(uVar1 - 0x80) * 2);
  }
  *param_2 = uVar1;
  return 1;
}

