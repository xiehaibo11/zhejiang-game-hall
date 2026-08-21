
/* v8::Map::AsArray() const */

undefined8 __thiscall v8::Map::AsArray(Map *this)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  Logger *this_00;
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
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x37f);
  }
  this_00 = *(Logger **)(lVar4 + 0x9558);
  uVar2 = internal::Logger::is_logging(this_00);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Map::AsArray");
  }
  uVar1 = *(undefined4 *)(lVar4 + 0x2c60);
  *(undefined4 *)(lVar4 + 0x2c60) = 5;
  uVar3 = FUN_00ec5fa8(lVar4,*(ulong *)this & 0xffffffff00000000 |
                             (ulong)*(uint *)(*(ulong *)this + 0xb),0,0x413);
  *(undefined4 *)(lVar4 + 0x2c60) = uVar1;
  if (local_60 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  return uVar3;
}

