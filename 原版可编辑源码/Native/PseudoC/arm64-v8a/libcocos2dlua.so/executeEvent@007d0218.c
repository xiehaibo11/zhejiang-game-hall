
/* cocos2d::LuaEngine::executeEvent(int, char const*, cocos2d::Ref*, char const*) */

undefined4 __thiscall
cocos2d::LuaEngine::executeEvent
          (LuaEngine *this,int param_1,char *param_2,Ref *param_3,char *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  
  (**(code **)(**(long **)(this + 8) + 0x80))(*(long **)(this + 8),param_2);
  if (param_3 != (Ref *)0x0) {
    pcVar1 = "cc.Ref";
    if (param_4 != (char *)0x0) {
      pcVar1 = param_4;
    }
    (**(code **)(**(long **)(this + 8) + 0x98))(*(long **)(this + 8),param_3,pcVar1);
  }
  uVar2 = 1;
  if (param_3 != (Ref *)0x0) {
    uVar2 = 2;
  }
  uVar2 = (**(code **)(**(long **)(this + 8) + 200))(*(long **)(this + 8),param_1,uVar2);
  (**(code **)(**(long **)(this + 8) + 0x58))(*(long **)(this + 8));
  return uVar2;
}

