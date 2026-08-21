
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::AddressToTraceMap::RemoveRange(unsigned long, unsigned long) */

void __thiscall
v8::internal::AddressToTraceMap::RemoveRange(AddressToTraceMap *this,ulong param_1,ulong param_2)

{
  __tree_node_base *p_Var1;
  __tree_node_base *p_Var2;
  long lVar3;
  __tree_node_base *p_Var4;
  ulong uVar5;
  undefined4 uVar6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  
  p_Var7 = (__tree_node_base *)(this + 8);
  p_Var2 = *(__tree_node_base **)p_Var7;
  p_Var4 = p_Var7;
  if (p_Var2 != (__tree_node_base *)0x0) {
    do {
      p_Var1 = p_Var2;
      if (*(ulong *)(p_Var2 + 0x20) <= param_1) {
        p_Var1 = p_Var4;
      }
      p_Var2 = *(__tree_node_base **)(p_Var2 + (ulong)(*(ulong *)(p_Var2 + 0x20) <= param_1) * 8);
      p_Var4 = p_Var1;
    } while (p_Var2 != (__tree_node_base *)0x0);
    if (p_Var1 != p_Var7) {
      uVar5 = *(ulong *)(p_Var1 + 0x28);
      if (uVar5 < param_1) {
        uVar6 = *(undefined4 *)(p_Var1 + 0x30);
      }
      else {
        uVar5 = 0;
        uVar6 = 0;
      }
      do {
        if (param_2 < *(ulong *)(p_Var4 + 0x20)) {
          p_Var2 = p_Var4;
          if (*(ulong *)(p_Var4 + 0x28) < param_2) {
            *(ulong *)(p_Var4 + 0x28) = param_2;
          }
          break;
        }
        p_Var2 = *(__tree_node_base **)(p_Var4 + 8);
        if (*(__tree_node_base **)(p_Var4 + 8) == (__tree_node_base *)0x0) {
          p_Var2 = p_Var4 + 0x10;
          p_Var8 = *(__tree_node_base **)p_Var2;
          if (*(__tree_node_base **)p_Var8 != p_Var4) {
            do {
              lVar3 = *(long *)p_Var2;
              p_Var2 = (__tree_node_base *)(lVar3 + 0x10);
              p_Var8 = *(__tree_node_base **)p_Var2;
            } while (*(long *)p_Var8 != lVar3);
          }
        }
        else {
          do {
            p_Var8 = p_Var2;
            p_Var2 = *(__tree_node_base **)p_Var8;
          } while (*(__tree_node_base **)p_Var8 != (__tree_node_base *)0x0);
        }
        p_Var4 = p_Var8;
        p_Var2 = p_Var7;
      } while (p_Var8 != p_Var7);
      while (p_Var1 != p_Var2) {
        p_Var4 = *(__tree_node_base **)(p_Var1 + 8);
        if (*(__tree_node_base **)(p_Var1 + 8) == (__tree_node_base *)0x0) {
          p_Var4 = p_Var1 + 0x10;
          p_Var8 = *(__tree_node_base **)p_Var4;
          if (*(__tree_node_base **)p_Var8 != p_Var1) {
            do {
              lVar3 = *(long *)p_Var4;
              p_Var4 = (__tree_node_base *)(lVar3 + 0x10);
              p_Var8 = *(__tree_node_base **)p_Var4;
            } while (*(long *)p_Var8 != lVar3);
          }
        }
        else {
          do {
            p_Var8 = p_Var4;
            p_Var4 = *(__tree_node_base **)p_Var8;
          } while (*(__tree_node_base **)p_Var8 != (__tree_node_base *)0x0);
        }
        if (*(__tree_node_base **)this == p_Var1) {
          *(__tree_node_base **)this = p_Var8;
        }
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 8),p_Var1);
        operator_delete(p_Var1);
        p_Var1 = p_Var8;
      }
      if (uVar5 != 0) {
        if (*(__tree_node_base **)p_Var7 == (__tree_node_base *)0x0) {
          lVar3 = *(long *)p_Var7;
          p_Var4 = p_Var7;
        }
        else {
          p_Var2 = *(__tree_node_base **)p_Var7;
          p_Var4 = (__tree_node_base *)(this + 8);
          do {
            while (p_Var7 = p_Var2, param_1 < *(ulong *)(p_Var7 + 0x20)) {
              p_Var2 = *(__tree_node_base **)p_Var7;
              p_Var4 = p_Var7;
              if (*(__tree_node_base **)p_Var7 == (__tree_node_base *)0x0) {
                lVar3 = *(long *)p_Var7;
                goto joined_r0x0152bf60;
              }
            }
            if (param_1 <= *(ulong *)(p_Var7 + 0x20)) break;
            p_Var4 = p_Var7 + 8;
            p_Var2 = *(__tree_node_base **)p_Var4;
          } while (*(__tree_node_base **)p_Var4 != (__tree_node_base *)0x0);
          lVar3 = *(long *)p_Var4;
        }
joined_r0x0152bf60:
        if (lVar3 == 0) {
          p_Var2 = operator_new(0x38);
          *(ulong *)(p_Var2 + 0x20) = param_1;
          *(ulong *)(p_Var2 + 0x28) = uVar5;
          *(undefined4 *)(p_Var2 + 0x30) = uVar6;
          *(undefined8 *)p_Var2 = 0;
          *(undefined8 *)(p_Var2 + 8) = 0;
          *(__tree_node_base **)(p_Var2 + 0x10) = p_Var7;
          *(__tree_node_base **)p_Var4 = p_Var2;
          if (**(long **)this != 0) {
            *(long *)this = **(long **)this;
            p_Var2 = *(__tree_node_base **)p_Var4;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 8),p_Var2);
          *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
        }
      }
    }
  }
  return;
}

