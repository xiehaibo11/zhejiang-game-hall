
/* ArmatureNodeReader::destroyInstance() */

void ArmatureNodeReader::destroyInstance(void)

{
  if (DAT_01786a00 != (long *)0x0) {
    (**(code **)(*DAT_01786a00 + 8))();
  }
  DAT_01786a00 = (long *)0x0;
  return;
}

