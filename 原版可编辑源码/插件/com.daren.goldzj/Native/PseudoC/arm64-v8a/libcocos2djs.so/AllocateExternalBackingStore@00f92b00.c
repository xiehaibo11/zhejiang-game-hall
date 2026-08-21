
/* v8::internal::Heap::AllocateExternalBackingStore(std::__ndk1::function<void* (unsigned long)>
   const&, unsigned long) */

void __thiscall
v8::internal::Heap::AllocateExternalBackingStore(Heap *this,function *param_1,ulong param_2)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  ulong local_38;
  
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    local_38 = param_2;
    lVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
    if (lVar1 == 0) {
      CollectGarbage(this,2,7,0);
      plVar3 = *(long **)(param_1 + 0x20);
      if (plVar3 == (long *)0x0) goto LAB_00f92c30;
      local_38 = param_2;
      lVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
      if (lVar1 == 0) {
        CollectGarbage(this,2,7,0);
        plVar3 = *(long **)(param_1 + 0x20);
        if (plVar3 == (long *)0x0) goto LAB_00f92c30;
        local_38 = param_2;
        lVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
        if (lVar1 == 0) {
          lVar1 = *(long *)(this + 0xcd0);
          if (*(char *)(lVar1 + 0x1b38) == '\0') {
            *(char *)(lVar1 + 0x1b38) = '\x01';
            piVar2 = (int *)StatsCounterBase::FindLocationInStatsTable
                                      ((StatsCounterBase *)(lVar1 + 0x1b20));
            *(int **)(lVar1 + 0x1b30) = piVar2;
          }
          else {
            piVar2 = *(int **)(lVar1 + 0x1b30);
          }
          if (piVar2 != (int *)0x0) {
            *piVar2 = *piVar2 + 1;
          }
          CollectAllAvailableGarbage(this,7);
          plVar3 = *(long **)(param_1 + 0x20);
          if (plVar3 == (long *)0x0) goto LAB_00f92c30;
          local_38 = param_2;
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
        }
      }
    }
    return;
  }
LAB_00f92c30:
  local_38 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

