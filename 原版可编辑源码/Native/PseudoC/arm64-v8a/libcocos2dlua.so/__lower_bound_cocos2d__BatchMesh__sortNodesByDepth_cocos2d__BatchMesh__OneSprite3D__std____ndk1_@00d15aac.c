
/* std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   std::__ndk1::__lower_bound<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>, cocos2d::BatchMesh::OneSprite3D
   const&,
   cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&) */

undefined8 *
std::__ndk1::
__lower_bound<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,cocos2d::BatchMesh::OneSprite3D>
          (undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
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
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  if (param_2 - (long)param_1 != 0) {
    uVar7 = (param_2 - (long)param_1 >> 4) * 0x6db6db6db6db6db7;
    puVar4 = param_1;
    do {
      uVar5 = uVar7 >> 1;
      puVar6 = puVar4 + uVar5 * 0xe;
      uStack_e8 = puVar6[1];
      local_f0 = *puVar6;
      cocos2d::Mat4::Mat4(aMStack_e0,(Mat4 *)(puVar6 + 2));
      local_a0 = puVar6[10];
      cocos2d::Vec4::Vec4(aVStack_98,(Vec4 *)(puVar6 + 0xb));
      local_88 = puVar4[uVar5 * 0xe + 0xd];
      cocos2d::Mat4::Mat4(aMStack_150,(Mat4 *)(param_3 + 0x10));
      local_110 = *(undefined8 *)(param_3 + 0x50);
      cocos2d::Vec4::Vec4(aVStack_108,(Vec4 *)(param_3 + 0x58));
      local_f8 = *(undefined8 *)(param_3 + 0x68);
      fVar3 = (float)local_88;
      fVar2 = (float)local_f8;
      cocos2d::Vec4::~Vec4(aVStack_108);
      cocos2d::Mat4::~Mat4(aMStack_150);
      cocos2d::Vec4::~Vec4(aVStack_98);
      cocos2d::Mat4::~Mat4(aMStack_e0);
      param_1 = puVar6 + 0xe;
      uVar7 = uVar7 + ~uVar5;
      if (fVar3 <= fVar2) {
        param_1 = puVar4;
        uVar7 = uVar5;
      }
      puVar4 = param_1;
    } while (uVar7 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

