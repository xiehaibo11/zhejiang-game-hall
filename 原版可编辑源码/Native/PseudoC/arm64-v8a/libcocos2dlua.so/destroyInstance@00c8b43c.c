
/* cocostudio::ScrollViewReader::destroyInstance() */

void cocostudio::ScrollViewReader::destroyInstance(void)

{
  if (DAT_01786670 != (long *)0x0) {
    (**(code **)(*DAT_01786670 + 8))();
  }
  DAT_01786670 = (long *)0x0;
  return;
}

