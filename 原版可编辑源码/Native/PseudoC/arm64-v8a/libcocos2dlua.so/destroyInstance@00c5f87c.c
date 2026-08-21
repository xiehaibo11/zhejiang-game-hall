
/* cocostudio::GUIReader::destroyInstance() */

void cocostudio::GUIReader::destroyInstance(void)

{
  if (DAT_01785a68 != (long *)0x0) {
    (**(code **)(*DAT_01785a68 + 8))();
  }
  DAT_01785a68 = (long *)0x0;
  return;
}

