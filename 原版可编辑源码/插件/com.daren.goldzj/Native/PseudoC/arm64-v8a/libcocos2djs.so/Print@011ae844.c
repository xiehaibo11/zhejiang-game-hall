
/* v8::internal::CpuProfile::Print() */

void __thiscall v8::internal::CpuProfile::Print(CpuProfile *this)

{
  base::OS::Print("[Top down]:\n");
  ProfileNode::Print(*(ProfileNode **)(this + 0x88),0);
  return;
}

