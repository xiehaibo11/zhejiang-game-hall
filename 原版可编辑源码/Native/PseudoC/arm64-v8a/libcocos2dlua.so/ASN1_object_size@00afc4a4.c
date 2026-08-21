
int ASN1_object_size(int constructed,int length,int tag)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  
  if (-1 < length) {
    iVar3 = 1;
    if (0x1e < tag) {
      do {
        tag = tag >> 7;
        iVar3 = iVar3 + 1;
      } while (0 < tag);
    }
    if (constructed == 2) {
      iVar3 = iVar3 + 3;
    }
    else {
      iVar3 = iVar3 + 1;
      if (0x7f < length) {
        uVar4 = (ulong)(uint)length;
        do {
          iVar3 = iVar3 + 1;
          uVar2 = uVar4 >> 8;
          uVar4 = uVar4 >> 8;
        } while ((int)uVar2 != 0);
      }
    }
    iVar1 = iVar3 + length;
    if (0x7fffffff - length <= iVar3) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return -1;
}

