
/* v8::internal::compiler::StateValuesCache::AreKeysEqual(void*, void*) */

ulong v8::internal::compiler::StateValuesCache::AreKeysEqual(void *param_1,void *param_2)

{
  ulong uVar1;
  Node *pNVar2;
  Node *pNVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  pNVar3 = *(Node **)param_1;
  pNVar2 = *(Node **)param_2;
  if (pNVar3 == (Node *)0x0) {
    pNVar3 = pNVar2;
    if (pNVar2 != (Node *)0x0) goto LAB_017aed20;
    if ((*(long *)((long)param_1 + 8) == *(long *)((long)param_2 + 8)) &&
       (uVar1 = compiler::operator!=
                          ((SparseInputMask *)((long)param_1 + 0x10),
                           (SparseInputMask *)((long)param_2 + 0x10)), (uVar1 & 1) == 0)) {
      lVar4 = *(long *)((long)param_1 + 8);
      if (lVar4 == 0) {
        uVar1 = 1;
      }
      else {
        plVar5 = *(long **)((long)param_1 + 0x18);
        plVar6 = *(long **)((long)param_2 + 0x18);
        uVar1 = 1;
        do {
          if (*plVar5 != *plVar6) goto LAB_017aed84;
          lVar4 = lVar4 + -1;
          plVar6 = plVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar4 != 0);
      }
    }
    else {
LAB_017aed84:
      uVar1 = 0;
    }
  }
  else {
    param_1 = param_2;
    if (pNVar2 == (Node *)0x0) {
LAB_017aed20:
      uVar1 = IsKeysEqualToNode(param_1,pNVar3);
      return uVar1;
    }
    uVar1 = (ulong)(pNVar3 == pNVar2);
  }
  return uVar1;
}

