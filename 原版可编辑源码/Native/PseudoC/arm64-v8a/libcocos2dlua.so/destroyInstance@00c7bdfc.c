
/* cocostudio::ImageViewReader::destroyInstance() */

void cocostudio::ImageViewReader::destroyInstance(void)

{
  if (DAT_017863f0 != (long *)0x0) {
    (**(code **)(*DAT_017863f0 + 8))();
  }
  DAT_017863f0 = (long *)0x0;
  return;
}

