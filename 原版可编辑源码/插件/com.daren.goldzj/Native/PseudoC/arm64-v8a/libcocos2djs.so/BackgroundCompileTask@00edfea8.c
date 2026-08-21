
/* v8::internal::BackgroundCompileTask::BackgroundCompileTask(v8::internal::ScriptStreamingData*,
   v8::internal::Isolate*) */

void __thiscall
v8::internal::BackgroundCompileTask::BackgroundCompileTask
          (BackgroundCompileTask *this,ScriptStreamingData *param_1,Isolate *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  ParseInfo *pPVar4;
  ulong uVar5;
  uint uVar6;
  Logger *this_00;
  long *local_48;
  
  pPVar4 = operator_new(0xe0);
  ParseInfo::ParseInfo(pPVar4,param_2);
  *(ParseInfo **)this = pPVar4;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = FLAG_stack_size;
  *(long *)(this + 0x28) = *(long *)(param_2 + 0x9520) + 0xc928;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_2 + 0x95d0);
  *(long *)(this + 0x38) = *(long *)(param_2 + 0x9520) + 0x1540;
  uVar2 = *(undefined4 *)(param_2 + 0x2c60);
  *(undefined4 *)(param_2 + 0x2c60) = 2;
  this_00 = *(Logger **)(param_2 + 0x9558);
  uVar5 = Logger::is_logging(this_00);
  if ((uVar5 & 1) != 0) {
    Logger::ScriptEvent(this_00,4,*(undefined4 *)(*(long *)this + 0x34));
  }
  *(uint *)(*(long *)this + 8) = *(uint *)(*(long *)this + 8) | 1;
  *(uint *)(*(long *)this + 8) = *(uint *)(*(long *)this + 8) | 0x80;
  pPVar4 = *(ParseInfo **)this;
  uVar6 = *(uint *)(pPVar4 + 8);
  if ((uVar6 >> 0xb & 1) != 0) {
    ParseInfo::AllocateSourceRangeMap(pPVar4);
    pPVar4 = *(ParseInfo **)this;
    uVar6 = *(uint *)(pPVar4 + 8);
  }
  uVar1 = uVar6 | 8;
  if (FLAG_use_strict == '\0' && (uVar6 & 8) == 0) {
    uVar1 = uVar6 & 0xfffffff7;
  }
  *(uint *)(pPVar4 + 8) = uVar1;
  local_48 = (long *)ScannerStream::For(*(undefined8 *)param_1,*(undefined4 *)(param_1 + 8));
  ParseInfo::set_character_stream(*(ParseInfo **)this,&local_48);
  plVar3 = local_48;
  local_48 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_2 + 0x2c60) = uVar2;
  return;
}

