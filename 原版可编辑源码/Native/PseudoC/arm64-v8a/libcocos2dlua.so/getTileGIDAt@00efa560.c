
/* cocos2d::experimental::TMXLayer::getTileGIDAt(cocos2d::Vec2 const&, cocos2d::TMXTileFlags_*) */

uint __thiscall
cocos2d::experimental::TMXLayer::getTileGIDAt(TMXLayer *this,Vec2 *param_1,TMXTileFlags_ *param_2)

{
  TMXLayer *pTVar1;
  TMXLayer *pTVar2;
  uint uVar3;
  TMXLayer *pTVar4;
  int iVar5;
  TMXLayer *pTVar6;
  
  pTVar6 = *(TMXLayer **)(this + 0x370);
                    /* try { // try from 00efa57c to 00ffacc7 has its CatchHandler @ 00efa57c
                       catch() { ... } // from try @ 00efa57c with catch @ 00efa57c
                       catch() { ... } // from try @ 00efad8c with catch @ 00efa57c
                       catch() { ... } // from try @ 00efade0 with catch @ 00efa57c
                       catch() { ... } // from try @ 00efb044 with catch @ 00efa57c */
  iVar5 = (int)(*(float *)(this + 0x310) * (float)(int)*(float *)(param_1 + 4) +
               (float)(int)*(float *)param_1);
  uVar3 = *(uint *)(*(long *)(this + 800) + (long)iVar5 * 4);
  pTVar1 = this + 0x370;
  pTVar4 = pTVar1;
  pTVar2 = pTVar1;
  if (pTVar6 != (TMXLayer *)0x0) {
    do {
      if (iVar5 <= *(int *)(pTVar6 + 0x20)) {
        pTVar4 = pTVar6;
      }
      pTVar6 = *(TMXLayer **)(pTVar6 + (ulong)(*(int *)(pTVar6 + 0x20) < iVar5) * 8);
    } while (pTVar6 != (TMXLayer *)0x0);
    if ((pTVar4 != pTVar1) && (*(int *)(pTVar4 + 0x20) <= iVar5)) {
      pTVar2 = pTVar4;
    }
  }
  if (uVar3 == 0) {
    if (pTVar2 == pTVar1) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(pTVar2 + 0x30);
    }
  }
  if (param_2 != (TMXTileFlags_ *)0x0) {
    *(uint *)param_2 = uVar3 & 0xe0000000;
  }
  return uVar3 & 0x1fffffff;
}

