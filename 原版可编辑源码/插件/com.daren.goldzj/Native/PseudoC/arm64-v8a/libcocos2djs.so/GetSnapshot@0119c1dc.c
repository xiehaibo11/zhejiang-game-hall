
/* v8::internal::HeapProfiler::GetSnapshot(int) */

undefined8 __thiscall v8::internal::HeapProfiler::GetSnapshot(HeapProfiler *this,int param_1)

{
  if ((ulong)(long)param_1 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x10) + (long)param_1 * 8);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

