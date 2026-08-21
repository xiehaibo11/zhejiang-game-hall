
/* cocos2d::renderer::RenderFlow::calculateLocalMatrix(int) */

void __thiscall cocos2d::renderer::RenderFlow::calculateLocalMatrix(RenderFlow *this,int param_1)

{
  uint uVar1;
  long lVar2;
  MemPool *this_00;
  long *plVar3;
  long *plVar4;
  long lVar5;
  float *pfVar6;
  Mat4 *this_01;
  short *psVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  Mat4 aMStack_b8 [64];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  Mat4::Mat4(aMStack_b8);
  this_00 = NodeMemPool::_instance;
  plVar3 = (long *)MemPool::getCommonList(NodeMemPool::_instance);
  plVar4 = (long *)NodeMemPool::getNodePool((NodeMemPool *)this_00);
  uVar8 = plVar3[1] - *plVar3 >> 3;
  if (param_1 < 0) {
    uVar9 = 0;
    if (uVar8 == 0) goto LAB_009253ec;
  }
  else {
    uVar9 = (uVar8 >> 1) * (long)param_1;
    uVar10 = uVar8 >> 1;
    if (param_1 != 0) {
      uVar10 = uVar8;
    }
    uVar8 = uVar10;
    if (uVar10 <= uVar9) goto LAB_009253ec;
  }
  lVar5 = *(long *)(*plVar3 + uVar9 * 8);
  while( true ) {
    if (((lVar5 != 0) && (*(short *)(*(long *)(lVar5 + 0x18) + 2) != 0)) &&
       (uVar10 = *(ulong *)(lVar5 + 0x38) >> 2, uVar10 != 0)) {
      uVar11 = 0;
      psVar7 = (short *)(*(long *)(lVar5 + 0x30) + 2);
      lVar5 = *(long *)(*plVar4 + *(long *)(lVar5 + 8) * 8);
      lVar12 = *(long *)(lVar5 + 0xd8);
      this_01 = *(Mat4 **)(lVar5 + 0x48);
      lVar13 = *(long *)(lVar5 + 0x18);
      pfVar6 = (float *)(*(long *)(lVar5 + 0x30) + 0x24);
      do {
        if (*psVar7 != 0) {
          lVar5 = uVar11 * 4;
          uVar1 = *(uint *)(lVar13 + lVar5);
          *(uint *)(lVar13 + lVar5) = uVar1 & 0x3fffffff;
          if ((uVar1 >> 2 & 1) != 0) {
            Mat4::setIdentity(this_01);
            if (*(char *)(lVar12 + uVar11) == '\0') {
              fVar14 = 0.0;
            }
            else {
              fVar14 = pfVar6[-7];
            }
            Mat4::translate(this_01,pfVar6[-9],pfVar6[-8],fVar14);
            Mat4::createRotation((Quaternion *)(pfVar6 + -6),aMStack_b8);
            Mat4::multiply(this_01,aMStack_b8,this_01);
            fVar14 = 1.0;
            if (*(char *)(lVar12 + uVar11) != '\0') {
              fVar14 = *pfVar6;
            }
            Mat4::createScale(pfVar6[-2],pfVar6[-1],fVar14,aMStack_b8);
            Mat4::multiply(this_01,aMStack_b8,this_01);
            *(uint *)(lVar13 + lVar5) = *(uint *)(lVar13 + lVar5) & 0xfffffff3 | 8;
          }
        }
        uVar11 = uVar11 + 1;
        this_01 = this_01 + 0x40;
        psVar7 = psVar7 + 2;
        pfVar6 = pfVar6 + 10;
      } while (uVar11 < uVar10);
    }
    uVar9 = uVar9 + 1;
    if (uVar8 <= uVar9) break;
    lVar5 = *(long *)(*plVar3 + uVar9 * 8);
  }
LAB_009253ec:
  Mat4::~Mat4(aMStack_b8);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

