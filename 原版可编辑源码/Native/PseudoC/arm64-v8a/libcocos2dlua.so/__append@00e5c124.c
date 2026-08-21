
/* std::__ndk1::vector<cocos2d::PUBillboardChain::VertexInfo,
   std::__ndk1::allocator<cocos2d::PUBillboardChain::VertexInfo> >::__append(unsigned long,
   cocos2d::PUBillboardChain::VertexInfo const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::PUBillboardChain::VertexInfo,std::__ndk1::allocator<cocos2d::PUBillboardChain::VertexInfo>>
::__append(vector<cocos2d::PUBillboardChain::VertexInfo,std::__ndk1::allocator<cocos2d::PUBillboardChain::VertexInfo>>
           *this,ulong param_1,VertexInfo *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar11 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)puVar11 >> 2) * -0x71c71c71c71c71c7)) {
    puVar10 = puVar11;
    if (param_1 != 0) {
      puVar10 = (undefined8 *)((long)puVar11 + param_1 * 0x24);
      lVar6 = param_1 * 0x24;
      do {
        uVar14 = *(undefined8 *)(param_2 + 8);
        uVar13 = *(undefined8 *)param_2;
        *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(param_2 + 0x10);
        puVar11[1] = uVar14;
        *puVar11 = uVar13;
        cocos2d::Vec4::Vec4((Vec4 *)((long)puVar11 + 0x14),(Vec4 *)(param_2 + 0x14));
        lVar6 = lVar6 + -0x24;
        puVar11 = (undefined8 *)((long)puVar11 + 0x24);
      } while (lVar6 != 0);
    }
    *(undefined8 **)(this + 8) = puVar10;
    return;
  }
  lVar6 = (long)puVar11 - *(long *)this >> 2;
  uVar12 = 0x71c71c71c71c71c;
  uVar1 = lVar6 * -0x71c71c71c71c71c7 + param_1;
  if (0x71c71c71c71c71c < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar4 = *(long *)(this + 0x10) - *(long *)this >> 2;
  if ((ulong)(lVar4 * -0x71c71c71c71c71c7) < 0x38e38e38e38e38e) {
    uVar5 = lVar4 * 0x1c71c71c71c71c72;
    uVar12 = uVar1;
    if (uVar1 <= uVar5) {
      uVar12 = uVar5;
    }
    if (uVar12 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00e5c1f4;
    }
  }
  pvVar3 = operator_new(uVar12 * 0x24);
LAB_00e5c1f4:
  puVar10 = (undefined8 *)((long)pvVar3 + lVar6 * 4);
  lVar6 = param_1 * 0x24;
  pvVar2 = (void *)((long)puVar10 + lVar6);
  puVar11 = puVar10;
  do {
    uVar14 = *(undefined8 *)(param_2 + 8);
    uVar13 = *(undefined8 *)param_2;
    *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(param_2 + 0x10);
    puVar11[1] = uVar14;
    *puVar11 = uVar13;
    cocos2d::Vec4::Vec4((Vec4 *)((long)puVar11 + 0x14),(Vec4 *)(param_2 + 0x14));
    lVar6 = lVar6 + -0x24;
    puVar11 = (undefined8 *)((long)puVar11 + 0x24);
  } while (lVar6 != 0);
  pvVar9 = *(void **)this;
  pvVar8 = *(void **)(this + 8);
  pvVar7 = pvVar9;
  if (pvVar8 != pvVar9) {
    do {
      uVar14 = *(undefined8 *)((long)pvVar8 + -0x1c);
      uVar13 = *(undefined8 *)((long)pvVar8 + -0x24);
      *(undefined4 *)((long)puVar10 + -0x14) = *(undefined4 *)((long)pvVar8 + -0x14);
      *(undefined8 *)((long)puVar10 + -0x1c) = uVar14;
      *(undefined8 *)((long)puVar10 + -0x24) = uVar13;
      cocos2d::Vec4::Vec4((Vec4 *)(puVar10 + -2),(Vec4 *)((long)pvVar8 + -0x10));
      pvVar8 = (void *)((long)pvVar8 + -0x24);
      puVar10 = (undefined8 *)((long)puVar10 + -0x24);
    } while (pvVar9 != pvVar8);
    pvVar9 = *(void **)this;
    pvVar7 = *(void **)(this + 8);
  }
  *(undefined8 **)this = puVar10;
  *(void **)(this + 8) = pvVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar12 * 0x24);
  for (; pvVar7 != pvVar9; pvVar7 = (void *)((long)pvVar7 + -0x24)) {
    cocos2d::Vec4::~Vec4((Vec4 *)((long)pvVar7 + -0x10));
  }
  if (pvVar9 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar9);
  return;
}

