
/* void std::__ndk1::vector<cocos2d::PUParticle3DEntityRender::VertexInfo,
   std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>
   >::__push_back_slow_path<cocos2d::PUParticle3DEntityRender::VertexInfo
   const&>(cocos2d::PUParticle3DEntityRender::VertexInfo const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::PUParticle3DEntityRender::VertexInfo,std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>>
::__push_back_slow_path<cocos2d::PUParticle3DEntityRender::VertexInfo_const&>
          (vector<cocos2d::PUParticle3DEntityRender::VertexInfo,std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>>
           *this,VertexInfo *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar3 = *(long *)(this + 8) - *(long *)this >> 2;
  uVar9 = 0x71c71c71c71c71c;
  uVar1 = lVar3 * -0x71c71c71c71c71c7 + 1;
  if (0x71c71c71c71c71c < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar4 = *(long *)(this + 0x10) - *(long *)this >> 2;
  if ((ulong)(lVar4 * -0x71c71c71c71c71c7) < 0x38e38e38e38e38e) {
    uVar5 = lVar4 * 0x1c71c71c71c71c72;
    uVar9 = uVar1;
    if (uVar1 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00e58988;
    }
  }
  pvVar2 = operator_new(uVar9 * 0x24);
LAB_00e58988:
  uVar12 = *(undefined8 *)(param_1 + 8);
  uVar11 = *(undefined8 *)param_1;
  puVar10 = (undefined8 *)((long)pvVar2 + lVar3 * 4);
  *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar10[1] = uVar12;
  *puVar10 = uVar11;
  cocos2d::Vec4::Vec4((Vec4 *)((long)puVar10 + 0x14),(Vec4 *)(param_1 + 0x14));
  pvVar8 = *(void **)this;
  pvVar7 = *(void **)(this + 8);
  lVar3 = (long)puVar10 + 0x24;
  pvVar6 = pvVar8;
  if (pvVar7 != pvVar8) {
    do {
      uVar12 = *(undefined8 *)((long)pvVar7 + -0x1c);
      uVar11 = *(undefined8 *)((long)pvVar7 + -0x24);
      *(undefined4 *)((long)puVar10 + -0x14) = *(undefined4 *)((long)pvVar7 + -0x14);
      *(undefined8 *)((long)puVar10 + -0x1c) = uVar12;
      *(undefined8 *)((long)puVar10 + -0x24) = uVar11;
      cocos2d::Vec4::Vec4((Vec4 *)(puVar10 + -2),(Vec4 *)((long)pvVar7 + -0x10));
      pvVar7 = (void *)((long)pvVar7 + -0x24);
      puVar10 = (undefined8 *)((long)puVar10 + -0x24);
    } while (pvVar8 != pvVar7);
    pvVar8 = *(void **)this;
    pvVar6 = *(void **)(this + 8);
  }
  *(undefined8 **)this = puVar10;
  *(long *)(this + 8) = lVar3;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar9 * 0x24);
  for (; pvVar6 != pvVar8; pvVar6 = (void *)((long)pvVar6 + -0x24)) {
    cocos2d::Vec4::~Vec4((Vec4 *)((long)pvVar6 + -0x10));
  }
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
    return;
  }
  return;
}

