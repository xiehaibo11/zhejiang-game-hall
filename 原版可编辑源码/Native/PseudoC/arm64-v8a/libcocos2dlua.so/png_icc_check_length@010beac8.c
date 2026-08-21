
undefined8 png_icc_check_length(void)

{
  uint in_w3;
  
  if (in_w3 < 0x84) {
    FUN_010be73c();
    return 0;
  }
  return 1;
}

