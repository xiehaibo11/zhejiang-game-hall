
/* btHeightfieldTerrainShape::processAllTriangles(btTriangleCallback*, btVector3 const&, btVector3
   const&) const */

void __thiscall
btHeightfieldTerrainShape::processAllTriangles
          (btHeightfieldTerrainShape *this,btTriangleCallback *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  
  fVar14 = *(float *)(this + 0x1c);
  fVar15 = *(float *)(this + 0x20);
  fVar16 = *(float *)(this + 0x24);
  fVar17 = *(float *)(this + 0x2c);
  fVar18 = *(float *)(this + 0x30);
  fVar26 = (1.0 / *(float *)(this + 0x7c)) * *(float *)param_2 + *(float *)(this + 0x3c);
  fVar21 = (1.0 / *(float *)(this + 0x80)) * *(float *)(param_2 + 4) + *(float *)(this + 0x40);
  fVar19 = *(float *)(this + 0x34);
  fVar22 = (1.0 / *(float *)(this + 0x84)) * *(float *)(param_2 + 8) + *(float *)(this + 0x44);
  fVar25 = (1.0 / *(float *)(this + 0x84)) * *(float *)(param_3 + 8) + *(float *)(this + 0x44);
  fVar20 = fVar14;
  if (fVar14 <= fVar26) {
    fVar20 = fVar26;
  }
  fVar26 = fVar15;
  if (fVar15 <= fVar21) {
    fVar26 = fVar21;
  }
  fVar21 = fVar16;
  if (fVar16 <= fVar22) {
    fVar21 = fVar22;
  }
  fVar24 = (1.0 / *(float *)(this + 0x80)) * *(float *)(param_3 + 4) + *(float *)(this + 0x40);
  fVar22 = fVar17;
  if (fVar20 <= fVar17) {
    fVar22 = fVar20;
  }
  fVar20 = fVar18;
  if (fVar26 <= fVar18) {
    fVar20 = fVar26;
  }
  fVar23 = (1.0 / *(float *)(this + 0x7c)) * *(float *)param_3 + *(float *)(this + 0x3c);
  fVar26 = fVar19;
  if (fVar21 <= fVar19) {
    fVar26 = fVar21;
  }
  fVar21 = -0.5;
  if (0.0 <= fVar22) {
    fVar21 = 0.5;
  }
  fVar8 = -0.5;
  if (0.0 <= fVar20) {
    fVar8 = 0.5;
  }
  uVar5 = *(int *)(this + 0x4c) - 1;
  fVar7 = -0.5;
  if (0.0 <= fVar26) {
    fVar7 = 0.5;
  }
  if (fVar14 <= fVar23) {
    fVar14 = fVar23;
  }
  if (fVar15 <= fVar24) {
    fVar15 = fVar24;
  }
  if (fVar16 <= fVar25) {
    fVar16 = fVar25;
  }
  if (fVar14 <= fVar17) {
    fVar17 = fVar14;
  }
  if (fVar15 <= fVar18) {
    fVar18 = fVar15;
  }
  if (fVar16 <= fVar19) {
    fVar19 = fVar16;
  }
  iVar2 = *(int *)(this + 0x78);
  fVar14 = -0.5;
  if (0.0 <= fVar17) {
    fVar14 = 0.5;
  }
  fVar15 = -0.5;
  if (0.0 <= fVar18) {
    fVar15 = 0.5;
  }
  uVar13 = (int)(fVar21 + fVar22) - 1;
  uVar9 = (int)(fVar8 + fVar20) - 1;
  fVar20 = -0.5;
  if (0.0 <= fVar19) {
    fVar20 = 0.5;
  }
  uVar11 = (int)(fVar14 + fVar17) + 1;
  uVar12 = (int)(fVar15 + fVar18) + 1;
  uVar10 = *(int *)(this + 0x50) - 1;
  if (iVar2 == 2) {
    if ((int)uVar5 <= (int)uVar11) {
      uVar11 = uVar5;
    }
    uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
    uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar10 <= (int)uVar12) {
      uVar12 = uVar10;
    }
    if ((int)uVar12 <= (int)uVar9) {
      return;
    }
  }
  else {
    uVar6 = (int)(fVar7 + fVar26) - 1;
    uVar1 = (int)(fVar20 + fVar19) + 1;
    if (iVar2 == 1) {
      uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
      if ((int)uVar5 <= (int)uVar11) {
        uVar11 = uVar5;
      }
    }
    else {
      if (iVar2 != 0) {
        uVar13 = 0;
        uVar9 = 0;
        uVar12 = uVar10;
        uVar11 = uVar5;
        if ((int)uVar10 < 1) {
          return;
        }
        goto LAB_012296f4;
      }
      uVar13 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
      uVar11 = uVar12;
      if ((int)uVar5 <= (int)uVar12) {
        uVar11 = uVar5;
      }
    }
    uVar9 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar10 <= (int)uVar1) {
      uVar1 = uVar10;
    }
    uVar12 = uVar1;
    if ((int)uVar1 <= (int)uVar9) {
      return;
    }
  }
LAB_012296f4:
  do {
    if ((int)uVar13 < (int)uVar11) {
      iVar2 = uVar9 + 1;
      fVar19 = (float)iVar2;
      fVar20 = (float)(int)uVar9;
      uVar5 = uVar13;
      do {
        if (((this[0x74] == (btHeightfieldTerrainShape)0x0) &&
            ((this[0x75] == (btHeightfieldTerrainShape)0x0 || ((uVar5 + uVar9 & 1) != 0)))) &&
           (((uVar9 & 1) != 0 || (this[0x76] == (btHeightfieldTerrainShape)0x0)))) {
          fVar14 = (float)(**(code **)(*(long *)this + 0x88))(this,uVar5,uVar9);
          iVar3 = *(int *)(this + 0x78);
          if (iVar3 == 0) {
            local_a0 = fVar14 - *(float *)(this + 0x3c);
            local_9c = (float)(int)uVar5 - *(float *)(this + 0x5c) * 0.5;
            local_98 = fVar20 - *(float *)(this + 0x60) * 0.5;
LAB_01229c04:
            local_94 = 0;
          }
          else {
            if (iVar3 == 1) {
              local_9c = fVar14 - *(float *)(this + 0x40);
              local_a0 = (float)(int)uVar5 - *(float *)(this + 0x5c) * 0.5;
              local_98 = fVar20 - *(float *)(this + 0x60) * 0.5;
              goto LAB_01229c04;
            }
            if (iVar3 == 2) {
              local_a0 = (float)(int)uVar5 - *(float *)(this + 0x5c) * 0.5;
              local_9c = fVar20 - *(float *)(this + 0x60) * 0.5;
              local_98 = fVar14 - *(float *)(this + 0x44);
              goto LAB_01229c04;
            }
          }
          local_a0 = local_a0 * *(float *)(this + 0x7c);
          local_9c = local_9c * *(float *)(this + 0x80);
          local_98 = local_98 * *(float *)(this + 0x84);
          fVar14 = (float)(**(code **)(*(long *)this + 0x88))(this,uVar5,iVar2);
          iVar3 = *(int *)(this + 0x78);
          if (iVar3 == 0) {
            local_90 = fVar14 - *(float *)(this + 0x3c);
            local_8c = (float)(int)uVar5 - *(float *)(this + 0x5c) * 0.5;
            local_88 = fVar19 - *(float *)(this + 0x60) * 0.5;
LAB_01229cd8:
            local_84 = 0;
          }
          else {
            if (iVar3 == 1) {
              local_8c = fVar14 - *(float *)(this + 0x40);
              local_90 = (float)(int)uVar5 - *(float *)(this + 0x5c) * 0.5;
              local_88 = fVar19 - *(float *)(this + 0x60) * 0.5;
              goto LAB_01229cd8;
            }
            if (iVar3 == 2) {
              local_90 = (float)(int)uVar5 - *(float *)(this + 0x5c) * 0.5;
              local_8c = fVar19 - *(float *)(this + 0x60) * 0.5;
              local_88 = fVar14 - *(float *)(this + 0x44);
              goto LAB_01229cd8;
            }
          }
          uVar10 = uVar5 + 1;
          local_90 = local_90 * *(float *)(this + 0x7c);
          local_8c = local_8c * *(float *)(this + 0x80);
          local_88 = local_88 * *(float *)(this + 0x84);
          fVar14 = (float)(**(code **)(*(long *)this + 0x88))(this,uVar10,uVar9);
          iVar3 = *(int *)(this + 0x78);
          if (iVar3 == 0) {
            local_80 = fVar14 - *(float *)(this + 0x3c);
            local_7c = (float)(int)uVar10 - *(float *)(this + 0x5c) * 0.5;
            local_78 = fVar20 - *(float *)(this + 0x60) * 0.5;
LAB_01229db0:
            local_74 = 0;
          }
          else {
            if (iVar3 == 1) {
              local_7c = fVar14 - *(float *)(this + 0x40);
              local_80 = (float)(int)uVar10 - *(float *)(this + 0x5c) * 0.5;
              local_78 = fVar20 - *(float *)(this + 0x60) * 0.5;
              goto LAB_01229db0;
            }
            if (iVar3 == 2) {
              local_80 = (float)(int)uVar10 - *(float *)(this + 0x5c) * 0.5;
              local_7c = fVar20 - *(float *)(this + 0x60) * 0.5;
              local_78 = fVar14 - *(float *)(this + 0x44);
              goto LAB_01229db0;
            }
          }
          local_80 = local_80 * *(float *)(this + 0x7c);
          local_7c = local_7c * *(float *)(this + 0x80);
          local_78 = local_78 * *(float *)(this + 0x84);
          (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_a0,uVar5,uVar9);
          fVar14 = (float)(**(code **)(*(long *)this + 0x88))(this,uVar10,uVar9);
          iVar3 = *(int *)(this + 0x78);
          if (iVar3 == 0) {
            local_a0 = fVar14 - *(float *)(this + 0x3c);
            local_9c = (float)(int)uVar10 - *(float *)(this + 0x5c) * 0.5;
            local_98 = fVar20 - *(float *)(this + 0x60) * 0.5;
LAB_01229ea0:
            local_94 = 0;
          }
          else {
            if (iVar3 == 1) {
              local_9c = fVar14 - *(float *)(this + 0x40);
              local_a0 = (float)(int)uVar10 - *(float *)(this + 0x5c) * 0.5;
              local_98 = fVar20 - *(float *)(this + 0x60) * 0.5;
              goto LAB_01229ea0;
            }
            if (iVar3 == 2) {
              local_a0 = (float)(int)uVar10 - *(float *)(this + 0x5c) * 0.5;
              local_9c = fVar20 - *(float *)(this + 0x60) * 0.5;
              local_98 = fVar14 - *(float *)(this + 0x44);
              goto LAB_01229ea0;
            }
          }
          local_a0 = local_a0 * *(float *)(this + 0x7c);
          local_9c = local_9c * *(float *)(this + 0x80);
          local_98 = local_98 * *(float *)(this + 0x84);
          fVar14 = (float)(**(code **)(*(long *)this + 0x88))(this,uVar10,iVar2);
          iVar3 = *(int *)(this + 0x78);
          if (iVar3 == 0) {
            local_80 = *(float *)(this + 0x3c);
            fVar15 = *(float *)(this + 0x5c);
            fVar16 = *(float *)(this + 0x60);
LAB_01229b78:
            local_80 = fVar14 - local_80;
            local_7c = (float)(int)uVar10 - fVar15 * 0.5;
            local_78 = fVar19 - fVar16 * 0.5;
          }
          else if (iVar3 == 1) {
            fVar15 = *(float *)(this + 0x5c);
            fVar16 = *(float *)(this + 0x60);
            local_7c = *(float *)(this + 0x40);
LAB_01229b9c:
            local_7c = fVar14 - local_7c;
            local_80 = (float)(int)uVar10 - fVar15 * 0.5;
            local_78 = fVar19 - fVar16 * 0.5;
          }
          else {
            if (iVar3 != 2) goto LAB_01229f20;
            fVar15 = *(float *)(this + 0x5c);
            fVar16 = *(float *)(this + 0x60);
LAB_01229b50:
            local_80 = (float)(int)uVar10 - fVar15 * 0.5;
            local_7c = fVar19 - fVar16 * 0.5;
            local_78 = fVar14 - *(float *)(this + 0x44);
          }
          local_74 = 0;
        }
        else {
          fVar14 = (float)(**(code **)(*(long *)this + 0x88))(this,uVar5,uVar9);
          iVar3 = *(int *)(this + 0x78);
          if (iVar3 == 0) {
            local_a0 = fVar14 - *(float *)(this + 0x3c);
            local_9c = (float)(int)uVar5 - *(float *)(this + 0x5c) * 0.5;
            local_98 = fVar20 - *(float *)(this + 0x60) * 0.5;
LAB_01229840:
            local_94 = 0;
          }
          else {
            if (iVar3 == 1) {
              local_9c = fVar14 - *(float *)(this + 0x40);
              local_a0 = (float)(int)uVar5 - *(float *)(this + 0x5c) * 0.5;
              local_98 = fVar20 - *(float *)(this + 0x60) * 0.5;
              goto LAB_01229840;
            }
            if (iVar3 == 2) {
              local_a0 = (float)(int)uVar5 - *(float *)(this + 0x5c) * 0.5;
              local_9c = fVar20 - *(float *)(this + 0x60) * 0.5;
              local_98 = fVar14 - *(float *)(this + 0x44);
              goto LAB_01229840;
            }
          }
          iVar3 = uVar5 + 1;
          local_a0 = local_a0 * *(float *)(this + 0x7c);
          local_9c = local_9c * *(float *)(this + 0x80);
          local_98 = local_98 * *(float *)(this + 0x84);
          fVar14 = (float)(**(code **)(*(long *)this + 0x88))(this,iVar3,uVar9);
          iVar4 = *(int *)(this + 0x78);
          if (iVar4 == 0) {
            local_90 = fVar14 - *(float *)(this + 0x3c);
            local_8c = (float)iVar3 - *(float *)(this + 0x5c) * 0.5;
            local_88 = fVar20 - *(float *)(this + 0x60) * 0.5;
LAB_01229918:
            local_84 = 0;
          }
          else {
            if (iVar4 == 1) {
              local_8c = fVar14 - *(float *)(this + 0x40);
              local_90 = (float)iVar3 - *(float *)(this + 0x5c) * 0.5;
              local_88 = fVar20 - *(float *)(this + 0x60) * 0.5;
              goto LAB_01229918;
            }
            if (iVar4 == 2) {
              local_90 = (float)iVar3 - *(float *)(this + 0x5c) * 0.5;
              local_8c = fVar20 - *(float *)(this + 0x60) * 0.5;
              local_88 = fVar14 - *(float *)(this + 0x44);
              goto LAB_01229918;
            }
          }
          local_90 = local_90 * *(float *)(this + 0x7c);
          local_8c = local_8c * *(float *)(this + 0x80);
          local_88 = local_88 * *(float *)(this + 0x84);
          fVar14 = (float)(**(code **)(*(long *)this + 0x88))(this,iVar3,iVar2);
          iVar4 = *(int *)(this + 0x78);
          if (iVar4 == 0) {
            local_80 = fVar14 - *(float *)(this + 0x3c);
            local_7c = (float)iVar3 - *(float *)(this + 0x5c) * 0.5;
            local_78 = fVar19 - *(float *)(this + 0x60) * 0.5;
LAB_012299ec:
            local_74 = 0;
          }
          else {
            if (iVar4 == 1) {
              local_7c = fVar14 - *(float *)(this + 0x40);
              local_80 = (float)iVar3 - *(float *)(this + 0x5c) * 0.5;
              local_78 = fVar19 - *(float *)(this + 0x60) * 0.5;
              goto LAB_012299ec;
            }
            if (iVar4 == 2) {
              local_80 = (float)iVar3 - *(float *)(this + 0x5c) * 0.5;
              local_7c = fVar19 - *(float *)(this + 0x60) * 0.5;
              local_78 = fVar14 - *(float *)(this + 0x44);
              goto LAB_012299ec;
            }
          }
          local_80 = local_80 * *(float *)(this + 0x7c);
          local_7c = local_7c * *(float *)(this + 0x80);
          local_78 = local_78 * *(float *)(this + 0x84);
          (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_a0,uVar5,uVar9);
          fVar14 = (float)(**(code **)(*(long *)this + 0x88))(this,iVar3,iVar2);
          iVar4 = *(int *)(this + 0x78);
          if (iVar4 == 0) {
            local_90 = fVar14 - *(float *)(this + 0x3c);
            local_8c = (float)iVar3 - *(float *)(this + 0x5c) * 0.5;
            local_88 = fVar19 - *(float *)(this + 0x60) * 0.5;
LAB_01229adc:
            local_84 = 0;
          }
          else {
            if (iVar4 == 1) {
              local_8c = fVar14 - *(float *)(this + 0x40);
              local_90 = (float)iVar3 - *(float *)(this + 0x5c) * 0.5;
              local_88 = fVar19 - *(float *)(this + 0x60) * 0.5;
              goto LAB_01229adc;
            }
            if (iVar4 == 2) {
              local_90 = (float)iVar3 - *(float *)(this + 0x5c) * 0.5;
              local_8c = fVar19 - *(float *)(this + 0x60) * 0.5;
              local_88 = fVar14 - *(float *)(this + 0x44);
              goto LAB_01229adc;
            }
          }
          local_90 = local_90 * *(float *)(this + 0x7c);
          local_8c = local_8c * *(float *)(this + 0x80);
          local_88 = local_88 * *(float *)(this + 0x84);
          fVar14 = (float)(**(code **)(*(long *)this + 0x88))(this,uVar5,iVar2);
          iVar3 = *(int *)(this + 0x78);
          uVar10 = uVar5;
          if (iVar3 == 0) {
            local_80 = *(float *)(this + 0x3c);
            fVar15 = *(float *)(this + 0x5c);
            fVar16 = *(float *)(this + 0x60);
            goto LAB_01229b78;
          }
          if (iVar3 == 1) {
            fVar15 = *(float *)(this + 0x5c);
            fVar16 = *(float *)(this + 0x60);
            local_7c = *(float *)(this + 0x40);
            goto LAB_01229b9c;
          }
          if (iVar3 == 2) {
            fVar15 = *(float *)(this + 0x5c);
            fVar16 = *(float *)(this + 0x60);
            goto LAB_01229b50;
          }
        }
LAB_01229f20:
        uVar10 = uVar5 + 1;
        local_80 = local_80 * *(float *)(this + 0x7c);
        local_7c = local_7c * *(float *)(this + 0x80);
        local_78 = local_78 * *(float *)(this + 0x84);
        (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_a0,uVar5,uVar9);
        uVar5 = uVar10;
      } while (uVar10 != uVar11);
    }
    uVar9 = uVar9 + 1;
    if (uVar9 == uVar12) {
      return;
    }
  } while( true );
}

