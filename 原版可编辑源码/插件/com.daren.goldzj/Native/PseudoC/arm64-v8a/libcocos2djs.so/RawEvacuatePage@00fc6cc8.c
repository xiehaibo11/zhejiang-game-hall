
/* v8::internal::FullEvacuator::RawEvacuatePage(v8::internal::MemoryChunk*, long*) */

void __thiscall
v8::internal::FullEvacuator::RawEvacuatePage(FullEvacuator *this,MemoryChunk *param_1,long *param_2)

{
  FullEvacuator *pFVar1;
  long *plVar2;
  FullEvacuator *pFVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long local_70;
  undefined1 local_64 [4];
  long *local_60;
  long *local_58;
  char *local_38;
  
  uVar4 = (uint)*(ulong *)(param_1 + 8);
  if ((uVar4 >> 9 & 1) == 0) {
    if ((uVar4 >> 10 & 1) == 0) {
      lVar6 = (ulong)((*(ulong *)(param_1 + 8) & 0x18) == 0) << 1;
    }
    else {
      lVar6 = 3;
    }
  }
  else {
    lVar6 = 1;
  }
  pFVar3 = this;
  if (DAT_01d3f240 == (FullEvacuator *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    pFVar3 = (FullEvacuator *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
    DAT_01d3f240 = pFVar3;
  }
  pFVar1 = DAT_01d3f240;
  if (((byte)*DAT_01d3f240 & 5) != 0) {
    local_38 = "evacuation_mode";
    local_64[0] = 2;
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    local_70 = lVar6;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x18))
              (plVar2,0x58,pFVar1,"FullEvacuator::RawEvacuatePage",0,0,0,1,&local_38,local_64,
               &local_70,&local_60,0);
    plVar2 = local_58;
    local_58 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_60;
    local_60 = (long *)0x0;
    pFVar3 = (FullEvacuator *)0x0;
    if (plVar2 != (long *)0x0) {
      pFVar3 = (FullEvacuator *)(**(code **)(*plVar2 + 8))();
    }
  }
  lVar5 = *(long *)(this + 0x3a0);
  *param_2 = *(long *)(param_1 + 0x68);
  local_38 = (char *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00fc6e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00fc6e38 + (ulong)(byte)(&DAT_019c3ad8)[lVar6] * 4))(pFVar3,lVar5 + 0x2701);
  return;
}

