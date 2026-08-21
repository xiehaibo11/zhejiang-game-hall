
/* v8::Promise::HasHandler() */

byte __thiscall v8::Promise::HasHandler(Promise *this)

{
  undefined4 uVar1;
  ulong uVar2;
  byte bVar3;
  Logger *this_00;
  long lVar4;
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
  lVar4 = (ulong)*(uint *)(this + 4) << 0x20;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_60 = (RuntimeCallStats *)(*(long *)(lVar4 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x3bb);
  }
  this_00 = *(Logger **)(lVar4 + 0x9558);
  uVar2 = internal::Logger::is_logging(this_00);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Promise::HasRejectHandler");
  }
  uVar1 = *(undefined4 *)(lVar4 + 0x2c60);
  *(undefined4 *)(lVar4 + 0x2c60) = 5;
  uVar2 = *(ulong *)this;
  if (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x42d) {
    bVar3 = *(byte *)(uVar2 + 0xf) >> 3 & 1;
  }
  else {
    bVar3 = 0;
  }
  *(undefined4 *)(lVar4 + 0x2c60) = uVar1;
  if (local_60 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  return bVar3;
}

