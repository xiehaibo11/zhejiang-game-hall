
/* cocostudio::TriggerMng::destroyInstance() */

void cocostudio::TriggerMng::destroyInstance(void)

{
  if (_sharedTriggerMng != (long *)0x0) {
    (**(code **)(*_sharedTriggerMng + 8))();
  }
  _sharedTriggerMng = (long *)0x0;
  return;
}

