
/* v8::Map::Clear() */

void __thiscall v8::Map::Clear(Map *this)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
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
  lVar3 = (ulong)*(uint *)(this + 4) << 0x20;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_60 = (RuntimeCallStats *)(*(long *)(lVar3 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x380);
  }
  this_00 = *(Logger **)(lVar3 + 0x9558);
  uVar2 = internal::Logger::is_logging(this_00);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Map::Clear");
  }
  uVar1 = *(undefined4 *)(lVar3 + 0x2c60);
  *(undefined4 *)(lVar3 + 0x2c60) = 5;
  internal::JSMap::Clear(lVar3,this);
  *(undefined4 *)(lVar3 + 0x2c60) = uVar1;
  if (local_60 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  return;
}

