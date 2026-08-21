
long png_convert_to_rfc1123(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = png_convert_to_rfc1123_buffer(param_1 + 0x401);
    if (iVar1 != 0) {
      return param_1 + 0x401;
    }
    png_warning(param_1,"Ignoring invalid time value");
  }
  return 0;
}

