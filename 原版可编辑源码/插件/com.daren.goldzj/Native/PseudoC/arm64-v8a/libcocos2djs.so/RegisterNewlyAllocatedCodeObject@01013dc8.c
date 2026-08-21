
/* v8::internal::CodeObjectRegistry::RegisterNewlyAllocatedCodeObject(unsigned long) */

void __thiscall
v8::internal::CodeObjectRegistry::RegisterNewlyAllocatedCodeObject
          (CodeObjectRegistry *this,ulong param_1)

{
  __tree_node_base *p_Var1;
  long lVar2;
  CodeObjectRegistry *pCVar3;
  CodeObjectRegistry *pCVar4;
  CodeObjectRegistry *pCVar5;
  
  pCVar3 = this + 0x20;
  pCVar4 = *(CodeObjectRegistry **)pCVar3;
  pCVar5 = pCVar3;
  if (pCVar4 != (CodeObjectRegistry *)0x0) {
    pCVar3 = this + 0x20;
    do {
      while (pCVar5 = pCVar4, param_1 < *(ulong *)(pCVar5 + 0x20)) {
        pCVar3 = pCVar5;
        pCVar4 = *(CodeObjectRegistry **)pCVar5;
        if (*(CodeObjectRegistry **)pCVar5 == (CodeObjectRegistry *)0x0) {
          lVar2 = *(long *)pCVar5;
          goto joined_r0x01013e6c;
        }
      }
      if (param_1 <= *(ulong *)(pCVar5 + 0x20)) break;
      pCVar3 = pCVar5 + 8;
      pCVar4 = *(CodeObjectRegistry **)pCVar3;
    } while (*(CodeObjectRegistry **)pCVar3 != (CodeObjectRegistry *)0x0);
  }
  lVar2 = *(long *)pCVar3;
joined_r0x01013e6c:
  if (lVar2 == 0) {
    p_Var1 = operator_new(0x28);
    *(ulong *)(p_Var1 + 0x20) = param_1;
    *(undefined8 *)p_Var1 = 0;
    *(undefined8 *)(p_Var1 + 8) = 0;
    *(CodeObjectRegistry **)(p_Var1 + 0x10) = pCVar5;
    *(__tree_node_base **)pCVar3 = p_Var1;
    if (**(long **)(this + 0x18) != 0) {
      *(long *)(this + 0x18) = **(long **)(this + 0x18);
      p_Var1 = *(__tree_node_base **)pCVar3;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x20),p_Var1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  return;
}

