
/* cocos2d::VideoPlayer::stop() */

void __thiscall cocos2d::VideoPlayer::stop(VideoPlayer *this)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 local_37;
  undefined5 uStack_35;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((byte)this[0x10] & 1) == 0) {
    if ((byte)this[0x10] >> 1 == 0) goto LAB_009d7f64;
  }
  else if (*(long *)(this + 0x18) == 0) goto LAB_009d7f64;
  uStack_35 = 0;
  local_40 = (basic_string)0x12;
  local_30 = (void *)0x0;
  local_37 = 0x6f;
  uStack_3f = 0x646956706f7473;
  uStack_38 = 0x65;
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_01d38710,&local_40,*(int *)(this + 0x2c));
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
LAB_009d7f64:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

