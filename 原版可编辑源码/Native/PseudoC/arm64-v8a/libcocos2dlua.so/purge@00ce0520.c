
/* cocostudio::Node3DReader::purge() */

void cocostudio::Node3DReader::purge(void)

{
  if (DAT_01786ec0 != (long *)0x0) {
    (**(code **)(*DAT_01786ec0 + 8))();
  }
  DAT_01786ec0 = (long *)0x0;
  return;
}

