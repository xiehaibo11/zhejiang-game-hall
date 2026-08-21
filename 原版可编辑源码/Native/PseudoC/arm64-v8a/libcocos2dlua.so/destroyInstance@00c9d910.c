
/* cocostudio::TextReader::destroyInstance() */

void cocostudio::TextReader::destroyInstance(void)

{
  if (DAT_017868f0 != (long *)0x0) {
    (**(code **)(*DAT_017868f0 + 8))();
  }
  DAT_017868f0 = (long *)0x0;
  return;
}

