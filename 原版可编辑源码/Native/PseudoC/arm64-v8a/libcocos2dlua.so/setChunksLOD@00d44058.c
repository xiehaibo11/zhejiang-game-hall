
/* cocos2d::Terrain::setChunksLOD(cocos2d::Vec3 const&) */

void cocos2d::Terrain::setChunksLOD(Vec3 *param_1)

{
  long lVar1;
  undefined4 *in_x1;
  long lVar2;
  undefined4 uVar3;
  Vec3 *pVVar4;
  ulong uVar5;
  Vec3 *pVVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x8052c);
  fVar11 = *(float *)(param_1 + 0x80534);
  if (0 < (int)((float)iVar8 / fVar11)) {
    iVar9 = *(int *)(param_1 + 0x80528);
    fVar12 = *(float *)(param_1 + 0x80530);
    uVar5 = 0;
    pVVar4 = param_1 + 0x4f8;
    do {
      pVVar6 = pVVar4;
      uVar7 = (ulong)(uint)(int)((float)iVar9 / fVar12);
      if (0 < (int)((float)iVar9 / fVar12)) {
        do {
          lVar2 = *(long *)(*(long *)pVVar6 + 0xd8);
          local_70 = *(undefined8 *)(lVar2 + 0x70);
          uStack_78 = *(undefined8 *)(lVar2 + 0x68);
          local_80 = *(undefined8 *)(lVar2 + 0x60);
          local_88[0] = AABB::getCenter();
          uStack_8c = in_x1[2];
          local_90 = *in_x1;
          fVar10 = (float)Vec2::distance((Vec2 *)local_88,(Vec2 *)&local_90);
          lVar2 = *(long *)pVVar6;
          *(undefined4 *)(lVar2 + 0xa0) = 3;
          if (fVar10 <= *(float *)(param_1 + 0x448)) {
            uVar3 = 0;
LAB_00d4410c:
            *(undefined4 *)(lVar2 + 0xa0) = uVar3;
          }
          else {
            if (fVar10 <= *(float *)(param_1 + 0x44c)) {
              uVar3 = 1;
              goto LAB_00d4410c;
            }
            if (fVar10 <= *(float *)(param_1 + 0x450)) {
              uVar3 = 2;
              goto LAB_00d4410c;
            }
          }
          uVar7 = uVar7 - 1;
          pVVar6 = pVVar6 + 8;
        } while (uVar7 != 0);
      }
      uVar5 = uVar5 + 1;
      pVVar4 = pVVar4 + 0x800;
    } while (uVar5 != (uint)(int)((float)iVar8 / fVar11));
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

