
/* spine::SkeletonBatch::destroyInstance() */

void spine::SkeletonBatch::destroyInstance(void)

{
  if (DAT_017875f8 != (long *)0x0) {
    (**(code **)(*DAT_017875f8 + 8))();
    DAT_017875f8 = (long *)0x0;
  }
  return;
}

