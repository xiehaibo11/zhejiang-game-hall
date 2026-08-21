
/* cocos2d::Sprite::flipY() */

void __thiscall cocos2d::Sprite::flipY(Sprite *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  
  if (*(int *)(this + 0x42c) == 3) {
                    /* WARNING: Could not recover jumptable at 0x00f41180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x5d8))(this,1);
    return;
  }
  if (*(int *)(this + 0x42c) == 1) {
    uVar1 = *(uint *)(this + 0x4d0);
    uVar2 = (ulong)(int)uVar1;
    if (0 < (int)uVar1) {
      lVar4 = *(long *)(this + 0x4c0);
      fVar7 = *(float *)(this + 0x84);
      if (uVar1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar2 & 0xfffffffffffffffe;
        pfVar5 = (float *)(lVar4 + 0x1c);
        uVar6 = uVar3;
        do {
          uVar6 = uVar6 - 2;
          pfVar5[-6] = fVar7 - pfVar5[-6];
          *pfVar5 = fVar7 - *pfVar5;
          pfVar5 = pfVar5 + 0xc;
        } while (uVar6 != 0);
        if (uVar3 == uVar2) {
          return;
        }
      }
      pfVar5 = (float *)(lVar4 + uVar3 * 0x18 + 4);
      do {
        uVar3 = uVar3 + 1;
        *pfVar5 = fVar7 - *pfVar5;
        pfVar5 = pfVar5 + 6;
      } while ((long)uVar3 < (long)uVar2);
    }
    return;
  }
  updatePoly(this);
  return;
}

