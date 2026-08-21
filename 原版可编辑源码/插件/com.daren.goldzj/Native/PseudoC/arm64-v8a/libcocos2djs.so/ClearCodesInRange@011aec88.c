
/* v8::internal::CodeMap::ClearCodesInRange(unsigned long, unsigned long) */

void __thiscall v8::internal::CodeMap::ClearCodesInRange(CodeMap *this,ulong param_1,ulong param_2)

{
  bool bVar1;
  __tree_node_base *p_Var2;
  ulong uVar3;
  long lVar4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  __tree_node_base *p_Var7;
  
  p_Var7 = (__tree_node_base *)(this + 0x38);
  p_Var5 = p_Var7;
  for (p_Var2 = *(__tree_node_base **)p_Var7; p_Var2 != (__tree_node_base *)0x0;
      p_Var2 = *(__tree_node_base **)(p_Var2 + (ulong)(*(ulong *)(p_Var2 + 0x20) <= param_1) * 8)) {
    p_Var6 = p_Var2;
    if (*(ulong *)(p_Var2 + 0x20) <= param_1) {
      p_Var6 = p_Var5;
    }
    p_Var5 = p_Var6;
  }
  if (p_Var5 != *(__tree_node_base **)(this + 0x30)) {
    p_Var2 = *(__tree_node_base **)p_Var5;
    p_Var6 = p_Var5;
    if (*(__tree_node_base **)p_Var5 == (__tree_node_base *)0x0) {
      do {
        p_Var5 = *(__tree_node_base **)(p_Var6 + 0x10);
        bVar1 = *(__tree_node_base **)p_Var5 == p_Var6;
        p_Var6 = p_Var5;
      } while (bVar1);
    }
    else {
      do {
        p_Var5 = p_Var2;
        p_Var2 = *(__tree_node_base **)(p_Var5 + 8);
      } while (*(__tree_node_base **)(p_Var5 + 8) != (__tree_node_base *)0x0);
    }
    if (*(long *)(p_Var5 + 0x20) + (ulong)*(uint *)(p_Var5 + 0x2c) <= param_1) {
      p_Var2 = *(__tree_node_base **)(p_Var5 + 8);
      if (*(__tree_node_base **)(p_Var5 + 8) == (__tree_node_base *)0x0) {
        p_Var2 = p_Var5 + 0x10;
        bVar1 = *(__tree_node_base **)*(__tree_node_base **)p_Var2 != p_Var5;
        p_Var5 = *(__tree_node_base **)p_Var2;
        if (bVar1) {
          do {
            lVar4 = *(long *)p_Var2;
            p_Var2 = (__tree_node_base *)(lVar4 + 0x10);
            p_Var5 = *(__tree_node_base **)p_Var2;
          } while (*(long *)p_Var5 != lVar4);
        }
      }
      else {
        do {
          p_Var5 = p_Var2;
          p_Var2 = *(__tree_node_base **)p_Var5;
        } while (*(__tree_node_base **)p_Var5 != (__tree_node_base *)0x0);
      }
    }
  }
  p_Var2 = p_Var7;
  if (p_Var7 != p_Var5) {
    uVar3 = *(ulong *)(p_Var5 + 0x20);
    p_Var6 = p_Var5;
    while (p_Var2 = p_Var6, uVar3 < param_2) {
      uVar3 = *(long *)(this + 0x20) + (ulong)*(uint *)(p_Var6 + 0x28);
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(this + 8) + (uVar3 >> 6 & 0x3fffffffffffff8)) +
                              (uVar3 & 0x1ff) * 8) + 3) >> 6 & 1) == 0) {
        DeleteCodeEntry(this,*(uint *)(p_Var6 + 0x28));
      }
      p_Var2 = *(__tree_node_base **)(p_Var6 + 8);
      if (*(__tree_node_base **)(p_Var6 + 8) == (__tree_node_base *)0x0) {
        p_Var2 = p_Var6 + 0x10;
        bVar1 = *(__tree_node_base **)*(__tree_node_base **)p_Var2 != p_Var6;
        p_Var6 = *(__tree_node_base **)p_Var2;
        if (bVar1) {
          do {
            lVar4 = *(long *)p_Var2;
            p_Var2 = (__tree_node_base *)(lVar4 + 0x10);
            p_Var6 = *(__tree_node_base **)p_Var2;
          } while (*(long *)p_Var6 != lVar4);
        }
      }
      else {
        do {
          p_Var6 = p_Var2;
          p_Var2 = *(__tree_node_base **)p_Var6;
        } while (*(__tree_node_base **)p_Var6 != (__tree_node_base *)0x0);
      }
      p_Var2 = p_Var7;
      if (p_Var7 == p_Var6) break;
      uVar3 = *(ulong *)(p_Var6 + 0x20);
    }
  }
  while (p_Var2 != p_Var5) {
    p_Var7 = *(__tree_node_base **)(p_Var5 + 8);
    if (*(__tree_node_base **)(p_Var5 + 8) == (__tree_node_base *)0x0) {
      p_Var7 = p_Var5 + 0x10;
      p_Var6 = *(__tree_node_base **)p_Var7;
      if (*(__tree_node_base **)p_Var6 != p_Var5) {
        do {
          lVar4 = *(long *)p_Var7;
          p_Var7 = (__tree_node_base *)(lVar4 + 0x10);
          p_Var6 = *(__tree_node_base **)p_Var7;
        } while (*(long *)p_Var6 != lVar4);
      }
    }
    else {
      do {
        p_Var6 = p_Var7;
        p_Var7 = *(__tree_node_base **)p_Var6;
      } while (*(__tree_node_base **)p_Var6 != (__tree_node_base *)0x0);
    }
    if (*(__tree_node_base **)(this + 0x30) == p_Var5) {
      *(__tree_node_base **)(this + 0x30) = p_Var6;
    }
    *(long *)(this + 0x40) = *(long *)(this + 0x40) + -1;
    std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x38),p_Var5);
    operator_delete(p_Var5);
    p_Var5 = p_Var6;
  }
  return;
}

