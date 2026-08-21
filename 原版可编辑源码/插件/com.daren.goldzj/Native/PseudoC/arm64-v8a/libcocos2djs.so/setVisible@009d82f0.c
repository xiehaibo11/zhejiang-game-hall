
/* cocos2d::VideoPlayer::setVisible(bool) */

void __thiscall cocos2d::VideoPlayer::setVisible(VideoPlayer *this,bool param_1)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 local_38;
  undefined7 uStack_37;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (basic_string)0x1e;
  uStack_37 = 0x656c6269736956;
  uStack_3f = 0x65646956746573;
  local_38 = 0x6f;
  local_30 = (void *)0x0;
  JniHelper::callStaticVoidMethod<int,bool>
            ((basic_string *)&DAT_01d38710,&local_40,*(int *)(this + 0x2c),param_1);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

