
/* cocos2d::renderer::SlicedSprite2D::generateWorldVertices() */

void __thiscall cocos2d::renderer::SlicedSprite2D::generateWorldVertices(SlicedSprite2D *this)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  RenderData *this_00;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  
  this_00 = (RenderData *)RenderDataList::getRenderData(*(RenderDataList **)(this + 0x38),0);
  puVar4 = (undefined4 *)RenderData::getVertices(this_00);
  puVar5 = *(undefined4 **)(this + 0x98);
  uVar2 = *(uint *)(this + 0x58);
  uVar1 = puVar5[1];
  *puVar4 = *puVar5;
  puVar4[1] = uVar1;
  uVar3 = uVar2 >> 2;
  uVar6 = (ulong)uVar3;
  puVar4[uVar6] = puVar5[2];
  (puVar4 + uVar6)[1] = uVar1;
  puVar4[uVar3 << 1] = puVar5[4];
  *(undefined4 *)((long)puVar4 + ((ulong)uVar3 << 3 | 4)) = uVar1;
  puVar4[uVar6 * 3] = puVar5[6];
  (puVar4 + uVar6 * 3)[1] = uVar1;
  uVar1 = puVar5[3];
  puVar4[(ulong)uVar2 & 0xfffffffc] = *puVar5;
  *(undefined4 *)((long)puVar4 + ((ulong)(uVar2 >> 2) << 4 | 4)) = uVar1;
  puVar4[uVar6 * 5] = puVar5[2];
  (puVar4 + uVar6 * 5)[1] = uVar1;
  puVar4[uVar6 * 6] = puVar5[4];
  *(undefined4 *)((long)puVar4 + (uVar6 * 0x18 | 4)) = uVar1;
  puVar4[uVar6 * 7] = puVar5[6];
  (puVar4 + uVar6 * 7)[1] = uVar1;
  uVar1 = puVar5[5];
  puVar4[uVar6 * 8] = *puVar5;
  *(undefined4 *)((long)puVar4 + (uVar6 << 5 | 4)) = uVar1;
  puVar4[uVar6 * 9] = puVar5[2];
  (puVar4 + uVar6 * 9)[1] = uVar1;
  puVar4[uVar6 * 10] = puVar5[4];
  *(undefined4 *)((long)puVar4 + (uVar6 * 0x28 | 4)) = uVar1;
  puVar4[uVar6 * 0xb] = puVar5[6];
  (puVar4 + uVar6 * 0xb)[1] = uVar1;
  uVar1 = puVar5[7];
  puVar4[uVar6 * 0xc] = *puVar5;
  *(undefined4 *)((long)puVar4 + (uVar6 * 0x30 | 4)) = uVar1;
  puVar4[uVar6 * 0xd] = puVar5[2];
  (puVar4 + uVar6 * 0xd)[1] = uVar1;
  puVar4[uVar6 * 0xe] = puVar5[4];
  *(undefined4 *)((long)puVar4 + (uVar6 * 0x38 | 4)) = uVar1;
  puVar4[uVar6 * 0xf] = puVar5[6];
  (puVar4 + uVar6 * 0xf)[1] = uVar1;
  return;
}

