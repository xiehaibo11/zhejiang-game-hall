
/* cocostudio::Sprite3DReader::purge() */

void cocostudio::Sprite3DReader::purge(void)

{
  if (DAT_01786f40 != (long *)0x0) {
    (**(code **)(*DAT_01786f40 + 8))();
  }
  DAT_01786f40 = (long *)0x0;
  return;
}

