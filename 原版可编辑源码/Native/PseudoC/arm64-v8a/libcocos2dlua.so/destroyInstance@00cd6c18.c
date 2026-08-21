
/* cocostudio::SpriteReader::destroyInstance() */

void cocostudio::SpriteReader::destroyInstance(void)

{
  if (DAT_01786cb0 != (long *)0x0) {
    (**(code **)(*DAT_01786cb0 + 8))();
  }
  DAT_01786cb0 = (long *)0x0;
  return;
}

