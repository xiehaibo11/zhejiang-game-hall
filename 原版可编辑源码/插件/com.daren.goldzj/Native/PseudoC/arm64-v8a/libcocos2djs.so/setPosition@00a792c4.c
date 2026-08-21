
/* cocos2d::UrlAudioPlayer::setPosition(float) */

bool __thiscall cocos2d::UrlAudioPlayer::setPosition(UrlAudioPlayer *this,float param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined8 **)(this + 0x60))
                    (*(undefined8 **)(this + 0x60),(int)(param_1 * 1000.0),2);
  if (iVar1 != 0) {
                    /* try { // try from 00a79310 to 00b79327 has its CatchHandler @ 00a794a0 */
    __android_log_print((double)param_1,6,"UrlAudioPlayer","UrlAudioPlayer::setPosition %f failed");
  }
  return iVar1 == 0;
}

