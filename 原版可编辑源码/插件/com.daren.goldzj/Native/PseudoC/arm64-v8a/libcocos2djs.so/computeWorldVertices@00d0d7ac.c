
/* spine::VertexAttachment::computeWorldVertices(spine::Slot&, unsigned long, unsigned long, float*,
   unsigned long, unsigned long) */

void __thiscall
spine::VertexAttachment::computeWorldVertices
          (VertexAttachment *this,Slot *param_1,ulong param_2,ulong param_3,float *param_4,
          ulong param_5,ulong param_6)

{
  float *pfVar1;
  uint uVar2;
  VertexAttachment *pVVar3;
  VertexAttachment *pVVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  Skeleton *this_00;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  this_00 = *(Skeleton **)(*(long *)(param_1 + 0x10) + 0x10);
  uVar17 = param_5 + (param_3 >> 1) * param_6;
  pVVar4 = (VertexAttachment *)Slot::getDeform(param_1);
  if (*(long *)(this + 0x30) == 0) {
    if (param_5 < uVar17) {
      lVar7 = *(long *)(param_1 + 0x10);
      pVVar3 = this + 0x48;
      if (*(long *)(pVVar4 + 8) != 0) {
        pVVar3 = pVVar4;
      }
      fVar23 = *(float *)(lVar7 + 0x8c);
      fVar19 = *(float *)(lVar7 + 0x90);
      fVar20 = *(float *)(lVar7 + 0x7c);
      fVar21 = *(float *)(lVar7 + 0x80);
      fVar22 = *(float *)(lVar7 + 0x84);
      fVar24 = *(float *)(lVar7 + 0x88);
      pfVar6 = param_4 + param_5 + 1;
      pfVar9 = (float *)(*(long *)(pVVar3 + 0x18) + param_2 * 4 + 4);
      do {
        fVar25 = pfVar9[-1];
        fVar26 = *pfVar9;
        param_5 = param_5 + param_6;
        pfVar9 = pfVar9 + 2;
        pfVar6[-1] = fVar22 + fVar20 * fVar25 + fVar21 * fVar26;
        *pfVar6 = fVar19 + fVar24 * fVar25 + fVar23 * fVar26;
        pfVar6 = pfVar6 + param_6;
      } while (param_5 < uVar17);
    }
  }
  else {
    if (param_2 == 0) {
      iVar13 = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
      uVar8 = 0;
      do {
        uVar8 = uVar8 + 2;
        iVar11 = (int)*(undefined8 *)(*(long *)(this + 0x40) + (long)(int)uVar16 * 8);
        uVar16 = (ulong)((int)uVar16 + iVar11 + 1);
        iVar13 = iVar13 + iVar11;
      } while (uVar8 < param_2);
    }
    lVar5 = Skeleton::getBones(this_00);
    lVar7 = (long)(iVar13 * 3);
    if (*(long *)(pVVar4 + 8) == 0) {
      if (param_5 < uVar17) {
        lVar10 = *(long *)(this + 0x40);
        lVar5 = *(long *)(lVar5 + 0x18);
        do {
          iVar13 = (int)uVar16;
          uVar2 = iVar13 + 1;
          uVar16 = (ulong)uVar2;
          iVar13 = (int)*(undefined8 *)(lVar10 + (long)iVar13 * 8);
          if (iVar13 < 1) {
            uVar18 = 0;
          }
          else {
            uVar16 = (ulong)(int)uVar2;
            uVar18 = 0;
            pfVar6 = (float *)(*(long *)(this + 0x60) + lVar7 * 4 + 8);
            do {
              lVar12 = uVar16 * 8;
              uVar16 = uVar16 + 1;
              lVar12 = *(long *)(lVar5 + *(long *)(lVar10 + lVar12) * 8);
              lVar7 = lVar7 + 3;
              uVar18 = CONCAT44((float)((ulong)uVar18 >> 0x20) +
                                (*(float *)(lVar12 + 0x90) +
                                *(float *)(lVar12 + 0x88) * pfVar6[-2] +
                                *(float *)(lVar12 + 0x8c) * pfVar6[-1]) * *pfVar6,
                                (float)uVar18 +
                                (*(float *)(lVar12 + 0x84) +
                                *(float *)(lVar12 + 0x7c) * pfVar6[-2] +
                                *(float *)(lVar12 + 0x80) * pfVar6[-1]) * *pfVar6);
              pfVar6 = pfVar6 + 3;
            } while ((long)uVar16 < (long)(int)(uVar2 + iVar13));
          }
          uVar8 = param_5 + param_6;
          *(undefined8 *)(param_4 + param_5) = uVar18;
          param_5 = uVar8;
        } while (uVar8 < uVar17);
      }
    }
    else if (param_5 < uVar17) {
      lVar14 = *(long *)(pVVar4 + 0x18);
      lVar10 = *(long *)(this + 0x40);
      lVar12 = *(long *)(lVar5 + 0x18);
      lVar5 = (long)(iVar13 << 1);
      do {
        iVar13 = (int)uVar16;
        uVar2 = iVar13 + 1;
        uVar16 = (ulong)uVar2;
        iVar13 = (int)*(undefined8 *)(lVar10 + (long)iVar13 * 8);
        if (iVar13 < 1) {
          uVar18 = 0;
        }
        else {
          uVar16 = (ulong)(int)uVar2;
          pfVar6 = (float *)(lVar14 + 4 + lVar5 * 4);
          uVar18 = 0;
          pfVar9 = (float *)(*(long *)(this + 0x60) + lVar7 * 4 + 8);
          do {
            pfVar1 = pfVar6 + -1;
            fVar23 = *pfVar6;
            lVar15 = *(long *)(lVar12 + *(long *)(lVar10 + uVar16 * 8) * 8);
            uVar16 = uVar16 + 1;
            lVar7 = lVar7 + 3;
            lVar5 = lVar5 + 2;
            pfVar6 = pfVar6 + 2;
            uVar18 = CONCAT44((float)((ulong)uVar18 >> 0x20) +
                              (*(float *)(lVar15 + 0x90) +
                              *(float *)(lVar15 + 0x88) * (pfVar9[-2] + *pfVar1) +
                              *(float *)(lVar15 + 0x8c) * (pfVar9[-1] + fVar23)) * *pfVar9,
                              (float)uVar18 +
                              (*(float *)(lVar15 + 0x84) +
                              *(float *)(lVar15 + 0x7c) * (pfVar9[-2] + *pfVar1) +
                              *(float *)(lVar15 + 0x80) * (pfVar9[-1] + fVar23)) * *pfVar9);
            pfVar9 = pfVar9 + 3;
          } while ((long)uVar16 < (long)(int)(uVar2 + iVar13));
        }
        uVar8 = param_5 + param_6;
        *(undefined8 *)(param_4 + param_5) = uVar18;
        param_5 = uVar8;
      } while (uVar8 < uVar17);
    }
  }
  return;
}

