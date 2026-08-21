
/* cocostudio::Node3DReader::destroyInstance() */

void cocostudio::Node3DReader::destroyInstance(void)

{
  if (DAT_01786ec0 != (long *)0x0) {
    (**(code **)(*DAT_01786ec0 + 8))();
  }
  DAT_01786ec0 = (long *)0x0;
  return;
}

