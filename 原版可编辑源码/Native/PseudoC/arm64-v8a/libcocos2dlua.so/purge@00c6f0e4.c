
/* cocostudio::ButtonReader::purge() */

void cocostudio::ButtonReader::purge(void)

{
  if (DAT_017862f0 != (long *)0x0) {
    (**(code **)(*DAT_017862f0 + 8))();
  }
  DAT_017862f0 = (long *)0x0;
  return;
}

