
/* cocos2d::experimental::TMXLayer::removeTileAt(cocos2d::Vec2 const&) */

void __thiscall cocos2d::experimental::TMXLayer::removeTileAt(TMXLayer *this,Vec2 *param_1)

{
  TMXLayer *pTVar1;
  TMXLayer *pTVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  TMXLayer *pTVar6;
  TMXLayer *pTVar7;
  TMXLayer *pTVar8;
  
  pTVar2 = this + 0x370;
  iVar5 = (int)(*(float *)(this + 0x310) * (float)(int)*(float *)(param_1 + 4) +
               (float)(int)*(float *)param_1);
  pTVar6 = *(TMXLayer **)(this + 0x370);
  uVar3 = *(uint *)(*(long *)(this + 800) + (long)iVar5 * 4);
  pTVar7 = pTVar2;
  pTVar8 = pTVar6;
  if (pTVar6 != (TMXLayer *)0x0) {
    do {
      if (iVar5 <= *(int *)(pTVar8 + 0x20)) {
        pTVar7 = pTVar8;
      }
      pTVar1 = pTVar8 + (ulong)(*(int *)(pTVar8 + 0x20) < iVar5) * 8;
      pTVar8 = *(TMXLayer **)pTVar1;
    } while (*(TMXLayer **)pTVar1 != (TMXLayer *)0x0);
    if ((pTVar7 != pTVar2) && (*(int *)(pTVar7 + 0x20) <= iVar5)) goto LAB_00efa6b4;
  }
  pTVar7 = pTVar2;
LAB_00efa6b4:
  uVar4 = uVar3;
  if (uVar3 == 0) {
    if (pTVar7 == pTVar2) {
      return;
    }
    uVar4 = *(uint *)(pTVar7 + 0x30);
  }
  if ((uVar4 & 0x1fffffff) != 0) {
    if (uVar3 != 0) {
      *(undefined4 *)(*(long *)(this + 800) + (long)iVar5 * 4) = 0;
      this[0x3e4] = (TMXLayer)0x1;
      this[0x488] = (TMXLayer)0x1;
    }
    pTVar7 = pTVar2;
    if (pTVar6 != (TMXLayer *)0x0) {
      do {
        if (iVar5 <= *(int *)(pTVar6 + 0x20)) {
          pTVar7 = pTVar6;
        }
        pTVar6 = *(TMXLayer **)(pTVar6 + (ulong)(*(int *)(pTVar6 + 0x20) < iVar5) * 8);
      } while (pTVar6 != (TMXLayer *)0x0);
      if ((pTVar7 != pTVar2) && (*(int *)(pTVar7 + 0x20) <= iVar5)) {
                    /* WARNING: Could not recover jumptable at 0x00efa71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x280))(this,*(undefined8 *)(pTVar7 + 0x28),1);
        return;
      }
    }
  }
  return;
}

