
/* cocos2d::Properties::getBool(char const*, bool) const */

bool __thiscall cocos2d::Properties::getBool(Properties *this,char *param_1,bool param_2)

{
  int iVar1;
  char *__s1;
  
  __s1 = (char *)getString(this,param_1,(char *)0x0);
  if (__s1 != (char *)0x0) {
    iVar1 = strcmp(__s1,"true");
    param_2 = iVar1 == 0;
  }
  return param_2;
}

