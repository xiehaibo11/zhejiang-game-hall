
/* std::__ndk1::vector<cocos2d::PUParticle3DEntityRender::VertexInfo,
   std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo> >::__append(unsigned long)
    */

void __thiscall
std::__ndk1::
vector<cocos2d::PUParticle3DEntityRender::VertexInfo,std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>>
::__append(vector<cocos2d::PUParticle3DEntityRender::VertexInfo,std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  Vec3 *pVVar7;
  void *pvVar8;
  void *pvVar9;
  Vec3 *pVVar10;
  ulong uVar11;
  Vec3 *pVVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  pVVar7 = *(Vec3 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pVVar7 >> 2) * -0x71c71c71c71c71c7)) {
    pVVar10 = pVVar7;
    if (param_1 != 0) {
      pVVar10 = pVVar7 + param_1 * 0x24;
      do {
        *(undefined4 *)(pVVar7 + 0x20) = 0;
        *(undefined8 *)(pVVar7 + 8) = 0;
        *(undefined8 *)pVVar7 = 0;
        *(undefined8 *)(pVVar7 + 0x18) = 0;
        *(undefined8 *)(pVVar7 + 0x10) = 0;
        cocos2d::Vec3::Vec3(pVVar7);
        *(undefined4 *)(pVVar7 + 0xc) = 0;
        *(undefined4 *)(pVVar7 + 0x10) = 0;
        cocos2d::Vec4::Vec4((Vec4 *)(pVVar7 + 0x14));
        pVVar7 = pVVar7 + 0x24;
      } while (pVVar10 != pVVar7);
    }
    *(Vec3 **)(this + 8) = pVVar10;
    return;
  }
  lVar5 = (long)pVVar7 - *(long *)this >> 2;
  uVar11 = 0x71c71c71c71c71c;
  uVar1 = lVar5 * -0x71c71c71c71c71c7 + param_1;
  if (0x71c71c71c71c71c < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this >> 2;
  if ((ulong)(lVar3 * -0x71c71c71c71c71c7) < 0x38e38e38e38e38e) {
    uVar4 = lVar3 * 0x1c71c71c71c71c72;
    uVar11 = uVar1;
    if (uVar1 <= uVar4) {
      uVar11 = uVar4;
    }
    if (uVar11 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00e58648;
    }
  }
  pvVar2 = operator_new(uVar11 * 0x24);
LAB_00e58648:
  pVVar10 = (Vec3 *)((long)pvVar2 + lVar5 * 4);
  pVVar12 = pVVar10 + param_1 * 0x24;
  pVVar7 = pVVar10;
  do {
    *(undefined4 *)(pVVar7 + 0x20) = 0;
    *(undefined8 *)(pVVar7 + 8) = 0;
    *(undefined8 *)pVVar7 = 0;
    *(undefined8 *)(pVVar7 + 0x18) = 0;
    *(undefined8 *)(pVVar7 + 0x10) = 0;
    cocos2d::Vec3::Vec3(pVVar7);
    *(undefined4 *)(pVVar7 + 0xc) = 0;
    *(undefined4 *)(pVVar7 + 0x10) = 0;
    cocos2d::Vec4::Vec4((Vec4 *)(pVVar7 + 0x14));
    pVVar7 = pVVar7 + 0x24;
  } while (pVVar12 != pVVar7);
  pvVar8 = *(void **)this;
  pvVar9 = *(void **)(this + 8);
  pvVar6 = pvVar8;
  if (pvVar9 != pvVar8) {
    do {
      uVar14 = *(undefined8 *)((long)pvVar9 + -0x1c);
      uVar13 = *(undefined8 *)((long)pvVar9 + -0x24);
      *(undefined4 *)(pVVar10 + -0x14) = *(undefined4 *)((long)pvVar9 + -0x14);
      *(undefined8 *)(pVVar10 + -0x1c) = uVar14;
      *(undefined8 *)(pVVar10 + -0x24) = uVar13;
      cocos2d::Vec4::Vec4((Vec4 *)(pVVar10 + -0x10),(Vec4 *)((long)pvVar9 + -0x10));
      pvVar9 = (void *)((long)pvVar9 + -0x24);
      pVVar10 = pVVar10 + -0x24;
    } while (pvVar8 != pvVar9);
    pvVar8 = *(void **)this;
    pvVar6 = *(void **)(this + 8);
  }
  *(Vec3 **)this = pVVar10;
  *(Vec3 **)(this + 8) = pVVar12;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar11 * 0x24);
  for (; pvVar6 != pvVar8; pvVar6 = (void *)((long)pvVar6 + -0x24)) {
    cocos2d::Vec4::~Vec4((Vec4 *)((long)pvVar6 + -0x10));
  }
  if (pvVar8 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar8);
  return;
}

