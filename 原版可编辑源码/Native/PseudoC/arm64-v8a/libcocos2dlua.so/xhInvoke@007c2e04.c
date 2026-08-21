
/* xh::XhSdk::xhInvoke(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void xh::XhSdk::xhInvoke(byte *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  _jstring *p_Var6;
  byte *pbVar7;
  byte *pbVar8;
  _jclass *local_60;
  _jmethodID *p_Stack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*param_1 & 1) == 0) {
    pbVar7 = param_1 + 1;
    bVar1 = *param_2;
  }
  else {
    pbVar7 = *(byte **)(param_1 + 0x10);
    bVar1 = *param_2;
  }
  if ((bVar1 & 1) == 0) {
    pbVar8 = param_2 + 1;
  }
  else {
    pbVar8 = *(byte **)(param_2 + 0x10);
  }
  __android_log_print(3,"XhNative","try called method xhInvoke %s::%s",pbVar7,pbVar8);
  cocos2d::JniHelper::getStaticMethodInfo
            ((JniMethodInfo_ *)&local_60,"org/cocos2dx/lua/YmnSupport","ymnInvoke",
             "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  uVar3 = (**(code **)(*(long *)local_60 + 0x538))(local_60,param_1);
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  uVar4 = (**(code **)(*(long *)local_60 + 0x538))(local_60,param_2);
  if ((*param_3 & 1) == 0) {
    param_3 = param_3 + 1;
  }
  else {
    param_3 = *(byte **)(param_3 + 0x10);
  }
  uVar5 = (**(code **)(*(long *)local_60 + 0x538))(local_60,param_3);
  p_Var6 = (_jstring *)
           _JNIEnv::CallStaticObjectMethod(local_60,p_Stack_58,local_50,uVar3,uVar4,uVar5);
  cocos2d::JniHelper::jstring2string(p_Var6);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

