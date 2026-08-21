
/* spine::SkeletonBatch::deallocateIndices(unsigned int) */

void __thiscall spine::SkeletonBatch::deallocateIndices(SkeletonBatch *this,uint param_1)

{
  **(int **)(this + 0x48) = **(int **)(this + 0x48) - param_1;
  return;
}

