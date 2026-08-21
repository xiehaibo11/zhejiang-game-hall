
/* spine::SkeletonTwoColorBatch::deallocateIndices(unsigned int) */

void __thiscall
spine::SkeletonTwoColorBatch::deallocateIndices(SkeletonTwoColorBatch *this,uint param_1)

{
  **(int **)(this + 0x48) = **(int **)(this + 0x48) - param_1;
  return;
}

