
/* void 
   std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(std::__ndk1::__tree_node_base<void*>*,
   std::__ndk1::__tree_node_base<void*>*) */

void std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  __tree_node_base _Var1;
  __tree_node_base *p_Var2;
  __tree_node_base *p_Var3;
  long *plVar4;
  long lVar5;
  long lVar6;
  __tree_node_base *p_Var7;
  
  _Var1 = (__tree_node_base)(param_2 == param_1);
  param_2[0x18] = _Var1;
  do {
    if (((bool)_Var1) ||
       (p_Var3 = *(__tree_node_base **)(param_2 + 0x10), p_Var3[0x18] != (__tree_node_base)0x0)) {
      return;
    }
    p_Var2 = *(__tree_node_base **)(p_Var3 + 0x10);
    p_Var7 = *(__tree_node_base **)p_Var2;
    if (p_Var7 == p_Var3) {
      if ((*(long *)(p_Var2 + 8) == 0) ||
         (p_Var7 = (__tree_node_base *)(*(long *)(p_Var2 + 8) + 0x18),
         *p_Var7 != (__tree_node_base)0x0)) {
        if (*(__tree_node_base **)p_Var3 != param_2) {
          p_Var7 = *(__tree_node_base **)(p_Var3 + 8);
          lVar5 = *(long *)p_Var7;
          *(long *)(p_Var3 + 8) = lVar5;
          if (lVar5 != 0) {
            *(__tree_node_base **)(lVar5 + 0x10) = p_Var3;
            p_Var2 = *(__tree_node_base **)(p_Var3 + 0x10);
          }
          *(__tree_node_base **)(p_Var7 + 0x10) = p_Var2;
          (*(undefined8 **)(p_Var3 + 0x10))
          [(__tree_node_base *)**(undefined8 **)(p_Var3 + 0x10) != p_Var3] = p_Var7;
          *(__tree_node_base **)p_Var7 = p_Var3;
          *(__tree_node_base **)(p_Var3 + 0x10) = p_Var7;
          p_Var2 = *(__tree_node_base **)(p_Var7 + 0x10);
          p_Var3 = p_Var7;
        }
        p_Var3[0x18] = (__tree_node_base)0x1;
        lVar5 = *(long *)p_Var2;
        p_Var2[0x18] = (__tree_node_base)0x0;
        lVar6 = *(long *)(lVar5 + 8);
        *(long *)p_Var2 = lVar6;
        if (lVar6 != 0) {
          *(__tree_node_base **)(lVar6 + 0x10) = p_Var2;
        }
        *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(p_Var2 + 0x10);
        (*(undefined8 **)(p_Var2 + 0x10))
        [(__tree_node_base *)**(undefined8 **)(p_Var2 + 0x10) != p_Var2] = lVar5;
        *(__tree_node_base **)(lVar5 + 8) = p_Var2;
        *(long *)(p_Var2 + 0x10) = lVar5;
        return;
      }
    }
    else if ((p_Var7 == (__tree_node_base *)0x0) ||
            (p_Var7 = p_Var7 + 0x18, *p_Var7 != (__tree_node_base)0x0)) {
      if (*(__tree_node_base **)p_Var3 == param_2) {
        lVar5 = *(long *)(param_2 + 8);
        *(long *)p_Var3 = lVar5;
        if (lVar5 != 0) {
          *(__tree_node_base **)(lVar5 + 0x10) = p_Var3;
          p_Var2 = *(__tree_node_base **)(p_Var3 + 0x10);
        }
        *(__tree_node_base **)(param_2 + 0x10) = p_Var2;
        (*(undefined8 **)(p_Var3 + 0x10))
        [(__tree_node_base *)**(undefined8 **)(p_Var3 + 0x10) != p_Var3] = param_2;
        *(__tree_node_base **)(param_2 + 8) = p_Var3;
        *(__tree_node_base **)(p_Var3 + 0x10) = param_2;
        p_Var2 = *(__tree_node_base **)(param_2 + 0x10);
        p_Var3 = param_2;
      }
      p_Var3[0x18] = (__tree_node_base)0x1;
      plVar4 = *(long **)(p_Var2 + 8);
      p_Var2[0x18] = (__tree_node_base)0x0;
      lVar5 = *plVar4;
      *(long *)(p_Var2 + 8) = lVar5;
      if (lVar5 != 0) {
        *(__tree_node_base **)(lVar5 + 0x10) = p_Var2;
      }
      plVar4[2] = *(long *)(p_Var2 + 0x10);
      (*(undefined8 **)(p_Var2 + 0x10))
      [(__tree_node_base *)**(undefined8 **)(p_Var2 + 0x10) != p_Var2] = plVar4;
      *plVar4 = (long)p_Var2;
      *(long **)(p_Var2 + 0x10) = plVar4;
      return;
    }
    _Var1 = (__tree_node_base)(p_Var2 == param_1);
    p_Var3[0x18] = (__tree_node_base)0x1;
    p_Var2[0x18] = _Var1;
    *p_Var7 = (__tree_node_base)0x1;
    param_2 = p_Var2;
  } while( true );
}

