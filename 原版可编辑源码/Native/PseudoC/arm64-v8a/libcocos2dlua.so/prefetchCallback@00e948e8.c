
/* cocos2d::experimental::AudioDecoderSLES::prefetchCallback(SLPrefetchStatusItf_ const* const*,
   unsigned int) */

void __thiscall
cocos2d::experimental::AudioDecoderSLES::prefetchCallback
          (AudioDecoderSLES *this,SLPrefetchStatusItf_ **param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  int local_40;
  short local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c[0] = 0;
  iVar2 = (**(code **)(*param_1 + 8))(param_1,local_3c);
  if (iVar2 == 0) {
    iVar2 = (**(code **)*param_1)(param_1,&local_40);
    if (iVar2 == 0) {
      if ((((~param_2 & 3) == 0) && (local_3c[0] == 0)) && (local_40 == 1)) {
        this[0x89] = (AudioDecoderSLES)0x1;
        std::__ndk1::mutex::lock((mutex *)(this + 0xac));
        this[0xa8] = (AudioDecoderSLES)0x1;
        std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0xd4));
        std::__ndk1::mutex::unlock((mutex *)(this + 0xac));
      }
      goto LAB_00e94974;
    }
    pcVar3 = "GetPrefetchStatus failed";
  }
  else {
    pcVar3 = "GetFillLevel failed";
  }
  __android_log_print(6,"AudioDecoderSLES",pcVar3);
LAB_00e94974:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

