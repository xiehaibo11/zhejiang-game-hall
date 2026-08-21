
/* spine::SkeletonTwoColorBatch::destroyInstance() */

void spine::SkeletonTwoColorBatch::destroyInstance(void)

{
  if (DAT_017875d8 != (long *)0x0) {
    (**(code **)(*DAT_017875d8 + 8))();
    DAT_017875d8 = (long *)0x0;
  }
  return;
}

