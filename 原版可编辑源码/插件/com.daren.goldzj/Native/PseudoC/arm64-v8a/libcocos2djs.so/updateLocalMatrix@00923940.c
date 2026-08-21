
/* cocos2d::renderer::NodeProxy::updateLocalMatrix() */

void __thiscall cocos2d::renderer::NodeProxy::updateLocalMatrix(NodeProxy *this)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Quaternion aQStack_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (ABS(**(float **)(this + 200)) <= 1e-06) {
    fVar6 = ABS((*(float **)(this + 200))[1]);
    bVar1 = 1e-06 < fVar6;
    if ((fVar6 <= 1e-06) && ((**(uint **)(this + 0x80) >> 2 & 1) == 0)) goto LAB_00923a8c;
  }
  else {
    bVar1 = true;
  }
  Mat4::setIdentity(*(Mat4 **)(this + 0x90));
  lVar3 = *(long *)(this + 0x88);
  Quaternion::Quaternion
            (aQStack_78,*(float *)(lVar3 + 0xc),*(float *)(lVar3 + 0x10),*(float *)(lVar3 + 0x14),
             *(float *)(lVar3 + 0x18));
  pfVar4 = *(float **)(this + 0x88);
  if (**(char **)(this + 0xc0) == '\0') {
    Mat4::translate(*(Mat4 **)(this + 0x90),*pfVar4,pfVar4[1],0.0);
    Mat4::rotate(*(Mat4 **)(this + 0x90),aQStack_78);
    Mat4::scale(*(Mat4 **)(this + 0x90),*(float *)(*(long *)(this + 0x88) + 0x1c),
                *(float *)(*(long *)(this + 0x88) + 0x20),1.0);
  }
  else {
    Mat4::translate(*(Mat4 **)(this + 0x90),*pfVar4,pfVar4[1],pfVar4[2]);
    Mat4::rotate(*(Mat4 **)(this + 0x90),aQStack_78);
    lVar3 = *(long *)(this + 0x88);
    Mat4::scale(*(Mat4 **)(this + 0x90),*(float *)(lVar3 + 0x1c),*(float *)(lVar3 + 0x20),
                *(float *)(lVar3 + 0x24));
  }
  if (bVar1) {
    pfVar5 = *(float **)(this + 0x90);
    pfVar4 = *(float **)(this + 200);
    fVar8 = *pfVar5;
    fVar9 = pfVar5[1];
    fVar10 = pfVar5[4];
    fVar11 = pfVar5[5];
    fVar6 = tanf(*pfVar4 * 0.017453292);
    fVar7 = tanf(pfVar4[1] * 0.017453292);
    *pfVar5 = fVar8 + fVar10 * fVar7;
    pfVar5[1] = fVar9 + fVar11 * fVar7;
    pfVar5[4] = fVar10 + fVar8 * fVar6;
    pfVar5[5] = fVar11 + fVar9 * fVar6;
  }
  **(uint **)(this + 0x80) = **(uint **)(this + 0x80) & 0xfffffff3 | 8;
  Quaternion::~Quaternion(aQStack_78);
LAB_00923a8c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

