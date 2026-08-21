
/* cocos2d::PURibbonTrail::getChainIndexForNode(cocos2d::Node const*) */

undefined8 __thiscall
cocos2d::PURibbonTrail::getChainIndexForNode(PURibbonTrail *this,Node *param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(this + 0x138);
  uVar3 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  uVar3 = (uVar3 ^ (ulong)param_1 >> 0x20 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
  uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar4 = uVar1 - 1 & uVar3;
  }
  else {
    uVar4 = uVar3;
    if (uVar1 <= uVar3) {
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar3 / uVar1;
      }
      uVar4 = uVar3 - uVar4 * uVar1;
    }
  }
  plVar2 = *(long **)(*(long *)(this + 0x130) + uVar4 * 8);
  do {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2[1] != uVar3);
  } while ((Node *)plVar2[2] != param_1);
  return plVar2[3];
}

