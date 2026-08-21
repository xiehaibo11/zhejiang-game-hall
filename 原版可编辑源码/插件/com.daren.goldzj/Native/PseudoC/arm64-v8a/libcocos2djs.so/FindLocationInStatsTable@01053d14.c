
/* v8::internal::StatsCounterBase::FindLocationInStatsTable() const */

undefined8 __thiscall
v8::internal::StatsCounterBase::FindLocationInStatsTable(StatsCounterBase *this)

{
  undefined8 uVar1;
  
  if (*(code **)(*(long *)this + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01053d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)this + 0x18))(*(undefined8 *)(this + 8));
    return uVar1;
  }
  return 0;
}

