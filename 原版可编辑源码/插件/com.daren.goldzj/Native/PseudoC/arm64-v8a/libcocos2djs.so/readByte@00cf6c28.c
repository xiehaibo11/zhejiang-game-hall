
/* spine::SkeletonBinary::readByte(spine::SkeletonBinary::DataInput*) */

undefined1 __thiscall spine::SkeletonBinary::readByte(SkeletonBinary *this,DataInput *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  *(undefined1 **)(param_1 + 8) = puVar1 + 1;
  return *puVar1;
}

