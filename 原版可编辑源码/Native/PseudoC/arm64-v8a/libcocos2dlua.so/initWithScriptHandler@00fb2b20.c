
/* cocos2d::TimerScriptHandler::initWithScriptHandler(int, float) */

undefined8 __thiscall
cocos2d::TimerScriptHandler::initWithScriptHandler
          (TimerScriptHandler *this,int param_1,float param_2)

{
  *(int *)(this + 0x4c) = param_1;
  *(undefined4 *)(this + 0x30) = 0xbf800000;
  *(float *)(this + 0x44) = param_2;
  return 1;
}

