
/* cocos2d::Properties::getQuaternionFromAxisAngle(char const*, cocos2d::Quaternion*) const */

void __thiscall
cocos2d::Properties::getQuaternionFromAxisAngle(Properties *this,char *param_1,Quaternion *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)getString(this,param_1,(char *)0x0);
  parseAxisAngle(pcVar1,param_2);
  return;
}

