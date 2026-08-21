
/* cocos2d::ParticleBatchNode::searchNewPositionInChildrenForZ(int) */

ulong __thiscall
cocos2d::ParticleBatchNode::searchNewPositionInChildrenForZ(ParticleBatchNode *this,int param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(this + 0x180) - (long)*(undefined8 **)(this + 0x178);
  uVar3 = lVar2 >> 3;
  uVar4 = uVar3;
  if (0 < lVar2) {
    iVar1 = (**(code **)(*(long *)**(undefined8 **)(this + 0x178) + 0x30))();
    if (param_1 < iVar1) {
      uVar4 = 0;
    }
    else {
      uVar5 = 1;
      do {
        uVar4 = uVar3;
        if ((long)uVar3 <= (long)uVar5) break;
        iVar1 = (**(code **)(**(long **)(*(long *)(this + 0x178) + uVar5 * 8) + 0x30))();
        uVar4 = uVar5;
        uVar5 = uVar5 + 1;
      } while (iVar1 <= param_1);
    }
  }
  return uVar4 & 0xffffffff;
}

