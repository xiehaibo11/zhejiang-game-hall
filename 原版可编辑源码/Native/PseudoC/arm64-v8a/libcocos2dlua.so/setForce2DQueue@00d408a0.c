
/* cocos2d::Sprite3D::setForce2DQueue(bool) */

void __thiscall cocos2d::Sprite3D::setForce2DQueue(Sprite3D *this,bool param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  plVar6 = *(long **)(this + 0x350);
  plVar4 = *(long **)(this + 0x358);
  if (plVar6 != plVar4) {
    uVar2 = ((ulong)((long)plVar4 + (-8 - (long)plVar6)) >> 3) + 1;
    if (1 < uVar2) {
      uVar5 = uVar2 & 0x3ffffffffffffffe;
      plVar7 = plVar6 + 1;
      uVar8 = uVar5;
      do {
        plVar1 = plVar7 + -1;
        lVar3 = *plVar7;
        uVar8 = uVar8 - 2;
        plVar7 = plVar7 + 2;
        *(bool *)(*plVar1 + 0x4a) = param_1;
        *(bool *)(lVar3 + 0x4a) = param_1;
      } while (uVar8 != 0);
      plVar6 = plVar6 + uVar5;
      if (uVar2 == uVar5) {
        return;
      }
    }
    do {
      plVar7 = plVar6 + 1;
      *(bool *)(*plVar6 + 0x4a) = param_1;
      plVar6 = plVar7;
    } while (plVar4 != plVar7);
  }
  return;
}

