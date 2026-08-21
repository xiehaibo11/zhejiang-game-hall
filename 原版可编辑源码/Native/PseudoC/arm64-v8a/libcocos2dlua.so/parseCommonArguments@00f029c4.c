
/* cocos2d::BMFontConfiguration::parseCommonArguments(char const*) */

int __thiscall
cocos2d::BMFontConfiguration::parseCommonArguments(BMFontConfiguration *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = strstr(param_1,"lineHeight=");
  iVar1 = sscanf(pcVar2 + 0xb,"%d",this + 0x50);
  return iVar1;
}

