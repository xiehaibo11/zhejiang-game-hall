
/* spine::Atlas::equals(spine::Atlas::Str*, char const*) */

bool spine::Atlas::equals(Str *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strncmp(param_2,*(char **)param_1,*(long *)(param_1 + 8) - (long)*(char **)param_1);
  return iVar1 == 0;
}

