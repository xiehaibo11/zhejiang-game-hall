
/* v8::internal::CodeMap::MoveCode(unsigned long, unsigned long) */

void __thiscall v8::internal::CodeMap::MoveCode(CodeMap *this,ulong param_1,ulong param_2)

{
  __tree_node_base *p_Var1;
  long *plVar2;
  __tree_node_base *p_Var3;
  long *plVar4;
  __tree_node_base *p_Var5;
  long lVar6;
  __tree_node_base *p_Var7;
  ulong uVar8;
  __tree_node_base *p_Var9;
  
  if (param_1 != param_2) {
    p_Var9 = (__tree_node_base *)(this + 0x38);
    p_Var3 = *(__tree_node_base **)p_Var9;
    p_Var5 = p_Var3;
    p_Var7 = p_Var9;
    if (p_Var3 != (__tree_node_base *)0x0) {
      do {
        if (*(ulong *)(p_Var5 + 0x20) >= param_1) {
          p_Var7 = p_Var5;
        }
        p_Var1 = p_Var5 + (ulong)(*(ulong *)(p_Var5 + 0x20) < param_1) * 8;
        p_Var5 = *(__tree_node_base **)p_Var1;
      } while (*(__tree_node_base **)p_Var1 != (__tree_node_base *)0x0);
      if ((p_Var7 != p_Var9) && (*(ulong *)(p_Var7 + 0x20) <= param_1)) {
        uVar8 = *(ulong *)(p_Var7 + 0x28);
        plVar2 = *(long **)(p_Var7 + 8);
        if (*(long **)(p_Var7 + 8) == (long *)0x0) {
          p_Var5 = p_Var7 + 0x10;
          plVar4 = *(long **)p_Var5;
          if ((__tree_node_base *)*plVar4 != p_Var7) {
            do {
              lVar6 = *(long *)p_Var5;
              p_Var5 = (__tree_node_base *)(lVar6 + 0x10);
              plVar4 = *(long **)p_Var5;
            } while (*plVar4 != lVar6);
          }
        }
        else {
          do {
            plVar4 = plVar2;
            plVar2 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
        if (*(__tree_node_base **)(this + 0x30) == p_Var7) {
          *(long **)(this + 0x30) = plVar4;
        }
        *(long *)(this + 0x40) = *(long *)(this + 0x40) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var3,p_Var7);
        operator_delete(p_Var7);
        ClearCodesInRange(this,param_2,(uVar8 >> 0x20) + param_2);
        p_Var5 = *(__tree_node_base **)(this + 0x38);
        p_Var7 = (__tree_node_base *)(this + 0x38);
        if (p_Var5 == (__tree_node_base *)0x0) {
          lVar6 = *(long *)p_Var9;
          p_Var7 = p_Var9;
        }
        else {
LAB_011af1f8:
          do {
            p_Var9 = p_Var5;
            if (*(ulong *)(p_Var9 + 0x20) <= param_2) {
              if (*(ulong *)(p_Var9 + 0x20) < param_2) {
                p_Var7 = p_Var9 + 8;
                p_Var5 = *(__tree_node_base **)p_Var7;
                if (*(__tree_node_base **)p_Var7 != (__tree_node_base *)0x0) goto LAB_011af1f8;
              }
              lVar6 = *(long *)p_Var7;
              goto joined_r0x011af240;
            }
            p_Var5 = *(__tree_node_base **)p_Var9;
            p_Var7 = p_Var9;
          } while (*(__tree_node_base **)p_Var9 != (__tree_node_base *)0x0);
          lVar6 = *(long *)p_Var9;
        }
joined_r0x011af240:
        if (lVar6 == 0) {
          p_Var5 = operator_new(0x30);
          *(ulong *)(p_Var5 + 0x20) = param_2;
          *(ulong *)(p_Var5 + 0x28) = uVar8;
          *(undefined8 *)p_Var5 = 0;
          *(undefined8 *)(p_Var5 + 8) = 0;
          *(__tree_node_base **)(p_Var5 + 0x10) = p_Var9;
          *(__tree_node_base **)p_Var7 = p_Var5;
          if (**(long **)(this + 0x30) != 0) {
            *(long *)(this + 0x30) = **(long **)(this + 0x30);
            p_Var5 = *(__tree_node_base **)p_Var7;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 0x38),p_Var5);
          *(long *)(this + 0x40) = *(long *)(this + 0x40) + 1;
        }
        uVar8 = *(long *)(this + 0x20) + (uVar8 & 0xffffffff);
        *(ulong *)(*(long *)(*(long *)(*(long *)(this + 8) + (uVar8 >> 6 & 0x3fffffffffffff8)) +
                            (uVar8 & 0x1ff) * 8) + 0x30) = param_2;
      }
    }
  }
  return;
}

