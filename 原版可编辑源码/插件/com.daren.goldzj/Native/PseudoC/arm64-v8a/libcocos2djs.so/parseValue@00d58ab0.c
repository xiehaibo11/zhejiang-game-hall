
/* spine::Json::parseValue(spine::Json*, char const*) */

char * spine::Json::parseValue(Json *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  switch(*param_2) {
  case '\"':
    pcVar2 = (char *)parseString(param_1,param_2);
    return pcVar2;
  case '-':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
    pcVar2 = (char *)parseNumber(param_1,param_2);
    return pcVar2;
  case '[':
    pcVar2 = (char *)parseArray(param_1,param_2);
    return pcVar2;
  case 'f':
    iVar1 = strncmp(param_2 + 1,"alse",4);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      return param_2 + 5;
    }
    break;
  case 'n':
    iVar1 = strncmp(param_2 + 1,"ull",3);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 2;
      return param_2 + 4;
    }
    break;
  case 't':
    iVar1 = strncmp(param_2 + 1,"rue",3);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(undefined4 *)(param_1 + 0x20) = 1;
      return param_2 + 4;
    }
    break;
  case '{':
    pcVar2 = (char *)parseObject(param_1,param_2);
    return pcVar2;
  }
  _error = param_2;
  return (char *)0x0;
}

