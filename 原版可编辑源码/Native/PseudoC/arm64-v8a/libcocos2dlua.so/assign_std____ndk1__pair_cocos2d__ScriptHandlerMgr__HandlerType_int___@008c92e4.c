
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,
   int>*>::value&&is_constructible<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType, int>,
   std::__ndk1::iterator_traits<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,
   int>*>::reference>::value, void>::type
   std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType, int>,
   std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType, int> >
   >::assign<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,
   int>*>(std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType, int>*,
   std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType, int>*) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
::assign<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>*>
          (vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>
           *this,pair *param_1,pair *param_2)

{
  ulong uVar1;
  undefined8 *__src;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar5 = *(long *)(this + 0x10);
  puVar2 = *(undefined8 **)this;
  sVar10 = (long)param_2 - (long)param_1;
  uVar11 = (long)sVar10 >> 3;
  if (uVar11 <= (ulong)(lVar5 - (long)puVar2 >> 3)) {
    pvVar3 = *(void **)(this + 8);
    uVar6 = (long)pvVar3 - (long)puVar2 >> 3;
    __src = (undefined8 *)(param_1 + ((long)pvVar3 - (long)puVar2));
    if (uVar11 <= uVar6) {
      __src = (undefined8 *)param_2;
    }
    if ((long)__src - (long)param_1 != 0) {
      uVar7 = ((long)__src - (long)param_1) - 8;
      uVar1 = (uVar7 >> 3) + 1;
      puVar4 = puVar2;
      if (7 < uVar1) {
        uVar7 = uVar7 & 0xfffffffffffffff8;
        if ((param_1 + uVar7 + 4 <= puVar2 || (pair *)((long)puVar2 + uVar7 + 4) <= param_1) &&
           (param_1 + uVar7 + 8 <= (pair *)((long)puVar2 + 4U) ||
            (pair *)((long)puVar2 + uVar7 + 8) <= param_1 + 4)) {
          uVar8 = uVar1 & 0x3ffffffffffffff8;
          puVar4 = puVar2 + 4;
          puVar2 = puVar2 + uVar8;
          puVar9 = (undefined8 *)(param_1 + 0x20);
          uVar7 = uVar8;
          do {
            uVar12 = puVar9[-4];
            uVar14 = puVar9[-1];
            uVar13 = puVar9[-2];
            uVar16 = puVar9[1];
            uVar15 = *puVar9;
            uVar18 = puVar9[3];
            uVar17 = puVar9[2];
            uVar7 = uVar7 - 8;
            puVar4[-3] = puVar9[-3];
            puVar4[-4] = uVar12;
            puVar4[-1] = uVar14;
            puVar4[-2] = uVar13;
            puVar4[1] = uVar16;
            *puVar4 = uVar15;
            puVar4[3] = uVar18;
            puVar4[2] = uVar17;
            puVar4 = puVar4 + 8;
            puVar9 = puVar9 + 8;
          } while (uVar7 != 0);
          puVar4 = puVar2;
          param_1 = param_1 + uVar8 * 8;
          if (uVar1 == uVar8) goto LAB_008c949c;
        }
      }
      do {
        puVar9 = (undefined8 *)((long)param_1 + 8);
        puVar2 = puVar4 + 1;
        *puVar4 = *(undefined8 *)param_1;
        puVar4 = puVar2;
        param_1 = (pair *)puVar9;
      } while (__src != puVar9);
    }
LAB_008c949c:
    if (uVar6 < uVar11) {
      sVar10 = (long)param_2 - (long)__src;
      if (0 < (long)sVar10) {
        memcpy(pvVar3,__src,sVar10);
        pvVar3 = (void *)((long)pvVar3 + sVar10);
      }
      *(void **)(this + 8) = pvVar3;
    }
    else {
      *(undefined8 **)(this + 8) = puVar2;
    }
    return;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar2;
    operator_delete(puVar2);
    lVar5 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar11 >> 0x3d == 0) {
    if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
      uVar6 = lVar5 >> 2;
      if ((uVar11 <= uVar6) && (uVar11 = uVar6, uVar6 >> 0x3d != 0)) goto LAB_008c9360;
    }
    else {
      uVar11 = 0x1fffffffffffffff;
    }
    pvVar3 = operator_new(uVar11 * 8);
    *(void **)this = pvVar3;
    *(void **)(this + 8) = pvVar3;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar11 * 8);
    if (0 < (long)sVar10) {
      memcpy(pvVar3,param_1,sVar10);
      pvVar3 = (void *)((long)pvVar3 + sVar10);
    }
    *(void **)(this + 8) = pvVar3;
    return;
  }
LAB_008c9360:
                    /* WARNING: Subroutine does not return */
  __vector_base_common<true>::__throw_length_error();
}

