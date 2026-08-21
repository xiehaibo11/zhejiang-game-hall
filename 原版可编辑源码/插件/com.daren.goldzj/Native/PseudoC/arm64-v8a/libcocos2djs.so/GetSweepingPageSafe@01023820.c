
/* v8::internal::Sweeper::GetSweepingPageSafe(v8::internal::AllocationSpace) */

undefined8 __thiscall v8::internal::Sweeper::GetSweepingPageSafe(Sweeper *this,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  base::Mutex::Lock((Mutex *)(this + 0x40));
  lVar1 = *(long *)(this + (long)param_2 * 0x18 + 0x88);
  if (*(long *)(this + (long)param_2 * 0x18 + 0x80) == lVar1) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(lVar1 + -8);
    uVar3 = *puVar2;
    *(undefined8 **)(this + (long)param_2 * 0x18 + 0x88) = puVar2;
  }
  base::Mutex::Unlock((Mutex *)(this + 0x40));
  return uVar3;
}

