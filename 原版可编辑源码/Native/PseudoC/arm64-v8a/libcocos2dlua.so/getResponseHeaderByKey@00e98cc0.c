
/* cocos2d::network::HttpURLConnection::getResponseHeaderByKey(char const*) */

char * __thiscall
cocos2d::network::HttpURLConnection::getResponseHeaderByKey(HttpURLConnection *this,char *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  _JNIEnv *p_Var4;
  char *pcVar5;
  bool *pbVar6;
  _jclass *local_68;
  _jmethodID *p_Stack_60;
  undefined8 local_58;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_68,"org.cocos2dx.lib.Cocos2dxHttpURLConnection",
                     "getResponseHeaderByKey",
                     "(Ljava/net/HttpURLConnection;Ljava/lang/String;)Ljava/lang/String;");
  if ((uVar2 & 1) == 0) {
    pcVar5 = (char *)0x0;
  }
  else {
    uVar3 = (**(code **)(*(long *)local_68 + 0x538))(local_68,param_1);
    pbVar6 = *(bool **)(this + 8);
    p_Var4 = (_JNIEnv *)_JNIEnv::CallStaticObjectMethod(local_68,p_Stack_60,local_58,pbVar6,uVar3);
    if (p_Var4 == (_JNIEnv *)0x0) {
      pcVar5 = (char *)0x0;
    }
    else {
      StringUtils::getStringUTFCharsJNI((StringUtils *)local_68,p_Var4,(_jstring *)0x0,pbVar6);
      pcVar5 = (char *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pcVar5 = local_40;
      }
      pcVar5 = strdup(pcVar5);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
    (**(code **)(*(long *)local_68 + 0xb8))(local_68,uVar3);
    if (p_Var4 != (_JNIEnv *)0x0) {
      (**(code **)(*(long *)local_68 + 0xb8))(local_68,p_Var4);
    }
    (**(code **)(*(long *)local_68 + 0xb8))(local_68,p_Stack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return pcVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

