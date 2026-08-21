
/* cocos2d::UrlAudioPlayer::setAudioFocus(bool) */

void __thiscall cocos2d::UrlAudioPlayer::setAudioFocus(UrlAudioPlayer *this,bool param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = 0.0;
  this[0x79] = (UrlAudioPlayer)param_1;
  if (param_1) {
    fVar3 = *(float *)(this + 0x70);
  }
  fVar3 = log10f(fVar3);
  iVar2 = (int)(fVar3 * 2000.0);
  if (iVar2 < -0x7fff) {
    iVar2 = -0x8000;
  }
  iVar1 = (**(code **)**(undefined8 **)(this + 0x68))(*(undefined8 **)(this + 0x68),iVar2);
  if (iVar1 != 0) {
    __android_log_print(6,"UrlAudioPlayer","UrlAudioPlayer::setVolumeToSLPlayer %d failed",iVar2);
    return;
  }
  return;
}

