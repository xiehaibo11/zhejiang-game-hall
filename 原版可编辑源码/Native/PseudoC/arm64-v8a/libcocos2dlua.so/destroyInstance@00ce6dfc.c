
/* SkeletonNodeReader::destroyInstance() */

void SkeletonNodeReader::destroyInstance(void)

{
  if (DAT_01787140 != (long *)0x0) {
    (**(code **)(*DAT_01787140 + 8))();
  }
  DAT_01787140 = (long *)0x0;
  return;
}

