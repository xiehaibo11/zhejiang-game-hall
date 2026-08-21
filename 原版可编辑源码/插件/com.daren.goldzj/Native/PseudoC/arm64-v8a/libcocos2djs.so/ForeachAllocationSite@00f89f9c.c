
/* v8::internal::Heap::ForeachAllocationSite(v8::internal::Object, std::__ndk1::function<void
   (v8::internal::AllocationSite)> const&) */

void __thiscall
v8::internal::Heap::ForeachAllocationSite(undefined8 param_1,ulong param_2,long param_3)

{
  uint *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_28;
  
  if ((param_2 & 1) != 0) {
    do {
      uVar3 = param_2 & 0xffffffff00000000;
      if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x55) {
        return;
      }
      plVar2 = *(long **)(param_3 + 0x20);
      local_28 = param_2;
      if (plVar2 == (long *)0x0) {
LAB_00f8a064:
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      local_28 = param_2;
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
      if ((*(uint *)(param_2 + 7) & 1) != 0) {
        uVar4 = uVar3 | *(uint *)(param_2 + 7);
        do {
          if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x55)
          break;
          plVar2 = *(long **)(param_3 + 0x20);
          local_28 = uVar4;
          if (plVar2 == (long *)0x0) goto LAB_00f8a064;
          (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
          puVar1 = (uint *)(uVar4 + 7);
          uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*puVar1;
        } while ((*puVar1 & 1) != 0);
      }
      puVar1 = (uint *)(param_2 + 0x17);
      param_2 = uVar3 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  return;
}

