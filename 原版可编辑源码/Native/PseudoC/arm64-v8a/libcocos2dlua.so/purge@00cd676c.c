
/* cocostudio::SingleNodeReader::purge() */

void cocostudio::SingleNodeReader::purge(void)

{
  if (DAT_01786c30 != (long *)0x0) {
    (**(code **)(*DAT_01786c30 + 8))();
  }
  DAT_01786c30 = (long *)0x0;
  return;
}

