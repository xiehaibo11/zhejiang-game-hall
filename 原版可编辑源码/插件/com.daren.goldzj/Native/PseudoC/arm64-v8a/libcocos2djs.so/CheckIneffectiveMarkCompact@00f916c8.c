
/* v8::internal::Heap::CheckIneffectiveMarkCompact(unsigned long, double) */

void __thiscall
v8::internal::Heap::CheckIneffectiveMarkCompact(Heap *this,ulong param_1,double param_2)

{
  int iVar1;
  ulong uVar2;
  double dVar3;
  
  if (FLAG_detect_ineffective_gcs_near_heap_limit != '\0') {
    if ((param_2 < 0.4) &&
       (dVar3 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x58)), dVar3 * 0.8 <= (double)param_1)) {
      iVar1 = *(int *)(this + 0x1b8);
      *(int *)(this + 0x1b8) = iVar1 + 1;
      if (iVar1 + 1 != 4) {
        return;
      }
      uVar2 = InvokeNearHeapLimitCallback(this);
      if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FatalProcessOutOfMemory(this,"Ineffective mark-compacts near heap limit");
      }
    }
    *(undefined4 *)(this + 0x1b8) = 0;
  }
  return;
}

