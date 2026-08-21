
/* cocos2d::LuaStack::setXXTEAKeyAndSign(char const*, int, char const*, int) */

void __thiscall
cocos2d::LuaStack::setXXTEAKeyAndSign
          (LuaStack *this,char *param_1,int param_2,char *param_3,int param_4)

{
  void *pvVar1;
  LuaStack LVar2;
  
  (**(code **)(*(long *)this + 0xf0))();
  LVar2 = (LuaStack)0x0;
  if ((((param_1 != (char *)0x0) && (param_2 != 0)) && (param_3 != (char *)0x0)) && (param_4 != 0))
  {
    pvVar1 = malloc((long)param_2);
    *(void **)(this + 0x38) = pvVar1;
    memcpy(pvVar1,param_1,(long)param_2);
    *(int *)(this + 0x40) = param_2;
    pvVar1 = malloc((long)param_4);
    *(void **)(this + 0x48) = pvVar1;
    memcpy(pvVar1,param_3,(long)param_4);
    LVar2 = (LuaStack)0x1;
    *(int *)(this + 0x50) = param_4;
  }
  this[0x34] = LVar2;
  return;
}

