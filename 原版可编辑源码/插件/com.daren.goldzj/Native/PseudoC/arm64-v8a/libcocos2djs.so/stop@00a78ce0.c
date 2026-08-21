
/* cocos2d::UrlAudioPlayer::stop() */

void __thiscall cocos2d::UrlAudioPlayer::stop(UrlAudioPlayer *this)

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
                    /* try { // try from 00a78d7c to 00b78d93 has its CatchHandler @ 00a78ff0 */
      if (**(char **)(this + 0xb8) == '\0') {
        **(char **)(this + 0xb8) = '\x01';
        if (*(long **)(this + 0x50) != (long *)0x0) {
                    /* try { // try from 00a78d9c to 00b78da7 has its CatchHandler @ 00a78fec */
          (**(code **)(**(long **)(this + 0x50) + 0x30))();
          *(undefined8 *)(this + 0x50) = 0;
        }
      }
                    /* try { // try from 00a78da8 to 00b78db3 has its CatchHandler @ 00a78fe8 */
                    /* try { // try from 00a78db4 to 00b78dbb has its CatchHandler @ 00a79000 */
      (**(code **)(*(long *)this + 8))(this);
    }
    else {
      __android_log_print(5,"UrlAudioPlayer",
                          "UrlAudioPlayer (%p, state:%d) isn\'t playing or paused, could not invoke stop!"
                          ,this);
    }
  }
  else {
                    /* try { // try from 00a78d28 to 00b78d7b has its CatchHandler @ 00a78d28
                       catch() { ... } // from try @ 00a78d28 with catch @ 00a78d28
                       catch() { ... } // from try @ 00a78f38 with catch @ 00a78d28 */
    __android_log_print(6,"UrlAudioPlayer","UrlAudioPlayer::stop failed");
  }
                    /* try { // try from 00a78dd8 to 00b78ddf has its CatchHandler @ 00a78fd0 */
                    /* try { // try from 00a78de4 to 00b78def has its CatchHandler @ 00a78fac */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00a78df0 to 00b78e03 has its CatchHandler @ 00a78fb0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

