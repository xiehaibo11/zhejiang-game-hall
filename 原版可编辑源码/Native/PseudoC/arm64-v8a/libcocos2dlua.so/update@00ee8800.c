
/* cocos2d::ShakyTiles3D::update(float) */

void cocos2d::ShakyTiles3D::update(float param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  TiledGrid3DAction *in_x0;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  fVar7 = *(float *)(in_x0 + 0x58);
  if (0.0 < fVar7) {
    param_1 = *(float *)(in_x0 + 0x5c);
    iVar5 = 0;
    fVar8 = 0.0;
    do {
      if (0.0 < param_1) {
        fVar7 = 0.0;
        iVar6 = 1;
        do {
          local_80 = fVar8;
          fStack_7c = fVar7;
          TiledGrid3DAction::getOriginalTile(in_x0);
          iVar4 = rand();
          iVar1 = *(int *)(in_x0 + 0x68) * 2;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar4 / iVar1;
          }
          local_78 = local_78 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
          iVar4 = rand();
          iVar1 = *(int *)(in_x0 + 0x68) * 2;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar4 / iVar1;
          }
          local_6c = local_6c + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
          iVar4 = rand();
          iVar1 = *(int *)(in_x0 + 0x68) * 2;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar4 / iVar1;
          }
          local_60 = local_60 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
          iVar4 = rand();
          iVar1 = *(int *)(in_x0 + 0x68) * 2;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar4 / iVar1;
          }
          local_54 = local_54 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
          iVar4 = rand();
          iVar1 = *(int *)(in_x0 + 0x68) * 2;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar4 / iVar1;
          }
          local_74 = local_74 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
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
          local_5c = local_5c + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
          iVar4 = rand();
          iVar1 = *(int *)(in_x0 + 0x68) * 2;
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar4 / iVar1;
          }
          local_50 = local_50 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
          if (in_x0[0x6c] != (TiledGrid3DAction)0x0) {
            iVar4 = rand();
            iVar1 = *(int *)(in_x0 + 0x68) * 2;
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar4 / iVar1;
            }
            local_70 = local_70 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
            iVar4 = rand();
            iVar1 = *(int *)(in_x0 + 0x68) * 2;
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar4 / iVar1;
            }
            local_64 = local_64 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
            iVar4 = rand();
            iVar1 = *(int *)(in_x0 + 0x68) * 2;
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar4 / iVar1;
            }
            local_58 = local_58 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
            iVar4 = rand();
            iVar1 = *(int *)(in_x0 + 0x68) * 2;
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar4 / iVar1;
            }
            local_4c = local_4c + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
          }
          local_80 = fVar8;
          fStack_7c = fVar7;
          TiledGrid3DAction::setTile(in_x0,(Vec2 *)&local_80,(Quad3 *)&local_78);
          param_1 = *(float *)(in_x0 + 0x5c);
          fVar7 = (float)iVar6;
          iVar6 = iVar6 + 1;
        } while (fVar7 < param_1);
        fVar7 = *(float *)(in_x0 + 0x58);
      }
      iVar5 = iVar5 + 1;
      fVar8 = (float)iVar5;
    } while (fVar8 < fVar7);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}

