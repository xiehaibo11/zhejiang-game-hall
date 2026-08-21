
/* cocos2d::VideoPlayer::duration() const */

undefined1  [16] __thiscall cocos2d::VideoPlayer::duration(VideoPlayer *this)

{
  long lVar1;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined4 local_37;
  undefined3 uStack_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_33 = 0;
  local_40 = (basic_string)0x16;
  local_30 = (void *)0x0;
  local_37 = 0x6e6f69;
  uStack_3f = 0x61727544746567;
  uStack_38 = 0x74;
  auVar2._0_4_ = JniHelper::callStaticFloatMethod<int>
                           ((basic_string *)&DAT_01d38710,&local_40,*(int *)(this + 0x2c));
  auVar2._4_4_ = extraout_var;
  uVar3 = extraout_var_00;
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    auVar2._8_8_ = uVar3;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

