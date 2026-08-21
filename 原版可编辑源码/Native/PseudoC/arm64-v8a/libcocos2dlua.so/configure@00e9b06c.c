
/* cocos2d::network::HttpURLConnection::configure() */

void __thiscall cocos2d::network::HttpURLConnection::configure(HttpURLConnection *this)

{
  mutex *this_00;
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  _jclass *local_60;
  _jmethodID *p_Stack_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(long *)(this + 8) == 0) || (lVar6 = *(long *)this, lVar6 == 0)) {
    uVar5 = 0;
  }
  else {
    std::__ndk1::mutex::lock((mutex *)(lVar6 + 0x3c));
    iVar1 = *(int *)(lVar6 + 0x38);
    std::__ndk1::mutex::unlock((mutex *)(lVar6 + 0x3c));
    lVar6 = *(long *)this;
    this_00 = (mutex *)(lVar6 + 0x10);
    std::__ndk1::mutex::lock(this_00);
    iVar2 = *(int *)(lVar6 + 0xc);
    std::__ndk1::mutex::unlock(this_00);
    uVar4 = JniHelper::getStaticMethodInfo
                      ((JniMethodInfo_ *)&local_60,"org.cocos2dx.lib.Cocos2dxHttpURLConnection",
                       "setReadAndConnectTimeout","(Ljava/net/HttpURLConnection;II)V");
    if ((uVar4 & 1) != 0) {
      _JNIEnv::CallStaticVoidMethod
                (local_60,p_Stack_58,local_50,*(undefined8 *)(this + 8),(ulong)(uint)(iVar1 * 1000),
                 (ulong)(uint)(iVar2 * 1000));
      (**(code **)(*(long *)local_60 + 0xb8))(local_60,p_Stack_58);
    }
    setVerifySSL(this);
    uVar5 = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

