
/* cocos2d::PUBillboardChain::addChainElement(unsigned long, cocos2d::PUBillboardChain::Element
   const&) */

void __thiscall
cocos2d::PUBillboardChain::addChainElement(PUBillboardChain *this,ulong param_1,Element *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = *(long *)(this + 0x58);
  plVar4 = (long *)(lVar1 + param_1 * 0x18 + 8);
  lVar5 = *plVar4;
  if (lVar5 == 0) {
    lVar5 = *(long *)(this + 8);
  }
  else if (lVar5 == -1) {
    lVar3 = *(long *)(this + 8) + -1;
    *(long *)(lVar1 + param_1 * 0x18 + 0x10) = lVar3;
    *plVar4 = lVar3;
    goto LAB_00e5afc8;
  }
  lVar3 = lVar5 + -1;
  *plVar4 = lVar3;
  plVar4 = (long *)(lVar1 + param_1 * 0x18 + 0x10);
  if (lVar3 == *plVar4) {
    if (lVar3 == 0) {
      lVar5 = *(long *)(this + 8) + -1;
    }
    else {
      lVar5 = lVar5 + -2;
    }
    *plVar4 = lVar5;
  }
LAB_00e5afc8:
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)param_2;
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  puVar2 = (undefined8 *)
           (*(long *)(this + 0x40) + (lVar3 + *(long *)(lVar1 + param_1 * 0x18)) * 0x34);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x30);
  puVar2[3] = uVar9;
  puVar2[2] = uVar8;
  puVar2[5] = uVar11;
  puVar2[4] = uVar10;
  puVar2[1] = uVar7;
  *puVar2 = uVar6;
  this[0x1f] = (PUBillboardChain)0x1;
  *(undefined2 *)(this + 0x1d) = 0x101;
  return;
}

