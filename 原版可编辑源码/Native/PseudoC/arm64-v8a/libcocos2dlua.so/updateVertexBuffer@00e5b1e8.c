
/* cocos2d::PUBillboardChain::updateVertexBuffer(cocos2d::Mat4 const&) */

void __thiscall cocos2d::PUBillboardChain::updateVertexBuffer(PUBillboardChain *this,Mat4 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  float *pfVar11;
  PUBillboardChain *pPVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  long *plVar17;
  vector<cocos2d::PUBillboardChain::VertexInfo,std::__ndk1::allocator<cocos2d::PUBillboardChain::VertexInfo>>
  *this_00;
  float *pfVar18;
  long lVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  Vec3 local_b0 [8];
  float local_a8;
  Vec3 aVStack_a0 [12];
  undefined4 local_94;
  undefined4 uStack_90;
  Vec4 aVStack_8c [20];
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  (**(code **)(*(long *)this + 200))();
  if (this[0x1f] != (PUBillboardChain)0x0) {
    Vec3::Vec3(aVStack_a0,0.0,0.0,0.0);
    local_94 = 0;
    uStack_90 = 0;
    Vec4::Vec4(aVStack_8c,(Vec4 *)Vec4::ONE);
    this_00 = (vector<cocos2d::PUBillboardChain::VertexInfo,std::__ndk1::allocator<cocos2d::PUBillboardChain::VertexInfo>>
               *)(this + 0xa0);
    std::__ndk1::
    vector<cocos2d::PUBillboardChain::VertexInfo,std::__ndk1::allocator<cocos2d::PUBillboardChain::VertexInfo>>
    ::assign(this_00,(*(long *)(this + 0xa8) - *(long *)this_00 >> 2) * -0x71c71c71c71c71c7,
             (VertexInfo *)aVStack_a0);
    Vec3::Vec3(local_b0,*(float *)(param_1 + 0x30),*(float *)(param_1 + 0x34),
               *(float *)(param_1 + 0x38));
    Vec3::Vec3((Vec3 *)&local_c0);
    plVar17 = *(long **)(this + 0x58);
    plVar7 = *(long **)(this + 0x60);
    if (plVar17 != plVar7) {
      do {
        lVar10 = plVar17[1];
        if ((lVar10 != -1) && (lVar5 = plVar17[2], lVar8 = lVar10, lVar19 = lVar10, lVar10 != lVar5)
           ) {
          while( true ) {
            lVar13 = *plVar17;
            lVar15 = *(long *)(this + 0x40);
            lVar2 = 0;
            if (lVar19 != *(long *)(this + 8)) {
              lVar2 = lVar19;
            }
            lVar19 = lVar2 + lVar13;
            lVar3 = 0;
            if (lVar2 + 1 != *(long *)(this + 8)) {
              lVar3 = lVar2 + 1;
            }
            pfVar18 = (float *)(lVar15 + lVar19 * 0x34);
            if (lVar2 == lVar8) {
              pfVar11 = (float *)(lVar15 + (lVar3 + lVar13) * 0x34);
              pfVar16 = pfVar11 + 2;
              lVar10 = lVar19;
              pfVar14 = pfVar18;
            }
            else if (lVar2 == lVar5) {
              lVar10 = lVar13 + lVar10;
              pfVar16 = (float *)(lVar15 + lVar19 * 0x34 + 8);
              pfVar14 = (float *)(lVar15 + lVar10 * 0x34);
              pfVar11 = pfVar18;
            }
            else {
              lVar10 = lVar13 + lVar10;
              pfVar11 = (float *)(lVar15 + (lVar3 + lVar13) * 0x34);
              pfVar16 = pfVar11 + 2;
              pfVar14 = (float *)(lVar15 + lVar10 * 0x34);
            }
            lVar10 = lVar15 + lVar10 * 0x34;
            local_b8 = *pfVar16 - *(float *)(lVar10 + 8);
            local_c0 = CONCAT44((float)((ulong)*(undefined8 *)pfVar11 >> 0x20) -
                                *(float *)(lVar10 + 4),(float)*(undefined8 *)pfVar11 - *pfVar14);
            Vec3::Vec3((Vec3 *)&local_d0);
            lVar10 = lVar15 + lVar19 * 0x34;
            pfVar16 = (float *)(lVar10 + 8);
            local_c8 = local_a8 - *pfVar16;
            local_d0 = CONCAT44(local_b0._4_4_ - (float)((ulong)*(undefined8 *)pfVar18 >> 0x20),
                                local_b0._0_4_ - (float)*(undefined8 *)pfVar18);
            Vec3::Vec3((Vec3 *)&local_e0);
            Vec3::cross((Vec3 *)&local_c0,(Vec3 *)&local_d0,(Vec3 *)&local_e0);
            Vec3::normalize((Vec3 *)&local_e0);
            fVar21 = *(float *)(lVar15 + lVar19 * 0x34 + 0xc) * 0.5;
            local_e0 = local_e0 * fVar21;
            fStack_dc = fVar21 * fStack_dc;
            local_d8 = fVar21 * local_d8;
            fVar21 = *pfVar18;
            fVar22 = *(float *)(lVar10 + 4);
            fVar23 = *pfVar16;
            uVar1 = ((uint)lVar19 & 0x7fff) << 1;
            uVar6 = (ulong)uVar1;
            pfVar18 = (float *)(*(long *)(this + 0xa0) + uVar6 * 0x24);
            *pfVar18 = fVar21 - local_e0;
            pfVar18[1] = fVar22 - fStack_dc;
            pfVar18[2] = fVar23 - local_d8;
            if (this[0x19] != (PUBillboardChain)0x0) {
              lVar10 = lVar15 + lVar19 * 0x34;
              uVar20 = *(undefined8 *)(lVar10 + 0x14);
              lVar8 = *(long *)this_00 + uVar6 * 0x24;
              *(undefined8 *)(lVar8 + 0x1c) = *(undefined8 *)(lVar10 + 0x1c);
              *(undefined8 *)(lVar8 + 0x14) = uVar20;
            }
            if (this[0x18] == (PUBillboardChain)0x0) {
              lVar10 = *(long *)this_00;
            }
            else {
              if (*(int *)(this + 0x20) == 0) {
                lVar10 = *(long *)(this + 0xa0);
                lVar8 = lVar10 + uVar6 * 0x24;
                *(undefined4 *)(lVar8 + 0xc) = *(undefined4 *)(lVar15 + lVar19 * 0x34 + 0x10);
                uVar9 = *(undefined4 *)(this + 0x24);
              }
              else {
                lVar10 = *(long *)(this + 0xa0);
                lVar8 = lVar10 + uVar6 * 0x24;
                *(undefined4 *)(lVar8 + 0xc) = *(undefined4 *)(this + 0x24);
                uVar9 = *(undefined4 *)(lVar15 + lVar19 * 0x34 + 0x10);
              }
              *(undefined4 *)(lVar8 + 0x10) = uVar9;
            }
            uVar6 = (ulong)(uVar1 | 1);
            pfVar18 = (float *)(lVar10 + uVar6 * 0x24);
            *pfVar18 = local_e0 + fVar21;
            pfVar18[1] = fStack_dc + fVar22;
            pfVar18[2] = local_d8 + fVar23;
            if (this[0x19] != (PUBillboardChain)0x0) {
              lVar10 = lVar15 + lVar19 * 0x34;
              uVar20 = *(undefined8 *)(lVar10 + 0x14);
              lVar8 = *(long *)this_00 + uVar6 * 0x24;
              *(undefined8 *)(lVar8 + 0x1c) = *(undefined8 *)(lVar10 + 0x1c);
              *(undefined8 *)(lVar8 + 0x14) = uVar20;
            }
            if (this[0x18] != (PUBillboardChain)0x0) {
              if (*(int *)(this + 0x20) == 0) {
                lVar10 = *(long *)this_00;
                *(undefined4 *)(lVar10 + uVar6 * 0x24 + 0xc) =
                     *(undefined4 *)(lVar15 + lVar19 * 0x34 + 0x10);
                pPVar12 = this + 0x28;
              }
              else {
                lVar10 = *(long *)this_00;
                *(undefined4 *)(lVar10 + uVar6 * 0x24 + 0xc) = *(undefined4 *)(this + 0x28);
                pPVar12 = (PUBillboardChain *)(lVar15 + lVar19 * 0x34 + 0x10);
              }
              *(undefined4 *)(lVar10 + uVar6 * 0x24 + 0x10) = *(undefined4 *)pPVar12;
            }
            lVar5 = plVar17[2];
            if (lVar2 == lVar5) break;
            lVar10 = lVar2;
            lVar8 = plVar17[1];
            lVar19 = lVar2 + 1;
          }
          plVar7 = *(long **)(this + 0x60);
        }
        plVar17 = plVar17 + 3;
      } while (plVar17 != plVar7);
    }
    VertexBuffer::updateVertices
              (*(VertexBuffer **)(this + 0x98),*(void **)(this + 0xa0),
               (int)((ulong)(*(long *)(this + 0xa8) - (long)*(void **)(this + 0xa0)) >> 2) *
               0x38e38e39,0,0);
    this[0x1f] = (PUBillboardChain)0x0;
    Vec4::~Vec4(aVStack_8c);
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

