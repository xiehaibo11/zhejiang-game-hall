
/* cocostudio::WidgetReader::destroyInstance() */

void cocostudio::WidgetReader::destroyInstance(void)

{
  if (DAT_01786e40 != (long *)0x0) {
    (**(code **)(*DAT_01786e40 + 8))();
  }
  DAT_01786e40 = (long *)0x0;
  return;
}

