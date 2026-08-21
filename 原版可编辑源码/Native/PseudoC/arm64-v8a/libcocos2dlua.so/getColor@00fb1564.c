
/* cocos2d::Properties::getColor(char const*, cocos2d::Vec4*) const */

void __thiscall cocos2d::Properties::getColor(Properties *this,char *param_1,Vec4 *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)getString(this,param_1,(char *)0x0);
  parseColor(pcVar1,param_2);
  return;
}

