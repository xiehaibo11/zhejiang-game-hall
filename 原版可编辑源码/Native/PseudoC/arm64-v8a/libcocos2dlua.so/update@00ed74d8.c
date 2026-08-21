
/* cocos2d::Shaky3D::update(float) */

void cocos2d::Shaky3D::update(float param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  Grid3DAction *in_x0;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  fVar8 = *(float *)(in_x0 + 0x58);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed6ee8 with catch @ 00ed7508
                        */
  if (0.0 < fVar8 + 1.0) {
    fVar7 = *(float *)(in_x0 + 0x5c);
                    /* try { // try from 00ed751c to 00fd760f has its CatchHandler @ 00ed751c
                       catch() { ... } // from try @ 00ed751c with catch @ 00ed751c
                       catch() { ... } // from try @ 00ed761c with catch @ 00ed751c */
    iVar5 = 0;
    fVar10 = 0.0;
    do {
      fVar9 = fVar7 + 1.0;
      if (0.0 < fVar9) {
        fVar11 = 0.0;
        iVar6 = 1;
        do {
          local_70 = fVar10;
          fStack_6c = fVar11;
          local_68 = (float)Grid3DAction::getOriginalVertex(in_x0,(Vec2 *)&local_70);
          local_64 = fVar8;
          local_60 = fVar9;
          iVar4 = rand();
          iVar1 = *(int *)(in_x0 + 0x68) * 2;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar4 / iVar1;
          }
          local_68 = local_68 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
          iVar4 = rand();
          iVar1 = *(int *)(in_x0 + 0x68) * 2;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar4 / iVar1;
          }
          local_64 = local_64 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
          if (in_x0[0x6c] != (Grid3DAction)0x0) {
            iVar4 = rand();
            iVar1 = *(int *)(in_x0 + 0x68) * 2;
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar4 / iVar1;
            }
                    /* try { // try from 00ed7610 to 00fd761b has its CatchHandler @ 00ed767c */
            local_60 = local_60 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
                    /* try { // try from 00ed761c to 00fd768f has its CatchHandler @ 00ed751c */
          }
          local_70 = fVar10;
          fStack_6c = fVar11;
          Grid3DAction::setVertex(in_x0,(Vec2 *)&local_70,(Vec3 *)&local_68);
          fVar7 = *(float *)(in_x0 + 0x5c);
          fVar11 = (float)iVar6;
          iVar6 = iVar6 + 1;
          fVar8 = fVar7 + 1.0;
        } while (fVar11 < fVar8);
        fVar8 = *(float *)(in_x0 + 0x58);
      }
      iVar5 = iVar5 + 1;
      fVar10 = (float)iVar5;
    } while (fVar10 < fVar8 + 1.0);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

