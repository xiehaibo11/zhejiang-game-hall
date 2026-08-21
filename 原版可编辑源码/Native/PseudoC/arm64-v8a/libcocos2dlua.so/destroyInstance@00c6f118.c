
/* cocostudio::ButtonReader::destroyInstance() */

void cocostudio::ButtonReader::destroyInstance(void)

{
  if (DAT_017862f0 != (long *)0x0) {
    (**(code **)(*DAT_017862f0 + 8))();
  }
  DAT_017862f0 = (long *)0x0;
  return;
}

