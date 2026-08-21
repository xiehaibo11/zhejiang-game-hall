
/* spine::Json::Json(char const*) */

void __thiscall spine::Json::Json(Json *this,char *param_1)

{
  byte *pbVar1;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  if (param_1 != (char *)0x0) {
    pbVar1 = (byte *)(param_1 + -1);
    do {
      pbVar1 = pbVar1 + 1;
    } while (*pbVar1 - 1 < 0x20);
    parseValue(this,(char *)pbVar1);
    return;
  }
  return;
}

