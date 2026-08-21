
/* cocos2d::TouchScriptHandlerEntry::init(bool, int, bool) */

undefined8 __thiscall
cocos2d::TouchScriptHandlerEntry::init
          (TouchScriptHandlerEntry *this,bool param_1,int param_2,bool param_3)

{
  *(int *)(this + 0x30) = param_2;
  this[0x2c] = (TouchScriptHandlerEntry)param_1;
  this[0x34] = (TouchScriptHandlerEntry)param_3;
  return 1;
}

