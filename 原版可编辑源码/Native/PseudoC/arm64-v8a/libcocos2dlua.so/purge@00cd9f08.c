
/* cocostudio::ComAudioReader::purge() */

void cocostudio::ComAudioReader::purge(void)

{
  if (DAT_01786dc0 != (long *)0x0) {
    (**(code **)(*DAT_01786dc0 + 8))();
  }
  DAT_01786dc0 = (long *)0x0;
  return;
}

