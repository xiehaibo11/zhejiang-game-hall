
/* cocosbuilder::CCBSoundEffect::update(float) */

void cocosbuilder::CCBSoundEffect::update(float param_1)

{
  long in_x0;
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)CocosDenshion::SimpleAudioEngine::getInstance();
  if ((*(byte *)(in_x0 + 0x58) & 1) == 0) {
    lVar2 = in_x0 + 0x59;
  }
  else {
    lVar2 = *(long *)(in_x0 + 0x68);
  }
                    /* WARNING: Could not recover jumptable at 0x00cef988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(0x3f800000,0,0x3f800000,plVar1,lVar2,0);
  return;
}

