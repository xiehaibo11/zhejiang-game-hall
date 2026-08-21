
/* std::__ndk1::deque<v8::internal::compiler::Instruction*,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction*>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::compiler::Instruction*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction*>>
::__add_back_capacity
          (deque<v8::internal::compiler::Instruction*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction*>>
           *this)

{
  ulong uVar1;
  Zone *pZVar2;
  undefined8 *puVar3;
  long lVar4;
  Instruction *pIVar5;
  ulong uVar6;
  Instruction ***pppIVar7;
  Instruction **local_58;
  Instruction **local_50;
  Instruction **ppIStack_48;
  Instruction **local_40;
  Instruction **ppIStack_38;
  deque<v8::internal::compiler::Instruction*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction*>>
  *local_30;
  
  if (*(ulong *)(this + 0x30) < 0x200) {
    uVar6 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar4 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar4 >> 3) <= uVar6) {
      local_30 = this + 0x20;
      ppIStack_38 = (Instruction **)0x0;
      local_50 = *(Instruction ***)(this + 0x28);
      pIVar5 = (Instruction *)(lVar4 >> 2);
      if (lVar4 == 0) {
        pIVar5 = (Instruction *)0x1;
      }
      if ((local_50 == (Instruction **)0x0) || (local_50[1] < pIVar5)) {
        pZVar2 = *(Zone **)local_30;
        uVar1 = (long)pIVar5 * 8;
        local_50 = *(Instruction ***)(pZVar2 + 0x10);
        if (uVar1 < (ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) ||
            uVar1 - (*(long *)(pZVar2 + 0x18) - (long)local_50) == 0) {
          *(Instruction ***)(pZVar2 + 0x10) = local_50 + (long)pIVar5;
        }
        else {
          local_50 = (Instruction **)v8::internal::Zone::NewExpand(pZVar2,uVar1);
        }
      }
      else {
        *(Instruction **)(this + 0x28) = *local_50;
      }
      ppIStack_48 = local_50 + uVar6;
      ppIStack_38 = local_50 + (long)pIVar5;
      local_58 = *(Instruction ***)(this + 0x48);
      local_40 = ppIStack_48;
      if ((local_58 == (Instruction **)0x0) || (local_58[1] < (Instruction *)0x200)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_58 = *(Instruction ***)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_58) < 0x1000) {
          local_58 = (Instruction **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(Instruction ***)(pZVar2 + 0x10) = local_58 + 0x200;
        }
      }
      else {
        *(Instruction **)(this + 0x48) = *local_58;
      }
      __split_buffer<v8::internal::compiler::Instruction**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction**>&>
      ::push_back((__split_buffer<v8::internal::compiler::Instruction**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction**>&>
                   *)&local_50,&local_58);
      pppIVar7 = *(Instruction ****)(this + 0x10);
      if (pppIVar7 != *(Instruction ****)(this + 8)) {
        do {
          pppIVar7 = pppIVar7 + -1;
          __split_buffer<v8::internal::compiler::Instruction**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction**>&>
          ::push_front((__split_buffer<v8::internal::compiler::Instruction**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction**>&>
                        *)&local_50,pppIVar7);
        } while (pppIVar7 != *(Instruction ****)(this + 8));
      }
      puVar3 = *(undefined8 **)this;
      *(Instruction ***)(this + 8) = ppIStack_48;
      *(Instruction ***)this = local_50;
      lVar4 = *(long *)(this + 0x18);
      *(Instruction ***)(this + 0x18) = ppIStack_38;
      *(Instruction ***)(this + 0x10) = local_40;
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
      local_50 = *(Instruction ***)(this + 0x48);
      if ((local_50 == (Instruction **)0x0) || (local_50[1] < (Instruction *)0x200)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_50 = *(Instruction ***)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
          local_50 = (Instruction **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(Instruction ***)(pZVar2 + 0x10) = local_50 + 0x200;
        }
      }
      else {
        *(Instruction **)(this + 0x48) = *local_50;
      }
      __split_buffer<v8::internal::compiler::Instruction**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction**>>
      ::push_back((__split_buffer<v8::internal::compiler::Instruction**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction**>>
                   *)this,&local_50);
      return;
    }
    local_50 = *(Instruction ***)(this + 0x48);
    if ((local_50 == (Instruction **)0x0) || (local_50[1] < (Instruction *)0x200)) {
      pZVar2 = *(Zone **)(this + 0x40);
      local_50 = *(Instruction ***)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
        local_50 = (Instruction **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
      }
      else {
        *(Instruction ***)(pZVar2 + 0x10) = local_50 + 0x200;
      }
    }
    else {
      *(Instruction **)(this + 0x48) = *local_50;
    }
    __split_buffer<v8::internal::compiler::Instruction**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction**>>
    ::push_front((__split_buffer<v8::internal::compiler::Instruction**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction**>>
                  *)this,&local_50);
    local_50 = (Instruction **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) - 0x200;
    local_50 = (Instruction **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_01649948(this,&local_50);
  return;
}

