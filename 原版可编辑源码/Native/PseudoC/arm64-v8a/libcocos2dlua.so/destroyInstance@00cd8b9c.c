
/* cocostudio::GameMapReader::destroyInstance() */

void cocostudio::GameMapReader::destroyInstance(void)

{
  if (DAT_01786db0 != (long *)0x0) {
    (**(code **)(*DAT_01786db0 + 8))();
  }
  DAT_01786db0 = (long *)0x0;
  return;
}

