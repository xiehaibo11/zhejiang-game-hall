
/* v8::internal::CodeMap::AddCode(unsigned long, v8::internal::CodeEntry*, unsigned int) */

void __thiscall
v8::internal::CodeMap::AddCode(CodeMap *this,ulong param_1,CodeEntry *param_2,uint param_3)

{
  __tree_node_base *p_Var1;
  long lVar2;
  ulong uVar3;
  CodeMap *pCVar4;
  ulong uVar5;
  CodeMap *pCVar6;
  CodeMap *pCVar7;
  
  ClearCodesInRange(this,param_1,param_3 + param_1);
  uVar5 = (ulong)*(uint *)(this + 0x48);
  if (*(uint *)(this + 0x48) == 0xffffffff) {
    lVar2 = *(long *)(this + 8);
    uVar5 = 0;
    if (*(long *)(this + 0x10) - lVar2 != 0) {
      uVar5 = (*(long *)(this + 0x10) - lVar2) * 0x40 - 1;
    }
    uVar3 = *(long *)(this + 0x28) + *(long *)(this + 0x20);
    if (uVar5 == uVar3) {
      std::__ndk1::
      deque<v8::internal::CodeMap::CodeEntrySlotInfo,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo>>
      ::__add_back_capacity
                ((deque<v8::internal::CodeMap::CodeEntrySlotInfo,std::__ndk1::allocator<v8::internal::CodeMap::CodeEntrySlotInfo>>
                  *)this);
      lVar2 = *(long *)(this + 8);
      uVar3 = *(long *)(this + 0x20) + *(long *)(this + 0x28);
    }
    *(CodeEntry **)(*(long *)(lVar2 + (uVar3 >> 6 & 0x3fffffffffffff8)) + (uVar3 & 0x1ff) * 8) =
         param_2;
    lVar2 = *(long *)(this + 0x28);
    *(long *)(this + 0x28) = lVar2 + 1;
    uVar5 = (ulong)((int)(lVar2 + 1) - 1);
  }
  else {
    uVar3 = *(long *)(this + 0x20) + uVar5 >> 6 & 0x3fffffffffffff8;
    lVar2 = (*(long *)(this + 0x20) + uVar5 & 0x1ff) * 8;
    *(undefined4 *)(this + 0x48) = *(undefined4 *)(*(long *)(*(long *)(this + 8) + uVar3) + lVar2);
    *(CodeEntry **)(*(long *)(*(long *)(this + 8) + uVar3) + lVar2) = param_2;
  }
  pCVar4 = this + 0x38;
  pCVar6 = *(CodeMap **)pCVar4;
  pCVar7 = pCVar4;
  if (pCVar6 != (CodeMap *)0x0) {
    pCVar4 = this + 0x38;
    do {
      while (pCVar7 = pCVar6, param_1 < *(ulong *)(pCVar7 + 0x20)) {
        pCVar4 = pCVar7;
        pCVar6 = *(CodeMap **)pCVar7;
        if (*(CodeMap **)pCVar7 == (CodeMap *)0x0) {
          lVar2 = *(long *)pCVar7;
          goto joined_r0x011aec54;
        }
      }
      if (param_1 <= *(ulong *)(pCVar7 + 0x20)) break;
      pCVar4 = pCVar7 + 8;
      pCVar6 = *(CodeMap **)pCVar4;
    } while (*(CodeMap **)pCVar4 != (CodeMap *)0x0);
  }
  lVar2 = *(long *)pCVar4;
joined_r0x011aec54:
  if (lVar2 == 0) {
    p_Var1 = operator_new(0x30);
    *(undefined8 *)p_Var1 = 0;
    *(undefined8 *)(p_Var1 + 8) = 0;
    *(CodeMap **)(p_Var1 + 0x10) = pCVar7;
    *(ulong *)(p_Var1 + 0x20) = param_1;
    *(ulong *)(p_Var1 + 0x28) = uVar5 | (ulong)param_3 << 0x20;
    *(__tree_node_base **)pCVar4 = p_Var1;
    if (**(long **)(this + 0x30) != 0) {
      *(long *)(this + 0x30) = **(long **)(this + 0x30);
      p_Var1 = *(__tree_node_base **)pCVar4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x38),p_Var1);
    *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
  }
  return;
}

