
/* cocostudio::timeline::BoneNode::batchBoneDrawToSkeleton(cocostudio::timeline::BoneNode*) const */

void __thiscall
cocostudio::timeline::BoneNode::batchBoneDrawToSkeleton(BoneNode *this,BoneNode *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar4 = cocos2d::Node::isVisitableByVisitingCamera((Node *)param_1);
  if ((uVar4 & 1) != 0) {
    cocos2d::Vec3::Vec3((Vec3 *)&local_88);
    cocos2d::Vec3::Vec3((Vec3 *)&local_7c);
    cocos2d::Vec3::Vec3((Vec3 *)&local_70);
    cocos2d::Vec3::Vec3((Vec3 *)&local_64);
    lVar7 = 0;
    puVar8 = &local_80;
    do {
      cocos2d::Vec4::Vec4((Vec4 *)&local_a8);
      local_a8 = *(undefined8 *)(param_1 + lVar7 + 0x3b0);
      local_a0 = *(float *)(param_1 + 0x58);
      local_9c = 1.0;
      cocos2d::Mat4::transformVector((Mat4 *)(param_1 + 0x8c),(Vec4 *)&local_a8);
      cocos2d::Vec3::Vec3((Vec3 *)&local_b8,(float)local_a8,local_a8._4_4_,local_a0);
      cocos2d::Vec3::Vec3((Vec3 *)&local_98,local_b8 / local_9c,fStack_b4 / local_9c,
                          local_b0 / local_9c);
      *(undefined8 *)(puVar8 + -2) = local_98;
      *puVar8 = local_90;
      cocos2d::Vec4::~Vec4((Vec4 *)&local_a8);
      lVar7 = lVar7 + 8;
      puVar8 = puVar8 + 3;
    } while (lVar7 != 0x20);
    lVar5 = *(long *)(param_1 + 0x3a8);
    lVar7 = (long)*(int *)(lVar5 + 0x5f0);
    lVar6 = *(long *)(lVar5 + 0x5c8) - *(long *)(lVar5 + 0x5c0) >> 2;
    uVar4 = lVar6 * -0x5555555555555555;
    if ((int)uVar4 < *(int *)(lVar5 + 0x5f0) + 8) {
      uVar1 = lVar7 + 100;
      if (uVar4 < uVar1) {
        std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::__append
                  ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(lVar5 + 0x5c0),
                   uVar1 + lVar6 * 0x5555555555555555);
        lVar5 = *(long *)(param_1 + 0x3a8);
      }
      else if (uVar4 - uVar1 != 0) {
        *(ulong *)(lVar5 + 0x5c8) = *(long *)(lVar5 + 0x5c0) + uVar1 * 0xc;
      }
      uVar4 = *(long *)(lVar5 + 0x5e0) - *(long *)(lVar5 + 0x5d8) >> 4;
      if (uVar4 < uVar1) {
        std::__ndk1::vector<cocos2d::Color4F,std::__ndk1::allocator<cocos2d::Color4F>>::__append
                  ((vector<cocos2d::Color4F,std::__ndk1::allocator<cocos2d::Color4F>> *)
                   (lVar5 + 0x5d8),uVar1 - uVar4);
        lVar5 = *(long *)(param_1 + 0x3a8);
      }
      else if (uVar4 != uVar1) {
        *(ulong *)(lVar5 + 0x5e0) = *(long *)(lVar5 + 0x5d8) + uVar1 * 0x10;
      }
    }
    lVar6 = lVar7 * 0xc;
    puVar2 = (undefined8 *)(*(long *)(lVar5 + 0x5c0) + lVar6);
    *(undefined4 *)(puVar2 + 1) = local_80;
    *puVar2 = local_88;
    uVar9 = *(undefined8 *)(param_1 + 0x3d0);
    lVar7 = lVar7 * 0x10;
    puVar2 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x3a8) + 0x5d8) + lVar7);
    puVar2[1] = *(undefined8 *)(param_1 + 0x3d8);
    *puVar2 = uVar9;
    lVar5 = lVar6 + *(long *)(*(long *)(param_1 + 0x3a8) + 0x5c0);
    *(undefined4 *)(lVar5 + 0x14) = local_74;
    *(undefined8 *)(lVar5 + 0xc) = local_7c;
    uVar9 = *(undefined8 *)(param_1 + 0x3e0);
    lVar5 = lVar7 + *(long *)(*(long *)(param_1 + 0x3a8) + 0x5d8);
    *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(param_1 + 1000);
    *(undefined8 *)(lVar5 + 0x10) = uVar9;
    lVar5 = lVar6 + *(long *)(*(long *)(param_1 + 0x3a8) + 0x5c0);
    *(undefined4 *)(lVar5 + 0x20) = local_68;
    *(undefined8 *)(lVar5 + 0x18) = local_70;
    uVar9 = *(undefined8 *)(param_1 + 0x3f0);
    lVar5 = lVar7 + *(long *)(*(long *)(param_1 + 0x3a8) + 0x5d8);
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(param_1 + 0x3f8);
    *(undefined8 *)(lVar5 + 0x20) = uVar9;
    lVar6 = lVar6 + *(long *)(*(long *)(param_1 + 0x3a8) + 0x5c0);
    *(undefined4 *)(lVar6 + 0x2c) = local_5c;
    *(undefined8 *)(lVar6 + 0x24) = local_64;
    uVar9 = *(undefined8 *)(param_1 + 0x400);
    lVar7 = lVar7 + *(long *)(*(long *)(param_1 + 0x3a8) + 0x5d8);
    *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(param_1 + 0x408);
    *(undefined8 *)(lVar7 + 0x30) = uVar9;
    *(int *)(*(long *)(param_1 + 0x3a8) + 0x5f0) = *(int *)(*(long *)(param_1 + 0x3a8) + 0x5f0) + 4;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

