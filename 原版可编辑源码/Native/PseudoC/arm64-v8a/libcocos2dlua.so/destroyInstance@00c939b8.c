
/* cocostudio::TextAtlasReader::destroyInstance() */

void cocostudio::TextAtlasReader::destroyInstance(void)

{
  if (DAT_01786770 != (long *)0x0) {
    (**(code **)(*DAT_01786770 + 8))();
  }
  DAT_01786770 = (long *)0x0;
  return;
}

