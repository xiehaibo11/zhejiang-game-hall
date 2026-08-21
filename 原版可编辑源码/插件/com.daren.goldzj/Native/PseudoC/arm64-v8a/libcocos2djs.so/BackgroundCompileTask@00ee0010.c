
/* v8::internal::BackgroundCompileTask::BackgroundCompileTask(v8::internal::AccountingAllocator*,
   v8::internal::ParseInfo const*, v8::internal::AstRawString const*, v8::internal::FunctionLiteral
   const*, v8::internal::WorkerThreadRuntimeCallStats*, v8::internal::TimedHistogram*, int) */

void __thiscall
v8::internal::BackgroundCompileTask::BackgroundCompileTask
          (BackgroundCompileTask *this,AccountingAllocator *param_1,ParseInfo *param_2,
          AstRawString *param_3,FunctionLiteral *param_4,WorkerThreadRuntimeCallStats *param_5,
          TimedHistogram *param_6,int param_7)

{
  int iVar1;
  long *plVar2;
  Zone *pZVar3;
  FunctionLiteral *pFVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 local_60;
  long *local_58;
  long *local_38;
  
  pFVar4 = param_4;
  ParseInfo::FromParent
            (param_2,(ParseInfo *)param_1,(AccountingAllocator *)param_4,(FunctionLiteral *)param_3,
             (AstRawString *)param_4);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(int *)(this + 0x20) = param_7;
  *(WorkerThreadRuntimeCallStats **)(this + 0x28) = param_5;
  *(AccountingAllocator **)(this + 0x30) = param_1;
  *(TimedHistogram **)(this + 0x38) = param_6;
  (**(code **)(**(long **)(param_2 + 0x60) + 0x18))(&local_38);
  plVar2 = local_38;
  iVar1 = FunctionLiteral::start_position(param_4);
  uVar7 = plVar2[4];
  uVar5 = (ulong)iVar1;
  if (uVar5 < uVar7) {
    lVar6 = plVar2[1];
  }
  else {
    lVar6 = plVar2[1];
    if (uVar5 < uVar7 + (plVar2[3] - lVar6 >> 1)) {
      plVar2[2] = lVar6 + (uVar5 - uVar7) * 2;
      goto LAB_00ee00c0;
    }
  }
  plVar2[4] = uVar5;
  plVar2[2] = lVar6;
  if ((char)plVar2[6] == '\0') {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
LAB_00ee00c0:
  local_58 = local_38;
  local_38 = (long *)0x0;
  ParseInfo::set_character_stream(*(ParseInfo **)this,&local_58);
  plVar2 = local_58;
  local_58 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(param_4 + 0x50);
  if (plVar2 != (long *)0x0) {
    pZVar3 = (Zone *)(**(code **)(*plVar2 + 8))(plVar2,**(undefined8 **)this);
    puVar8 = *(undefined8 **)this;
    ConsumedPreparseData::For((ConsumedPreparseData *)*puVar8,pZVar3,(ZonePreparseData *)pFVar4);
    plVar2 = (long *)puVar8[0xd];
    puVar8[0xd] = local_60;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = local_38;
  local_38 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return;
}

