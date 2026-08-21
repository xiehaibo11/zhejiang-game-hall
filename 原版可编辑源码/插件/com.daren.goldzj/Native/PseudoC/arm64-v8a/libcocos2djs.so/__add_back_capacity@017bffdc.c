
/* std::__ndk1::deque<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,
   v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
::__add_back_capacity
          (deque<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
           *this)

{
  ulong uVar1;
  Zone *pZVar2;
  undefined8 *puVar3;
  long lVar4;
  RegisterInfo *pRVar5;
  ulong uVar6;
  RegisterInfo ***pppRVar7;
  RegisterInfo **local_58;
  RegisterInfo **local_50;
  RegisterInfo **ppRStack_48;
  RegisterInfo **local_40;
  RegisterInfo **ppRStack_38;
  deque<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo*>>
  *local_30;
  
  if (*(ulong *)(this + 0x30) < 0x200) {
    uVar6 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar4 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar4 >> 3) <= uVar6) {
      local_30 = this + 0x20;
      ppRStack_38 = (RegisterInfo **)0x0;
      local_50 = *(RegisterInfo ***)(this + 0x28);
      pRVar5 = (RegisterInfo *)(lVar4 >> 2);
      if (lVar4 == 0) {
        pRVar5 = (RegisterInfo *)0x1;
      }
      if ((local_50 == (RegisterInfo **)0x0) || (local_50[1] < pRVar5)) {
        pZVar2 = *(Zone **)local_30;
        uVar1 = (long)pRVar5 * 8;
        local_50 = *(RegisterInfo ***)(pZVar2 + 0x10);
        if (uVar1 < (ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) ||
            uVar1 - (*(long *)(pZVar2 + 0x18) - (long)local_50) == 0) {
          *(RegisterInfo ***)(pZVar2 + 0x10) = local_50 + (long)pRVar5;
        }
        else {
          local_50 = (RegisterInfo **)v8::internal::Zone::NewExpand(pZVar2,uVar1);
        }
      }
      else {
        *(RegisterInfo **)(this + 0x28) = *local_50;
      }
      ppRStack_48 = local_50 + uVar6;
      ppRStack_38 = local_50 + (long)pRVar5;
      local_58 = *(RegisterInfo ***)(this + 0x48);
      local_40 = ppRStack_48;
      if ((local_58 == (RegisterInfo **)0x0) || (local_58[1] < (RegisterInfo *)0x200)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_58 = *(RegisterInfo ***)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_58) < 0x1000) {
          local_58 = (RegisterInfo **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(RegisterInfo ***)(pZVar2 + 0x10) = local_58 + 0x200;
        }
      }
      else {
        *(RegisterInfo **)(this + 0x48) = *local_58;
      }
      __split_buffer<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**>&>
      ::push_back((__split_buffer<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**>&>
                   *)&local_50,&local_58);
      pppRVar7 = *(RegisterInfo ****)(this + 0x10);
      if (pppRVar7 != *(RegisterInfo ****)(this + 8)) {
        do {
          pppRVar7 = pppRVar7 + -1;
          __split_buffer<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**>&>
          ::push_front((__split_buffer<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**>&>
                        *)&local_50,pppRVar7);
        } while (pppRVar7 != *(RegisterInfo ****)(this + 8));
      }
      puVar3 = *(undefined8 **)this;
      *(RegisterInfo ***)(this + 8) = ppRStack_48;
      *(RegisterInfo ***)this = local_50;
      lVar4 = *(long *)(this + 0x18);
      *(RegisterInfo ***)(this + 0x18) = ppRStack_38;
      *(RegisterInfo ***)(this + 0x10) = local_40;
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
      local_50 = *(RegisterInfo ***)(this + 0x48);
      if ((local_50 == (RegisterInfo **)0x0) || (local_50[1] < (RegisterInfo *)0x200)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_50 = *(RegisterInfo ***)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
          local_50 = (RegisterInfo **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(RegisterInfo ***)(pZVar2 + 0x10) = local_50 + 0x200;
        }
      }
      else {
        *(RegisterInfo **)(this + 0x48) = *local_50;
      }
      __split_buffer<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**>>
      ::push_back((__split_buffer<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**>>
                   *)this,&local_50);
      return;
    }
    local_50 = *(RegisterInfo ***)(this + 0x48);
    if ((local_50 == (RegisterInfo **)0x0) || (local_50[1] < (RegisterInfo *)0x200)) {
      pZVar2 = *(Zone **)(this + 0x40);
      local_50 = *(RegisterInfo ***)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
        local_50 = (RegisterInfo **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
      }
      else {
        *(RegisterInfo ***)(pZVar2 + 0x10) = local_50 + 0x200;
      }
    }
    else {
      *(RegisterInfo **)(this + 0x48) = *local_50;
    }
    __split_buffer<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**>>
    ::push_front((__split_buffer<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**,v8::internal::RecyclingZoneAllocator<v8::internal::interpreter::BytecodeRegisterOptimizer::RegisterInfo**>>
                  *)this,&local_50);
    local_50 = (RegisterInfo **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) - 0x200;
    local_50 = (RegisterInfo **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_017c02a4(this,&local_50);
  return;
}

