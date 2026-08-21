
/* cocostudio::LoadingBarReader::destroyInstance() */

void cocostudio::LoadingBarReader::destroyInstance(void)

{
  if (DAT_01786570 != (long *)0x0) {
    (**(code **)(*DAT_01786570 + 8))();
  }
  DAT_01786570 = (long *)0x0;
  return;
}

