
/* std::__ndk1::deque<v8::internal::compiler::DeoptimizationExit*,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit*>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::compiler::DeoptimizationExit*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit*>>
::__add_back_capacity
          (deque<v8::internal::compiler::DeoptimizationExit*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit*>>
           *this)

{
  ulong uVar1;
  Zone *pZVar2;
  undefined8 *puVar3;
  long lVar4;
  DeoptimizationExit *pDVar5;
  ulong uVar6;
  DeoptimizationExit ***pppDVar7;
  DeoptimizationExit **local_58;
  DeoptimizationExit **local_50;
  DeoptimizationExit **ppDStack_48;
  DeoptimizationExit **local_40;
  DeoptimizationExit **ppDStack_38;
  deque<v8::internal::compiler::DeoptimizationExit*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit*>>
  *local_30;
  
  if (*(ulong *)(this + 0x30) < 0x200) {
    uVar6 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar4 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar4 >> 3) <= uVar6) {
      local_30 = this + 0x20;
      ppDStack_38 = (DeoptimizationExit **)0x0;
      local_50 = *(DeoptimizationExit ***)(this + 0x28);
      pDVar5 = (DeoptimizationExit *)(lVar4 >> 2);
      if (lVar4 == 0) {
        pDVar5 = (DeoptimizationExit *)0x1;
      }
      if ((local_50 == (DeoptimizationExit **)0x0) || (local_50[1] < pDVar5)) {
        pZVar2 = *(Zone **)local_30;
        uVar1 = (long)pDVar5 * 8;
        local_50 = *(DeoptimizationExit ***)(pZVar2 + 0x10);
        if (uVar1 < (ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) ||
            uVar1 - (*(long *)(pZVar2 + 0x18) - (long)local_50) == 0) {
          *(DeoptimizationExit ***)(pZVar2 + 0x10) = local_50 + (long)pDVar5;
        }
        else {
          local_50 = (DeoptimizationExit **)v8::internal::Zone::NewExpand(pZVar2,uVar1);
        }
      }
      else {
        *(DeoptimizationExit **)(this + 0x28) = *local_50;
      }
      ppDStack_48 = local_50 + uVar6;
      ppDStack_38 = local_50 + (long)pDVar5;
      local_58 = *(DeoptimizationExit ***)(this + 0x48);
      local_40 = ppDStack_48;
      if ((local_58 == (DeoptimizationExit **)0x0) || (local_58[1] < (DeoptimizationExit *)0x200)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_58 = *(DeoptimizationExit ***)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_58) < 0x1000) {
          local_58 = (DeoptimizationExit **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(DeoptimizationExit ***)(pZVar2 + 0x10) = local_58 + 0x200;
        }
      }
      else {
        *(DeoptimizationExit **)(this + 0x48) = *local_58;
      }
      __split_buffer<v8::internal::compiler::DeoptimizationExit**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit**>&>
      ::push_back((__split_buffer<v8::internal::compiler::DeoptimizationExit**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit**>&>
                   *)&local_50,&local_58);
      pppDVar7 = *(DeoptimizationExit ****)(this + 0x10);
      if (pppDVar7 != *(DeoptimizationExit ****)(this + 8)) {
        do {
          pppDVar7 = pppDVar7 + -1;
          __split_buffer<v8::internal::compiler::DeoptimizationExit**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit**>&>
          ::push_front((__split_buffer<v8::internal::compiler::DeoptimizationExit**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit**>&>
                        *)&local_50,pppDVar7);
        } while (pppDVar7 != *(DeoptimizationExit ****)(this + 8));
      }
      puVar3 = *(undefined8 **)this;
      *(DeoptimizationExit ***)(this + 8) = ppDStack_48;
      *(DeoptimizationExit ***)this = local_50;
      lVar4 = *(long *)(this + 0x18);
      *(DeoptimizationExit ***)(this + 0x18) = ppDStack_38;
      *(DeoptimizationExit ***)(this + 0x10) = local_40;
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
      local_50 = *(DeoptimizationExit ***)(this + 0x48);
      if ((local_50 == (DeoptimizationExit **)0x0) || (local_50[1] < (DeoptimizationExit *)0x200)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_50 = *(DeoptimizationExit ***)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
          local_50 = (DeoptimizationExit **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(DeoptimizationExit ***)(pZVar2 + 0x10) = local_50 + 0x200;
        }
      }
      else {
        *(DeoptimizationExit **)(this + 0x48) = *local_50;
      }
      __split_buffer<v8::internal::compiler::DeoptimizationExit**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit**>>
      ::push_back((__split_buffer<v8::internal::compiler::DeoptimizationExit**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit**>>
                   *)this,&local_50);
      return;
    }
    local_50 = *(DeoptimizationExit ***)(this + 0x48);
    if ((local_50 == (DeoptimizationExit **)0x0) || (local_50[1] < (DeoptimizationExit *)0x200)) {
      pZVar2 = *(Zone **)(this + 0x40);
      local_50 = *(DeoptimizationExit ***)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
        local_50 = (DeoptimizationExit **)v8::internal::Zone::NewExpand(pZVar2,0x1000);
      }
      else {
        *(DeoptimizationExit ***)(pZVar2 + 0x10) = local_50 + 0x200;
      }
    }
    else {
      *(DeoptimizationExit **)(this + 0x48) = *local_50;
    }
    __split_buffer<v8::internal::compiler::DeoptimizationExit**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit**>>
    ::push_front((__split_buffer<v8::internal::compiler::DeoptimizationExit**,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit**>>
                  *)this,&local_50);
    local_50 = (DeoptimizationExit **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) - 0x200;
    local_50 = (DeoptimizationExit **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_01630dd4(this,&local_50);
  return;
}

