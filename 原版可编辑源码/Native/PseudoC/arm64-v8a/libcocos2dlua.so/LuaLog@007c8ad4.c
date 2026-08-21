
/* cocos2d::LuaLog(char const*) */

void cocos2d::LuaLog(char *param_1)

{
  __android_log_write(3,"cocos2d-x debug info",param_1);
  return;
}

