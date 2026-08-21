
/* std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   std::__ndk1::__upper_bound<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>, cocos2d::BatchMesh::OneSprite3D
   const&,
   cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&) */

long std::__ndk1::
     __upper_bound<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,cocos2d::BatchMesh::OneSprite3D>
               (long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
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
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  if (param_2 - param_1 != 0) {
    uVar7 = (param_2 - param_1 >> 4) * 0x6db6db6db6db6db7;
    do {
      uStack_e8 = param_3[1];
      local_f0 = *param_3;
      cocos2d::Mat4::Mat4(aMStack_e0,(Mat4 *)(param_3 + 2));
      local_a0 = param_3[10];
      cocos2d::Vec4::Vec4(aVStack_98,(Vec4 *)(param_3 + 0xb));
      local_88 = param_3[0xd];
      uVar6 = uVar7 >> 1;
      cocos2d::Mat4::Mat4(aMStack_150,(Mat4 *)(param_1 + uVar6 * 0x70 + 0x10));
      lVar5 = param_1 + uVar6 * 0x70;
      local_110 = *(undefined8 *)(lVar5 + 0x50);
      cocos2d::Vec4::Vec4(aVStack_108,(Vec4 *)(lVar5 + 0x58));
      local_f8 = *(undefined8 *)(param_1 + uVar6 * 0x70 + 0x68);
      fVar4 = (float)local_88;
      fVar3 = (float)local_f8;
      cocos2d::Vec4::~Vec4(aVStack_108);
      cocos2d::Mat4::~Mat4(aMStack_150);
      cocos2d::Vec4::~Vec4(aVStack_98);
      cocos2d::Mat4::~Mat4(aMStack_e0);
      uVar1 = uVar7 + ~uVar6;
      uVar7 = uVar6;
      if (fVar4 <= fVar3) {
        param_1 = param_1 + uVar6 * 0x70 + 0x70;
        uVar7 = uVar1;
      }
    } while (uVar7 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

