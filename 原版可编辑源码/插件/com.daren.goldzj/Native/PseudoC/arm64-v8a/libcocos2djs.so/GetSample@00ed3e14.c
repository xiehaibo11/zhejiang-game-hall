
/* v8::CpuProfile::GetSample(int) const */

undefined8 __thiscall v8::CpuProfile::GetSample(CpuProfile *this,int param_1)

{
  return *(undefined8 *)
          (*(long *)(*(long *)(this + 0x40) +
                    ((ulong)(*(long *)(this + 0x58) + (long)param_1) / 0xaa) * 8) +
          ((ulong)(*(long *)(this + 0x58) + (long)param_1) % 0xaa) * 0x18);
}

