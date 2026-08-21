
undefined8 FUN_01091db8(long *param_1)

{
  long lVar1;
  
                    /* try { // try from 01091db8 to 01191e5b has its CatchHandler @ 01091648 */
  lVar1 = *param_1;
  FT_Select_Metrics(lVar1);
  param_1[6] = *(long *)(lVar1 + 0x180) << 6;
  param_1[7] = *(long *)(lVar1 + 0x188) * -0x40;
  param_1[9] = (long)*(short *)(lVar1 + 0x1b4) << 6;
  return 0;
}

