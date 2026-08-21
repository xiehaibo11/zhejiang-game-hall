
/* cocos2d::ParticleBatchNode::getCurrentIndex(int*, int*, cocos2d::Node*, int) */

void __thiscall
cocos2d::ParticleBatchNode::getCurrentIndex
          (ParticleBatchNode *this,int *param_1,int *param_2,Node *param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  Node *pNVar6;
  int iVar7;
  long lVar8;
  
  lVar4 = *(long *)(this + 0x178);
  uVar5 = *(long *)(this + 0x180) - lVar4;
  if ((long)uVar5 < 1) {
    iVar7 = 0;
  }
  else {
    lVar8 = 0;
    bVar2 = false;
    bVar1 = false;
    iVar7 = 0;
    while( true ) {
      pNVar6 = *(Node **)(lVar4 + lVar8 * 8);
      iVar3 = (**(code **)(*(long *)pNVar6 + 0x30))(pNVar6);
      if ((!bVar1) && (param_4 < iVar3)) {
        *param_2 = (int)lVar8;
        if (bVar2) goto LAB_00f2dbb8;
        bVar1 = true;
      }
      if (pNVar6 == param_3) {
        *param_1 = (int)lVar8;
        if (bVar1) goto LAB_00f2dbb8;
        bVar2 = true;
        iVar7 = -1;
      }
      lVar8 = lVar8 + 1;
      if ((long)uVar5 >> 3 <= lVar8) break;
      lVar4 = *(long *)(this + 0x178);
    }
    if (bVar1) goto LAB_00f2dbb8;
  }
  *param_2 = (int)(uVar5 >> 3);
LAB_00f2dbb8:
  *param_2 = *param_2 + iVar7;
  return;
}

