
/* cocos2d::UrlAudioPlayer::setVolume(float) */

void __thiscall cocos2d::UrlAudioPlayer::setVolume(UrlAudioPlayer *this,float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  *(float *)(this + 0x70) = param_1;
  if (this[0x79] != (UrlAudioPlayer)0x0) {
    fVar3 = log10f(param_1);
    iVar2 = (int)(fVar3 * 2000.0);
    if (iVar2 < -0x7fff) {
      iVar2 = -0x8000;
    }
                    /* try { // try from 00a790ac to 00b790c3 has its CatchHandler @ 00a79254 */
    iVar1 = (**(code **)**(undefined8 **)(this + 0x68))(*(undefined8 **)(this + 0x68),iVar2);
    if (iVar1 != 0) {
                    /* try { // try from 00a790cc to 00b790d7 has its CatchHandler @ 00a79250 */
                    /* try { // try from 00a790d8 to 00b790e3 has its CatchHandler @ 00a7924c */
      __android_log_print(6,"UrlAudioPlayer","UrlAudioPlayer::setVolumeToSLPlayer %d failed",iVar2);
      return;
    }
  }
                    /* try { // try from 00a790e4 to 00b791d7 has its CatchHandler @ 00a79264 */
  return;
}

