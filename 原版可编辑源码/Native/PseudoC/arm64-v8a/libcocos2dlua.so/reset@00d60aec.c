
/* spine::SkeletonBatch::reset() */

void __thiscall spine::SkeletonBatch::reset(SkeletonBatch *this)

{
                    /* try { // try from 00d60af0 to 00e60dbb has its CatchHandler @ 00d60dc8 */
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  **(undefined4 **)(this + 0x48) = 0;
  return;
}

