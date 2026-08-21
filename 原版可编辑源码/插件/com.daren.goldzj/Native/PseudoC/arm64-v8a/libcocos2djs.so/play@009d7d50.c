
/* cocos2d::VideoPlayer::play() */

void __thiscall cocos2d::VideoPlayer::play(VideoPlayer *this)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined4 uStack_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((byte)this[0x10] & 1) == 0) {
    if ((byte)this[0x10] >> 1 == 0) goto LAB_009d7dd8;
  }
  else {
                    /* try { // try from 009d7d80 to 00ad7d87 has its CatchHandler @ 009d7fcc */
    if (*(long *)(this + 0x18) == 0) goto LAB_009d7dd8;
  }
                    /* try { // try from 009d7d8c to 00ad7d93 has its CatchHandler @ 009d7fc8 */
  uStack_34 = 0;
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x14;
  local_37 = 0x6f65;
  uStack_3f = 0x69567472617473;
  uStack_38 = 100;
  local_35 = 0;
                    /* try { // try from 009d7dbc to 00ad7e47 has its CatchHandler @ 009d7fdc */
  JniHelper::callStaticVoidMethod<int>
            ((basic_string *)&DAT_01d38710,&local_40,*(int *)(this + 0x2c));
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
LAB_009d7dd8:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

