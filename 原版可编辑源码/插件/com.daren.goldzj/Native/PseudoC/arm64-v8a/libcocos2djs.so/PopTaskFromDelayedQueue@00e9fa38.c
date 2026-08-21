
/* v8::platform::DelayedTaskQueue::PopTaskFromDelayedQueue(double) */

void v8::platform::DelayedTaskQueue::PopTaskFromDelayedQueue(double param_1)

{
  long in_x0;
  long *plVar1;
  undefined8 *in_x8;
  long *plVar2;
  __tree_node_base *p_Var3;
  long lVar4;
  __tree_node_base *p_Var5;
  undefined8 uVar6;
  
  if ((*(long *)(in_x0 + 0x98) == 0) ||
     (p_Var5 = *(__tree_node_base **)(in_x0 + 0x88), param_1 < *(double *)(p_Var5 + 0x20))) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(p_Var5 + 0x28);
    *(undefined8 *)(p_Var5 + 0x28) = 0;
    plVar1 = *(long **)(p_Var5 + 8);
    if (*(long **)(p_Var5 + 8) == (long *)0x0) {
      p_Var3 = p_Var5 + 0x10;
      plVar2 = *(long **)p_Var3;
      if ((__tree_node_base *)*plVar2 != p_Var5) {
        do {
          lVar4 = *(long *)p_Var3;
          p_Var3 = (__tree_node_base *)(lVar4 + 0x10);
          plVar2 = *(long **)p_Var3;
        } while (*plVar2 != lVar4);
      }
    }
    else {
      do {
        plVar2 = plVar1;
        plVar1 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
    if (*(__tree_node_base **)(in_x0 + 0x88) == p_Var5) {
      *(long **)(in_x0 + 0x88) = plVar2;
    }
    *(long *)(in_x0 + 0x98) = *(long *)(in_x0 + 0x98) + -1;
    std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(in_x0 + 0x90),p_Var5);
    plVar1 = *(long **)(p_Var5 + 0x28);
    *(undefined8 *)(p_Var5 + 0x28) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    operator_delete(p_Var5);
  }
  *in_x8 = uVar6;
  return;
}

