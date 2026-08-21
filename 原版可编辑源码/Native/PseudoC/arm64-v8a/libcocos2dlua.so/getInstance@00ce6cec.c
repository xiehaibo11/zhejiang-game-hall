
/* SkeletonNodeReader::getInstance() */

BoneNodeReader * SkeletonNodeReader::getInstance(void)

{
  BoneNodeReader *this;
  
  this = DAT_01787140;
  if ((DAT_01787140 == (BoneNodeReader *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (BoneNodeReader *)0x0)) {
    BoneNodeReader::BoneNodeReader(this);
    *(undefined ***)this = &PTR__SkeletonNodeReader_016ceef8;
    *(undefined ***)(this + 0x28) = &PTR__SkeletonNodeReader_016cef30;
  }
  DAT_01787140 = this;
  return DAT_01787140;
}

