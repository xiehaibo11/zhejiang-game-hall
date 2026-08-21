
/* void 
   std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(std::__ndk1::__tree_node_base<void*>*,
   std::__ndk1::__tree_node_base<void*>*) */

void std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
               (__tree_node_base *param_1,__tree_node_base *param_2)

{
  __tree_node_base _Var1;
  bool bVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  long *plVar6;
  long lVar7;
  __tree_node_base *p_Var8;
  __tree_node_base *p_Var9;
  undefined8 *puVar10;
  long lVar11;
  
  p_Var5 = *(__tree_node_base **)param_2;
  p_Var3 = param_2;
  if (p_Var5 == (__tree_node_base *)0x0) {
LAB_008c95f8:
    p_Var5 = *(__tree_node_base **)(p_Var3 + 8);
    if (p_Var5 == (__tree_node_base *)0x0) {
      bVar2 = false;
      goto LAB_008c9618;
    }
  }
  else {
    p_Var4 = *(__tree_node_base **)(param_2 + 8);
    if (*(__tree_node_base **)(param_2 + 8) != (__tree_node_base *)0x0) {
      do {
        p_Var3 = p_Var4;
        p_Var4 = *(__tree_node_base **)p_Var3;
      } while (*(__tree_node_base **)p_Var3 != (__tree_node_base *)0x0);
      goto LAB_008c95f8;
    }
  }
  bVar2 = true;
  *(long *)(p_Var5 + 0x10) = *(long *)(p_Var3 + 0x10);
LAB_008c9618:
  puVar10 = *(undefined8 **)(p_Var3 + 0x10);
  p_Var4 = (__tree_node_base *)*puVar10;
  if (p_Var4 == p_Var3) {
    *puVar10 = p_Var5;
    if (p_Var3 == param_1) {
      p_Var4 = (__tree_node_base *)0x0;
      param_1 = p_Var5;
    }
    else {
      p_Var4 = (__tree_node_base *)puVar10[1];
    }
  }
  else {
    puVar10[1] = p_Var5;
  }
  _Var1 = p_Var3[0x18];
  p_Var8 = param_1;
  if (p_Var3 != param_2) {
    lVar11 = *(long *)(param_2 + 0x10);
    *(long *)(p_Var3 + 0x10) = lVar11;
    *(__tree_node_base **)
     (lVar11 + (ulong)((__tree_node_base *)**(undefined8 **)(param_2 + 0x10) != param_2) * 8) =
         p_Var3;
    lVar11 = *(long *)param_2;
    *(long *)p_Var3 = lVar11;
    *(__tree_node_base **)(lVar11 + 0x10) = p_Var3;
    lVar11 = *(long *)(param_2 + 8);
    *(long *)(p_Var3 + 8) = lVar11;
    if (lVar11 != 0) {
      *(__tree_node_base **)(lVar11 + 0x10) = p_Var3;
    }
    p_Var8 = p_Var3;
    if (param_1 != param_2) {
      p_Var8 = param_1;
    }
    p_Var3[0x18] = param_2[0x18];
  }
  if ((_Var1 != (__tree_node_base)0x0) && (p_Var8 != (__tree_node_base *)0x0)) {
    if (!bVar2) {
      while( true ) {
        p_Var5 = *(__tree_node_base **)(p_Var4 + 0x10);
        p_Var3 = p_Var8;
        if (*(__tree_node_base **)p_Var5 != p_Var4) break;
        if (p_Var4[0x18] == (__tree_node_base)0x0) {
          p_Var4[0x18] = (__tree_node_base)0x1;
          p_Var5[0x18] = (__tree_node_base)0x0;
          p_Var9 = *(__tree_node_base **)(p_Var4 + 8);
          *(__tree_node_base **)p_Var5 = p_Var9;
          if (p_Var9 != (__tree_node_base *)0x0) {
            *(__tree_node_base **)(p_Var9 + 0x10) = p_Var5;
          }
          *(long *)(p_Var4 + 0x10) = *(long *)(p_Var5 + 0x10);
          puVar10 = *(undefined8 **)(p_Var5 + 0x10);
          if ((__tree_node_base *)*puVar10 == p_Var5) {
            *puVar10 = p_Var4;
            p_Var9 = *(__tree_node_base **)p_Var5;
          }
          else {
            puVar10[1] = p_Var4;
          }
          *(__tree_node_base **)(p_Var4 + 8) = p_Var5;
          *(__tree_node_base **)(p_Var5 + 0x10) = p_Var4;
          p_Var3 = p_Var4;
          if (p_Var8 != p_Var5) {
            p_Var3 = p_Var8;
          }
          p_Var5 = *(__tree_node_base **)p_Var9;
        }
        else {
          p_Var5 = *(__tree_node_base **)p_Var4;
          p_Var9 = p_Var4;
        }
        if ((p_Var5 != (__tree_node_base *)0x0) &&
           (p_Var4 = p_Var9, p_Var5[0x18] == (__tree_node_base)0x0)) {
LAB_008c98dc:
          plVar6 = *(long **)(p_Var4 + 0x10);
          p_Var4[0x18] = *(__tree_node_base *)(plVar6 + 3);
          *(undefined1 *)(plVar6 + 3) = 1;
          p_Var5[0x18] = (__tree_node_base)0x1;
          lVar11 = *plVar6;
          lVar7 = *(long *)(lVar11 + 8);
          *plVar6 = lVar7;
          if (lVar7 != 0) {
            *(long **)(lVar7 + 0x10) = plVar6;
          }
          *(long *)(lVar11 + 0x10) = plVar6[2];
          ((undefined8 *)plVar6[2])[*(long **)plVar6[2] != plVar6] = lVar11;
          *(long **)(lVar11 + 8) = plVar6;
          plVar6[2] = lVar11;
          return;
        }
        p_Var4 = *(__tree_node_base **)(p_Var9 + 8);
        if ((p_Var4 != (__tree_node_base *)0x0) && (p_Var4[0x18] == (__tree_node_base)0x0)) {
          if (p_Var5 != (__tree_node_base *)0x0) {
            p_Var4 = p_Var9;
            if (p_Var5[0x18] == (__tree_node_base)0x0) goto LAB_008c98dc;
            p_Var4 = *(__tree_node_base **)(p_Var9 + 8);
          }
          p_Var4[0x18] = (__tree_node_base)0x1;
          p_Var9[0x18] = (__tree_node_base)0x0;
          lVar11 = *(long *)p_Var4;
          *(long *)(p_Var9 + 8) = lVar11;
          if (lVar11 != 0) {
            *(__tree_node_base **)(lVar11 + 0x10) = p_Var9;
          }
          *(long *)(p_Var4 + 0x10) = *(long *)(p_Var9 + 0x10);
          (*(undefined8 **)(p_Var9 + 0x10))
          [(__tree_node_base *)**(undefined8 **)(p_Var9 + 0x10) != p_Var9] = p_Var4;
          *(__tree_node_base **)p_Var4 = p_Var9;
          *(__tree_node_base **)(p_Var9 + 0x10) = p_Var4;
          p_Var5 = p_Var9;
          goto LAB_008c98dc;
        }
        p_Var8 = *(__tree_node_base **)(p_Var9 + 0x10);
        p_Var9[0x18] = (__tree_node_base)0x0;
        p_Var5 = p_Var8;
        if (p_Var8 == p_Var3) {
LAB_008c981c:
          p_Var5[0x18] = (__tree_node_base)0x1;
          return;
        }
LAB_008c973c:
        p_Var5 = p_Var8;
        if (p_Var8[0x18] == (__tree_node_base)0x0) goto LAB_008c981c;
        p_Var4 = (__tree_node_base *)
                 (*(undefined8 **)(p_Var8 + 0x10))
                 [(__tree_node_base *)**(undefined8 **)(p_Var8 + 0x10) == p_Var8];
        p_Var8 = p_Var3;
      }
      if (p_Var4[0x18] == (__tree_node_base)0x0) {
        p_Var4[0x18] = (__tree_node_base)0x1;
        plVar6 = *(long **)(p_Var5 + 8);
        p_Var5[0x18] = (__tree_node_base)0x0;
        lVar11 = *plVar6;
        *(long *)(p_Var5 + 8) = lVar11;
        if (lVar11 != 0) {
          *(__tree_node_base **)(lVar11 + 0x10) = p_Var5;
        }
        plVar6[2] = *(long *)(p_Var5 + 0x10);
        (*(undefined8 **)(p_Var5 + 0x10))
        [(__tree_node_base *)**(undefined8 **)(p_Var5 + 0x10) != p_Var5] = plVar6;
        *plVar6 = (long)p_Var5;
        *(long **)(p_Var5 + 0x10) = plVar6;
        p_Var3 = p_Var4;
        if (p_Var8 != *(__tree_node_base **)p_Var4) {
          p_Var3 = p_Var8;
        }
        p_Var4 = *(__tree_node_base **)(*(__tree_node_base **)p_Var4 + 8);
        p_Var5 = *(__tree_node_base **)p_Var4;
        if (p_Var5 != (__tree_node_base *)0x0) goto LAB_008c96dc;
LAB_008c96e4:
        p_Var8 = *(__tree_node_base **)(p_Var4 + 8);
        if ((p_Var8 == (__tree_node_base *)0x0) || (p_Var8[0x18] != (__tree_node_base)0x0)) {
          p_Var8 = *(__tree_node_base **)(p_Var4 + 0x10);
          p_Var4[0x18] = (__tree_node_base)0x0;
          p_Var5 = p_Var3;
          if (p_Var8 != p_Var3) goto LAB_008c973c;
          goto LAB_008c981c;
        }
LAB_008c9830:
        p_Var3 = p_Var4;
        if (p_Var8[0x18] == (__tree_node_base)0x0) goto LAB_008c9934;
      }
      else {
        p_Var5 = *(__tree_node_base **)p_Var4;
        if (p_Var5 == (__tree_node_base *)0x0) goto LAB_008c96e4;
LAB_008c96dc:
        if (p_Var5[0x18] != (__tree_node_base)0x0) goto LAB_008c96e4;
        p_Var8 = *(__tree_node_base **)(p_Var4 + 8);
        if (p_Var8 != (__tree_node_base *)0x0) goto LAB_008c9830;
      }
      p_Var5[0x18] = (__tree_node_base)0x1;
      p_Var4[0x18] = (__tree_node_base)0x0;
      lVar11 = *(long *)(p_Var5 + 8);
      *(long *)p_Var4 = lVar11;
      if (lVar11 != 0) {
        *(__tree_node_base **)(lVar11 + 0x10) = p_Var4;
      }
      *(long *)(p_Var5 + 0x10) = *(long *)(p_Var4 + 0x10);
      (*(undefined8 **)(p_Var4 + 0x10))
      [(__tree_node_base *)**(undefined8 **)(p_Var4 + 0x10) != p_Var4] = p_Var5;
      *(__tree_node_base **)(p_Var5 + 8) = p_Var4;
      *(__tree_node_base **)(p_Var4 + 0x10) = p_Var5;
      p_Var3 = p_Var5;
      p_Var8 = p_Var4;
LAB_008c9934:
      lVar11 = *(long *)(p_Var3 + 0x10);
      p_Var3[0x18] = *(__tree_node_base *)(lVar11 + 0x18);
      *(undefined1 *)(lVar11 + 0x18) = 1;
      p_Var8[0x18] = (__tree_node_base)0x1;
      plVar6 = *(long **)(lVar11 + 8);
      lVar7 = *plVar6;
      *(long *)(lVar11 + 8) = lVar7;
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar11;
      }
      plVar6[2] = *(long *)(lVar11 + 0x10);
      (*(long **)(lVar11 + 0x10))[**(long **)(lVar11 + 0x10) != lVar11] = (long)plVar6;
      *plVar6 = lVar11;
      *(long **)(lVar11 + 0x10) = plVar6;
      return;
    }
    p_Var5[0x18] = (__tree_node_base)0x1;
  }
  return;
}

