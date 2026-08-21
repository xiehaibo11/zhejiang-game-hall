
/* std::__ndk1::vector<cocos2d::PUBillboardChain::Element,
   std::__ndk1::allocator<cocos2d::PUBillboardChain::Element> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<cocos2d::PUBillboardChain::Element,std::__ndk1::allocator<cocos2d::PUBillboardChain::Element>>
::__append(vector<cocos2d::PUBillboardChain::Element,std::__ndk1::allocator<cocos2d::PUBillboardChain::Element>>
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
  Vec3 *pVVar9;
  Vec3 *pVVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  pVVar7 = *(Vec3 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pVVar7 >> 2) * 0x4ec4ec4ec4ec4ec5)) {
    pVVar9 = pVVar7;
    if (param_1 != 0) {
      pVVar9 = pVVar7 + param_1 * 0x34;
      lVar5 = param_1 * 0x34;
      do {
        cocos2d::Vec3::Vec3(pVVar7);
        cocos2d::Vec4::Vec4((Vec4 *)(pVVar7 + 0x14));
        cocos2d::Quaternion::Quaternion((Quaternion *)(pVVar7 + 0x24));
        lVar5 = lVar5 + -0x34;
        pVVar7 = pVVar7 + 0x34;
      } while (lVar5 != 0);
    }
    *(Vec3 **)(this + 8) = pVVar9;
    return;
  }
  lVar5 = (long)pVVar7 - *(long *)this >> 2;
  uVar11 = 0x4ec4ec4ec4ec4ec;
  uVar1 = lVar5 * 0x4ec4ec4ec4ec4ec5 + param_1;
  if (0x4ec4ec4ec4ec4ec < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this >> 2;
  if ((ulong)(lVar3 * 0x4ec4ec4ec4ec4ec5) < 0x276276276276276) {
    uVar4 = lVar3 * -0x6276276276276276;
    uVar11 = uVar1;
    if (uVar1 <= uVar4) {
      uVar11 = uVar4;
    }
    if (uVar11 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00e5bdb8;
    }
  }
  pvVar2 = operator_new(uVar11 * 0x34);
LAB_00e5bdb8:
  pVVar10 = (Vec3 *)((long)pvVar2 + lVar5 * 4);
  lVar5 = param_1 * 0x34;
  pVVar9 = pVVar10 + lVar5;
  pVVar7 = pVVar10;
  do {
    cocos2d::Vec3::Vec3(pVVar7);
    cocos2d::Vec4::Vec4((Vec4 *)(pVVar7 + 0x14));
    cocos2d::Quaternion::Quaternion((Quaternion *)(pVVar7 + 0x24));
    lVar5 = lVar5 + -0x34;
    pVVar7 = pVVar7 + 0x34;
  } while (lVar5 != 0);
  pvVar8 = *(void **)this;
  pvVar12 = *(void **)(this + 8);
  pvVar6 = pvVar8;
  if (pvVar12 != pvVar8) {
    do {
      uVar14 = *(undefined8 *)((long)pvVar12 + -0x2c);
      uVar13 = *(undefined8 *)((long)pvVar12 + -0x34);
      *(undefined4 *)(pVVar10 + -0x24) = *(undefined4 *)((long)pvVar12 + -0x24);
      *(undefined8 *)(pVVar10 + -0x2c) = uVar14;
      *(undefined8 *)(pVVar10 + -0x34) = uVar13;
      cocos2d::Vec4::Vec4((Vec4 *)(pVVar10 + -0x20),(Vec4 *)((long)pvVar12 + -0x20));
      cocos2d::Quaternion::Quaternion
                ((Quaternion *)(pVVar10 + -0x10),(Quaternion *)((long)pvVar12 + -0x10));
      pvVar12 = (void *)((long)pvVar12 + -0x34);
      pVVar10 = pVVar10 + -0x34;
    } while (pvVar8 != pvVar12);
    pvVar8 = *(void **)this;
    pvVar6 = *(void **)(this + 8);
  }
  *(Vec3 **)this = pVVar10;
  *(Vec3 **)(this + 8) = pVVar9;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar11 * 0x34);
  for (; pvVar6 != pvVar8; pvVar6 = (void *)((long)pvVar6 + -0x34)) {
    cocos2d::Quaternion::~Quaternion((Quaternion *)((long)pvVar6 + -0x10));
    cocos2d::Vec4::~Vec4((Vec4 *)((long)pvVar6 + -0x20));
  }
  if (pvVar8 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar8);
  return;
}

