
/* cocos2d::VideoPlayer::setKeepAspectRatioEnabled(bool) */

void __thiscall cocos2d::VideoPlayer::setKeepAspectRatioEnabled(VideoPlayer *this,bool param_1)

{
  long lVar1;
  ulong local_50 [2];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0xf] != (VideoPlayer)param_1) {
    this[0xf] = (VideoPlayer)param_1;
    local_40 = operator_new(0x20);
    local_50[1] = 0x18;
    local_50[0] = 0x21;
    builtin_strncpy(local_40,"setVideoKeepRatioEnabled",0x19);
    JniHelper::callStaticVoidMethod<int,bool>
              ((basic_string *)&DAT_01d38710,(basic_string *)local_50,*(int *)(this + 0x2c),param_1)
    ;
                    /* catch() { ... } // from try @ 009d7bd0 with catch @ 009d7cfc */
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
                    /* try { // try from 009d7d10 to 00ad7d7f has its CatchHandler @ 009d7d10
                       catch() { ... } // from try @ 009d7d10 with catch @ 009d7d10
                       catch() { ... } // from try @ 009d7e48 with catch @ 009d7d10 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

