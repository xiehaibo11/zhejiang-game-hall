
/* void std::__ndk1::vector<cocos2d::BatchMesh::OneSprite3D,
   std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>
   >::__push_back_slow_path<cocos2d::BatchMesh::OneSprite3D const&>(cocos2d::BatchMesh::OneSprite3D
   const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>::
__push_back_slow_path<cocos2d::BatchMesh::OneSprite3D_const&>
          (vector<cocos2d::BatchMesh::OneSprite3D,std::__ndk1::allocator<cocos2d::BatchMesh::OneSprite3D>>
           *this,OneSprite3D *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 uVar13;
  
  lVar5 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar11 = 0x249249249249249;
  uVar2 = lVar5 * 0x6db6db6db6db6db7 + 1;
  if (0x249249249249249 < uVar2) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this >> 4;
  if ((ulong)(lVar6 * 0x6db6db6db6db6db7) < 0x124924924924924) {
    uVar7 = lVar6 * -0x2492492492492492;
    uVar11 = uVar2;
    if (uVar2 <= uVar7) {
      uVar11 = uVar7;
    }
    if (uVar11 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_00d13820;
    }
  }
  pvVar4 = operator_new(uVar11 * 0x70);
LAB_00d13820:
  uVar13 = *(undefined8 *)param_1;
  puVar10 = (undefined8 *)((long)pvVar4 + lVar5 * 0x10);
  puVar10[1] = *(undefined8 *)(param_1 + 8);
  *puVar10 = uVar13;
  cocos2d::Mat4::Mat4((Mat4 *)(puVar10 + 2),(Mat4 *)(param_1 + 0x10));
  *(undefined8 *)((long)pvVar4 + lVar5 * 0x10 + 0x50) = *(undefined8 *)(param_1 + 0x50);
  cocos2d::Vec4::Vec4((Vec4 *)((long)pvVar4 + lVar5 * 0x10 + 0x58),(Vec4 *)(param_1 + 0x58));
  puVar3 = puVar10 + 0xe;
  *(undefined8 *)((long)pvVar4 + lVar5 * 0x10 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  pvVar9 = *(void **)this;
  pvVar12 = *(void **)(this + 8);
  pvVar8 = pvVar9;
  if (pvVar12 != pvVar9) {
    do {
      uVar13 = *(undefined8 *)((long)pvVar12 + -0x70);
      puVar10[-0xd] = *(undefined8 *)((long)pvVar12 + -0x68);
      puVar10[-0xe] = uVar13;
      cocos2d::Mat4::Mat4((Mat4 *)(puVar10 + -0xc),(Mat4 *)((long)pvVar12 + -0x60));
      puVar10[-4] = *(undefined8 *)((long)pvVar12 + -0x20);
      cocos2d::Vec4::Vec4((Vec4 *)(puVar10 + -3),(Vec4 *)((long)pvVar12 + -0x18));
      puVar1 = (undefined8 *)((long)pvVar12 + -8);
      pvVar12 = (void *)((long)pvVar12 + -0x70);
      puVar10[-1] = *puVar1;
      puVar10 = puVar10 + -0xe;
    } while (pvVar9 != pvVar12);
    pvVar9 = *(void **)this;
    pvVar8 = *(void **)(this + 8);
  }
  *(undefined8 **)this = puVar10;
  *(undefined8 **)(this + 8) = puVar3;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar11 * 0x70);
  for (; pvVar8 != pvVar9; pvVar8 = (void *)((long)pvVar8 + -0x70)) {
    cocos2d::Vec4::~Vec4((Vec4 *)((long)pvVar8 + -0x18));
    cocos2d::Mat4::~Mat4((Mat4 *)((long)pvVar8 + -0x60));
  }
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
    return;
  }
  return;
}

