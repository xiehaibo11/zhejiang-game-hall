
/* cocostudio::NodeReader::destroyInstance() */

void cocostudio::NodeReader::destroyInstance(void)

{
  if (DAT_01786bb0 != (long *)0x0) {
    (**(code **)(*DAT_01786bb0 + 8))();
  }
  DAT_01786bb0 = (long *)0x0;
  return;
}

