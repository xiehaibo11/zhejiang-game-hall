
/* cocostudio::SliderReader::destroyInstance() */

void cocostudio::SliderReader::destroyInstance(void)

{
  if (DAT_017866f0 != (long *)0x0) {
    (**(code **)(*DAT_017866f0 + 8))();
  }
  DAT_017866f0 = (long *)0x0;
  return;
}

