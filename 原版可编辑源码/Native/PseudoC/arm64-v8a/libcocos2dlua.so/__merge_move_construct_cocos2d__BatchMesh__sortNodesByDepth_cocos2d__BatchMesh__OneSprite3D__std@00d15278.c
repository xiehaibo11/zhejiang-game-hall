
/* void 
   std::__ndk1::__merge_move_construct<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >(std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>
   >::value_type*,
   cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >&)::{lambda(cocos2d::BatchMesh::OneSprite3D, cocos2d::BatchMesh::OneSprite3D)#1}&) */

void std::__ndk1::
     __merge_move_construct<cocos2d::BatchMesh::sortNodesByDepth<cocos2d::BatchMesh::OneSprite3D>(std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>&)::_lambda(cocos2d::BatchMesh::OneSprite3D,cocos2d::BatchMesh::OneSprite3D)_1_&,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>,std::__ndk1::__wrap_iter<cocos2d::BatchMesh::OneSprite3D*>>
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
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
  if (param_1 != param_2) {
    puVar7 = param_5 + 10;
    do {
      param_5 = puVar7;
      if (param_3 == param_4) {
        if (param_1 != param_2) {
          lVar6 = 0;
          do {
            puVar7 = (undefined8 *)((long)param_1 + lVar6);
            uVar5 = *puVar7;
            puVar1 = (undefined8 *)((long)param_5 + lVar6);
            puVar1[-9] = puVar7[1];
            puVar1[-10] = uVar5;
            cocos2d::Mat4::Mat4((Mat4 *)(puVar1 + -8),(Mat4 *)(puVar7 + 2));
            *puVar1 = puVar7[10];
            cocos2d::Vec4::Vec4((Vec4 *)(puVar1 + 1),(Vec4 *)(puVar7 + 0xb));
            *(undefined8 *)((long)param_5 + lVar6 + 0x18) = puVar7[0xd];
            lVar6 = lVar6 + 0x70;
          } while (puVar7 + 0xe != param_2);
        }
        goto LAB_00d15528;
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
      fVar4 = (float)local_88;
      fVar3 = (float)local_f8;
      cocos2d::Vec4::~Vec4(aVStack_108);
      cocos2d::Mat4::~Mat4(aMStack_150);
      cocos2d::Vec4::~Vec4(aVStack_98);
      cocos2d::Mat4::~Mat4(aMStack_e0);
      if (fVar4 <= fVar3) {
        uVar5 = *param_1;
        param_5[-9] = param_1[1];
        param_5[-10] = uVar5;
        cocos2d::Mat4::Mat4((Mat4 *)(param_5 + -8),(Mat4 *)(param_1 + 2));
        *param_5 = param_1[10];
        cocos2d::Vec4::Vec4((Vec4 *)(param_5 + 1),(Vec4 *)(param_1 + 0xb));
        uVar5 = param_1[0xd];
        param_1 = param_1 + 0xe;
      }
      else {
        uVar5 = *param_3;
        param_5[-9] = param_3[1];
        param_5[-10] = uVar5;
        cocos2d::Mat4::Mat4((Mat4 *)(param_5 + -8),(Mat4 *)(param_3 + 2));
        *param_5 = param_3[10];
        cocos2d::Vec4::Vec4((Vec4 *)(param_5 + 1),(Vec4 *)(param_3 + 0xb));
        uVar5 = param_3[0xd];
        param_3 = param_3 + 0xe;
      }
      param_5[3] = uVar5;
      puVar7 = param_5 + 0xe;
    } while (param_1 != param_2);
    param_5 = param_5 + 4;
  }
  if (param_3 != param_4) {
    puVar7 = param_5 + 0xd;
    do {
      uVar5 = *param_3;
      puVar7[-0xc] = param_3[1];
      puVar7[-0xd] = uVar5;
      cocos2d::Mat4::Mat4((Mat4 *)(puVar7 + -0xb),(Mat4 *)(param_3 + 2));
      puVar7[-3] = param_3[10];
      cocos2d::Vec4::Vec4((Vec4 *)(puVar7 + -2),(Vec4 *)(param_3 + 0xb));
      puVar1 = param_3 + 0xd;
      param_3 = param_3 + 0xe;
      *puVar7 = *puVar1;
      puVar7 = puVar7 + 0xe;
    } while (param_3 != param_4);
  }
LAB_00d15528:
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

