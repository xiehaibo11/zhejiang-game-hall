
/* cocostudio::GameNode3DReader::purge() */

void cocostudio::GameNode3DReader::purge(void)

{
  if (DAT_017871c0 != (long *)0x0) {
    (**(code **)(*DAT_017871c0 + 8))();
  }
  DAT_017871c0 = (long *)0x0;
  return;
}

