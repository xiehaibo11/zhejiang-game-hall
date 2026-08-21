
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
  __tree_node_base *p_Var6;
  long *plVar7;
  __tree_node_base *p_Var8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  p_Var5 = *(__tree_node_base **)param_2;
  p_Var8 = param_2;
  if (p_Var5 == (__tree_node_base *)0x0) {
    p_Var5 = *(__tree_node_base **)(param_2 + 8);
joined_r0x008f3fac:
    if (p_Var5 == (__tree_node_base *)0x0) {
      bVar2 = false;
      p_Var6 = p_Var8 + 0x10;
      goto LAB_008f3fd0;
    }
  }
  else {
    p_Var6 = *(__tree_node_base **)(param_2 + 8);
    if (*(__tree_node_base **)(param_2 + 8) != (__tree_node_base *)0x0) {
      do {
        p_Var8 = p_Var6;
        p_Var6 = *(__tree_node_base **)p_Var8;
      } while (*(__tree_node_base **)p_Var8 != (__tree_node_base *)0x0);
      p_Var5 = *(__tree_node_base **)(p_Var8 + 8);
      goto joined_r0x008f3fac;
    }
  }
  p_Var6 = p_Var8 + 0x10;
  bVar2 = true;
  *(undefined8 *)(p_Var5 + 0x10) = *(undefined8 *)p_Var6;
LAB_008f3fd0:
  puVar10 = *(undefined8 **)(p_Var8 + 0x10);
  p_Var4 = (__tree_node_base *)*puVar10;
  if (p_Var4 == p_Var8) {
    *puVar10 = p_Var5;
    if (p_Var8 == param_1) {
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
  _Var1 = p_Var8[0x18];
  p_Var3 = param_1;
  if (p_Var8 != param_2) {
    lVar11 = *(long *)(param_2 + 0x10);
    *(long *)p_Var6 = lVar11;
    lVar9 = 0;
    if ((__tree_node_base *)**(undefined8 **)(param_2 + 0x10) != param_2) {
      lVar9 = 8;
    }
    *(__tree_node_base **)(lVar11 + lVar9) = p_Var8;
    lVar9 = *(long *)param_2;
    *(long *)p_Var8 = lVar9;
    *(__tree_node_base **)(lVar9 + 0x10) = p_Var8;
    lVar9 = *(long *)(param_2 + 8);
    *(long *)(p_Var8 + 8) = lVar9;
    if (lVar9 != 0) {
      *(__tree_node_base **)(lVar9 + 0x10) = p_Var8;
    }
    p_Var3 = p_Var8;
    if (param_1 != param_2) {
      p_Var3 = param_1;
    }
    p_Var8[0x18] = param_2[0x18];
  }
  if ((_Var1 != (__tree_node_base)0x0) && (p_Var3 != (__tree_node_base *)0x0)) {
    if (!bVar2) {
      do {
        p_Var8 = *(__tree_node_base **)(p_Var4 + 0x10);
        p_Var5 = p_Var3;
        if (*(__tree_node_base **)p_Var8 == p_Var4) {
          if (p_Var4[0x18] != (__tree_node_base)0x0) {
            lVar9 = *(long *)p_Var4;
            p_Var6 = p_Var4;
            if (lVar9 == 0) goto LAB_008f40f4;
LAB_008f40ec:
            if (*(char *)(lVar9 + 0x18) != '\0') goto LAB_008f40f4;
            p_Var5 = (__tree_node_base *)(lVar9 + 0x18);
LAB_008f4254:
            p_Var8 = p_Var6 + 0x10;
            p_Var4 = p_Var6 + 0x18;
LAB_008f42c0:
            plVar7 = *(long **)p_Var8;
            *p_Var4 = *(__tree_node_base *)(plVar7 + 3);
            *(undefined1 *)(plVar7 + 3) = 1;
            *p_Var5 = (__tree_node_base)0x1;
            lVar9 = *plVar7;
            lVar11 = *(long *)(lVar9 + 8);
            *plVar7 = lVar11;
            if (lVar11 != 0) {
              *(long **)(lVar11 + 0x10) = plVar7;
            }
            *(long *)(lVar9 + 0x10) = plVar7[2];
            lVar11 = 0;
            if (*(long **)plVar7[2] != plVar7) {
              lVar11 = 8;
            }
            *(long *)((long)plVar7[2] + lVar11) = lVar9;
            *(long **)(lVar9 + 8) = plVar7;
            plVar7[2] = lVar9;
            return;
          }
          p_Var4[0x18] = (__tree_node_base)0x1;
          p_Var8[0x18] = (__tree_node_base)0x0;
          p_Var6 = *(__tree_node_base **)(p_Var4 + 8);
          *(__tree_node_base **)p_Var8 = p_Var6;
          if (p_Var6 != (__tree_node_base *)0x0) {
            *(__tree_node_base **)(p_Var6 + 0x10) = p_Var8;
          }
          *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(p_Var8 + 0x10);
          puVar10 = *(undefined8 **)(p_Var8 + 0x10);
          if ((__tree_node_base *)*puVar10 == p_Var8) {
            *puVar10 = p_Var4;
            p_Var6 = *(__tree_node_base **)p_Var8;
          }
          else {
            puVar10[1] = p_Var4;
          }
          *(__tree_node_base **)(p_Var4 + 8) = p_Var8;
          *(__tree_node_base **)(p_Var8 + 0x10) = p_Var4;
          p_Var5 = p_Var4;
          if (p_Var3 != p_Var8) {
            p_Var5 = p_Var3;
          }
          lVar9 = *(long *)p_Var6;
          if (lVar9 != 0) goto LAB_008f40ec;
LAB_008f40f4:
          plVar7 = *(long **)(p_Var6 + 8);
          if ((plVar7 != (long *)0x0) && ((char)plVar7[3] == '\0')) {
            if (lVar9 != 0) {
              p_Var5 = (__tree_node_base *)(lVar9 + 0x18);
              if (*p_Var5 == (__tree_node_base)0x0) goto LAB_008f4254;
              plVar7 = *(long **)(p_Var6 + 8);
            }
            p_Var4 = (__tree_node_base *)(plVar7 + 3);
            *p_Var4 = (__tree_node_base)0x1;
            p_Var5 = p_Var6 + 0x18;
            *p_Var5 = (__tree_node_base)0x0;
            lVar9 = *plVar7;
            *(long *)(p_Var6 + 8) = lVar9;
            if (lVar9 != 0) {
              *(__tree_node_base **)(lVar9 + 0x10) = p_Var6;
            }
            p_Var8 = (__tree_node_base *)(plVar7 + 2);
            *(undefined8 *)p_Var8 = *(undefined8 *)(p_Var6 + 0x10);
            lVar9 = 0;
            if ((__tree_node_base *)**(undefined8 **)(p_Var6 + 0x10) != p_Var6) {
              lVar9 = 8;
            }
            *(long **)((long)*(undefined8 **)(p_Var6 + 0x10) + lVar9) = plVar7;
            *plVar7 = (long)p_Var6;
            *(long **)(p_Var6 + 0x10) = plVar7;
            goto LAB_008f42c0;
          }
          p_Var8 = *(__tree_node_base **)(p_Var6 + 0x10);
          p_Var6[0x18] = (__tree_node_base)0x0;
          p_Var6 = p_Var8;
          if (p_Var8 == p_Var5) {
LAB_008f41e0:
            p_Var8[0x18] = (__tree_node_base)0x1;
            return;
          }
        }
        else {
          if (p_Var4[0x18] == (__tree_node_base)0x0) {
            p_Var4[0x18] = (__tree_node_base)0x1;
            plVar7 = *(long **)(p_Var8 + 8);
            p_Var8[0x18] = (__tree_node_base)0x0;
            lVar9 = *plVar7;
            *(long *)(p_Var8 + 8) = lVar9;
            if (lVar9 != 0) {
              *(__tree_node_base **)(lVar9 + 0x10) = p_Var8;
            }
            plVar7[2] = *(long *)(p_Var8 + 0x10);
            lVar9 = 0;
            if ((__tree_node_base *)**(undefined8 **)(p_Var8 + 0x10) != p_Var8) {
              lVar9 = 8;
            }
            *(long **)((long)*(undefined8 **)(p_Var8 + 0x10) + lVar9) = plVar7;
            *plVar7 = (long)p_Var8;
            *(long **)(p_Var8 + 0x10) = plVar7;
            p_Var5 = p_Var4;
            if (p_Var3 != *(__tree_node_base **)p_Var4) {
              p_Var5 = p_Var3;
            }
            p_Var4 = *(__tree_node_base **)(*(__tree_node_base **)p_Var4 + 8);
            lVar9 = *(long *)p_Var4;
            if (lVar9 == 0) goto LAB_008f40bc;
LAB_008f40b4:
            if (*(char *)(lVar9 + 0x18) != '\0') goto LAB_008f40bc;
            lVar11 = *(long *)(p_Var4 + 8);
            if (lVar11 != 0) goto LAB_008f41f4;
LAB_008f41fc:
            p_Var6 = (__tree_node_base *)(lVar9 + 0x18);
            *p_Var6 = (__tree_node_base)0x1;
            p_Var5 = p_Var4 + 0x18;
            *p_Var5 = (__tree_node_base)0x0;
            lVar11 = *(long *)(lVar9 + 8);
            *(long *)p_Var4 = lVar11;
            if (lVar11 != 0) {
              *(__tree_node_base **)(lVar11 + 0x10) = p_Var4;
            }
            p_Var8 = (__tree_node_base *)(lVar9 + 0x10);
            *(undefined8 *)p_Var8 = *(undefined8 *)(p_Var4 + 0x10);
            lVar11 = 0;
            if ((__tree_node_base *)**(undefined8 **)(p_Var4 + 0x10) != p_Var4) {
              lVar11 = 8;
            }
            *(long *)((long)*(undefined8 **)(p_Var4 + 0x10) + lVar11) = lVar9;
            *(__tree_node_base **)(lVar9 + 8) = p_Var4;
            *(long *)(p_Var4 + 0x10) = lVar9;
LAB_008f4320:
            lVar9 = *(long *)p_Var8;
            *p_Var6 = *(__tree_node_base *)(lVar9 + 0x18);
            *(undefined1 *)(lVar9 + 0x18) = 1;
            *p_Var5 = (__tree_node_base)0x1;
            plVar7 = *(long **)(lVar9 + 8);
            lVar11 = *plVar7;
            *(long *)(lVar9 + 8) = lVar11;
            if (lVar11 != 0) {
              *(long *)(lVar11 + 0x10) = lVar9;
            }
            plVar7[2] = *(long *)(lVar9 + 0x10);
            lVar11 = 0;
            if (**(long **)(lVar9 + 0x10) != lVar9) {
              lVar11 = 8;
            }
            *(long **)((long)*(long **)(lVar9 + 0x10) + lVar11) = plVar7;
            *plVar7 = lVar9;
            *(long **)(lVar9 + 0x10) = plVar7;
            return;
          }
          lVar9 = *(long *)p_Var4;
          if (lVar9 != 0) goto LAB_008f40b4;
LAB_008f40bc:
          lVar11 = *(long *)(p_Var4 + 8);
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0x18) == '\0')) {
LAB_008f41f4:
            p_Var5 = (__tree_node_base *)(lVar11 + 0x18);
            if (*p_Var5 == (__tree_node_base)0x0) {
              p_Var8 = p_Var4 + 0x10;
              p_Var6 = p_Var4 + 0x18;
              goto LAB_008f4320;
            }
            goto LAB_008f41fc;
          }
          p_Var4[0x18] = (__tree_node_base)0x0;
          p_Var8 = p_Var5;
          p_Var6 = *(__tree_node_base **)(p_Var4 + 0x10);
          if (*(__tree_node_base **)(p_Var4 + 0x10) == p_Var5) goto LAB_008f41e0;
        }
        p_Var8 = p_Var6;
        if (p_Var8[0x18] == (__tree_node_base)0x0) goto LAB_008f41e0;
        p_Var4 = (__tree_node_base *)
                 (*(undefined8 **)(p_Var8 + 0x10))
                 [(__tree_node_base *)**(undefined8 **)(p_Var8 + 0x10) == p_Var8];
        p_Var3 = p_Var5;
      } while( true );
    }
    p_Var5[0x18] = (__tree_node_base)0x1;
  }
  return;
}

