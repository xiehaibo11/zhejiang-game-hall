
ushort BIO_ADDR_rawport(ushort *param_1)

{
  if ((*param_1 | 8) == 10) {
    return param_1[1];
  }
  return 0;
}

