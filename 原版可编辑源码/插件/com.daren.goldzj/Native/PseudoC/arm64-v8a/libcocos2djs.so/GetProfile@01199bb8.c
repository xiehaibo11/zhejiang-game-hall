
/* v8::internal::CpuProfiler::GetProfile(int) */

undefined8 __thiscall v8::internal::CpuProfiler::GetProfile(CpuProfiler *this,int param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(this + 0x20) + 0x18);
  if ((ulong)(long)param_1 < (ulong)(*(long *)(*(long *)(this + 0x20) + 0x20) - lVar1 >> 3)) {
    return *(undefined8 *)(lVar1 + (long)param_1 * 8);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

