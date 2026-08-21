
/* spine::SkeletonBatch::getInstance() */

SkeletonBatch * spine::SkeletonBatch::getInstance(void)

{
  SkeletonBatch *this;
  
                    /* try { // try from 00d6086c to 00e60883 has its CatchHandler @ 00d60a74 */
  if (DAT_017875f8 == (SkeletonBatch *)0x0) {
    this = operator_new(0x50);
                    /* try { // try from 00d60888 to 00e6088f has its CatchHandler @ 00d60a70 */
    SkeletonBatch(this);
    DAT_017875f8 = this;
  }
  return DAT_017875f8;
}

