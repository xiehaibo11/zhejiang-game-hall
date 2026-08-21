
/* cocostudio::Particle3DReader::destroyInstance() */

void cocostudio::Particle3DReader::destroyInstance(void)

{
  if (DAT_01787040 != (long *)0x0) {
    (**(code **)(*DAT_01787040 + 8))();
  }
  DAT_01787040 = (long *)0x0;
  return;
}

