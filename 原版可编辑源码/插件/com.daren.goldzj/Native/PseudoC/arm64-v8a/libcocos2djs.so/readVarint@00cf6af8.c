
/* spine::SkeletonBinary::readVarint(spine::SkeletonBinary::DataInput*, bool) */

uint __thiscall
spine::SkeletonBinary::readVarint(SkeletonBinary *this,DataInput *param_1,bool param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 8);
  *(byte **)(param_1 + 8) = pbVar2 + 1;
  uVar1 = *pbVar2 & 0x7f;
  if ((char)*pbVar2 < '\0') {
    *(byte **)(param_1 + 8) = pbVar2 + 2;
    uVar1 = uVar1 | (pbVar2[1] & 0x7f) << 7;
    if ((char)pbVar2[1] < '\0') {
      *(byte **)(param_1 + 8) = pbVar2 + 3;
      uVar1 = uVar1 | (pbVar2[2] & 0x7f) << 0xe;
      if ((char)pbVar2[2] < '\0') {
        *(byte **)(param_1 + 8) = pbVar2 + 4;
        uVar1 = uVar1 | (pbVar2[3] & 0x7f) << 0x15;
        if ((char)pbVar2[3] < '\0') {
          *(byte **)(param_1 + 8) = pbVar2 + 5;
          uVar1 = uVar1 | (uint)pbVar2[4] << 0x1c;
        }
      }
    }
  }
  if (!param_2) {
    uVar1 = -(uVar1 & 1) ^ uVar1 >> 1;
  }
  return uVar1;
}

