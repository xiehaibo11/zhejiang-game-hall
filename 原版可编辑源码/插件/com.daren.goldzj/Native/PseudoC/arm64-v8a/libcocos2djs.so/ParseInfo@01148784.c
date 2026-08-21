
/* v8::internal::ParseInfo::ParseInfo(v8::internal::Isolate*) */

void __thiscall v8::internal::ParseInfo::ParseInfo(ParseInfo *this,Isolate *param_1)

{
  ulong uVar1;
  uint uVar2;
  Logger *this_00;
  
  ParseInfo(this,param_1,*(AccountingAllocator **)(param_1 + 0x95d0));
  uVar2 = 1;
  if (*(int *)(param_1 + 0xfd8) >> 1 != 0x3fffffff) {
    uVar2 = (*(int *)(param_1 + 0xfd8) >> 1) + 1;
  }
  *(ulong *)(param_1 + 0xfd8) = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
  *(uint *)(this + 0x34) = uVar2;
  this_00 = *(Logger **)(param_1 + 0x9558);
  uVar1 = Logger::is_logging(this_00);
  if ((uVar1 & 1) != 0) {
    Logger::ScriptEvent(this_00,0,*(undefined4 *)(this + 0x34));
    return;
  }
  return;
}

