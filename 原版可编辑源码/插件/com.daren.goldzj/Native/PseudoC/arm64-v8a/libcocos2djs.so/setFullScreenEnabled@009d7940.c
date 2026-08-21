
/* cocos2d::VideoPlayer::setFullScreenEnabled(bool) */

void __thiscall cocos2d::VideoPlayer::setFullScreenEnabled(VideoPlayer *this,bool param_1)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0xe] != (VideoPlayer)param_1) {
    this[0xe] = (VideoPlayer)param_1;
    uStack_2a = 0;
    local_40 = (basic_string)0x28;
    uStack_2f = 0x64656c62;
    uStack_37 = 0x6e456e65657263;
    uStack_30 = 0x61;
                    /* catch() { ... } // from try @ 009d77c8 with catch @ 009d7998 */
    uStack_3f = 0x6c6c7546746573;
    uStack_38 = 0x53;
                    /* catch() { ... } // from try @ 009d77ec with catch @ 009d799c */
    uStack_2b = 0;
                    /* try { // try from 009d79b0 to 00ad7a17 has its CatchHandler @ 009d79b0
                       catch() { ... } // from try @ 009d79b0 with catch @ 009d79b0
                       catch() { ... } // from try @ 009d7a6c with catch @ 009d79b0 */
    JniHelper::callStaticVoidMethod<int,bool>
              ((basic_string *)&DAT_01d38710,&local_40,*(int *)(this + 0x2c),param_1);
    if (((byte)local_40 & 1) != 0) {
      operator_delete((void *)CONCAT26(uStack_2a,CONCAT15(uStack_2b,CONCAT41(uStack_2f,uStack_30))))
      ;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

