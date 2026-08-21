
/* cocos2d::Bone3D::updateLocalMat() */

void __thiscall cocos2d::Bone3D::updateLocalMat(Bone3D *this)

{
  float *pfVar1;
  Mat4 *this_00;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 0x170) != *(long *)(this + 0x168)) {
    Vec3::Vec3((Vec3 *)&local_58);
    Vec3::Vec3((Vec3 *)&local_68);
    Quaternion::Quaternion((Quaternion *)&local_80,(Quaternion *)Quaternion::ZERO);
    puVar7 = *(undefined8 **)(this + 0x168);
    puVar2 = *(undefined8 **)(this + 0x170);
    if (puVar7 != puVar2) {
      fVar9 = 0.0;
      puVar5 = puVar7;
      do {
        pfVar1 = (float *)(puVar5 + 5);
        puVar5 = puVar5 + 7;
        fVar9 = fVar9 + *pfVar1;
      } while (puVar2 != puVar5);
      if (fVar9 != 0.0) {
        if ((long)puVar2 - (long)puVar7 == 0x38) {
          local_50 = *(float *)(puVar7 + 1);
          local_58 = *puVar7;
          local_60 = *(float *)((long)puVar7 + 0x24);
          local_68 = *(undefined8 *)((long)puVar7 + 0x1c);
          uStack_78 = *(undefined8 *)((long)puVar7 + 0x14);
          local_80 = *(undefined8 *)((long)puVar7 + 0xc);
        }
        else {
          if (puVar7 != puVar2) {
            do {
              fVar10 = (1.0 / fVar9) * *(float *)(puVar7 + 5);
              local_58 = CONCAT44((float)((ulong)*puVar7 >> 0x20) * fVar10 +
                                  (float)((ulong)local_58 >> 0x20),
                                  (float)*puVar7 * fVar10 + (float)local_58);
              local_50 = fVar10 * *(float *)(puVar7 + 1) + local_50;
              local_68 = CONCAT44((float)((ulong)local_68 >> 0x20) +
                                  (float)((ulong)*(undefined8 *)((long)puVar7 + 0x1c) >> 0x20) *
                                  fVar10,(float)local_68 +
                                         (float)*(undefined8 *)((long)puVar7 + 0x1c) * fVar10);
              local_60 = local_60 + fVar10 * *(float *)((long)puVar7 + 0x24);
              uVar4 = Quaternion::isZero((Quaternion *)&local_80);
              fVar11 = fVar10;
              if ((uVar4 & 1) == 0) {
                lVar6 = *(long *)(this + 0x168);
                fVar11 = -fVar10;
                if (0.0 <= *(float *)(lVar6 + 0xc) * (float)local_80 +
                           *(float *)(lVar6 + 0x10) * local_80._4_4_ +
                           *(float *)(lVar6 + 0x14) * (float)uStack_78 +
                           *(float *)(lVar6 + 0x18) * uStack_78._4_4_) {
                  fVar11 = fVar10;
                }
              }
              Quaternion::Quaternion
                        ((Quaternion *)&local_90,
                         fVar11 * *(float *)((long)puVar7 + 0xc) + (float)local_80,
                         fVar11 * *(float *)(puVar7 + 2) + local_80._4_4_,
                         fVar11 * *(float *)((long)puVar7 + 0x14) + (float)uStack_78,
                         fVar11 * *(float *)(puVar7 + 3) + uStack_78._4_4_);
              uStack_78 = uStack_88;
              local_80 = local_90;
              Quaternion::~Quaternion((Quaternion *)&local_90);
              puVar7 = puVar7 + 7;
            } while (puVar2 != puVar7);
          }
          Quaternion::normalize((Quaternion *)&local_80);
        }
      }
    }
    this_00 = (Mat4 *)(this + 0x124);
    Mat4::createTranslation((Vec3 *)&local_58,this_00);
    Mat4::rotate(this_00,(Quaternion *)&local_80);
    Mat4::scale(this_00,(Vec3 *)&local_68);
    lVar6 = *(long *)(this + 0x168);
    for (lVar8 = *(long *)(this + 0x170); lVar8 != lVar6; lVar8 = lVar8 + -0x38) {
      Quaternion::~Quaternion((Quaternion *)(lVar8 + -0x2c));
    }
    *(long *)(this + 0x170) = lVar6;
    Quaternion::~Quaternion((Quaternion *)&local_80);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

