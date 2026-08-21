
/* void std::__ndk1::vector<cocos2d::NMaterialData, std::__ndk1::allocator<cocos2d::NMaterialData>
   >::__push_back_slow_path<cocos2d::NMaterialData const&>(cocos2d::NMaterialData const&) */

void __thiscall
std::__ndk1::vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>>::
__push_back_slow_path<cocos2d::NMaterialData_const&>
          (vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>> *this,
          NMaterialData *param_1)

{
  ulong uVar1;
  NMaterialData *pNVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  NMaterialData *pNVar9;
  void *pvVar10;
  void *pvVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  lVar5 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar12 = 0x555555555555555;
  uVar1 = lVar5 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this >> 4;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar7 = lVar6 * 0x5555555555555556;
    uVar12 = uVar1;
    if (uVar1 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar12 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_00d2a9c0;
    }
  }
  pvVar4 = operator_new(uVar12 * 0x30);
LAB_00d2a9c0:
  pNVar9 = (NMaterialData *)((long)pvVar4 + lVar5 * 0x10);
  allocator<cocos2d::NMaterialData>::construct<cocos2d::NMaterialData,cocos2d::NMaterialData_const&>
            ((allocator<cocos2d::NMaterialData> *)(this + 0x10),pNVar9,param_1);
  pvVar10 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  pNVar2 = pNVar9 + 0x30;
  pvVar11 = pvVar10;
  if (pvVar3 != pvVar10) {
    lVar5 = 0;
    do {
      *(undefined8 *)(pNVar9 + lVar5 + -0x30) = 0;
      *(undefined8 *)(pNVar9 + lVar5 + -0x28) = 0;
      *(undefined8 *)(pNVar9 + lVar5 + -0x20) = 0;
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x30);
      lVar6 = lVar5 + -0x30;
      *(undefined8 *)(pNVar9 + lVar5 + -0x28) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x28);
      *(undefined8 *)(pNVar9 + lVar5 + -0x30) = uVar8;
      *(undefined8 *)(pNVar9 + lVar5 + -0x20) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x20);
      uVar13 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x18);
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar5 + -8);
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x30) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x28) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x20) = 0;
      *(undefined8 *)(pNVar9 + lVar5 + -0x10) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x10);
      *(undefined8 *)(pNVar9 + lVar5 + -0x18) = uVar13;
      *(undefined8 *)(pNVar9 + lVar5 + -8) = uVar8;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x10) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -8) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x18) = 0;
      lVar5 = lVar6;
    } while ((long)pvVar10 - (long)pvVar3 != lVar6);
    pvVar10 = *(void **)(this + 8);
    pNVar9 = pNVar9 + lVar6;
    pvVar11 = *(void **)this;
  }
  *(NMaterialData **)this = pNVar9;
  *(NMaterialData **)(this + 8) = pNVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar12 * 0x30);
  while (pvVar10 != pvVar11) {
    pvVar10 = (void *)((long)pvVar10 + -0x30);
    FUN_0090b07c((allocator<cocos2d::NMaterialData> *)(this + 0x10),pvVar10);
  }
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
    return;
  }
  return;
}

