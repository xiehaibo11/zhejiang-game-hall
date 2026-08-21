
/* fairygui::GComponent::addChildAt(fairygui::GObject*, int) */

GObject * __thiscall fairygui::GComponent::addChildAt(GComponent *this,GObject *param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  GObject *pGVar13;
  int iVar14;
  ulong uVar15;
  GObject *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar15 = (ulong)(uint)param_2;
  if (*(GComponent **)(param_1 + 0xa0) == this) {
    plVar1 = *(long **)(this + 0x1e0);
    plVar3 = *(long **)(this + 0x1e8);
    plVar9 = plVar3;
    plVar11 = plVar1;
    if (plVar1 != plVar3) {
      pGVar13 = (GObject *)*plVar1;
      plVar8 = plVar1;
      while ((plVar9 = plVar8, plVar11 = plVar8, pGVar13 != param_1 &&
             (plVar8 = plVar8 + 1, plVar9 = plVar3, plVar11 = plVar3, plVar3 != plVar8))) {
        pGVar13 = (GObject *)*plVar8;
      }
    }
    iVar10 = (int)((ulong)((long)plVar11 - (long)plVar1) >> 3);
    if (plVar9 == plVar3) {
      iVar10 = -1;
    }
    if (*(int *)(param_1 + 0xfc) == 0) {
      iVar14 = param_2;
      if ((0 < (int)*(uint *)(this + 0x274)) &&
         (iVar14 = ~*(uint *)(this + 0x274) + (int)((ulong)((long)plVar3 - (long)plVar1) >> 3),
         param_2 <= iVar14)) {
        iVar14 = param_2;
      }
      moveChild(this,param_1,iVar10,iVar14);
    }
  }
  else {
    cocos2d::Ref::retain((Ref *)param_1);
    GObject::removeFromParent(param_1);
    *(GComponent **)(param_1 + 0xa0) = this;
    lVar6 = *(long *)(this + 0x1e0);
    puVar2 = *(undefined8 **)(this + 0x1e8);
    iVar10 = *(int *)(param_1 + 0xfc);
    iVar14 = *(int *)(this + 0x274);
                    /* catch() { ... } // from try @ 00a700d0 with catch @ 00a703b4
                       catch() { ... } // from try @ 00a70300 with catch @ 00a703b4 */
                    /* catch() { ... } // from try @ 00a701c0 with catch @ 00a703b8
                       catch() { ... } // from try @ 00a70318 with catch @ 00a703b8 */
    uVar12 = (long)puVar2 - lVar6;
    iVar7 = (int)(uVar12 >> 3);
    if (iVar10 == 0) {
      if (0 < iVar14) {
        uVar4 = iVar7 - iVar14;
        if (param_2 <= (int)uVar4) {
          uVar4 = param_2;
        }
        uVar15 = (ulong)uVar4;
      }
    }
    else {
      uVar15 = 0;
      *(int *)(this + 0x274) = iVar14 + 1;
      if (uVar12 != 0) {
        do {
          pGVar13 = *(GObject **)(lVar6 + uVar15 * 8);
          if ((pGVar13 != param_1) && (iVar10 < *(int *)(pGVar13 + 0xfc))) break;
          uVar15 = uVar15 + 1;
        } while (uVar15 < (ulong)((long)uVar12 >> 3));
      }
    }
    local_50 = param_1;
    if ((int)uVar15 == iVar7) {
      if (*(undefined8 **)(this + 0x1f0) == puVar2) {
        std::__ndk1::vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>>::
        __push_back_slow_path<fairygui::GObject*const&>
                  ((vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>> *)
                   (this + 0x1e0),&local_50);
      }
      else {
        *puVar2 = param_1;
        *(undefined8 **)(this + 0x1e8) = puVar2 + 1;
      }
    }
    else {
      std::__ndk1::vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>>::insert
                ((vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>> *)
                 (this + 0x1e0),lVar6 + (long)(int)uVar15 * 8,&local_50);
    }
    cocos2d::Ref::retain((Ref *)local_50);
    cocos2d::Ref::release((Ref *)param_1);
    childStateChanged(this,param_1);
    if ((*(long *)(this + 0x230) != 0) || (this[0x259] != (GComponent)0x0)) {
      this[600] = (GComponent)0x1;
      lVar6 = cocos2d::Director::getInstance();
      uVar15 = cocos2d::Scheduler::isScheduled
                         (*(_func_void_float **)(lVar6 + 0xa0),(Ref *)__selector_doUpdateBounds);
      if ((uVar15 & 1) == 0) {
        lVar6 = cocos2d::Director::getInstance();
        cocos2d::Scheduler::schedule
                  (*(Scheduler **)(lVar6 + 0xa0),__selector_doUpdateBounds,(Ref *)0x0,0.0,
                   SUB81(this,0));
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

