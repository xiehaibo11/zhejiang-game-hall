
/* spine::SkeletonBinary::readBoolean(spine::SkeletonBinary::DataInput*) */

bool __thiscall spine::SkeletonBinary::readBoolean(SkeletonBinary *this,DataInput *param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 8);
  *(char **)(param_1 + 8) = pcVar1 + 1;
  return *pcVar1 != '\0';
}

