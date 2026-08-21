
/* cocos2d::AudioMixerController::destroy() */

int __thiscall cocos2d::AudioMixerController::destroy(AudioMixerController *this)

{
  AudioMixerController AVar1;
  int iVar2;
  
                    /* try { // try from 00a7a3c0 to 00b7a3c7 has its CatchHandler @ 00a7a48c */
  AVar1 = this[0x69];
  while (((byte)AVar1 & 1) != 0) {
    usleep(10);
    AVar1 = this[0x69];
                    /* try { // try from 00a7a3ec to 00b7a3ef has its CatchHandler @ 00a7a488 */
  }
                    /* try { // try from 00a7a3f0 to 00b7a40b has its CatchHandler @ 00a7a490 */
  iVar2 = usleep(2000);
  return iVar2;
}

