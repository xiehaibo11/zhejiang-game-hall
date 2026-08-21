
void png_zstream_error(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x1a8) != 0) {
    return;
  }
  if (param_2 + 7U < 10) {
    *(undefined **)(param_1 + 0x1a8) = (&PTR_s_unexpected_zlib_return_0172ca50)[(int)(param_2 + 7U)]
    ;
    return;
  }
  *(char **)(param_1 + 0x1a8) = "unexpected zlib return code";
  return;
}

