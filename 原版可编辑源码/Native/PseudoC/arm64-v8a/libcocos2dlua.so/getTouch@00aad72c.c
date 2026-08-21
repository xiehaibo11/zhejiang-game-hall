
/* fairygui::InputProcessor::getTouch(int, bool) */

void __thiscall fairygui::InputProcessor::getTouch(InputProcessor *this,int param_1,bool param_2)

{
  long lVar1;
  TouchInfo *pTVar2;
  undefined8 *puVar3;
  TouchInfo *pTVar4;
  TouchInfo *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (TouchInfo *)0x0;
  puVar3 = *(undefined8 **)(this + 0x18);
  if (puVar3 == *(undefined8 **)(this + 0x20)) {
LAB_00aad7ac:
    if (!param_2) {
      pTVar2 = (TouchInfo *)0x0;
      goto LAB_00aad824;
    }
    pTVar4 = operator_new(0x70);
    *(undefined8 *)pTVar4 = 0;
    *(undefined8 *)(pTVar4 + 8) = 0;
    *(undefined8 *)(pTVar4 + 0x30) = 0;
    *(undefined8 *)(pTVar4 + 0x20) = 0;
    *(undefined8 *)(pTVar4 + 0x18) = 0xffffffff00000000;
    *(undefined8 *)(pTVar4 + 0x10) = 0xffffffff;
    *(undefined2 *)(pTVar4 + 0x28) = 0;
    WeakPtr::WeakPtr((WeakPtr *)(pTVar4 + 0x38));
    *(undefined8 *)(pTVar4 + 0x58) = 0;
    *(undefined8 *)(pTVar4 + 0x50) = 0;
    *(undefined8 *)(pTVar4 + 0x68) = 0;
    *(undefined8 *)(pTVar4 + 0x60) = 0;
    *(undefined8 *)(pTVar4 + 0x48) = 0;
    *(undefined8 *)(pTVar4 + 0x40) = 0;
    puVar3 = *(undefined8 **)(this + 0x20);
    local_50 = pTVar4;
    if (puVar3 == *(undefined8 **)(this + 0x28)) {
      std::__ndk1::vector<fairygui::TouchInfo*,std::__ndk1::allocator<fairygui::TouchInfo*>>::
      __push_back_slow_path<fairygui::TouchInfo*const&>
                ((vector<fairygui::TouchInfo*,std::__ndk1::allocator<fairygui::TouchInfo*>> *)
                 (this + 0x18),&local_50);
    }
    else {
      *puVar3 = pTVar4;
      *(undefined8 **)(this + 0x20) = puVar3 + 1;
    }
  }
  else {
    pTVar4 = (TouchInfo *)0x0;
    do {
      pTVar2 = (TouchInfo *)*puVar3;
      if (*(int *)(pTVar2 + 0x10) == param_1) goto LAB_00aad824;
      if (*(int *)(pTVar2 + 0x10) == -1) {
        pTVar4 = pTVar2;
        local_50 = pTVar2;
      }
      puVar3 = puVar3 + 1;
    } while (*(undefined8 **)(this + 0x20) != puVar3);
    if (pTVar4 == (TouchInfo *)0x0) goto LAB_00aad7ac;
  }
  *(int *)(local_50 + 0x10) = param_1;
  pTVar2 = local_50;
LAB_00aad824:
                    /* try { // try from 00aad82c to 00bad877 has its CatchHandler @ 00aad82c
                       catch() { ... } // from try @ 00aad82c with catch @ 00aad82c
                       catch() { ... } // from try @ 00aad87c with catch @ 00aad82c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pTVar2);
}

