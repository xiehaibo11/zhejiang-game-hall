
/* v8::internal::CompilerDispatcher::InsertJob(std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,
   std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job> >) */

__tree_node_base * __thiscall
v8::internal::CompilerDispatcher::InsertJob(CompilerDispatcher *this,undefined8 *param_2)

{
  __tree_node_base *p_Var1;
  BackgroundCompileTask *this_00;
  undefined8 *puVar2;
  __tree_node_base *p_Var3;
  ulong uVar4;
  CompilerDispatcher *pCVar5;
  CompilerDispatcher *pCVar6;
  CompilerDispatcher *pCVar7;
  CompilerDispatcher *pCVar8;
  
  uVar4 = *(ulong *)(this + 0x50);
  *(ulong *)(this + 0x50) = uVar4 + 1;
  puVar2 = (undefined8 *)*param_2;
  *param_2 = 0;
  pCVar5 = this + 0x60;
  pCVar6 = *(CompilerDispatcher **)pCVar5;
  pCVar8 = pCVar5;
  if (pCVar6 != (CompilerDispatcher *)0x0) {
    pCVar5 = this + 0x60;
    do {
      while (pCVar7 = pCVar6, pCVar8 = pCVar7, uVar4 < *(ulong *)(pCVar7 + 0x20)) {
        pCVar5 = pCVar7;
        pCVar6 = *(CompilerDispatcher **)pCVar7;
        if (*(CompilerDispatcher **)pCVar7 == (CompilerDispatcher *)0x0) {
          p_Var3 = *(__tree_node_base **)pCVar7;
          goto joined_r0x00ef59a0;
        }
      }
      if (uVar4 <= *(ulong *)(pCVar7 + 0x20)) break;
      pCVar5 = pCVar7 + 8;
      pCVar6 = *(CompilerDispatcher **)pCVar5;
    } while (*(CompilerDispatcher **)pCVar5 != (CompilerDispatcher *)0x0);
  }
  p_Var3 = *(__tree_node_base **)pCVar5;
  pCVar7 = pCVar5;
joined_r0x00ef59a0:
  if (p_Var3 == (__tree_node_base *)0x0) {
    p_Var3 = operator_new(0x30);
    *(ulong *)(p_Var3 + 0x20) = uVar4;
    *(undefined8 **)(p_Var3 + 0x28) = puVar2;
    *(undefined8 *)p_Var3 = 0;
    *(undefined8 *)(p_Var3 + 8) = 0;
    *(CompilerDispatcher **)(p_Var3 + 0x10) = pCVar8;
    *(__tree_node_base **)pCVar7 = p_Var3;
    p_Var1 = p_Var3;
    if (**(long **)(this + 0x58) != 0) {
      *(long *)(this + 0x58) = **(long **)(this + 0x58);
      p_Var1 = *(__tree_node_base **)pCVar7;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x60),p_Var1);
    *(long *)(this + 0x68) = *(long *)(this + 0x68) + 1;
  }
  else if (puVar2 != (undefined8 *)0x0) {
    this_00 = (BackgroundCompileTask *)*puVar2;
    *puVar2 = 0;
    if (this_00 != (BackgroundCompileTask *)0x0) {
      BackgroundCompileTask::~BackgroundCompileTask(this_00);
      operator_delete(this_00);
    }
    operator_delete(puVar2);
  }
  return p_Var3;
}

