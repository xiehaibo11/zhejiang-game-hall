
/* v8::StringObject::New(v8::Isolate*, v8::Local<v8::String>) */

ulong * v8::StringObject::New(long param_1,ulong *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  Logger *this;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_40 = 0;
  uStack_58 = 0;
  local_60 = (RuntimeCallStats *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_60 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x3d9);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar2 = internal::Logger::is_logging(this);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::StringObject::New");
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  uVar2 = *param_2;
  if (((uVar2 & 1) == 0) ||
     (*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) < 0xa9)) {
    param_2 = (ulong *)internal::Object::ToObjectImpl(param_1,param_2,0);
  }
  if (param_2 != (ulong *)0x0) {
    *(undefined4 *)(param_1 + 0x2c60) = uVar1;
    if (local_60 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

