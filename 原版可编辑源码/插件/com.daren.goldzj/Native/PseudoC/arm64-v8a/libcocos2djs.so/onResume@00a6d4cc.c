
/* cocos2d::AudioEngine::onResume(cocos2d::CustomEvent const&) */

void cocos2d::AudioEngine::onResume(CustomEvent *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_01d38cf8;
  for (piVar2 = _breakAudioID; piVar2 != piVar1; piVar2 = piVar2 + 1) {
                    /* try { // try from 00a6d4fc to 00b6d513 has its CatchHandler @ 00a6d718 */
    AudioEngineImpl::resume(_audioEngineImpl,*piVar2);
  }
  DAT_01d38cf8 = _breakAudioID;
  if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
                    /* try { // try from 00a6d528 to 00b6d53b has its CatchHandler @ 00a6d714 */
    AudioEngineImpl::onResume(_audioEngineImpl);
    return;
  }
                    /* try { // try from 00a6d53c to 00b6d54b has its CatchHandler @ 00a6d700 */
  return;
}

