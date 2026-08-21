
/* v8::internal::Heap::EvaluateOldSpaceLocalPretenuring(unsigned long) */

void __thiscall v8::internal::Heap::EvaluateOldSpaceLocalPretenuring(Heap *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Heap *pHVar8;
  code *pcVar9;
  double dVar10;
  char local_84 [4];
  undefined **local_80;
  char *pcStack_78;
  undefined1 local_70;
  Heap *local_68;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(**(long **)(this + 0x130) + 0x50))();
  lVar3 = (**(code **)(**(long **)(this + 0x138) + 0x50))(*(long **)(this + 0x138));
  lVar4 = (**(code **)(**(long **)(this + 0x140) + 0x50))(*(long **)(this + 0x140));
  lVar5 = (**(code **)(**(long **)(this + 0x148) + 0x50))(*(long **)(this + 0x148));
  lVar6 = (**(code **)(**(long **)(this + 0x150) + 0x50))(*(long **)(this + 0x150));
  lVar7 = (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
  pHVar8 = (Heap *)(**(code **)(**(long **)(this + 0x160) + 0x50))(*(long **)(this + 0x160));
  dVar10 = ((double)(pHVar8 + lVar3 + lVar2 + lVar4 + lVar5 + lVar6 + lVar7) * 100.0) /
           (double)param_1;
  if (10.0 <= dVar10) goto LAB_00f91c60;
  local_84[0] = '\0';
  pcStack_78 = local_84;
  local_80 = &PTR_FUN_01ca7df0;
  local_70 = 1;
  local_68 = this;
  local_60 = &local_80;
  ForeachAllocationSite(pHVar8,*(undefined8 *)(this + 0x5f0),&local_80);
  if (&local_80 == local_60) {
    pcVar9 = (code *)(*local_60)[4];
LAB_00f91c24:
    (*pcVar9)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_60)[5];
    goto LAB_00f91c24;
  }
  if (local_84[0] != '\0') {
    StackGuard::RequestInterrupt((StackGuard *)(*(long *)(this + 0x30) + 0x48),0x10);
  }
  if (FLAG_trace_pretenuring != '\0') {
    PrintF("Deopt all allocation sites dependent code due to low survival rate in the old generation %f\n"
           ,dVar10);
  }
LAB_00f91c60:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

