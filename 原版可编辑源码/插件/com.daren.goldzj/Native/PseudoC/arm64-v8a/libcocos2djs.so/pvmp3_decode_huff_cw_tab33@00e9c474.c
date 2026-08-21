
int pvmp3_decode_huff_cw_tab33(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = getUpTo9bits(param_1,4);
  return 0xf - iVar1;
}

