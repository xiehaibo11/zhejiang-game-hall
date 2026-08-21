
/* cocos2d::PhysicsShapePolygon::calculateDefaultMoment() */

undefined1  [16] __thiscall
cocos2d::PhysicsShapePolygon::calculateDefaultMoment(PhysicsShapePolygon *this)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  undefined8 uVar8;
  undefined1 auVar7 [16];
  float fVar9;
  undefined4 uVar10;
  
                    /* try { // try from 0100a714 to 0110a717 has its CatchHandler @ 0100a844 */
  fVar9 = *(float *)(this + 0x50);
  uVar4 = 0x7f7fffff;
  uVar8 = 0;
  if (fVar9 != 3.4028235e+38) {
    uVar4 = **(undefined8 **)(this + 0x30);
    uVar1 = cpPolyShapeGetCount(uVar4);
    uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    if ((ulong)(long)(int)uVar1 >> 0x3d != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    pvVar2 = operator_new__(uVar3);
    if (0 < (int)uVar1) {
      uVar3 = 0;
      pfVar5 = (float *)((long)pvVar2 + 4);
      do {
        fVar6 = (float)cpPolyShapeGetVert(uVar4,uVar3 & 0xffffffff);
        uVar3 = uVar3 + 1;
        pfVar5[-1] = fVar6;
        *pfVar5 = fVar9;
        pfVar5 = pfVar5 + 2;
      } while (uVar1 != uVar3);
    }
    uVar10 = *(undefined4 *)(this + 0x50);
    uVar4 = cpPolyShapeGetRadius(uVar4);
    auVar7 = cpMomentForPoly(uVar10,0,0,uVar4,uVar1,pvVar2);
    uVar8 = auVar7._8_8_;
    uVar4 = auVar7._0_8_;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0100a604 with catch @ 0100a7c4
                       catch(type#1 @ 00000000) { ... } // from try @ 0100a650 with catch @ 0100a7c4
                        */
    operator_delete__(pvVar2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0100a634 with catch @ 0100a7c8
                        */
  }
  auVar7._8_8_ = uVar8;
  auVar7._0_8_ = uVar4;
  return auVar7;
}

