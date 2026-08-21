
/* v8::CpuProfile::GetEndTime() const */

void __thiscall v8::CpuProfile::GetEndTime(CpuProfile *this)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(this + 0x30);
  base::TimeDelta::InMicroseconds((TimeDelta *)&local_18);
  return;
}

