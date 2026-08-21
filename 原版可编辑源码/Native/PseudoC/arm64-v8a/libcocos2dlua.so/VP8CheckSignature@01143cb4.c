
bool VP8CheckSignature(char *param_1,ulong param_2)

{
  if (param_2 < 3) {
    return false;
  }
  if (*param_1 == -99) {
    if (param_1[1] == '\x01') {
      return param_1[2] == '*';
    }
    return false;
  }
  return false;
}

