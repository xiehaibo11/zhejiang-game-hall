
/* cocos2d::Ray::intersects(cocos2d::AABB const&, float*) const */

void __thiscall cocos2d::Ray::intersects(Ray *this,AABB *param_1,float *param_2)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_48;
  undefined8 local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)&local_48);
  fVar4 = *(float *)this;
  fVar3 = *(float *)param_1;
  if ((((fVar3 < fVar4) && (*(float *)(param_1 + 4) < *(float *)(this + 4))) &&
      (*(float *)(param_1 + 8) < *(float *)(this + 8))) &&
     (((fVar4 < *(float *)(param_1 + 0xc) && (*(float *)(this + 4) < *(float *)(param_1 + 0x10))) &&
      (*(float *)(this + 8) < *(float *)(param_1 + 0x14))))) {
    iVar2 = 1;
    goto LAB_00d056e4;
  }
  if (((fVar3 < fVar4) || (fVar6 = *(float *)(this + 0xc), fVar6 <= 0.0)) ||
     (fVar5 = (fVar3 - fVar4) / fVar6, fVar5 < 0.0)) {
LAB_00d05400:
    iVar2 = 0;
    fVar5 = 0.0;
  }
  else {
    local_48 = fVar4 + fVar6 * fVar5;
    fVar6 = (float)*(undefined8 *)(this + 0x10) * fVar5 + (float)*(undefined8 *)(this + 4);
    fVar8 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) * fVar5 +
            (float)((ulong)*(undefined8 *)(this + 4) >> 0x20);
    local_44 = CONCAT44(fVar8,fVar6);
    if ((((fVar6 < *(float *)(param_1 + 4)) || (*(float *)(param_1 + 0x10) < fVar6)) ||
        (fVar8 < *(float *)(param_1 + 8))) || (*(float *)(param_1 + 0x14) < fVar8))
    goto LAB_00d05400;
    iVar2 = 1;
  }
  fVar6 = *(float *)(param_1 + 0xc);
  if (((fVar6 <= fVar4) && (fVar8 = *(float *)(this + 0xc), fVar8 < 0.0)) &&
     (fVar7 = (fVar6 - fVar4) / fVar8, 0.0 <= fVar7)) {
    local_48 = fVar4 + fVar8 * fVar7;
    fVar8 = (float)*(undefined8 *)(this + 0x10) * fVar7 + (float)*(undefined8 *)(this + 4);
    fVar9 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) * fVar7 +
            (float)((ulong)*(undefined8 *)(this + 4) >> 0x20);
    local_44 = CONCAT44(fVar9,fVar8);
    if (((*(float *)(param_1 + 4) <= fVar8) && (fVar8 <= *(float *)(param_1 + 0x10))) &&
       ((*(float *)(param_1 + 8) <= fVar9 && (fVar9 <= *(float *)(param_1 + 0x14))))) {
      if (fVar5 <= fVar7 && iVar2 == 1) {
        fVar7 = fVar5;
      }
      fVar5 = fVar7;
      iVar2 = 1;
    }
  }
  fVar8 = *(float *)(this + 4);
  fVar7 = *(float *)(param_1 + 4);
  if (((fVar8 <= fVar7) && (fVar9 = *(float *)(this + 0x10), 0.0 < fVar9)) &&
     (fVar10 = (fVar7 - fVar8) / fVar9, 0.0 <= fVar10)) {
    local_48 = fVar4 + fVar10 * *(float *)(this + 0xc);
    fVar11 = fVar10 * *(float *)(this + 0x14) + *(float *)(this + 8);
    local_44 = CONCAT44(fVar11,fVar10 * fVar9 + fVar8);
    if (((fVar3 <= local_48) && (local_48 <= fVar6)) &&
       ((*(float *)(param_1 + 8) <= fVar11 && (fVar11 <= *(float *)(param_1 + 0x14))))) {
      if (fVar5 <= fVar10 && iVar2 == 1) {
        fVar10 = fVar5;
      }
      fVar5 = fVar10;
      iVar2 = 1;
    }
  }
  fVar9 = *(float *)(param_1 + 0x10);
  if (((fVar9 <= fVar8) && (fVar10 = *(float *)(this + 0x10), fVar10 < 0.0)) &&
     (fVar11 = (fVar9 - fVar8) / fVar10, 0.0 <= fVar11)) {
    local_48 = fVar4 + fVar11 * *(float *)(this + 0xc);
    fVar12 = fVar11 * *(float *)(this + 0x14) + *(float *)(this + 8);
    local_44 = CONCAT44(fVar12,fVar11 * fVar10 + fVar8);
    if ((((fVar3 <= local_48) && (local_48 <= fVar6)) && (*(float *)(param_1 + 8) <= fVar12)) &&
       (fVar12 <= *(float *)(param_1 + 0x14))) {
      if (fVar5 <= fVar11 && iVar2 == 1) {
        fVar11 = fVar5;
      }
      fVar5 = fVar11;
      iVar2 = 1;
    }
  }
  fVar10 = *(float *)(this + 8);
  if (((fVar10 <= *(float *)(param_1 + 8)) && (fVar11 = *(float *)(this + 0x14), 0.0 < fVar11)) &&
     (fVar12 = (*(float *)(param_1 + 8) - fVar10) / fVar11, 0.0 <= fVar12)) {
    local_48 = fVar4 + fVar12 * *(float *)(this + 0xc);
    fVar13 = fVar12 * *(float *)(this + 0x10) + fVar8;
    local_44 = CONCAT44(fVar12 * fVar11 + fVar10,fVar13);
    if (((fVar3 <= local_48) && (local_48 <= fVar6)) && ((fVar7 <= fVar13 && (fVar13 <= fVar9)))) {
      if (fVar5 <= fVar12 && iVar2 == 1) {
        fVar12 = fVar5;
      }
      fVar5 = fVar12;
      iVar2 = 1;
    }
  }
  if (((*(float *)(param_1 + 0x14) <= fVar10) && (fVar11 = *(float *)(this + 0x14), fVar11 < 0.0))
     && (fVar12 = (*(float *)(param_1 + 0x14) - fVar10) / fVar11, 0.0 <= fVar12)) {
    local_48 = fVar4 + fVar12 * *(float *)(this + 0xc);
    fVar8 = fVar12 * *(float *)(this + 0x10) + fVar8;
    local_44 = CONCAT44(fVar12 * fVar11 + fVar10,fVar8);
    if (((fVar3 <= local_48) && (local_48 <= fVar6)) && ((fVar7 <= fVar8 && (fVar8 <= fVar9)))) {
      if (fVar5 <= fVar12 && iVar2 == 1) {
        fVar12 = fVar5;
      }
      fVar5 = fVar12;
      iVar2 = 1;
    }
  }
  if (param_2 != (float *)0x0) {
    *param_2 = fVar5;
  }
LAB_00d056e4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

