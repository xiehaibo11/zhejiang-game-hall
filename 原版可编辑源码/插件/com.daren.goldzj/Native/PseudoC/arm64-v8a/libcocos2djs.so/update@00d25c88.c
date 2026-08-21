
/* dragonBones::DeformTimelineState::update(float) */

void __thiscall dragonBones::DeformTimelineState::update(DeformTimelineState *this,float param_1)

{
  undefined8 *puVar1;
  void *__s;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar14 = *(long *)(*(long *)(this + 0xb8) + 0xd8);
  if (lVar14 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar14 + 0x40);
  if (lVar7 == 0) {
    return;
  }
  if (*(int *)(lVar7 + 4) != *(int *)(this + 0xc0)) {
    return;
  }
  if ((*(long *)(this + 0x58) != 0) && (*(long *)(this + 0x48) != *(long *)(lVar7 + 8))) {
    return;
  }
  TimelineState::update((TimelineState *)this,param_1);
  if ((*(int *)(this + 0x1c) == 0) && (this[0xc4] == (DeformTimelineState)0x0)) {
    return;
  }
  lVar7 = *(long *)(this + 0x68);
  if ((*(int *)(lVar7 + 100) == 0) && (*(int *)(lVar7 + 0x68) == 0)) {
    if (this[0xc4] == (DeformTimelineState)0x0) {
      return;
    }
    this[0xc4] = (DeformTimelineState)0x0;
    if (*(long *)(this + 0x58) == 0) {
      __s = *(void **)(lVar14 + 0x10);
      uVar9 = *(long *)(lVar14 + 0x18) - (long)__s;
      uVar10 = uVar9 >> 2 & 0xffffffff;
      *(int *)(this + 0xcc) = (int)(uVar9 >> 2);
      if (uVar10 != 0) {
        memset(__s,0,uVar10 << 2);
      }
    }
    else {
      uVar2 = *(uint *)(this + 0xcc);
      if (uVar2 != 0) {
        uVar3 = *(uint *)(this + 0xd4);
        lVar11 = *(long *)(lVar14 + 0x10);
        uVar9 = 0;
        lVar7 = (ulong)uVar3 * -4;
        do {
          if (uVar9 < uVar3) {
            puVar12 = (undefined4 *)(*(long *)(this + 0x88) + (uVar9 + *(uint *)(this + 200)) * 4);
          }
          else if (uVar9 < *(uint *)(this + 0xd0) + uVar3) {
            puVar12 = (undefined4 *)(*(long *)(this + 0x108) + lVar7);
          }
          else {
            puVar12 = (undefined4 *)
                      (*(long *)(this + 0x88) +
                      (uVar9 + ((ulong)*(uint *)(this + 200) - (ulong)*(uint *)(this + 0xd0))) * 4);
          }
          lVar7 = lVar7 + 4;
          *(undefined4 *)(lVar11 + uVar9 * 4) = *puVar12;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar2);
      }
    }
  }
  else {
    dVar15 = (double)*(float *)(lVar7 + 0x74) * (double)*(float *)(lVar7 + 0x74);
    if (*(long *)(this + 0x58) == 0) {
      puVar1 = *(undefined8 **)(lVar14 + 0x10);
      uVar10 = *(long *)(lVar14 + 0x18) - (long)puVar1;
      uVar9 = uVar10 >> 2 & 0xffffffff;
      *(int *)(this + 0xcc) = (int)(uVar10 >> 2);
      if (uVar9 != 0) {
        if (uVar9 < 4) {
          lVar11 = 0;
        }
        else {
          uVar10 = uVar10 >> 2 & 3;
          lVar11 = uVar9 - uVar10;
          lVar7 = lVar11;
          puVar13 = puVar1;
          do {
            lVar7 = lVar7 + -4;
            fVar16 = (float)*puVar13;
            fVar17 = (float)((ulong)*puVar13 >> 0x20);
            fVar18 = (float)puVar13[1];
            fVar19 = (float)((ulong)puVar13[1] >> 0x20);
            dVar5 = dVar15 * (double)(0.0 - fVar16) + (double)fVar16;
            dVar6 = dVar15 * (double)(0.0 - fVar17) + (double)fVar17;
            auVar4._8_4_ = SUB84(dVar6,0);
            auVar4._0_8_ = dVar5;
            auVar4._12_4_ = (int)((ulong)dVar6 >> 0x20);
            puVar13[1] = CONCAT44((float)(dVar15 * (double)(0.0 - fVar19) + (double)fVar19),
                                  (float)(dVar15 * (double)(0.0 - fVar18) + (double)fVar18));
            *puVar13 = CONCAT44((float)auVar4._8_8_,(float)dVar5);
            puVar13 = puVar13 + 2;
          } while (lVar7 != 0);
          if (uVar10 == 0) goto LAB_00d25f04;
        }
        lVar7 = uVar9 - lVar11;
        pfVar8 = (float *)((long)puVar1 + lVar11 * 4);
        do {
          lVar7 = lVar7 + -1;
          *pfVar8 = (float)(dVar15 * (double)(0.0 - *pfVar8) + (double)*pfVar8);
          pfVar8 = pfVar8 + 1;
        } while (lVar7 != 0);
      }
    }
    else {
      uVar2 = *(uint *)(this + 0xcc);
      if (uVar2 != 0) {
        uVar3 = *(uint *)(this + 0xd4);
        uVar9 = 0;
        do {
          if (uVar9 < uVar3) {
            fVar16 = *(float *)(*(long *)(this + 0x88) + (uVar9 + *(uint *)(this + 200)) * 4);
            pfVar8 = (float *)(*(long *)(lVar14 + 0x10) + uVar9 * 4);
          }
          else {
            if (uVar9 < *(uint *)(this + 0xd0) + uVar3) {
              lVar7 = *(long *)(lVar14 + 0x10);
              fVar16 = *(float *)(*(long *)(this + 0x108) + (uVar9 - uVar3) * 4);
            }
            else {
              lVar7 = *(long *)(lVar14 + 0x10);
              fVar16 = *(float *)(*(long *)(this + 0x88) +
                                 ((uVar9 - *(uint *)(this + 0xd0)) + (ulong)*(uint *)(this + 200)) *
                                 4);
            }
            pfVar8 = (float *)(lVar7 + uVar9 * 4);
          }
          uVar9 = uVar9 + 1;
          *pfVar8 = (float)(dVar15 * (double)(fVar16 - *pfVar8) + (double)*pfVar8);
        } while (uVar9 < uVar2);
      }
    }
  }
LAB_00d25f04:
  *(undefined1 *)(lVar14 + 0xd) = 1;
  return;
}

