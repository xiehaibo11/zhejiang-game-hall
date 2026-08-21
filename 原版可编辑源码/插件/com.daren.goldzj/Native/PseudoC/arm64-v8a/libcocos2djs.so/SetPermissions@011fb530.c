
/* v8::internal::VirtualMemory::SetPermissions(unsigned long, unsigned long,
   v8::PageAllocator::Permission) */

void v8::internal::VirtualMemory::SetPermissions(undefined8 *param_1,long param_2,long param_3)

{
  if (((ulong)(param_2 - param_1[1]) < (ulong)param_1[2]) &&
     ((ulong)((param_2 - param_1[1]) + param_3) <= (ulong)param_1[2])) {
                    /* WARNING: Could not recover jumptable at 0x011fb564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_1 + 0x48))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","InVM(address, size)");
}

