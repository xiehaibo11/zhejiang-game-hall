
/* v8::debug::Script::SetBreakpoint(v8::Local<v8::String>, v8::debug::Location*, int*) const */

bool __thiscall
v8::debug::Script::SetBreakpoint
          (Script *this,undefined8 param_2,Location *param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_24;
  
  uVar2 = *(uint *)(this + 4);
  local_24 = GetSourceOffset(this,param_3);
  uVar3 = internal::Debug::SetBreakPointForScript
                    (*(Debug **)((ulong)uVar2 << 0x20 | 0xb6c8),this,param_2,&local_24,param_4);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    local_50 = 0xffffffffffffffff;
    uStack_48 = 0xffffffffffffffff;
    internal::Script::GetPositionInfo(this,local_24,&local_50,1);
    param_3[8] = (Location)0x0;
    *(undefined8 *)param_3 = local_50;
  }
  return bVar1;
}

