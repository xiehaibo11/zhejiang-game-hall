
/* cocostudio::ComAudioReader::destroyInstance() */

void cocostudio::ComAudioReader::destroyInstance(void)

{
  if (DAT_01786dc0 != (long *)0x0) {
    (**(code **)(*DAT_01786dc0 + 8))();
  }
  DAT_01786dc0 = (long *)0x0;
  return;
}

