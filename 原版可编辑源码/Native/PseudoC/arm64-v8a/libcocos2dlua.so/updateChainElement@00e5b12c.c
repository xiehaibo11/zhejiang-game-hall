
/* cocos2d::PUBillboardChain::updateChainElement(unsigned long, unsigned long,
   cocos2d::PUBillboardChain::Element const&) */

void __thiscall
cocos2d::PUBillboardChain::updateChainElement
          (PUBillboardChain *this,ulong param_1,ulong param_2,Element *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(ulong *)(this + 8);
  uVar7 = *(undefined8 *)(param_3 + 8);
  uVar6 = *(undefined8 *)param_3;
  uVar9 = *(undefined8 *)(param_3 + 0x18);
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  plVar3 = (long *)(*(long *)(this + 0x58) + param_1 * 0x18);
  uVar11 = *(undefined8 *)(param_3 + 0x28);
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  uVar1 = plVar3[1] + param_2;
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = uVar1 / uVar5;
  }
  puVar4 = (undefined8 *)(*(long *)(this + 0x40) + (*plVar3 + (uVar1 - uVar2 * uVar5)) * 0x34);
  *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(param_3 + 0x30);
  puVar4[3] = uVar9;
  puVar4[2] = uVar8;
  puVar4[5] = uVar11;
  puVar4[4] = uVar10;
  puVar4[1] = uVar7;
  *puVar4 = uVar6;
  this[0x1f] = (PUBillboardChain)0x1;
  this[0x1d] = (PUBillboardChain)0x1;
  return;
}

