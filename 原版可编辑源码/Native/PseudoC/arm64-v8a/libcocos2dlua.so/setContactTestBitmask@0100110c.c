
/* cocos2d::PhysicsBody::setContactTestBitmask(int) */

void __thiscall cocos2d::PhysicsBody::setContactTestBitmask(PhysicsBody *this,int param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  plVar5 = *(long **)(this + 0x68);
  plVar3 = *(long **)(this + 0x70);
  if (plVar5 != plVar3) {
    uVar2 = ((ulong)((long)plVar3 + (-8 - (long)plVar5)) >> 3) + 1;
                    /* try { // try from 01001130 to 01101137 has its CatchHandler @ 01001290 */
    if (1 < uVar2) {
      uVar6 = uVar2 & 0x3ffffffffffffffe;
      plVar7 = plVar5 + 1;
      uVar8 = uVar6;
      do {
        plVar1 = plVar7 + -1;
        lVar4 = *plVar7;
        uVar8 = uVar8 - 2;
        plVar7 = plVar7 + 2;
        *(int *)(*plVar1 + 0x84) = param_1;
        *(int *)(lVar4 + 0x84) = param_1;
      } while (uVar8 != 0);
      plVar5 = plVar5 + uVar6;
      if (uVar2 == uVar6) {
        return;
      }
    }
    do {
      plVar7 = plVar5 + 1;
      *(int *)(*plVar5 + 0x84) = param_1;
      plVar5 = plVar7;
    } while (plVar3 != plVar7);
  }
  return;
}

