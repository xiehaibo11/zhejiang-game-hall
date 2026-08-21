
/* v8::String::WriteOneByte(v8::Isolate*, unsigned char*, int, int, int) const */

int __thiscall
v8::String::WriteOneByte
          (String *this,Isolate *param_1,uchar *param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  Logger *this_00;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x3db);
  }
  this_00 = *(Logger **)(param_1 + 0x9558);
  uVar3 = internal::Logger::is_logging(this_00);
  if ((uVar3 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::String::Write");
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  plVar4 = (long *)internal::String::Flatten(param_1,this,0);
  if (param_4 == -1) {
    lVar5 = *plVar4;
    iVar2 = *(int *)(lVar5 + 7);
  }
  else {
    lVar5 = *plVar4;
    iVar2 = *(int *)(lVar5 + 7);
    if (param_4 <= iVar2 - param_3) {
      iVar2 = param_4 + param_3;
    }
  }
  if (iVar2 < 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar2 - param_3;
    if (iVar6 != 0 && param_3 <= iVar2) {
      internal::String::WriteToFlat<unsigned_char>(lVar5,param_2,param_3);
    }
    if ((((uint)param_5 >> 1 & 1) == 0) && (param_4 == -1 || iVar6 < param_4)) {
      param_2[iVar6] = '\0';
    }
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  if (local_80 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return iVar6;
}

