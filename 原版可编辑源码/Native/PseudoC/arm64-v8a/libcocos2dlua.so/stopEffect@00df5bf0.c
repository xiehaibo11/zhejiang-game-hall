
/* CocosDenshion::android::AndroidJavaEngine::stopEffect(unsigned int) */

void __thiscall
CocosDenshion::android::AndroidJavaEngine::stopEffect(AndroidJavaEngine *this,uint param_1)

{
  long lVar1;
  uint local_50 [2];
  undefined1 uStack_48;
  undefined2 local_47;
  undefined1 local_45;
  undefined4 uStack_44;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[8] == (AndroidJavaEngine)0x0) {
    uStack_44 = 0;
    local_40 = (void *)0x0;
    local_47 = 0x7463;
    local_50[0] = 0x6f747314;
    local_50[1] = 0x66664570;
    uStack_48 = 0x65;
    local_45 = 0;
    cocos2d::JniHelper::callStaticVoidMethod<int>
              ((basic_string *)&DAT_01788b10,(basic_string *)local_50,param_1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    cocos2d::experimental::AudioEngine::stop(param_1);
    local_50[0] = param_1;
    std::__ndk1::list<int,std::__ndk1::allocator<int>>::remove
              ((list<int,std::__ndk1::allocator<int>> *)(this + 0x10),(int *)local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

