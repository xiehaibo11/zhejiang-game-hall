
bool VP8LCheckSignature(char *param_1,ulong param_2)

{
  if (param_2 < 5) {
    return false;
  }
  if (*param_1 == '/') {
    return (byte)param_1[4] < 0x20;
  }
  return false;
}

