
/* void 
   std::__ndk1::__half_inplace_merge<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1},
   cocos2d::BatchMesh::OneSprite3D*, std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*> >(cocos2d::BatchMesh::OneSprite3D*,
   cocos2d::BatchMesh::OneSprite3D*, std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}) */

void std::__ndk1::
     __half_inplace_merge<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_,cocos2d::BatchMesh::OneSprite3D*,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  Mat4 aMStack_150 [64];
  undefined8 local_110;
  Vec4 aVStack_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  Mat4 aMStack_e0 [64];
  undefined8 local_a0;
  Vec4 aVStack_98 [16];
  undefined8 local_88;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  if (param_1 != param_2) {
    do {
      if (param_3 == param_4) {
        if ((long)param_2 - (long)param_1 != 0) {
          memmove(param_5,param_1,(long)param_2 - (long)param_1);
        }
        break;
      }
      uStack_e8 = param_3[1];
      local_f0 = *param_3;
      cocos2d::Mat4::Mat4(aMStack_e0,(Mat4 *)(param_3 + 2));
      local_a0 = param_3[10];
      cocos2d::Vec4::Vec4(aVStack_98,(Vec4 *)(param_3 + 0xb));
      local_88 = param_3[0xd];
      cocos2d::Mat4::Mat4(aMStack_150,(Mat4 *)(param_1 + 2));
      local_110 = param_1[10];
      cocos2d::Vec4::Vec4(aVStack_108,(Vec4 *)(param_1 + 0xb));
      local_f8 = param_1[0xd];
      fVar3 = (float)local_88;
      fVar2 = (float)local_f8;
      cocos2d::Vec4::~Vec4(aVStack_108);
      cocos2d::Mat4::~Mat4(aMStack_150);
      cocos2d::Vec4::~Vec4(aVStack_98);
      cocos2d::Mat4::~Mat4(aMStack_e0);
      if (fVar3 <= fVar2) {
        uVar8 = param_1[2];
        uVar5 = param_1[5];
        uVar4 = param_1[4];
        uVar7 = param_1[1];
        uVar6 = *param_1;
        param_5[3] = param_1[3];
        param_5[2] = uVar8;
        param_5[5] = uVar5;
        param_5[4] = uVar4;
        param_5[1] = uVar7;
        *param_5 = uVar6;
        uVar5 = param_1[0xb];
        uVar4 = param_1[10];
        uVar7 = param_1[0xd];
        uVar6 = param_1[0xc];
        uVar9 = param_1[7];
        uVar8 = param_1[6];
        uVar11 = param_1[9];
        uVar10 = param_1[8];
        param_1 = param_1 + 0xe;
      }
      else {
        uVar8 = param_3[2];
        uVar5 = param_3[5];
        uVar4 = param_3[4];
        uVar7 = param_3[1];
        uVar6 = *param_3;
        param_5[3] = param_3[3];
        param_5[2] = uVar8;
        param_5[5] = uVar5;
        param_5[4] = uVar4;
        param_5[1] = uVar7;
        *param_5 = uVar6;
        uVar5 = param_3[0xb];
        uVar4 = param_3[10];
        uVar7 = param_3[0xd];
        uVar6 = param_3[0xc];
        uVar9 = param_3[7];
        uVar8 = param_3[6];
        uVar11 = param_3[9];
        uVar10 = param_3[8];
        param_3 = param_3 + 0xe;
      }
      param_5[0xb] = uVar5;
      param_5[10] = uVar4;
      param_5[0xd] = uVar7;
      param_5[0xc] = uVar6;
      param_5[7] = uVar9;
      param_5[6] = uVar8;
      param_5[9] = uVar11;
      param_5[8] = uVar10;
      param_5 = param_5 + 0xe;
    } while (param_1 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

