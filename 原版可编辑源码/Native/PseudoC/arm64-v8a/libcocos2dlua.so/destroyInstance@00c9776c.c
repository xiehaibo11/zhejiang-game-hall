
/* cocostudio::TextBMFontReader::destroyInstance() */

void cocostudio::TextBMFontReader::destroyInstance(void)

{
  if (DAT_017867f0 != (long *)0x0) {
    (**(code **)(*DAT_017867f0 + 8))();
  }
  DAT_017867f0 = (long *)0x0;
  return;
}

