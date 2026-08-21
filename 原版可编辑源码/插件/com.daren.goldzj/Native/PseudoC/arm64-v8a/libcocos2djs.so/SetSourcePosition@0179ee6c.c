
/* v8::internal::compiler::RawMachineAssembler::SetSourcePosition(char const*, int) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::SetSourcePosition
          (RawMachineAssembler *this,char *param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = Isolate::LookupOrAddExternallyCompiledFilename(*(char **)this);
  *(ulong *)(*(long *)(this + 0x18) + 0x10) =
       (-(ulong)((uint)param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uint)param_2 << 1) &
       0xffff8000001fffff | -(uVar1 >> 0x1f & 1) & 0xffe0000000000000 | (uVar1 & 0xfc0003ff) << 0x15
       | 1;
  return;
}

