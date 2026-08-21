
/* cocostudio::ParticleReader::destroyInstance() */

void cocostudio::ParticleReader::destroyInstance(void)

{
  if (DAT_01786d30 != (long *)0x0) {
    (**(code **)(*DAT_01786d30 + 8))();
  }
  DAT_01786d30 = (long *)0x0;
  return;
}

