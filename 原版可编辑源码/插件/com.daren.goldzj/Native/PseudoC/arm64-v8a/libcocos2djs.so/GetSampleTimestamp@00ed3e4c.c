
/* v8::CpuProfile::GetSampleTimestamp(int) const */

void __thiscall v8::CpuProfile::GetSampleTimestamp(CpuProfile *this,int param_1)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)
              (*(long *)(*(long *)(this + 0x40) +
                        ((ulong)(*(long *)(this + 0x58) + (long)param_1) / 0xaa) * 8) +
               ((ulong)(*(long *)(this + 0x58) + (long)param_1) % 0xaa) * 0x18 + 8);
  base::TimeDelta::InMicroseconds((TimeDelta *)&local_18);
  return;
}

