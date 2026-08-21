
/* cocos2d::EventDispatcher::dispatchTouchEventToListeners(cocos2d::EventDispatcher::EventListenerVector*,
   std::__ndk1::function<bool (cocos2d::EventListener*)> const&) */

void __thiscall
cocos2d::EventDispatcher::dispatchTouchEventToListeners
          (EventDispatcher *this,EventListenerVector *param_1,function *param_2)

{
  long *plVar1;
  EventListener **ppEVar2;
  undefined8 *puVar3;
  EventListener **ppEVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  vector *pvVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  EventListener *pEVar15;
  long *plVar16;
  Scene *this_00;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *local_a0;
  undefined8 *local_98;
  long *local_88;
  long *local_80;
  long *plStack_78;
  long local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar1 = *(long **)param_1;
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    lVar10 = *plVar1;
    if ((lVar10 != plVar1[1]) && (lVar14 = *(long *)(param_1 + 0x10), 0 < lVar14)) {
      if (plVar1[1] != lVar10) {
        uVar17 = 0;
        do {
          plVar16 = *(long **)(lVar10 + uVar17 * 8);
                    /* try { // try from 00f9f9f0 to 0109fa97 has its CatchHandler @ 00f9f728 */
          if (((*(char *)((long)plVar16 + 0x91) != '\0') && ((char)plVar16[0x12] == '\0')) &&
             ((char)plVar16[0x10] != '\0')) {
            plVar8 = *(long **)(param_2 + 0x20);
            local_88 = plVar16;
            if (plVar8 == (long *)0x0) goto LAB_00f9fc74;
            uVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,&local_88);
            if ((uVar9 & 1) != 0) {
              bVar7 = true;
              Director::getInstance();
              goto LAB_00f9fba8;
            }
            lVar14 = *(long *)(param_1 + 0x10);
          }
          uVar17 = uVar17 + 1;
          if (lVar14 <= (long)uVar17) goto LAB_00f9fa40;
          lVar10 = *plVar1;
        } while (uVar17 < (ulong)(plVar1[1] - lVar10 >> 3));
      }
      goto LAB_00f9fc28;
    }
  }
  uVar17 = 0;
LAB_00f9fa40:
  lVar10 = Director::getInstance();
  bVar7 = false;
  if ((puVar3 != (undefined8 *)0x0) &&
     (this_00 = *(Scene **)(lVar10 + 0x158), this_00 != (Scene *)0x0)) {
    local_80 = (long *)0x0;
    plStack_78 = (long *)0x0;
    local_88 = (long *)0x0;
    ppEVar4 = (EventListener **)puVar3[1];
    for (ppEVar2 = (EventListener **)*puVar3; ppEVar2 != ppEVar4; ppEVar2 = ppEVar2 + 1) {
                    /* catch() { ... } // from try @ 00f9f894 with catch @ 00f9fa84 */
      pEVar15 = *ppEVar2;
      if (((pEVar15[0x91] != (EventListener)0x0) && (pEVar15[0x90] == (EventListener)0x0)) &&
         (pEVar15[0x80] != (EventListener)0x0)) {
        if (local_80 == plStack_78) {
          std::__ndk1::
          vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>::
          __push_back_slow_path<cocos2d::EventListener*const&>
                    ((vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>
                      *)&local_88,ppEVar2);
        }
        else {
          *local_80 = (long)pEVar15;
          local_80 = local_80 + 1;
        }
      }
                    /* catch() { ... } // from try @ 00f9f858 with catch @ 00f9fa80 */
    }
    pvVar11 = (vector *)Scene::getCameras(this_00);
    std::__ndk1::vector<cocos2d::Camera*,std::__ndk1::allocator<cocos2d::Camera*>>::vector
              ((vector<cocos2d::Camera*,std::__ndk1::allocator<cocos2d::Camera*>> *)&local_a0,
               pvVar11);
    puVar3 = local_a0;
    if (local_98 == local_a0) {
      bVar7 = false;
    }
    else {
      do {
        puVar18 = local_98 + -1;
        plVar8 = (long *)*puVar18;
        uVar9 = (**(code **)(*plVar8 + 0x178))(plVar8);
        plVar16 = local_80;
        if (((uVar9 & 1) != 0) && (Camera::_visitingCamera = plVar8, local_88 != local_80)) {
          uVar5 = *(uint *)((long)plVar8 + 0x42c);
          plVar8 = local_88;
          do {
            lVar10 = *plVar8;
            if ((*(long *)(lVar10 + 0x88) != 0) &&
               ((uVar5 & *(ushort *)(*(long *)(lVar10 + 0x88) + 0x222)) != 0)) {
              plVar12 = *(long **)(param_2 + 0x20);
              local_70 = lVar10;
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar9 = (**(code **)(*plVar12 + 0x30))(plVar12,&local_70);
              if ((uVar9 & 1) != 0) {
                bVar7 = true;
                goto LAB_00f9fb7c;
              }
            }
            plVar8 = plVar8 + 1;
          } while (plVar16 != plVar8);
        }
        local_98 = puVar18;
      } while (puVar18 != puVar3);
      bVar7 = false;
    }
LAB_00f9fb7c:
    Camera::_visitingCamera = (long *)0x0;
    if (local_a0 != (undefined8 *)0x0) {
      operator_delete(local_a0);
    }
    if (local_88 != (long *)0x0) {
      local_80 = local_88;
      operator_delete(local_88);
    }
  }
LAB_00f9fba8:
  if ((!bVar7) && (plVar1 != (long *)0x0)) {
    lVar10 = *plVar1;
    uVar9 = plVar1[1] - lVar10 >> 3;
    if ((long)uVar17 < (long)uVar9) {
      if (uVar17 < uVar9) {
        do {
          plVar16 = *(long **)(lVar10 + uVar17 * 8);
          if (((*(char *)((long)plVar16 + 0x91) != '\0') && ((char)plVar16[0x12] == '\0')) &&
             ((char)plVar16[0x10] != '\0')) {
            plVar8 = *(long **)(param_2 + 0x20);
            local_88 = plVar16;
            if (plVar8 == (long *)0x0) {
LAB_00f9fc74:
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
                    /* try { // try from 00f9fc00 to 0109fe27 has its CatchHandler @ 00f9fc00
                       catch() { ... } // from try @ 00f9fc00 with catch @ 00f9fc00
                       catch() { ... } // from try @ 00f9fe58 with catch @ 00f9fc00 */
            uVar13 = (**(code **)(*plVar8 + 0x30))(plVar8,&local_88);
            if ((uVar13 & 1) != 0) goto LAB_00f9fc30;
          }
          if (uVar9 - 1 == uVar17) goto LAB_00f9fc30;
          lVar10 = *plVar1;
          uVar17 = uVar17 + 1;
        } while (uVar17 < (ulong)(plVar1[1] - lVar10 >> 3));
      }
LAB_00f9fc28:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
    }
  }
LAB_00f9fc30:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

