
/* cocostudio::Light3DReader::destroyInstance() */

void cocostudio::Light3DReader::destroyInstance(void)

{
  if (DAT_01787240 != (long *)0x0) {
    (**(code **)(*DAT_01787240 + 8))();
  }
  DAT_01787240 = (long *)0x0;
  return;
}

