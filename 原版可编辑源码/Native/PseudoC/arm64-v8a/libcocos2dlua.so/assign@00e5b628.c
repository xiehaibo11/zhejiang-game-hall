
/* std::__ndk1::vector<cocos2d::PUBillboardChain::VertexInfo,
   std::__ndk1::allocator<cocos2d::PUBillboardChain::VertexInfo> >::assign(unsigned long,
   cocos2d::PUBillboardChain::VertexInfo const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::PUBillboardChain::VertexInfo,std::__ndk1::allocator<cocos2d::PUBillboardChain::VertexInfo>>
::assign(vector<cocos2d::PUBillboardChain::VertexInfo,std::__ndk1::allocator<cocos2d::PUBillboardChain::VertexInfo>>
         *this,ulong param_1,VertexInfo *param_2)

{
  Vec4 *this_00;
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = *(long *)(this + 0x10);
  puVar7 = *(undefined8 **)this;
  if ((ulong)((lVar2 - (long)puVar7 >> 2) * -0x71c71c71c71c71c7) < param_1) {
    if (puVar7 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(this + 8);
      puVar1 = puVar7;
      if (puVar3 != puVar7) {
        do {
          this_00 = (Vec4 *)(puVar3 + -2);
          puVar3 = (undefined8 *)((long)puVar3 + -0x24);
          cocos2d::Vec4::~Vec4(this_00);
        } while (puVar7 != puVar3);
        puVar1 = *(undefined8 **)this;
      }
      *(undefined8 **)(this + 8) = puVar7;
      operator_delete(puVar1);
      lVar2 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0x71c71c71c71c71c < param_1) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    uVar5 = 0x71c71c71c71c71c;
    if (((ulong)((lVar2 >> 2) * -0x71c71c71c71c71c7) < 0x38e38e38e38e38e) &&
       (uVar4 = (lVar2 >> 2) * 0x1c71c71c71c71c72, uVar5 = param_1, param_1 <= uVar4)) {
      uVar5 = uVar4;
    }
    puVar1 = operator_new(uVar5 * 0x24);
    *(undefined8 **)this = puVar1;
    *(undefined8 **)(this + 8) = puVar1;
    *(void **)(this + 0x10) = (void *)((long)puVar1 + uVar5 * 0x24);
    puVar7 = puVar1;
    if (param_1 != 0) {
      puVar7 = (undefined8 *)((long)puVar1 + param_1 * 0x24);
      lVar2 = param_1 * 0x24;
      do {
        uVar9 = *(undefined8 *)(param_2 + 8);
        uVar8 = *(undefined8 *)param_2;
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
        puVar1[1] = uVar9;
        *puVar1 = uVar8;
        cocos2d::Vec4::Vec4((Vec4 *)((long)puVar1 + 0x14),(Vec4 *)(param_2 + 0x14));
        lVar2 = lVar2 + -0x24;
        puVar1 = (undefined8 *)((long)puVar1 + 0x24);
      } while (lVar2 != 0);
    }
    *(undefined8 **)(this + 8) = puVar7;
  }
  else {
    lVar2 = *(long *)(this + 8) - (long)puVar7 >> 2;
    uVar4 = lVar2 * -0x71c71c71c71c71c7;
    uVar5 = uVar4;
    if (param_1 <= uVar4) {
      uVar5 = param_1;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar9 = *(undefined8 *)(param_2 + 8);
      uVar8 = *(undefined8 *)param_2;
      uVar11 = *(undefined8 *)(param_2 + 0x18);
      uVar10 = *(undefined8 *)(param_2 + 0x10);
      *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_2 + 0x20);
      puVar7[1] = uVar9;
      *puVar7 = uVar8;
      puVar7[3] = uVar11;
      puVar7[2] = uVar10;
      puVar7 = (undefined8 *)((long)puVar7 + 0x24);
    }
    if (uVar4 < param_1) {
      puVar1 = *(undefined8 **)(this + 8);
      lVar6 = param_1 + lVar2 * 0x71c71c71c71c71c7;
      puVar7 = puVar1;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar6 * 0x24);
        lVar2 = lVar2 * -4 + param_1 * 0x24;
        do {
          uVar9 = *(undefined8 *)(param_2 + 8);
          uVar8 = *(undefined8 *)param_2;
          *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
          puVar1[1] = uVar9;
          *puVar1 = uVar8;
          cocos2d::Vec4::Vec4((Vec4 *)((long)puVar1 + 0x14),(Vec4 *)(param_2 + 0x14));
          lVar2 = lVar2 + -0x24;
          puVar1 = (undefined8 *)((long)puVar1 + 0x24);
        } while (lVar2 != 0);
      }
      *(undefined8 **)(this + 8) = puVar7;
    }
    else {
      lVar6 = *(long *)this + param_1 * 0x24;
      for (lVar2 = *(long *)(this + 8); lVar2 != lVar6; lVar2 = lVar2 + -0x24) {
        cocos2d::Vec4::~Vec4((Vec4 *)(lVar2 + -0x10));
      }
      *(long *)(this + 8) = lVar6;
    }
  }
  return;
}

