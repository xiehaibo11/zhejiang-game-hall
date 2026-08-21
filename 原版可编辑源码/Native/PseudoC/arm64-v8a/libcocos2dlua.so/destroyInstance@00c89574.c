
/* cocostudio::PageViewReader::destroyInstance() */

void cocostudio::PageViewReader::destroyInstance(void)

{
  if (DAT_017865f0 != (long *)0x0) {
    (**(code **)(*DAT_017865f0 + 8))();
  }
  DAT_017865f0 = (long *)0x0;
  return;
}

