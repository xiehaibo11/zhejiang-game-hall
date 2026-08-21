
/* cocostudio::SceneReader::destroyInstance() */

void cocostudio::SceneReader::destroyInstance(void)

{
  DictionaryHelper::destroyInstance();
  TriggerMng::destroyInstance();
  CocosDenshion::SimpleAudioEngine::end();
  if (s_sharedReader != (long *)0x0) {
    (**(code **)(*s_sharedReader + 8))();
  }
  s_sharedReader = (long *)0x0;
  return;
}

