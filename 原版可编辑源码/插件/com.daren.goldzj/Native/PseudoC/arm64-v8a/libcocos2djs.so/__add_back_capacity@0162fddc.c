
/* std::__ndk1::deque<v8::internal::compiler::DeoptimizationLiteral,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::compiler::DeoptimizationLiteral,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral>>
::__add_back_capacity
          (deque<v8::internal::compiler::DeoptimizationLiteral,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral>>
           *this)

{
  ulong uVar1;
  Zone *pZVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  DeoptimizationLiteral **ppDVar7;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  undefined8 *puStack_38;
  deque<v8::internal::compiler::DeoptimizationLiteral,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral>>
  *local_30;
  
  if (*(ulong *)(this + 0x30) < 0x80) {
    uVar6 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar4 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar4 >> 3) <= uVar6) {
      local_30 = this + 0x20;
      puStack_38 = (undefined8 *)0x0;
      local_50 = *(undefined8 **)(this + 0x28);
      uVar5 = lVar4 >> 2;
      if (lVar4 == 0) {
        uVar5 = 1;
      }
      if ((local_50 == (undefined8 *)0x0) || ((ulong)local_50[1] < uVar5)) {
        pZVar2 = *(Zone **)local_30;
        uVar1 = uVar5 * 8;
        local_50 = *(undefined8 **)(pZVar2 + 0x10);
        if (uVar1 < (ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) ||
            uVar1 - (*(long *)(pZVar2 + 0x18) - (long)local_50) == 0) {
          *(undefined8 **)(pZVar2 + 0x10) = local_50 + uVar5;
        }
        else {
          local_50 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar2,uVar1);
        }
      }
      else {
        *(undefined8 *)(this + 0x28) = *local_50;
      }
      puStack_48 = local_50 + uVar6;
      puStack_38 = local_50 + uVar5;
      local_58 = *(undefined8 **)(this + 0x48);
      local_40 = puStack_48;
      if ((local_58 == (undefined8 *)0x0) || ((ulong)local_58[1] < 0x80)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_58 = *(undefined8 **)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_58) < 0x1000) {
          local_58 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(undefined8 **)(pZVar2 + 0x10) = local_58 + 0x200;
        }
      }
      else {
        *(undefined8 *)(this + 0x48) = *local_58;
      }
      __split_buffer<v8::internal::compiler::DeoptimizationLiteral*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral*>&>
      ::push_back((__split_buffer<v8::internal::compiler::DeoptimizationLiteral*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral*>&>
                   *)&local_50,(DeoptimizationLiteral **)&local_58);
      ppDVar7 = *(DeoptimizationLiteral ***)(this + 0x10);
      if (ppDVar7 != *(DeoptimizationLiteral ***)(this + 8)) {
        do {
          ppDVar7 = ppDVar7 + -1;
          __split_buffer<v8::internal::compiler::DeoptimizationLiteral*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral*>&>
          ::push_front((__split_buffer<v8::internal::compiler::DeoptimizationLiteral*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral*>&>
                        *)&local_50,ppDVar7);
        } while (ppDVar7 != *(DeoptimizationLiteral ***)(this + 8));
      }
      puVar3 = *(undefined8 **)this;
      *(undefined8 **)(this + 8) = puStack_48;
      *(undefined8 **)this = local_50;
      lVar4 = *(long *)(this + 0x18);
      *(undefined8 **)(this + 0x18) = puStack_38;
      *(undefined8 **)(this + 0x10) = local_40;
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
      local_50 = *(undefined8 **)(this + 0x48);
      if ((local_50 == (undefined8 *)0x0) || ((ulong)local_50[1] < 0x80)) {
        pZVar2 = *(Zone **)(this + 0x40);
        local_50 = *(undefined8 **)(pZVar2 + 0x10);
        if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
          local_50 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar2,0x1000);
        }
        else {
          *(undefined8 **)(pZVar2 + 0x10) = local_50 + 0x200;
        }
      }
      else {
        *(undefined8 *)(this + 0x48) = *local_50;
      }
      __split_buffer<v8::internal::compiler::DeoptimizationLiteral*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral*>>
      ::push_back((__split_buffer<v8::internal::compiler::DeoptimizationLiteral*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral*>>
                   *)this,(DeoptimizationLiteral **)&local_50);
      return;
    }
    local_50 = *(undefined8 **)(this + 0x48);
    if ((local_50 == (undefined8 *)0x0) || ((ulong)local_50[1] < 0x80)) {
      pZVar2 = *(Zone **)(this + 0x40);
      local_50 = *(undefined8 **)(pZVar2 + 0x10);
      if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)local_50) < 0x1000) {
        local_50 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar2,0x1000);
      }
      else {
        *(undefined8 **)(pZVar2 + 0x10) = local_50 + 0x200;
      }
    }
    else {
      *(undefined8 *)(this + 0x48) = *local_50;
    }
    __split_buffer<v8::internal::compiler::DeoptimizationLiteral*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral*>>
    ::push_front((__split_buffer<v8::internal::compiler::DeoptimizationLiteral*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral*>>
                  *)this,(DeoptimizationLiteral **)&local_50);
    local_50 = (undefined8 *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x30) = *(ulong *)(this + 0x30) - 0x80;
    local_50 = (undefined8 *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_016300a4(this,&local_50);
  return;
}

