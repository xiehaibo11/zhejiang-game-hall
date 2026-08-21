
/* cocos2d::JniHelper::jstring2string(_jstring*) */

void cocos2d::JniHelper::jstring2string(_jstring *param_1)

{
  long lVar1;
  StringUtils *this;
  bool *in_x3;
  undefined8 *in_x8;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (param_1 != (_jstring *)0x0) {
    this = pthread_getspecific(DAT_01d35bd8);
    if (this == (StringUtils *)0x0) {
      this = (StringUtils *)cacheEnv(_psJavaVM);
    }
    if (this != (StringUtils *)0x0) {
      StringUtils::getStringUTFCharsJNI(this,(_JNIEnv *)param_1,(_jstring *)0x0,in_x3);
      in_x8[2] = local_40;
      in_x8[1] = uStack_48;
      *in_x8 = local_50;
      goto LAB_00870188;
    }
  }
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
LAB_00870188:
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

