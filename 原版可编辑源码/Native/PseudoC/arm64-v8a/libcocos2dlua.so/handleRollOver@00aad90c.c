
/* fairygui::InputProcessor::handleRollOver(fairygui::TouchInfo*, fairygui::GObject*) */

void __thiscall
fairygui::InputProcessor::handleRollOver(InputProcessor *this,TouchInfo *param_1,GObject *param_2)

{
  WeakPtr *pWVar1;
  WeakPtr *pWVar2;
  long lVar3;
  WeakPtr *pWVar4;
  WeakPtr *this_00;
  ulong uVar5;
  GObject *pGVar6;
  GObject *this_01;
  ulong uVar7;
  WeakPtr *pWVar8;
  WeakPtr aWStack_80 [8];
  WeakPtr *local_78;
  WeakPtr *local_70;
  WeakPtr *local_68;
  WeakPtr *local_60;
  WeakPtr *local_58;
  WeakPtr *pWStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pWVar1 = (WeakPtr *)(param_1 + 0x38);
  uVar5 = WeakPtr::operator==(pWVar1,param_2);
  if ((uVar5 & 1) == 0) {
    local_58 = (WeakPtr *)0x0;
    pWStack_50 = (WeakPtr *)0x0;
    local_68 = (WeakPtr *)0x0;
    local_60 = (WeakPtr *)0x0;
    local_78 = (WeakPtr *)0x0;
    local_70 = (WeakPtr *)0x0;
    for (pGVar6 = (GObject *)WeakPtr::ptr(pWVar1); this_01 = param_2, pWVar2 = local_58,
        pGVar6 != (GObject *)0x0; pGVar6 = (GObject *)GObject::findParent(pGVar6)) {
      WeakPtr::WeakPtr(aWStack_80,pGVar6);
      pWVar2 = local_58;
      if (local_58 < pWStack_50) {
        WeakPtr::WeakPtr(local_58,aWStack_80);
        local_58 = pWVar2 + 8;
      }
      else {
        std::__ndk1::vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>>::
        __push_back_slow_path<fairygui::WeakPtr>
                  ((vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>> *)&local_60,
                   aWStack_80);
      }
      WeakPtr::~WeakPtr(aWStack_80);
    }
    for (; pWVar8 = local_60, local_58 = pWVar2, pWVar4 = local_60, this_01 != (GObject *)0x0;
        this_01 = (GObject *)GObject::findParent(this_01)) {
      while ((pWVar4 != pWVar2 &&
             (pGVar6 = (GObject *)WeakPtr::ptr(pWVar4), pWVar8 = pWVar4, pGVar6 != this_01))) {
        pWVar8 = pWVar2;
        pWVar4 = pWVar4 + 8;
      }
      if (pWVar8 != local_58) {
        uVar5 = (long)pWVar8 - (long)local_60 >> 3;
        uVar7 = (long)local_58 - (long)local_60 >> 3;
        if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
          pWVar2 = local_58;
          if (uVar5 < uVar7) {
            pWVar2 = local_60 + uVar5 * 8;
            pWVar8 = local_58;
                    /* try { // try from 00aada84 to 00badab7 has its CatchHandler @ 00aadb84 */
            while (pWVar2 != pWVar8) {
              pWVar8 = pWVar8 + -8;
              WeakPtr::~WeakPtr(pWVar8);
            }
          }
        }
        else {
          std::__ndk1::vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>>::__append
                    ((vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>> *)
                     &local_60,uVar5 - uVar7);
          pWVar2 = local_58;
        }
        break;
      }
      WeakPtr::WeakPtr(aWStack_80,this_01);
      pWVar2 = local_70;
      if (local_70 < local_68) {
        WeakPtr::WeakPtr(local_70,aWStack_80);
        local_70 = pWVar2 + 8;
      }
      else {
        std::__ndk1::vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>>::
        __push_back_slow_path<fairygui::WeakPtr>
                  ((vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>> *)&local_78,
                   aWStack_80);
      }
      WeakPtr::~WeakPtr(aWStack_80);
      pWVar2 = local_58;
    }
    local_58 = pWVar2;
    WeakPtr::operator=(pWVar1,param_2);
    pWVar8 = local_58;
    pWVar2 = local_70;
                    /* try { // try from 00aadab8 to 00badacb has its CatchHandler @ 00aadb50 */
    for (pWVar1 = local_60; pWVar4 = local_78, local_70 = pWVar2, this_00 = local_78,
        pWVar1 != pWVar8; pWVar1 = pWVar1 + 8) {
      pGVar6 = (GObject *)WeakPtr::ptr(pWVar1);
      if ((pGVar6 != (GObject *)0x0) && (uVar5 = GObject::onStage(pGVar6), (uVar5 & 1) != 0)) {
        UIEventDispatcher::dispatchEvent
                  ((UIEventDispatcher *)pGVar6,0xf,(void *)0x0,(Value *)&cocos2d::Value::Null);
                    /* try { // try from 00aadb04 to 00badb9f has its CatchHandler @ 00aad8c4 */
      }
                    /* try { // try from 00aadad0 to 00badb03 has its CatchHandler @ 00aadb54 */
      pWVar2 = local_70;
    }
    for (; local_78 = pWVar4, this_00 != pWVar2; this_00 = this_00 + 8) {
      pGVar6 = (GObject *)WeakPtr::ptr(this_00);
      if ((pGVar6 != (GObject *)0x0) && (uVar5 = GObject::onStage(pGVar6), (uVar5 & 1) != 0)) {
                    /* catch() { ... } // from try @ 00aadab8 with catch @ 00aadb50 */
                    /* catch() { ... } // from try @ 00aadad0 with catch @ 00aadb54 */
        UIEventDispatcher::dispatchEvent
                  ((UIEventDispatcher *)pGVar6,0xe,(void *)0x0,(Value *)&cocos2d::Value::Null);
      }
      pWVar4 = local_78;
    }
    pWVar1 = local_70;
    if (pWVar4 != (WeakPtr *)0x0) {
      while (pWVar1 != pWVar4) {
        WeakPtr::~WeakPtr(pWVar1 + -8);
                    /* catch() { ... } // from try @ 00aada84 with catch @ 00aadb84 */
        pWVar1 = pWVar1 + -8;
      }
      local_70 = pWVar4;
      operator_delete(local_78);
    }
    pWVar2 = local_60;
                    /* try { // try from 00aadba0 to 00badbef has its CatchHandler @ 00aadba0
                       catch() { ... } // from try @ 00aadba0 with catch @ 00aadba0
                       catch() { ... } // from try @ 00aadc3c with catch @ 00aadba0
                       catch() { ... } // from try @ 00aadc80 with catch @ 00aadba0 */
    pWVar1 = local_58;
    if (local_60 != (WeakPtr *)0x0) {
      while (pWVar1 != pWVar2) {
        WeakPtr::~WeakPtr(pWVar1 + -8);
        pWVar1 = pWVar1 + -8;
      }
      local_58 = pWVar2;
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00aadbf0 to 00badc3b has its CatchHandler @ 00aadcc0 */
  return;
}

