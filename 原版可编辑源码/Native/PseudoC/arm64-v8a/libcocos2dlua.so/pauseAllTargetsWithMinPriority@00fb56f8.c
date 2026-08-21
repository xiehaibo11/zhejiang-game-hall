
/* cocos2d::Scheduler::pauseAllTargetsWithMinPriority(int) */

void cocos2d::Scheduler::pauseAllTargetsWithMinPriority(int param_1)

{
  ulong uVar1;
  __tree_node_base *p_Var2;
  int in_w1;
  long *in_x8;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  uVar1 = (ulong)(uint)param_1;
  plVar6 = in_x8 + 1;
  *plVar6 = 0;
  in_x8[2] = 0;
  *in_x8 = (long)plVar6;
  lVar7 = *(long *)(uVar1 + 0x60);
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 0x20) = 1;
    plVar10 = plVar6;
    plVar11 = plVar6;
LAB_00fb5798:
    plVar9 = plVar10;
    if (*plVar9 != 0) goto LAB_00fb5800;
    do {
      p_Var2 = operator_new(0x28);
      uVar3 = *(undefined8 *)(lVar7 + 8);
      *(undefined8 *)p_Var2 = 0;
      *(undefined8 *)(p_Var2 + 8) = 0;
      *(long **)(p_Var2 + 0x10) = plVar11;
      *(undefined8 *)(p_Var2 + 0x20) = uVar3;
      *plVar9 = (long)p_Var2;
      if (*(long *)*in_x8 != 0) {
        *in_x8 = *(long *)*in_x8;
        p_Var2 = (__tree_node_base *)*plVar9;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)in_x8[1],p_Var2);
      in_x8[2] = in_x8[2] + 1;
      lVar7 = *(long *)(lVar7 + 0x38);
      while( true ) {
        if (lVar7 == 0) goto LAB_00fb5818;
        plVar5 = (long *)*plVar6;
        *(undefined1 *)(lVar7 + 0x20) = 1;
        plVar10 = plVar6;
        plVar11 = plVar6;
        if (plVar5 == (long *)0x0) goto LAB_00fb5798;
        do {
          while (plVar9 = plVar5, plVar11 = plVar9, (ulong)plVar9[4] <= *(ulong *)(lVar7 + 8)) {
            if (*(ulong *)(lVar7 + 8) <= (ulong)plVar9[4]) goto LAB_00fb5798;
            plVar10 = plVar9 + 1;
            plVar5 = (long *)*plVar10;
            if ((long *)*plVar10 == (long *)0x0) goto LAB_00fb5798;
          }
          plVar10 = plVar9;
          plVar5 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
        if (*plVar9 == 0) break;
LAB_00fb5800:
        lVar7 = *(long *)(lVar7 + 0x38);
      }
    } while( true );
  }
LAB_00fb5818:
  if (in_w1 < 0) {
    lVar7 = *(long *)(uVar1 + 0x28);
    if (lVar7 != 0) {
      do {
        lVar8 = *(long *)(lVar7 + 8);
        if (in_w1 <= *(int *)(lVar7 + 0x48)) {
          *(undefined1 *)(lVar7 + 0x4c) = 1;
          plVar10 = plVar6;
          plVar11 = plVar6;
          if ((long *)*plVar6 == (long *)0x0) {
LAB_00fb58b4:
            lVar4 = *plVar10;
          }
          else {
            plVar9 = (long *)*plVar6;
            do {
              while (plVar11 = plVar9, (ulong)plVar11[4] <= *(ulong *)(lVar7 + 0x40)) {
                if (*(ulong *)(lVar7 + 0x40) <= (ulong)plVar11[4]) goto LAB_00fb58b4;
                plVar10 = plVar11 + 1;
                plVar9 = (long *)*plVar10;
                if ((long *)*plVar10 == (long *)0x0) goto LAB_00fb58b4;
              }
              plVar10 = plVar11;
              plVar9 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
            lVar4 = *plVar11;
          }
          if (lVar4 == 0) {
            p_Var2 = operator_new(0x28);
            uVar3 = *(undefined8 *)(lVar7 + 0x40);
            *(undefined8 *)p_Var2 = 0;
            *(undefined8 *)(p_Var2 + 8) = 0;
            *(long **)(p_Var2 + 0x10) = plVar11;
            *(undefined8 *)(p_Var2 + 0x20) = uVar3;
            *plVar10 = (long)p_Var2;
            if (*(long *)*in_x8 != 0) {
              *in_x8 = *(long *)*in_x8;
              p_Var2 = (__tree_node_base *)*plVar10;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      ((__tree_node_base *)in_x8[1],p_Var2);
            in_x8[2] = in_x8[2] + 1;
          }
        }
        lVar7 = lVar8;
      } while (lVar8 != 0);
      goto LAB_00fb5904;
    }
  }
  else {
LAB_00fb5904:
    if (0 < in_w1) goto LAB_00fb59e8;
  }
  lVar7 = *(long *)(uVar1 + 0x30);
  while (lVar8 = lVar7, lVar8 != 0) {
    *(undefined1 *)(lVar8 + 0x4c) = 1;
    lVar7 = *(long *)(lVar8 + 8);
    plVar10 = plVar6;
    plVar11 = plVar6;
    if ((long *)*plVar6 == (long *)0x0) {
LAB_00fb5998:
      lVar4 = *plVar10;
    }
    else {
      plVar9 = (long *)*plVar6;
      do {
        while (plVar11 = plVar9, (ulong)plVar11[4] <= *(ulong *)(lVar8 + 0x40)) {
          if (*(ulong *)(lVar8 + 0x40) <= (ulong)plVar11[4]) goto LAB_00fb5998;
          plVar10 = plVar11 + 1;
          plVar9 = (long *)*plVar10;
          if ((long *)*plVar10 == (long *)0x0) goto LAB_00fb5998;
        }
        plVar10 = plVar11;
        plVar9 = (long *)*plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
      lVar4 = *plVar11;
    }
    if (lVar4 == 0) {
      p_Var2 = operator_new(0x28);
      uVar3 = *(undefined8 *)(lVar8 + 0x40);
      *(undefined8 *)p_Var2 = 0;
      *(undefined8 *)(p_Var2 + 8) = 0;
      *(long **)(p_Var2 + 0x10) = plVar11;
      *(undefined8 *)(p_Var2 + 0x20) = uVar3;
      *plVar10 = (long)p_Var2;
      if (*(long *)*in_x8 != 0) {
        *in_x8 = *(long *)*in_x8;
        p_Var2 = (__tree_node_base *)*plVar10;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)in_x8[1],p_Var2);
      in_x8[2] = in_x8[2] + 1;
    }
  }
LAB_00fb59e8:
  lVar7 = *(long *)(uVar1 + 0x38);
  do {
    do {
      lVar8 = lVar7;
      if (lVar8 == 0) {
        return;
      }
      lVar7 = *(long *)(lVar8 + 8);
    } while (*(int *)(lVar8 + 0x48) < in_w1);
    *(undefined1 *)(lVar8 + 0x4c) = 1;
    plVar10 = plVar6;
    plVar11 = plVar6;
    if ((long *)*plVar6 == (long *)0x0) {
LAB_00fb5a80:
      lVar4 = *plVar10;
    }
    else {
      plVar9 = (long *)*plVar6;
      do {
        while (plVar11 = plVar9, (ulong)plVar11[4] <= *(ulong *)(lVar8 + 0x40)) {
          if (*(ulong *)(lVar8 + 0x40) <= (ulong)plVar11[4]) goto LAB_00fb5a80;
          plVar10 = plVar11 + 1;
          plVar9 = (long *)*plVar10;
          if ((long *)*plVar10 == (long *)0x0) goto LAB_00fb5a80;
        }
        plVar10 = plVar11;
        plVar9 = (long *)*plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
      lVar4 = *plVar11;
    }
    if (lVar4 == 0) {
      p_Var2 = operator_new(0x28);
      uVar3 = *(undefined8 *)(lVar8 + 0x40);
      *(undefined8 *)p_Var2 = 0;
      *(undefined8 *)(p_Var2 + 8) = 0;
      *(long **)(p_Var2 + 0x10) = plVar11;
      *(undefined8 *)(p_Var2 + 0x20) = uVar3;
      *plVar10 = (long)p_Var2;
      if (*(long *)*in_x8 != 0) {
        *in_x8 = *(long *)*in_x8;
        p_Var2 = (__tree_node_base *)*plVar10;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)in_x8[1],p_Var2);
      in_x8[2] = in_x8[2] + 1;
    }
  } while( true );
}

