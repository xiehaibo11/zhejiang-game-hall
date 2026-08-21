
/* SkeletonNodeReader::~SkeletonNodeReader() */

void __thiscall SkeletonNodeReader::~SkeletonNodeReader(SkeletonNodeReader *this)

{
  BoneNodeReader::~BoneNodeReader((BoneNodeReader *)this);
  operator_delete(this);
  return;
}

