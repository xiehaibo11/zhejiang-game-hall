
void tolua_error(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if (*param_2 != '#') {
    luaL_error(param_1,param_2);
    return;
  }
  uVar3 = *(undefined8 *)(param_3 + 2);
  uVar1 = tolua_typename(param_1,*param_3);
  if (param_2[1] != 'v') {
    if (param_2[1] == 'f') {
      if (param_3[1] == 0) {
        pcVar2 = "%s\n     argument #%d is \'%s\'; \'%s\' expected.\n";
      }
      else {
        pcVar2 = "%s\n     argument #%d is array of \'%s\'; array of \'%s\' expected.\n";
      }
      luaL_error(param_1,pcVar2,param_2 + 2,*param_3,uVar1,uVar3);
      return;
    }
    return;
  }
  if (param_3[1] == 0) {
    pcVar2 = "%s\n     value is \'%s\'; \'%s\' expected.\n";
  }
  else {
    pcVar2 = "%s\n     value is array of \'%s\'; array of \'%s\' expected.\n";
  }
  luaL_error(param_1,pcVar2,param_2 + 2,uVar1,uVar3);
  return;
}

