
undefined4
Java_org_cocos2dx_lib_Cocos2dxJavascriptJavaBridge_evalString
          (StringUtils *param_1,undefined8 param_2,_JNIEnv *param_3,bool *param_4)

{
  char *pcVar1;
  long lVar2;
  ScriptEngine *pSVar3;
  ulong uVar4;
  Isolate *pIVar5;
  undefined4 uVar6;
  byte local_70 [16];
  char *local_60;
  _jstring local_54 [4];
  HandleScope aHStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pSVar3 = (ScriptEngine *)se::ScriptEngine::getInstance();
  uVar4 = se::ScriptEngine::isValid(pSVar3);
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    pIVar5 = (Isolate *)v8::Isolate::GetCurrent();
    v8::HandleScope::HandleScope(aHStack_50,pIVar5);
    local_54[0] = (_jstring)0x0;
    cocos2d::StringUtils::getStringUTFCharsJNI(param_1,param_3,local_54,param_4);
    if (local_54[0] == (_jstring)0x0) {
      uVar6 = 0;
    }
    else {
      pSVar3 = (ScriptEngine *)se::ScriptEngine::getInstance();
      pcVar1 = (char *)((ulong)local_70 | 1);
      if ((local_70[0] & 1) != 0) {
        pcVar1 = local_60;
      }
      se::ScriptEngine::evalString(pSVar3,pcVar1,-1,(Value *)0x0,(char *)0x0);
      uVar6 = 1;
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    v8::HandleScope::~HandleScope(aHStack_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

