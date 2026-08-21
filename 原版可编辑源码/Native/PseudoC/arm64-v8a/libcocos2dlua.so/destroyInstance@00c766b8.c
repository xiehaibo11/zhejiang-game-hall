
/* cocostudio::CheckBoxReader::destroyInstance() */

void cocostudio::CheckBoxReader::destroyInstance(void)

{
  if (DAT_01786370 != (long *)0x0) {
    (**(code **)(*DAT_01786370 + 8))();
  }
  DAT_01786370 = (long *)0x0;
  return;
}

