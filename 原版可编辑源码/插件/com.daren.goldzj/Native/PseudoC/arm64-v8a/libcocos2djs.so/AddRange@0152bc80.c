
/* v8::internal::AddressToTraceMap::AddRange(unsigned long, int, unsigned int) */

void __thiscall
v8::internal::AddressToTraceMap::AddRange
          (AddressToTraceMap *this,ulong param_1,int param_2,uint param_3)

{
  ulong uVar1;
  __tree_node_base *p_Var2;
  long lVar3;
  AddressToTraceMap *pAVar4;
  AddressToTraceMap *pAVar5;
  AddressToTraceMap *pAVar6;
  
  uVar1 = param_1 + (long)param_2;
  RemoveRange(this,param_1,uVar1);
  pAVar4 = this + 8;
  pAVar5 = *(AddressToTraceMap **)pAVar4;
  pAVar6 = pAVar4;
  if (pAVar5 != (AddressToTraceMap *)0x0) {
    pAVar4 = this + 8;
    do {
      while (pAVar6 = pAVar5, uVar1 < *(ulong *)(pAVar6 + 0x20)) {
        pAVar4 = pAVar6;
        pAVar5 = *(AddressToTraceMap **)pAVar6;
        if (*(AddressToTraceMap **)pAVar6 == (AddressToTraceMap *)0x0) {
          lVar3 = *(long *)pAVar6;
          goto joined_r0x0152bd40;
        }
      }
      if (uVar1 <= *(ulong *)(pAVar6 + 0x20)) break;
      pAVar4 = pAVar6 + 8;
      pAVar5 = *(AddressToTraceMap **)pAVar4;
    } while (*(AddressToTraceMap **)pAVar4 != (AddressToTraceMap *)0x0);
  }
  lVar3 = *(long *)pAVar4;
joined_r0x0152bd40:
  if (lVar3 == 0) {
    p_Var2 = operator_new(0x38);
    *(ulong *)(p_Var2 + 0x20) = uVar1;
    *(ulong *)(p_Var2 + 0x28) = param_1;
    *(uint *)(p_Var2 + 0x30) = param_3;
    *(undefined8 *)p_Var2 = 0;
    *(undefined8 *)(p_Var2 + 8) = 0;
    *(AddressToTraceMap **)(p_Var2 + 0x10) = pAVar6;
    *(__tree_node_base **)pAVar4 = p_Var2;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var2 = *(__tree_node_base **)pAVar4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var2);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return;
}

