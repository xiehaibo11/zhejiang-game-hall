
/* v8::CpuProfile::GetStartTime() const */

void __thiscall v8::CpuProfile::GetStartTime(CpuProfile *this)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(this + 0x28);
  base::TimeDelta::InMicroseconds((TimeDelta *)&local_18);
  return;
}

