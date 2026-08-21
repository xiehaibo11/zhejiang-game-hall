
/* fairygui::GList::setVirtual(bool) */

void __thiscall fairygui::GList::setVirtual(GList *this,bool param_1)

{
  basic_string *pbVar1;
  long lVar2;
  GObject *pGVar3;
  long lVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  GList *local_58;
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (this[0x338] != (GList)0x0) goto LAB_00a79fcc;
  if (param_1) {
    *(undefined1 *)(*(long *)(this + 0x230) + 0x40) = 0;
  }
  this[0x338] = (GList)0x1;
  this[0x339] = (GList)param_1;
  uVar8 = (ulong)(*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0)) >> 3;
  uVar7 = (uint)uVar8;
  while (0 < (int)uVar7) {
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulong)uVar7;
    pGVar3 = (GObject *)GComponent::getChildAt((GComponent *)this,uVar7);
    GObjectPool::returnObject(*(GObjectPool **)(this + 0x328),pGVar3);
    (**(code **)(*(long *)this + 0xb8))(this,uVar8);
  }
  if ((*(float *)(this + 0x350) == 0.0) || (*(float *)(this + 0x354) == 0.0)) {
    uVar8 = (ulong)(cocos2d::STD_STRING_EMPTY >> 1);
    if ((cocos2d::STD_STRING_EMPTY & 1) != 0) {
      uVar8 = DAT_01792420;
    }
    pbVar1 = (basic_string *)(this + 0x308);
    if (uVar8 != 0) {
      pbVar1 = (basic_string *)&cocos2d::STD_STRING_EMPTY;
    }
    pGVar3 = (GObject *)GObjectPool::getObject(*(GObjectPool **)(this + 0x328),pbVar1);
    if (pGVar3 != (GObject *)0x0) {
      GObject::setVisible(pGVar3,true);
    }
    *(ulong *)(this + 0x350) =
         CONCAT44((int)(float)((ulong)*(undefined8 *)(pGVar3 + 200) >> 0x20),
                  (int)(float)*(undefined8 *)(pGVar3 + 200));
    GObjectPool::returnObject(*(GObjectPool **)(this + 0x328),pGVar3);
  }
  if ((*(uint *)(this + 0x2e4) | 2) == 2) {
    ScrollPane::setScrollStep(*(ScrollPane **)(this + 0x230),*(float *)(this + 0x354));
    if (this[0x339] != (GList)0x0) {
      lVar4 = *(long *)(this + 0x230);
      uVar6 = 2;
LAB_00a79f10:
      *(undefined4 *)(lVar4 + 0xc0) = uVar6;
    }
  }
  else {
    ScrollPane::setScrollStep(*(ScrollPane **)(this + 0x230),*(float *)(this + 0x350));
    if (this[0x339] != (GList)0x0) {
      lVar4 = *(long *)(this + 0x230);
      uVar6 = 1;
      goto LAB_00a79f10;
    }
  }
  local_70 = &PTR_FUN_016a5d10;
  uStack_60 = 0;
  local_68 = onScroll;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            ((UIEventDispatcher *)this,0x28,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00a79f7c:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_00a79f7c;
  }
  *(undefined4 *)(this + 0x358) = 2;
  lVar4 = cocos2d::Director::getInstance();
  uVar8 = cocos2d::Scheduler::isScheduled
                    (*(_func_void_float **)(lVar4 + 0xa0),(Ref *)__selector_doRefreshVirtualList);
  if ((uVar8 & 1) == 0) {
    lVar4 = cocos2d::Director::getInstance();
    cocos2d::Scheduler::schedule
              (*(Scheduler **)(lVar4 + 0xa0),__selector_doRefreshVirtualList,(Ref *)0x0,0.0,
               SUB81(this,0));
  }
LAB_00a79fcc:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

