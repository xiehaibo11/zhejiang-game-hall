
/* universe::core::Service::worker(int) */

void __thiscall universe::core::Service::worker(Service *this,int param_1)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  ulong uVar4;
  long *local_48;
  long *local_40;
  long local_38;
  
  plVar2 = local_48;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  piVar3 = (int *)__emutls_get_address(__emutls_v__ZN8universe4core7Service15_curWorkerIndexE);
  *piVar3 = param_1;
  Computational::pop();
  if (local_48 == (long *)0x0) goto LAB_009f6a04;
  uVar4 = (**(code **)(*local_48 + 0x10))();
  if ((uVar4 & 1) == 0) {
LAB_009f69d0:
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
  }
  else {
    local_48 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      local_40 = plVar2;
      Computational::push((Computational *)(this + 0x70),&local_40);
      plVar2 = local_40;
      local_40 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      goto LAB_009f69d0;
    }
  }
  Computational::pop();
LAB_009f6a04:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

