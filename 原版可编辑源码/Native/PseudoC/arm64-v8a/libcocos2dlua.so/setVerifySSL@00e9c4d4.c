
/* cocos2d::network::HttpURLConnection::setVerifySSL() */

void __thiscall cocos2d::network::HttpURLConnection::setVerifySSL(HttpURLConnection *this)

{
  mutex *this_00;
  void *pvVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  _jclass *local_78;
  _jmethodID *p_Stack_70;
  undefined8 local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)this;
  std::__ndk1::mutex::lock((mutex *)(lVar6 + 0x198));
  std::__ndk1::mutex::unlock((mutex *)(lVar6 + 0x198));
  if ((*(byte *)(lVar6 + 0x180) & 1) == 0) {
    if (*(byte *)(lVar6 + 0x180) >> 1 == 0) goto LAB_00e9c604;
  }
  else if (*(long *)(lVar6 + 0x188) == 0) goto LAB_00e9c604;
  plVar3 = (long *)FileUtils::getInstance();
  lVar6 = *(long *)this;
  this_00 = (mutex *)(lVar6 + 0x198);
  std::__ndk1::mutex::lock(this_00);
  std::__ndk1::mutex::unlock(this_00);
  (**(code **)(*plVar3 + 0x50))(local_60,plVar3,lVar6 + 0x180);
  uVar4 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_78,"org.cocos2dx.lib.Cocos2dxHttpURLConnection",
                     "setVerifySSL","(Ljava/net/HttpURLConnection;Ljava/lang/String;)V");
  if ((uVar4 & 1) != 0) {
    pvVar1 = (void *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pvVar1 = local_50;
    }
    uVar5 = (**(code **)(*(long *)local_78 + 0x538))(local_78,pvVar1);
    _JNIEnv::CallStaticVoidMethod(local_78,p_Stack_70,local_68,*(undefined8 *)(this + 8),uVar5);
    (**(code **)(*(long *)local_78 + 0xb8))(local_78,uVar5);
    (**(code **)(*(long *)local_78 + 0xb8))(local_78,p_Stack_70);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00e9c604:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

