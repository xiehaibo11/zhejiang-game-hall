
/* spine::Skeleton::sortReset(spine::Vector<spine::Bone*>&) */

void spine::Skeleton::sortReset(Vector *param_1)

{
  Vector *pVVar1;
  Bone *this;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      this = *(Bone **)(*(long *)(param_1 + 0x18) + lVar3 * 8);
      if (this[0x95] != (Bone)0x0) {
        if (this[0x94] != (Bone)0x0) {
          pVVar1 = (Vector *)Bone::getChildren(this);
          sortReset(pVVar1);
        }
        this[0x94] = (Bone)0x0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
  }
  return;
}

