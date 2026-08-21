
/* cocos2d::network::HttpURLConnection::addRequestHeader(char const*, char const*) */

void __thiscall
cocos2d::network::HttpURLConnection::addRequestHeader
          (HttpURLConnection *this,char *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  _jclass *local_50;
  _jmethodID *p_Stack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_50,"org.cocos2dx.lib.Cocos2dxHttpURLConnection",
                     "addRequestHeader",
                     "(Ljava/net/HttpURLConnection;Ljava/lang/String;Ljava/lang/String;)V");
  if ((uVar2 & 1) != 0) {
    uVar3 = (**(code **)(*(long *)local_50 + 0x538))(local_50,param_1);
    uVar4 = (**(code **)(*(long *)local_50 + 0x538))(local_50,param_2);
    _JNIEnv::CallStaticVoidMethod
              (local_50,p_Stack_48,local_40,*(undefined8 *)(this + 8),uVar3,uVar4);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar3);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar4);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

