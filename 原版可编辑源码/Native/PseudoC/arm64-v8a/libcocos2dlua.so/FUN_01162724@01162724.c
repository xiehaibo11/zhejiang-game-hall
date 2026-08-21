
bool FUN_01162724(long *param_1,long param_2)

{
  if ((*param_1 == *(long *)(param_2 + 0x18)) && (param_1[1] == *(long *)(param_2 + 0x20))) {
    return true;
  }
  if (param_1[1] != *(long *)(param_2 + 0x18)) {
    return false;
  }
  return *param_1 == *(long *)(param_2 + 0x20);
}

