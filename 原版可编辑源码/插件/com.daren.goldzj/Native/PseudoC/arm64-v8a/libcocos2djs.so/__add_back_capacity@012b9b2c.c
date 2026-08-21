
/* std::__ndk1::deque<v8::internal::compiler::BasicBlock*,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
::__add_back_capacity
          (deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
           *this)

{
  ulong uVar1;
  Zone *pZVar2;
  undefined8 *puVar3;
  long lVar4;
  BasicBlock *pBVar5;
  ulong uVar6;
  BasicBlock ***pppBVar7;
  BasicBlock **local_58;
  BasicBlock **local_50;
  BasicBlock **ppBStack_48;
  BasicBlock **local_40;
  BasicBlock **ppBStack_38;
  deque<v8::internal::compiler::BasicBlock*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock*>>
  *local_30;
  
  if (*(ulong *)(this + 0x30) < 0x200) {
    uVar6 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar4 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar4 >> 3) <= uVar6) {
      local_30 = this + 0x20;
      ppBStack_38 = (BasicBlock **)0x0;
      local_50 = *(BasicBlock ***)(this + 0x28);
      pBVar5 = (BasicBlock *)(lVar4 >> 2);
      if (lVar4 == 0) {
        pBVar5 = (BasicBlock *)0x1;
      }
      if ((local_50 == (BasicBlock **)0x0) || (local_50[1] < pBVar5)) {
        pZVar2 = *(Zone **)local_30;
        uVar1 = (long)pBVar5 * 8;
        local_50 = *(BasicBlock ***)(pZVar2 + 0x10);
        if (uVar1 < (ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) ||
            uVar1 - (*(long *)(pZVar2 + 0x18) - (long)local_50) == 0) {
          *(BasicBlock ***)(pZVar2 + 0x10) = local_50 + (long)pBVar5;
        }
        else {
          local_50 = (BasicBlock **)v8::internal::Zone::NewExpand(pZVar2,uVar1);
        }
      }
      else {
        *(BasicBlock **)(this + 0x28) = *local_50;
      }
      ppBStack_48 = local_50 + uVar6;
      ppBStack_38 = local_50 + (long)pBVar5;
      local_58 = *(BasicBlock ***)(this + 0x48);
      local_40 = ppBStack_48;
      if ((local_58 == (BasicBlock **)0x0) || (local_58[1] < (BasicBlock *)0x200)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_58 = *(BasicBlock ***)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_58) < 0x1000) {
          local_58 = (BasicBlock **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(BasicBlock ***)(pZVar2 + 0x10) = local_58 + 0x200;
        }
      }
      else {
        *(BasicBlock **)(this + 0x48) = *local_58;
      }
      __split_buffer<v8::internal::compiler::BasicBlock**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock**>&>
      ::push_back((__split_buffer<v8::internal::compiler::BasicBlock**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock**>&>
                   *)&local_50,&local_58);
      pppBVar7 = *(BasicBlock ****)(this + 0x10);
      if (pppBVar7 != *(BasicBlock ****)(this + 8)) {
        do {
          pppBVar7 = pppBVar7 + -1;
          __split_buffer<v8::internal::compiler::BasicBlock**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock**>&>
          ::push_front((__split_buffer<v8::internal::compiler::BasicBlock**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock**>&>
                        *)&local_50,pppBVar7);
        } while (pppBVar7 != *(BasicBlock ****)(this + 8));
      }
      puVar3 = *(undefined8 **)this;
      *(BasicBlock ***)(this + 8) = ppBStack_48;
      *(BasicBlock ***)this = local_50;
      lVar4 = *(long *)(this + 0x18);
      *(BasicBlock ***)(this + 0x18) = ppBStack_38;
      *(BasicBlock ***)(this + 0x10) = local_40;
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
      if ((ulong)(lVar4 - (long)puVar3) < 0x10) {
        return;
      }
      uVar6 = lVar4 - (long)puVar3 >> 3;
      if ((*(long *)(local_30 + 8) != 0) && (uVar6 < *(ulong *)(*(long *)(local_30 + 8) + 8))) {
        return;
      }
      puVar3[1] = uVar6;
      *puVar3 = *(undefined8 *)(local_30 + 8);
      *(undefined8 **)(local_30 + 8) = puVar3;
      return;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_50 = *(BasicBlock ***)(this + 0x48);
      if ((local_50 == (BasicBlock **)0x0) || (local_50[1] < (BasicBlock *)0x200)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_50 = *(BasicBlock ***)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
          local_50 = (BasicBlock **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(BasicBlock ***)(pZVar2 + 0x10) = local_50 + 0x200;
        }
      }
      else {
        *(BasicBlock **)(this + 0x48) = *local_50;
      }
      __split_buffer<v8::internal::compiler::BasicBlock**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock**>>
      ::push_back((__split_buffer<v8::internal::compiler::BasicBlock**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock**>>
                   *)this,&local_50);
      return;
    }
    local_50 = *(BasicBlock ***)(this + 0x48);
    if ((local_50 == (BasicBlock **)0x0) || (local_50[1] < (BasicBlock *)0x200)) {
      pZVar2 = *(Zone **)(this + 0x40);
      local_50 = *(BasicBlock ***)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
        local_50 = (BasicBlock **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
      }
      else {
        *(BasicBlock ***)(pZVar2 + 0x10) = local_50 + 0x200;
      }
    }
    else {
      *(BasicBlock **)(this + 0x48) = *local_50;
    }
    __split_buffer<v8::internal::compiler::BasicBlock**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock**>>
    ::push_front((__split_buffer<v8::internal::compiler::BasicBlock**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BasicBlock**>>
                  *)this,&local_50);
    local_50 = (BasicBlock **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) - 0x200;
    local_50 = (BasicBlock **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_012b9df4(this,&local_50);
  return;
}

