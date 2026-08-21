
/* dragonBones::ArmatureData::cacheFrames(unsigned int) */

void __thiscall dragonBones::ArmatureData::cacheFrames(ArmatureData *this,uint param_1)

{
  bool bVar1;
  ArmatureData *pAVar2;
  long lVar3;
  ArmatureData *pAVar4;
  
  if (*(uint *)(this + 0x18) <= param_1) {
    pAVar4 = *(ArmatureData **)(this + 0x120);
    *(uint *)(this + 0x18) = param_1;
    if (pAVar4 != this + 0x128) {
      while( true ) {
        AnimationData::cacheFrames(*(AnimationData **)(pAVar4 + 0x38),param_1);
        pAVar2 = *(ArmatureData **)(pAVar4 + 8);
        if (*(ArmatureData **)(pAVar4 + 8) == (ArmatureData *)0x0) {
          pAVar2 = pAVar4 + 0x10;
          bVar1 = *(ArmatureData **)*(ArmatureData **)pAVar2 != pAVar4;
          pAVar4 = *(ArmatureData **)pAVar2;
          if (bVar1) {
            do {
              lVar3 = *(long *)pAVar2;
              pAVar2 = (ArmatureData *)(lVar3 + 0x10);
              pAVar4 = *(ArmatureData **)pAVar2;
            } while (*(long *)pAVar4 != lVar3);
          }
        }
        else {
          do {
            pAVar4 = pAVar2;
            pAVar2 = *(ArmatureData **)pAVar4;
          } while (*(ArmatureData **)pAVar4 != (ArmatureData *)0x0);
        }
        if (pAVar4 == this + 0x128) break;
        param_1 = *(uint *)(this + 0x18);
      }
    }
  }
  return;
}

