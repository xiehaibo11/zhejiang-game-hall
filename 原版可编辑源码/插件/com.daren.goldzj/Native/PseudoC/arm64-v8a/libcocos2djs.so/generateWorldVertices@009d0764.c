
/* cocos2d::renderer::SimpleSprite3D::generateWorldVertices() */

void __thiscall cocos2d::renderer::SimpleSprite3D::generateWorldVertices(SimpleSprite3D *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  RenderData *this_00;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  this_00 = (RenderData *)RenderDataList::getRenderData(*(RenderDataList **)(this + 0x38),0);
  puVar7 = (undefined4 *)RenderData::getVertices(this_00);
  puVar8 = *(undefined4 **)(this + 0x98);
  uVar6 = *(uint *)(this + 0x58) >> 2;
  uVar2 = *puVar8;
  uVar4 = puVar8[1];
  uVar3 = puVar8[2];
  uVar5 = puVar8[3];
  puVar8 = puVar7 + uVar6;
  puVar7[1] = uVar4;
  puVar7[2] = 0;
  *puVar7 = uVar2;
  *puVar8 = uVar3;
  puVar8[1] = uVar4;
  puVar1 = puVar7 + (ulong)(uVar6 << 1) + (ulong)uVar6;
  puVar8[2] = 0;
  puVar7[uVar6 << 1] = uVar2;
  *(undefined4 *)((long)puVar7 + ((ulong)uVar6 << 3 | 4)) = uVar5;
  (puVar7 + (uVar6 << 1))[2] = 0;
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  puVar1[2] = 0;
  return;
}

