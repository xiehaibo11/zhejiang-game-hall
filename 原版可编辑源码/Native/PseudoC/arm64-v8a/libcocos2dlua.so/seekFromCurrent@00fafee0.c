
/* cocos2d::Properties::seekFromCurrent(int) */

bool __thiscall cocos2d::Properties::seekFromCurrent(Properties *this,int param_1)

{
  long lVar1;
  
  lVar1 = **(long **)this + (long)param_1;
  **(long **)this = lVar1;
  return -1 < lVar1 && lVar1 < *(long *)(*(long *)(this + 8) + 8);
}

