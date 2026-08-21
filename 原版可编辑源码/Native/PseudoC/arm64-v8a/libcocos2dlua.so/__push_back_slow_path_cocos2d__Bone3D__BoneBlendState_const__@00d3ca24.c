
/* void std::__ndk1::vector<cocos2d::Bone3D::BoneBlendState,
   std::__ndk1::allocator<cocos2d::Bone3D::BoneBlendState>
   >::__push_back_slow_path<cocos2d::Bone3D::BoneBlendState const&>(cocos2d::Bone3D::BoneBlendState
   const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::Bone3D::BoneBlendState,std::__ndk1::allocator<cocos2d::Bone3D::BoneBlendState>>::
__push_back_slow_path<cocos2d::Bone3D::BoneBlendState_const&>
          (vector<cocos2d::Bone3D::BoneBlendState,std::__ndk1::allocator<cocos2d::Bone3D::BoneBlendState>>
           *this,BoneBlendState *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
                    /* catch() { ... } // from try @ 00d3c988 with catch @ 00d3ca24 */
  lVar5 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar11 = 0x492492492492492;
  uVar1 = lVar5 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar6 * 0x6db6db6db6db6db7) < 0x249249249249249) {
    uVar7 = lVar6 * -0x2492492492492492;
    uVar11 = uVar1;
    if (uVar1 <= uVar7) {
      uVar11 = uVar7;
    }
    if (uVar11 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_00d3cacc;
    }
  }
  pvVar4 = operator_new(uVar11 * 0x38);
LAB_00d3cacc:
  uVar8 = *(undefined8 *)param_1;
  puVar12 = (undefined8 *)((long)pvVar4 + lVar5 * 8);
  *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar12 = uVar8;
  cocos2d::Quaternion::Quaternion((Quaternion *)((long)puVar12 + 0xc),(Quaternion *)(param_1 + 0xc))
  ;
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar15 = *(undefined8 *)(param_1 + 0x24);
  uVar14 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)pvVar4 + lVar5 * 8 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)((long)pvVar4 + lVar5 * 8 + 0x28) = uVar8;
  *(undefined8 *)((long)pvVar4 + lVar5 * 8 + 0x24) = uVar15;
  *(undefined8 *)((long)pvVar4 + lVar5 * 8 + 0x1c) = uVar14;
  puVar10 = *(undefined8 **)this;
  puVar9 = *(undefined8 **)(this + 8);
  puVar2 = puVar12 + 7;
  puVar13 = puVar10;
  if (puVar9 != puVar10) {
    do {
      puVar13 = puVar9 + -7;
      uVar3 = *(undefined4 *)(puVar9 + -6);
      puVar12[-7] = *puVar13;
      *(undefined4 *)(puVar12 + -6) = uVar3;
      cocos2d::Quaternion::Quaternion
                ((Quaternion *)((long)puVar12 + -0x2c),(Quaternion *)((long)puVar9 + -0x2c));
      uVar8 = puVar9[-2];
      uVar15 = *(undefined8 *)((long)puVar9 + -0x14);
      uVar14 = *(undefined8 *)((long)puVar9 + -0x1c);
      puVar12[-1] = puVar9[-1];
      puVar12[-2] = uVar8;
      *(undefined8 *)((long)puVar12 + -0x14) = uVar15;
      *(undefined8 *)((long)puVar12 + -0x1c) = uVar14;
      puVar12 = puVar12 + -7;
      puVar9 = puVar13;
    } while (puVar10 != puVar13);
    puVar10 = *(undefined8 **)this;
    puVar13 = *(undefined8 **)(this + 8);
  }
  *(undefined8 **)this = puVar12;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar11 * 0x38);
  for (; puVar13 != puVar10; puVar13 = puVar13 + -7) {
    cocos2d::Quaternion::~Quaternion((Quaternion *)((long)puVar13 + -0x2c));
  }
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
    return;
  }
  return;
}

