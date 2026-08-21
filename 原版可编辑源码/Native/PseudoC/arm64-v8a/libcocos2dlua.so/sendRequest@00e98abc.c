
/* cocos2d::network::HttpURLConnection::sendRequest(cocos2d::network::HttpRequest*) */

void __thiscall
cocos2d::network::HttpURLConnection::sendRequest(HttpURLConnection *this,HttpRequest *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  _jclass *local_60;
  _jmethodID *p_Stack_58;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar5 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_60,"org.cocos2dx.lib.Cocos2dxHttpURLConnection",
                     "sendRequest","(Ljava/net/HttpURLConnection;[B)V");
  if ((uVar5 & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar3 = *(int *)(param_1 + 0x40);
    uVar6 = (**(code **)(*(long *)local_60 + 0x580))(local_60,iVar2 - iVar3);
    lVar1 = 0;
    if (*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x48)) {
      lVar1 = *(long *)(param_1 + 0x40);
    }
    (**(code **)(*(long *)local_60 + 0x680))(local_60,uVar6,0,iVar2 - iVar3,lVar1);
    _JNIEnv::CallStaticVoidMethod(local_60,p_Stack_58,local_50,*(undefined8 *)(this + 8),uVar6);
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,uVar6);
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,p_Stack_58);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

