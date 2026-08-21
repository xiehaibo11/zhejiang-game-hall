
/* cocos2d::Sprite::flipX() */

void __thiscall cocos2d::Sprite::flipX(Sprite *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  
  if (*(int *)(this + 0x42c) == 3) {
                    /* WARNING: Could not recover jumptable at 0x00f410d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x5d8))(this,1);
    return;
  }
  if (*(int *)(this + 0x42c) == 1) {
    uVar1 = *(uint *)(this + 0x4d0);
    uVar2 = (ulong)(int)uVar1;
    if (0 < (int)uVar1) {
      pfVar4 = *(float **)(this + 0x4c0);
      fVar7 = *(float *)(this + 0x80);
      if (uVar1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar2 & 0xfffffffffffffffe;
        uVar5 = uVar3;
        pfVar6 = pfVar4;
        do {
          uVar5 = uVar5 - 2;
          *pfVar6 = fVar7 - *pfVar6;
          pfVar6[6] = fVar7 - pfVar6[6];
          pfVar6 = pfVar6 + 0xc;
        } while (uVar5 != 0);
        if (uVar3 == uVar2) {
          return;
        }
      }
      pfVar4 = pfVar4 + uVar3 * 6;
      do {
        uVar3 = uVar3 + 1;
        *pfVar4 = fVar7 - *pfVar4;
        pfVar4 = pfVar4 + 6;
      } while ((long)uVar3 < (long)uVar2);
    }
    return;
  }
  updatePoly(this);
  return;
}

