
/* cocostudio::UserCameraReader::destroyInstance() */

void cocostudio::UserCameraReader::destroyInstance(void)

{
  if (DAT_01786fc0 != (long *)0x0) {
    (**(code **)(*DAT_01786fc0 + 8))();
  }
  DAT_01786fc0 = (long *)0x0;
  return;
}

