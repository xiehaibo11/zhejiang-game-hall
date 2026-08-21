
/* cocos2d::Physics3DDebugDrawer::drawLine(btVector3 const&, btVector3 const&, btVector3 const&) */

void cocos2d::Physics3DDebugDrawer::drawLine
               (btVector3 *param_1,btVector3 *param_2,btVector3 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  btVector3 *in_x3;
  undefined4 *puVar5;
  float fVar6;
  undefined4 uVar7;
  float in_s1;
  float fVar8;
  float in_s2;
  float fVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < *(int *)(param_1 + 0x14) + 2) {
    iVar1 = iVar2;
    if (iVar2 < 3) {
      iVar1 = 2;
    }
    *(int *)(param_1 + 0x10) = iVar1 + iVar2;
    pvVar4 = realloc(*(void **)(param_1 + 0x18),(long)(iVar1 + iVar2) * 0x1c);
    *(void **)(param_1 + 0x18) = pvVar4;
  }
  fVar6 = (float)convertbtVector3ToVec3(in_x3);
  puVar5 = (undefined4 *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x14) * 0x1c);
  fVar8 = in_s1;
  fVar9 = in_s2;
  uVar7 = convertbtVector3ToVec3(param_2);
  *puVar5 = uVar7;
  puVar5[1] = fVar8;
  puVar5[2] = fVar9;
  fVar8 = in_s1;
  fVar9 = in_s2;
  Vec4::Vec4((Vec4 *)&local_78,fVar6,in_s1,in_s2,1.0);
  *(undefined8 *)(puVar5 + 5) = uStack_70;
  *(undefined8 *)(puVar5 + 3) = local_78;
  Vec4::~Vec4((Vec4 *)&local_78);
  uVar7 = convertbtVector3ToVec3(param_3);
  puVar5[7] = uVar7;
  puVar5[8] = fVar8;
  puVar5[9] = fVar9;
  Vec4::Vec4((Vec4 *)&local_78,fVar6,in_s1,in_s2,1.0);
  *(undefined8 *)(puVar5 + 0xc) = uStack_70;
  *(undefined8 *)(puVar5 + 10) = local_78;
  Vec4::~Vec4((Vec4 *)&local_78);
  param_1[0x88] = (btVector3)0x1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 2;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

