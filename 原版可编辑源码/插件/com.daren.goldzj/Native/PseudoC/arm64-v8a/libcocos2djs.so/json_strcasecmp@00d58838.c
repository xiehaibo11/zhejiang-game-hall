
/* spine::Json::json_strcasecmp(char const*, char const*) */

uint spine::Json::json_strcasecmp(char *param_1,char *param_2)

{
  uint uVar1;
  
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    uVar1 = strcasecmp(param_1,param_2);
    return uVar1;
  }
  if (param_1 < param_2) {
    return 0xffffffff;
  }
  return (uint)(param_1 != param_2);
}

