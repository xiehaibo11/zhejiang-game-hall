
/* cocos2d::Lens3D::update(float) */

void cocos2d::Lens3D::update(float param_1)

{
  long lVar1;
  Grid3DAction *in_x0;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (in_x0[0x79] != (Grid3DAction)0x0) {
    fVar6 = *(float *)(in_x0 + 0x58);
    param_1 = fVar6 + 1.0;
    if (0.0 < param_1) {
      param_1 = *(float *)(in_x0 + 0x5c);
      iVar2 = 0;
      fVar8 = 0.0;
      do {
        if (0.0 < param_1 + 1.0) {
          fVar9 = 0.0;
          iVar3 = 1;
          fVar5 = param_1 + 1.0;
          do {
            local_90 = fVar8;
            fStack_8c = fVar9;
            local_88 = (float)Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_90);
            fVar7 = *(float *)(in_x0 + 0x68);
            local_90 = fVar7 - local_88;
            fStack_8c = *(float *)(in_x0 + 0x6c) - fVar6;
                    /* try { // try from 00ed6d88 to 00fd6d9b has its CatchHandler @ 00ed6dec */
            fVar10 = *(float *)(in_x0 + 0x70);
            fVar4 = SQRT(local_90 * local_90 + fStack_8c * fStack_8c);
                    /* try { // try from 00ed6d9c to 00fd6e23 has its CatchHandler @ 00ed6d14 */
            fStack_84 = fVar6;
            local_80 = fVar5;
            if ((fVar4 < fVar10) && (0.0 < fVar4)) {
              fVar7 = *(float *)(in_x0 + 0x74);
              fVar5 = (fVar10 - fVar4) / fVar10;
              fVar6 = 0.001;
              if (fVar5 != 0.0) {
                fVar6 = fVar5;
              }
              fVar6 = logf(fVar6);
              fVar6 = expf(fVar6 * fVar7);
              Vec2::normalize((Vec2 *)&local_90);
              fVar7 = *(float *)(in_x0 + 0x74);
              fVar5 = local_90 * fVar10 * fVar6;
                    /* catch() { ... } // from try @ 00ed6d88 with catch @ 00ed6dec */
              fVar4 = fStack_8c * fVar10 * fVar6;
              fVar6 = 1.0;
              if (in_x0[0x78] != (Grid3DAction)0x0) {
                fVar6 = -1.0;
              }
              local_80 = local_80 + fVar7 * fVar6 * SQRT(fVar5 * fVar5 + fVar4 * fVar4);
            }
            local_98 = fVar8;
            fStack_94 = fVar9;
            Grid3DAction::setVertex(in_x0,(Vec2 *)&local_98,(Vec3 *)&local_88);
            param_1 = *(float *)(in_x0 + 0x5c);
            fVar9 = (float)iVar3;
            iVar3 = iVar3 + 1;
            fVar6 = param_1 + 1.0;
            fVar5 = fVar7;
          } while (fVar9 < fVar6);
          fVar6 = *(float *)(in_x0 + 0x58);
        }
        iVar2 = iVar2 + 1;
        fVar8 = (float)iVar2;
                    /* try { // try from 00ed6d14 to 00fd6d87 has its CatchHandler @ 00ed6d14
                       catch() { ... } // from try @ 00ed6d14 with catch @ 00ed6d14
                       catch() { ... } // from try @ 00ed6d9c with catch @ 00ed6d14 */
      } while (fVar8 < fVar6 + 1.0);
    }
    in_x0[0x79] = (Grid3DAction)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

