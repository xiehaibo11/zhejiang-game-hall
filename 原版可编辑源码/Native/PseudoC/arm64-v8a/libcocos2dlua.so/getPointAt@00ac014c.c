
/* fairygui::GPath::getPointAt(float) */

void fairygui::GPath::getPointAt(float param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long *in_x0;
  int *piVar4;
  float *pfVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float in_s2;
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  fVar11 = (float)NEON_fminnm(param_1,0x3f800000);
  fVar9 = 0.0;
  if (0.0 <= param_1) {
    fVar9 = fVar11;
  }
  uVar7 = in_x0[1] - *in_x0;
  iVar8 = (int)(uVar7 >> 4);
  if (iVar8 == 0) {
    fVar9 = 0.0;
  }
  else {
    iVar3 = (int)in_x0;
    if (fVar9 == 1.0) {
      piVar4 = (int *)(*in_x0 + ((long)(uVar7 * 0x10000000 + -0x100000000) >> 0x1c));
      iVar1 = *piVar4;
      iVar8 = piVar4[2];
      if (iVar1 - 1U < 2) {
        fVar9 = (float)onBezierCurve(iVar3,iVar8,1.0);
      }
      else if (iVar1 == 3) {
        pfVar5 = (float *)(in_x0[3] + (long)iVar8 * 0xc);
        fVar9 = *pfVar5 * 0.0 + pfVar5[3];
      }
      else {
        fVar9 = (float)onCRSplineCurve(iVar3,iVar8,1.0);
      }
    }
    else {
      fVar11 = *(float *)(in_x0 + 6);
      cocos2d::Vec3::Vec3((Vec3 *)&local_68);
      if (0 < iVar8) {
        fVar9 = fVar9 * fVar11;
        uVar7 = uVar7 >> 4 & 0xffffffff;
        piVar4 = (int *)(*in_x0 + 8);
        do {
          fVar11 = (float)piVar4[-1];
          fVar9 = fVar9 - fVar11;
          if (fVar9 < 0.0) {
            iVar8 = *piVar4;
            fVar9 = fVar9 / fVar11 + 1.0;
            if (piVar4[-2] - 1U < 2) {
              uVar10 = onBezierCurve(iVar3,iVar8,fVar9);
            }
            else {
              if (piVar4[-2] == 3) {
                fVar11 = 1.0 - fVar9;
                puVar6 = (undefined8 *)(in_x0[3] + (long)iVar8 * 0xc);
                local_68 = CONCAT44((float)((ulong)*puVar6 >> 0x20) * fVar11 +
                                    (float)((ulong)*(undefined8 *)((long)puVar6 + 0xc) >> 0x20) *
                                    fVar9,(float)*puVar6 * fVar11 +
                                          (float)*(undefined8 *)((long)puVar6 + 0xc) * fVar9);
                local_60 = fVar11 * *(float *)(puVar6 + 1) + fVar9 * *(float *)((long)puVar6 + 0x14)
                ;
                break;
              }
              uVar10 = onCRSplineCurve(iVar3,iVar8,fVar9);
            }
            local_68 = CONCAT44(fVar11,uVar10);
            local_60 = in_s2;
            break;
          }
          uVar7 = uVar7 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar7 != 0);
      }
      fVar9 = (float)local_68;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar9);
}

