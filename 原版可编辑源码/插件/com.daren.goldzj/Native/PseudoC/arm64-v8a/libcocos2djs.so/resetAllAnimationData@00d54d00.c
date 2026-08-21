
/* dragonBones::ArmatureCache::resetAllAnimationData() */

void __thiscall dragonBones::ArmatureCache::resetAllAnimationData(ArmatureCache *this)

{
  bool bVar1;
  undefined8 *puVar2;
  ArmatureCache *pAVar3;
  long lVar4;
  FrameData *this_00;
  ArmatureCache *pAVar5;
  long lVar6;
  ulong uVar7;
  
  pAVar5 = *(ArmatureCache **)(this + 0x78);
  while (this + 0x80 != pAVar5) {
    lVar6 = *(long *)(pAVar5 + 0x38);
    puVar2 = *(undefined8 **)(lVar6 + 0x20);
    lVar4 = *(long *)(lVar6 + 0x28) - (long)puVar2;
    if (lVar4 != 0) {
      uVar7 = 0;
      this_00 = (FrameData *)*puVar2;
      while( true ) {
        if (this_00 != (FrameData *)0x0) {
          FrameData::~FrameData(this_00);
          operator_delete(this_00);
        }
        uVar7 = uVar7 + 1;
        if ((ulong)(lVar4 >> 3) <= uVar7) break;
        this_00 = *(FrameData **)(*(long *)(lVar6 + 0x20) + uVar7 * 8);
      }
      puVar2 = *(undefined8 **)(lVar6 + 0x20);
    }
    *(undefined8 **)(lVar6 + 0x28) = puVar2;
    *(undefined1 *)(lVar6 + 0x18) = 0;
    *(undefined4 *)(lVar6 + 0x1c) = 0;
    pAVar3 = *(ArmatureCache **)(pAVar5 + 8);
    if (*(ArmatureCache **)(pAVar5 + 8) == (ArmatureCache *)0x0) {
      pAVar3 = pAVar5 + 0x10;
      bVar1 = *(ArmatureCache **)*(ArmatureCache **)pAVar3 != pAVar5;
      pAVar5 = *(ArmatureCache **)pAVar3;
      if (bVar1) {
        do {
          lVar4 = *(long *)pAVar3;
          pAVar3 = (ArmatureCache *)(lVar4 + 0x10);
          pAVar5 = *(ArmatureCache **)pAVar3;
        } while (*(long *)pAVar5 != lVar4);
      }
    }
    else {
      do {
        pAVar5 = pAVar3;
        pAVar3 = *(ArmatureCache **)pAVar5;
      } while (*(ArmatureCache **)pAVar5 != (ArmatureCache *)0x0);
    }
  }
  return;
}

