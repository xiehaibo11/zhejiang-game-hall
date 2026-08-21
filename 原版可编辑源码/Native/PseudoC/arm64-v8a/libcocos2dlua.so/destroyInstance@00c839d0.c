
/* cocostudio::ListViewReader::destroyInstance() */

void cocostudio::ListViewReader::destroyInstance(void)

{
  if (DAT_017864f0 != (long *)0x0) {
    (**(code **)(*DAT_017864f0 + 8))();
  }
  DAT_017864f0 = (long *)0x0;
  return;
}

