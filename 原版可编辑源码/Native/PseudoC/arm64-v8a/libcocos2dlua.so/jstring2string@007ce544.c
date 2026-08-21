
/* cocos2d::JniHelper::jstring2string(_jstring*) */

void cocos2d::JniHelper::jstring2string(_jstring *param_1)

{
  long lVar1;
  StringUtils *this;
  bool *in_x3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_1 != (_jstring *)0x0) {
    this = pthread_getspecific(DAT_01781ca8);
    if (this == (StringUtils *)0x0) {
      this = (StringUtils *)cacheEnv(_psJavaVM);
    }
    if (this != (StringUtils *)0x0) {
      StringUtils::getStringUTFCharsJNI(this,(_JNIEnv *)param_1,(_jstring *)0x0,in_x3);
      *(undefined8 *)(in_x8 + 0x10) = local_40;
      *(undefined8 *)(in_x8 + 8) = uStack_48;
      *(undefined8 *)in_x8 = local_50;
      goto LAB_007ce5cc;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,"");
LAB_007ce5cc:
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

