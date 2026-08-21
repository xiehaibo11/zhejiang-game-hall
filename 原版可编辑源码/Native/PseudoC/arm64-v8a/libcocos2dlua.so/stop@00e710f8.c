
/* cocos2d::experimental::UrlAudioPlayer::stop() */

void __thiscall cocos2d::experimental::UrlAudioPlayer::stop(UrlAudioPlayer *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = (**(code **)**(undefined8 **)(this + 0x58))(*(undefined8 **)(this + 0x58),1);
  if (iVar2 == 0) {
    if ((*(uint *)(this + 0x7c) & 0xfffffffe) == 2) {
      (**(code **)(*(long *)this + 0x70))(this,0);
      plVar3 = *(long **)(this + 0xa0);
      *(undefined4 *)(this + 0x7c) = 4;
      if (plVar3 != (long *)0x0) {
        local_2c = 4;
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_2c);
      }
      if (**(char **)(this + 0xb8) == '\0') {
        **(char **)(this + 0xb8) = '\x01';
        if (*(long **)(this + 0x50) != (long *)0x0) {
          (**(code **)(**(long **)(this + 0x50) + 0x30))();
          *(undefined8 *)(this + 0x50) = 0;
        }
      }
      (**(code **)(*(long *)this + 8))(this);
    }
    else {
      __android_log_print(5,"UrlAudioPlayer",
                          "UrlAudioPlayer (%p, state:%d) isn\'t playing or paused, could not invoke stop!"
                          ,this);
    }
  }
  else {
    __android_log_print(6,"UrlAudioPlayer","UrlAudioPlayer::stop failed");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

