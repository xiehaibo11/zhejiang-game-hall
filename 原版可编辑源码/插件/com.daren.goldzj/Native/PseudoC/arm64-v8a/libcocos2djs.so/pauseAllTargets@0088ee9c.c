
/* cocos2d::Scheduler::pauseAllTargets() */

void cocos2d::Scheduler::pauseAllTargets(void)

{
  long *in_x0;
  __tree_node_base *p_Var1;
  long *in_x8;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar4 = in_x8 + 1;
  *plVar4 = 0;
  in_x8[2] = 0;
  *in_x8 = (long)plVar4;
  lVar5 = *in_x0;
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x21) = 1;
    plVar6 = plVar4;
    plVar8 = plVar4;
LAB_0088ef44:
    plVar7 = plVar6;
    if (*plVar7 == 0) goto LAB_0088ef64;
    while (lVar5 = *(long *)(lVar5 + 0x38), lVar5 != 0) {
      while( true ) {
        plVar3 = (long *)*plVar4;
        *(undefined1 *)(lVar5 + 0x21) = 1;
        plVar6 = plVar4;
        plVar8 = plVar4;
        if (plVar3 == (long *)0x0) goto LAB_0088ef44;
        do {
          while (plVar7 = plVar3, plVar8 = plVar7, (ulong)plVar7[4] <= *(ulong *)(lVar5 + 8)) {
            if (*(ulong *)(lVar5 + 8) <= (ulong)plVar7[4]) goto LAB_0088ef44;
            plVar6 = plVar7 + 1;
            plVar3 = (long *)*plVar6;
            if ((long *)*plVar6 == (long *)0x0) goto LAB_0088ef44;
          }
          plVar6 = plVar7;
          plVar3 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
        if (*plVar7 != 0) break;
LAB_0088ef64:
        p_Var1 = operator_new(0x28);
        uVar2 = *(undefined8 *)(lVar5 + 8);
        *(undefined8 *)p_Var1 = 0;
        *(undefined8 *)(p_Var1 + 8) = 0;
        *(long **)(p_Var1 + 0x10) = plVar8;
        *(undefined8 *)(p_Var1 + 0x20) = uVar2;
        *plVar7 = (long)p_Var1;
        if (*(long *)*in_x8 != 0) {
          *in_x8 = *(long *)*in_x8;
          p_Var1 = (__tree_node_base *)*plVar7;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)in_x8[1],p_Var1);
        in_x8[2] = in_x8[2] + 1;
        lVar5 = *(long *)(lVar5 + 0x38);
        if (lVar5 == 0) {
          return;
        }
      }
    }
  }
  return;
}

