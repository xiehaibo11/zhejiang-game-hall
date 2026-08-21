
/* v8::platform::DelayedTaskQueue::AppendDelayed(std::__ndk1::unique_ptr<v8::Task,
   std::__ndk1::default_delete<v8::Task> >, double) */

void __thiscall
v8::platform::DelayedTaskQueue::AppendDelayed
          (double param_1,DelayedTaskQueue *this,undefined8 *param_3)

{
  DelayedTaskQueue *pDVar1;
  __tree_node_base *p_Var2;
  undefined8 uVar3;
  DelayedTaskQueue *pDVar4;
  DelayedTaskQueue *pDVar5;
  double dVar6;
  
  dVar6 = (double)(**(code **)(this + 0xa8))();
  base::Mutex::Lock((Mutex *)(this + 0x30));
  p_Var2 = operator_new(0x30);
  *(double *)(p_Var2 + 0x20) = dVar6 + param_1;
  uVar3 = *param_3;
  *param_3 = 0;
  *(undefined8 *)(p_Var2 + 0x28) = uVar3;
  pDVar4 = this + 0x90;
  pDVar1 = *(DelayedTaskQueue **)pDVar4;
  pDVar5 = pDVar4;
  if (*(DelayedTaskQueue **)pDVar4 != (DelayedTaskQueue *)0x0) {
    do {
      while (pDVar4 = pDVar1, dVar6 + param_1 < *(double *)(pDVar4 + 0x20)) {
        pDVar1 = *(DelayedTaskQueue **)pDVar4;
        pDVar5 = pDVar4;
        if (*(DelayedTaskQueue **)pDVar4 == (DelayedTaskQueue *)0x0) goto LAB_00e9f7e4;
      }
      pDVar1 = *(DelayedTaskQueue **)(pDVar4 + 8);
    } while (*(DelayedTaskQueue **)(pDVar4 + 8) != (DelayedTaskQueue *)0x0);
    pDVar5 = pDVar4 + 8;
  }
LAB_00e9f7e4:
  *(undefined8 *)p_Var2 = 0;
  *(undefined8 *)(p_Var2 + 8) = 0;
  *(DelayedTaskQueue **)(p_Var2 + 0x10) = pDVar4;
  *(__tree_node_base **)pDVar5 = p_Var2;
  if (**(long **)(this + 0x88) != 0) {
    *(long *)(this + 0x88) = **(long **)(this + 0x88);
    p_Var2 = *(__tree_node_base **)pDVar5;
  }
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 0x90),p_Var2);
  *(long *)(this + 0x98) = *(long *)(this + 0x98) + 1;
  base::ConditionVariable::NotifyOne((ConditionVariable *)this);
  base::Mutex::Unlock((Mutex *)(this + 0x30));
  return;
}

