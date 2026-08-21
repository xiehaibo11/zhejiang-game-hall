
/* cocos2d::VideoPlayer::seekTo(float) */

void __thiscall cocos2d::VideoPlayer::seekTo(VideoPlayer *this,float param_1)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined4 local_37;
  undefined3 uStack_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((byte)this[0x10] & 1) == 0) {
                    /* catch() { ... } // from try @ 009d7d8c with catch @ 009d7fc8 */
                    /* catch() { ... } // from try @ 009d7d80 with catch @ 009d7fcc */
    if ((byte)this[0x10] >> 1 == 0) goto LAB_009d803c;
  }
  else if (*(long *)(this + 0x18) == 0) goto LAB_009d803c;
                    /* catch() { ... } // from try @ 009d7dbc with catch @ 009d7fdc */
  uStack_33 = 0;
  local_40 = (basic_string)0x16;
  local_37 = 0x6f546f;
  local_30 = (void *)0x0;
  uStack_3f = 0x6469566b656573;
  uStack_38 = 0x65;
  JniHelper::callStaticVoidMethod<int,int>
            ((basic_string *)&DAT_01d38710,&local_40,*(int *)(this + 0x2c),(int)(param_1 * 1000.0));
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
LAB_009d803c:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

