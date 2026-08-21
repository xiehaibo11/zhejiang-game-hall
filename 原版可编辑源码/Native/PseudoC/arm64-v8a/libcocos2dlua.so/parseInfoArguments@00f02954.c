
/* cocos2d::BMFontConfiguration::parseInfoArguments(char const*) */

int __thiscall
cocos2d::BMFontConfiguration::parseInfoArguments(BMFontConfiguration *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = strstr(param_1,"size=");
  sscanf(pcVar2 + 5,"%d",this + 0xb0);
  pcVar2 = strstr(param_1,"padding=");
  iVar1 = sscanf(pcVar2 + 8,"%d,%d,%d,%d",this + 0x58,this + 0x5c,this + 0x60,this + 0x54);
  return iVar1;
}

