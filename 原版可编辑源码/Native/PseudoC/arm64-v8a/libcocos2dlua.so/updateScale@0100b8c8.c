
/* cocos2d::PhysicsShapeEdgeChain::updateScale() */

void __thiscall cocos2d::PhysicsShapeEdgeChain::updateScale(PhysicsShapeEdgeChain *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined8 *puVar4;
  ulong uVar10;
  
  puVar1 = *(undefined8 **)(this + 0x38);
  fVar5 = *(float *)(this + 100);
  fVar8 = *(float *)(this + 0x68);
  uVar10 = (ulong)(uint)fVar8;
  if (*(undefined8 **)(this + 0x30) != puVar1) {
    fVar11 = *(float *)(this + 0x5c);
    fVar12 = *(float *)(this + 0x60);
    puVar3 = *(undefined8 **)(this + 0x30);
    do {
      fVar9 = (float)uVar10;
      puVar4 = puVar3 + 1;
      uVar2 = *puVar3;
      fVar6 = (float)cpSegmentShapeGetA(uVar2);
      uVar10 = (ulong)(uint)((fVar8 / fVar12) * fVar9);
      fVar7 = (float)cpSegmentShapeGetB(uVar2);
      cpSegmentShapeSetEndpoints
                ((fVar5 / fVar11) * fVar6,uVar10,(fVar5 / fVar11) * fVar7,(fVar8 / fVar12) * fVar9,
                 uVar2);
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    fVar5 = *(float *)(this + 100);
    fVar8 = *(float *)(this + 0x68);
  }
  *(float *)(this + 0x5c) = fVar5;
  *(float *)(this + 0x60) = fVar8;
  return;
}

