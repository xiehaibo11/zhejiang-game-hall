
/* cocostudio::UserCameraReader::purge() */

void cocostudio::UserCameraReader::purge(void)

{
  if (DAT_01786fc0 != (long *)0x0) {
    (**(code **)(*DAT_01786fc0 + 8))();
  }
  DAT_01786fc0 = (long *)0x0;
  return;
}

