
/* cocos2d::UrlAudioPlayer::setVolumeToSLPlayer(float) */

void __thiscall cocos2d::UrlAudioPlayer::setVolumeToSLPlayer(UrlAudioPlayer *this,float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
                    /* catch() { ... } // from try @ 00a78d9c with catch @ 00a78fec */
                    /* catch() { ... } // from try @ 00a78d7c with catch @ 00a78ff0 */
  fVar3 = log10f(param_1);
                    /* catch() { ... } // from try @ 00a78db4 with catch @ 00a79000
                       catch() { ... } // from try @ 00a78e1c with catch @ 00a79000
                       catch() { ... } // from try @ 00a78efc with catch @ 00a79000 */
  iVar2 = (int)(fVar3 * 2000.0);
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  iVar1 = (**(code **)**(undefined8 **)(this + 0x68))(*(undefined8 **)(this + 0x68),iVar2);
  if (iVar1 != 0) {
    __android_log_print(6,"UrlAudioPlayer","UrlAudioPlayer::setVolumeToSLPlayer %d failed",iVar2);
    return;
  }
                    /* try { // try from 00a79058 to 00b790ab has its CatchHandler @ 00a79058
                       catch() { ... } // from try @ 00a79058 with catch @ 00a79058
                       catch() { ... } // from try @ 00a791d8 with catch @ 00a79058 */
  return;
}

