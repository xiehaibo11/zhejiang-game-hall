
/* btVoronoiSimplexSolver::updateClosestVectorAndPoints() */

bool __thiscall btVoronoiSimplexSolver::updateClosestVectorAndPoints(btVoronoiSimplexSolver *this)

{
  btVoronoiSimplexSolver bVar1;
  ulong uVar2;
  btVoronoiSimplexSolver bVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (this[0x164] == (btVoronoiSimplexSolver)0x0) {
    bVar1 = this[0x138];
    goto LAB_012355dc;
  }
  this[0x160] = (btVoronoiSimplexSolver)0x0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  bVar3 = (btVoronoiSimplexSolver)((byte)this[0x14c] & 0xf0);
  this[0x14c] = bVar3;
  this[0x164] = (btVoronoiSimplexSolver)0x0;
  if (4 < *(uint *)this) goto switchD_01235198_caseD_0;
  switch(*(uint *)this) {
  case 1:
    *(undefined8 *)(this + 0xfc) = *(undefined8 *)(this + 0x5c);
    *(undefined8 *)(this + 0xf4) = *(undefined8 *)(this + 0x54);
    *(undefined8 *)(this + 0x10c) = *(undefined8 *)(this + 0xac);
    *(undefined8 *)(this + 0x104) = *(undefined8 *)(this + 0xa4);
    *(undefined8 *)(this + 0x158) = 0;
    *(undefined8 *)(this + 0x150) = 0x3f800000;
    bVar1 = (btVoronoiSimplexSolver)0x1;
    *(undefined4 *)(this + 0x120) = 0;
    this[0x160] = (btVoronoiSimplexSolver)0x0;
    this[0x14c] = bVar3;
    *(float *)(this + 0x114) = *(float *)(this + 0xf4) - *(float *)(this + 0x104);
    *(float *)(this + 0x118) = *(float *)(this + 0xf8) - *(float *)(this + 0x108);
    *(float *)(this + 0x11c) = *(float *)(this + 0xfc) - *(float *)(this + 0x10c);
    goto LAB_012355d8;
  case 2:
    fVar5 = 0.0;
    fVar9 = *(float *)(this + 0x14) - *(float *)(this + 4);
    fVar6 = (float)*(undefined8 *)(this + 8);
    fVar10 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
    fVar7 = (float)*(undefined8 *)(this + 0x18) - fVar6;
    fVar8 = (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) - fVar10;
    fVar6 = (0.0 - *(float *)(this + 4)) * fVar9 + (0.0 - fVar6) * fVar7 + (0.0 - fVar10) * fVar8;
    if (fVar6 <= 0.0) {
      bVar4 = 1;
    }
    else {
      fVar5 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
      if (fVar5 <= fVar6) {
        bVar4 = 2;
        fVar5 = 1.0;
      }
      else {
        fVar5 = fVar6 / fVar5;
        bVar3 = (btVoronoiSimplexSolver)((byte)bVar3 | 1);
        bVar4 = 2;
        this[0x14c] = bVar3;
      }
    }
    *(float *)(this + 0x150) = 1.0 - fVar5;
    *(float *)(this + 0x154) = fVar5;
    fVar6 = *(float *)(this + 0x54) + fVar5 * (*(float *)(this + 100) - *(float *)(this + 0x54));
    fVar7 = *(float *)(this + 0x58) + fVar5 * (*(float *)(this + 0x68) - *(float *)(this + 0x58));
    fVar8 = *(float *)(this + 0x5c) + fVar5 * (*(float *)(this + 0x6c) - *(float *)(this + 0x5c));
    fVar9 = *(float *)(this + 0xa4) + fVar5 * (*(float *)(this + 0xb4) - *(float *)(this + 0xa4));
    fVar10 = *(float *)(this + 0xa8) + fVar5 * (*(float *)(this + 0xb8) - *(float *)(this + 0xa8));
    fVar5 = *(float *)(this + 0xac) + fVar5 * (*(float *)(this + 0xbc) - *(float *)(this + 0xac));
    *(float *)(this + 0xf4) = fVar6;
    *(float *)(this + 0xf8) = fVar7;
    *(float *)(this + 0x10c) = fVar5;
    *(undefined8 *)(this + 0x158) = 0;
    *(undefined4 *)(this + 0x100) = 0;
    *(undefined4 *)(this + 0x110) = 0;
    this[0x14c] = (btVoronoiSimplexSolver)((byte)bVar3 | bVar4);
    *(float *)(this + 0xfc) = fVar8;
    *(float *)(this + 0x104) = fVar9;
    *(float *)(this + 0x108) = fVar10;
    *(float *)(this + 0x114) = fVar6 - fVar9;
    *(float *)(this + 0x118) = fVar7 - fVar10;
    *(float *)(this + 0x11c) = fVar8 - fVar5;
    *(undefined4 *)(this + 0x120) = 0;
    goto LAB_01235598;
  case 3:
    local_30 = 0;
    uStack_28 = 0;
    closestPtPointTriangle
              (this,(btVector3 *)&local_30,(btVector3 *)(this + 4),(btVector3 *)(this + 0x14),
               (btVector3 *)(this + 0x24),(btSubSimplexClosestResult *)(this + 0x13c));
    fVar5 = *(float *)(this + 0x150);
    fVar9 = *(float *)(this + 0x154);
    fVar12 = *(float *)(this + 0x158);
    fVar6 = *(float *)(this + 0x54) * fVar5 + *(float *)(this + 100) * fVar9 +
            *(float *)(this + 0x74) * fVar12;
    fVar7 = fVar5 * *(float *)(this + 0x58) + fVar9 * *(float *)(this + 0x68) +
            fVar12 * *(float *)(this + 0x78);
    fVar8 = fVar5 * *(float *)(this + 0x5c) + fVar9 * *(float *)(this + 0x6c) +
            fVar12 * *(float *)(this + 0x7c);
    fVar10 = *(float *)(this + 0xa4) * fVar5 + *(float *)(this + 0xb4) * fVar9 +
             *(float *)(this + 0xc4) * fVar12;
    fVar11 = fVar5 * *(float *)(this + 0xa8) + fVar9 * *(float *)(this + 0xb8) +
             fVar12 * *(float *)(this + 200);
    fVar5 = fVar5 * *(float *)(this + 0xac) + fVar9 * *(float *)(this + 0xbc) +
            fVar12 * *(float *)(this + 0xcc);
LAB_0123546c:
    *(float *)(this + 0xf4) = fVar6;
    *(float *)(this + 0xf8) = fVar7;
    *(float *)(this + 0x10c) = fVar5;
    *(undefined4 *)(this + 0x100) = 0;
    *(undefined4 *)(this + 0x110) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(float *)(this + 0xfc) = fVar8;
    *(float *)(this + 0x104) = fVar10;
    *(float *)(this + 0x108) = fVar11;
    *(float *)(this + 0x114) = fVar6 - fVar10;
    *(float *)(this + 0x118) = fVar7 - fVar11;
    *(float *)(this + 0x11c) = fVar8 - fVar5;
LAB_01235598:
    reduceVertices(this,(btUsageBitfield *)(this + 0x14c));
    bVar1 = (btVoronoiSimplexSolver)0x0;
    if (0.0 <= *(float *)(this + 0x150)) {
      if ((*(float *)(this + 0x154) < 0.0) || (*(float *)(this + 0x158) < 0.0)) {
        bVar1 = (btVoronoiSimplexSolver)0x0;
      }
      else {
        bVar1 = (btVoronoiSimplexSolver)(0.0 <= *(float *)(this + 0x15c));
      }
    }
LAB_012355d8:
    this[0x138] = bVar1;
    break;
  case 4:
    local_30 = 0;
    uStack_28 = 0;
    uVar2 = closestPtPointTetrahedron
                      (this,(btVector3 *)&local_30,(btVector3 *)(this + 4),
                       (btVector3 *)(this + 0x14),(btVector3 *)(this + 0x24),
                       (btVector3 *)(this + 0x34),(btSubSimplexClosestResult *)(this + 0x13c));
    if ((uVar2 & 1) != 0) {
      fVar5 = *(float *)(this + 0x150);
      fVar9 = *(float *)(this + 0x154);
      fVar12 = *(float *)(this + 0x158);
      fVar13 = *(float *)(this + 0x15c);
      fVar6 = *(float *)(this + 0x54) * fVar5 + *(float *)(this + 100) * fVar9 +
              *(float *)(this + 0x74) * fVar12 + *(float *)(this + 0x84) * fVar13;
      fVar7 = fVar5 * *(float *)(this + 0x58) + fVar9 * *(float *)(this + 0x68) +
              fVar12 * *(float *)(this + 0x78) + fVar13 * *(float *)(this + 0x88);
      fVar8 = fVar5 * *(float *)(this + 0x5c) + fVar9 * *(float *)(this + 0x6c) +
              fVar12 * *(float *)(this + 0x7c) + fVar13 * *(float *)(this + 0x8c);
      fVar10 = *(float *)(this + 0xa4) * fVar5 + *(float *)(this + 0xb4) * fVar9 +
               *(float *)(this + 0xc4) * fVar12 + *(float *)(this + 0xd4) * fVar13;
      fVar11 = fVar5 * *(float *)(this + 0xa8) + fVar9 * *(float *)(this + 0xb8) +
               fVar12 * *(float *)(this + 200) + fVar13 * *(float *)(this + 0xd8);
      fVar5 = fVar5 * *(float *)(this + 0xac) + fVar9 * *(float *)(this + 0xbc) +
              fVar12 * *(float *)(this + 0xcc) + fVar13 * *(float *)(this + 0xdc);
      goto LAB_0123546c;
    }
    if (this[0x160] == (btVoronoiSimplexSolver)0x0) {
      bVar1 = (btVoronoiSimplexSolver)0x1;
      this[0x138] = (btVoronoiSimplexSolver)0x1;
      *(undefined8 *)(this + 0x11c) = 0;
      *(undefined8 *)(this + 0x114) = 0;
      break;
    }
  case 0:
switchD_01235198_caseD_0:
    bVar1 = (btVoronoiSimplexSolver)0x0;
    this[0x138] = (btVoronoiSimplexSolver)0x0;
  }
LAB_012355dc:
  return bVar1 != (btVoronoiSimplexSolver)0x0;
}

