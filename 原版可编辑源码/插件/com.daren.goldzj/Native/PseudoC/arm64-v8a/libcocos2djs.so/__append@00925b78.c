
/* std::__ndk1::vector<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,
   std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo> >,
   std::__ndk1::allocator<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,
   std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo> > > >::__append(unsigned long)
    */

void __thiscall
std::__ndk1::
vector<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>>>
::__append(vector<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>>>
           *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *__s;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)puVar8 >> 3) * -0x5555555555555555)) {
    do {
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      param_1 = param_1 - 1;
      puVar8 = (undefined8 *)(*(long *)(this + 8) + 0x18);
      *(undefined8 **)(this + 8) = puVar8;
    } while (param_1 != 0);
    return;
  }
  puVar7 = *(undefined8 **)this;
  uVar9 = 0xaaaaaaaaaaaaaaa;
  lVar6 = (long)puVar8 - (long)puVar7 >> 3;
  uVar1 = lVar6 * -0x5555555555555555 + param_1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar4 = *(long *)(this + 0x10) - (long)puVar7 >> 3;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x555555555555555) {
    uVar5 = lVar4 * 0x5555555555555556;
    uVar9 = uVar1;
    if (uVar1 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00925c28;
    }
  }
  pvVar3 = operator_new(uVar9 * 0x18);
LAB_00925c28:
  __s = (void *)((long)pvVar3 + lVar6 * 8);
  memset(__s,0,param_1 * 0x18);
  if (puVar8 != puVar7) {
    lVar6 = 0;
    do {
      *(undefined8 *)((long)__s + lVar6 + -0x10) = 0;
      *(undefined8 *)((long)__s + lVar6 + -8) = 0;
      *(undefined8 *)((long)__s + lVar6 + -0x18) = 0;
      uVar10 = *(undefined8 *)((long)puVar8 + lVar6 + -0x18);
      lVar4 = lVar6 + -0x18;
      *(undefined8 *)((long)__s + lVar6 + -0x10) = *(undefined8 *)((long)puVar8 + lVar6 + -0x10);
      *(undefined8 *)((long)__s + lVar6 + -0x18) = uVar10;
      *(undefined8 *)((long)__s + lVar6 + -8) = *(undefined8 *)((long)puVar8 + lVar6 + -8);
      *(undefined8 *)((long)puVar8 + lVar6 + -0x18) = 0;
      *(undefined8 *)((long)puVar8 + lVar6 + -0x10) = 0;
      *(undefined8 *)((long)puVar8 + lVar6 + -8) = 0;
      lVar6 = lVar4;
    } while ((long)puVar7 - (long)puVar8 != lVar4);
    puVar7 = *(undefined8 **)this;
    puVar8 = *(undefined8 **)(this + 8);
    __s = (void *)((long)__s + lVar4);
  }
  *(void **)this = __s;
  *(void **)(this + 8) = (void *)((long)pvVar3 + uVar1 * 0x18);
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar9 * 0x18);
  while (puVar2 = puVar8, puVar2 != puVar7) {
    puVar8 = puVar2 + -3;
    pvVar3 = (void *)*puVar8;
    if (pvVar3 != (void *)0x0) {
      puVar2[-2] = pvVar3;
      operator_delete(pvVar3);
    }
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  operator_delete(puVar7);
  return;
}

