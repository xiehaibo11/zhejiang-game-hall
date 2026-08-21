
/* cocostudio::TextFieldReader::destroyInstance() */

void cocostudio::TextFieldReader::destroyInstance(void)

{
  if (DAT_01786870 != (long *)0x0) {
    (**(code **)(*DAT_01786870 + 8))();
  }
  DAT_01786870 = (long *)0x0;
  return;
}

