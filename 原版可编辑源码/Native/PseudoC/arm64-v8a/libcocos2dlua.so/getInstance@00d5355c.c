
/* spine::SkeletonTwoColorBatch::getInstance() */

SkeletonTwoColorBatch * spine::SkeletonTwoColorBatch::getInstance(void)

{
  SkeletonTwoColorBatch *this;
  
  if (DAT_017875d8 == (SkeletonTwoColorBatch *)0x0) {
    this = operator_new(0xa8);
    SkeletonTwoColorBatch(this);
    DAT_017875d8 = this;
  }
  return DAT_017875d8;
}

