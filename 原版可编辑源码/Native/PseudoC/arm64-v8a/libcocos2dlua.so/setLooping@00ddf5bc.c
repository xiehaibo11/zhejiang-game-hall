
/* cocos2d::experimental::ui::VideoPlayer::setLooping(bool) */

void __thiscall cocos2d::experimental::ui::VideoPlayer::setLooping(VideoPlayer *this,bool param_1)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  _jclass *local_50;
  _jmethodID *p_Stack_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this[0x4f1] = (VideoPlayer)param_1;
  uVar2 = *(uint *)(this + 0x51c);
  pcVar1 = DAT_017889e8;
  if ((DAT_017889d8 & 1) == 0) {
    pcVar1 = &DAT_017889d9;
  }
  uVar4 = JniHelper::getStaticMethodInfo((JniMethodInfo_ *)&local_50,pcVar1,"setLooping","(IZ)V");
  if ((uVar4 & 1) != 0) {
    _JNIEnv::CallStaticVoidMethod(local_50,p_Stack_48,local_40,(ulong)uVar2,(ulong)param_1);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

