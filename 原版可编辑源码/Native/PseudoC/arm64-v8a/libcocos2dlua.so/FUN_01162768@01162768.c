
bool FUN_01162768(long *param_1,long *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return true;
  }
  if (param_1[1] == *param_2) {
    return *param_1 == param_2[1];
  }
  return false;
}

