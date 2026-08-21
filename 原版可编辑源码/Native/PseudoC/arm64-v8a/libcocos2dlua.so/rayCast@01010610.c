
/* cocos2d::Physics3DWorld::rayCast(cocos2d::Vec3 const&, cocos2d::Vec3 const&,
   cocos2d::Physics3DWorld::HitResult*) */

void cocos2d::Physics3DWorld::rayCast(Vec3 *param_1,Vec3 *param_2,HitResult *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *in_x3;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 in_s1;
  undefined4 uVar10;
  undefined4 in_s2;
  undefined **local_c8;
  undefined4 local_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  btVector3 abStack_88 [16];
  btVector3 abStack_78 [16];
  undefined4 local_68 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58 = convertVec3TobtVector3(param_2);
  uStack_54 = in_s1;
  local_68[0] = convertVec3TobtVector3((Vec3 *)param_3);
  local_c0 = 0x3f800000;
  local_a8 = CONCAT44(uStack_54,local_58);
  uVar6 = CONCAT44(in_s1,local_68[0]);
  local_c8 = &PTR__RayResultCallback_017264d0;
  local_b8 = 0;
  uStack_b0 = 0xffff0001;
  local_98 = uVar6;
  (**(code **)(**(long **)(param_1 + 0x60) + 0x40))
            (*(long **)(param_1 + 0x60),&local_58,local_68,&local_c8);
  lVar4 = local_b8;
  uVar10 = (undefined4)uVar6;
  if (local_b8 == 0) {
    uVar6 = 0;
    *(undefined8 *)(in_x3 + 6) = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    for (puVar1 = *(undefined8 **)(param_1 + 0x28); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      plVar8 = (long *)*puVar1;
      iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
      uVar10 = (undefined4)uVar6;
      if (iVar5 == 1) {
        lVar7 = plVar8[0xf];
joined_r0x010106cc:
        if (lVar7 == lVar4) goto LAB_01010724;
      }
      else {
        iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
        uVar10 = (undefined4)uVar6;
        if (iVar5 == 2) {
          lVar7 = plVar8[0x1c];
          goto joined_r0x010106cc;
        }
      }
      uVar10 = (undefined4)uVar6;
    }
    plVar8 = (long *)0x0;
LAB_01010724:
    *(long **)(in_x3 + 6) = plVar8;
    uVar9 = convertbtVector3ToVec3(abStack_78);
    *in_x3 = uVar9;
    in_x3[1] = uVar10;
    in_x3[2] = in_s2;
    uVar9 = convertbtVector3ToVec3(abStack_88);
    in_x3[3] = uVar9;
    in_x3[4] = uVar10;
    in_x3[5] = in_s2;
    uVar6 = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

