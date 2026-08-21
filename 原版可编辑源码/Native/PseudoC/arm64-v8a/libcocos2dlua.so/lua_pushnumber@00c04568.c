
void lua_pushnumber(undefined8 param_1,long param_2)

{
  double *pdVar1;
  
  **(undefined8 **)(param_2 + 0x28) = param_1;
  pdVar1 = *(double **)(param_2 + 0x28);
  if (NAN(*pdVar1)) {
    *pdVar1 = -NAN;
    pdVar1 = *(double **)(param_2 + 0x28);
  }
  *(double **)(param_2 + 0x28) = pdVar1 + 1;
  if (pdVar1 + 1 < *(double **)(param_2 + 0x30)) {
    return;
  }
  FUN_00bfe164();
  return;
}

