
/* cocostudio::LayoutReader::destroyInstance() */

void cocostudio::LayoutReader::destroyInstance(void)

{
  if (DAT_01786470 != (long *)0x0) {
    (**(code **)(*DAT_01786470 + 8))();
  }
  DAT_01786470 = (long *)0x0;
  return;
}

