
/* v8::internal::JSFunction::SetInitialMap(v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::HeapObject>) */

void v8::internal::JSFunction::SetInitialMap(ulong *param_1,ulong *param_2,int *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  Logger *this;
  ulong uVar4;
  uint *puVar5;
  ulong local_48;
  
  uVar3 = *param_2;
  if (*(int *)(uVar3 + 0xf) != *param_3) {
    Map::SetPrototype((ulong)*(uint *)((long)param_1 + 4) << 0x20,param_2,param_3,1);
    uVar3 = *param_2;
  }
  uVar4 = *param_1;
  *(int *)(uVar4 + 0x1b) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x1b,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x1b,uVar3);
    }
  }
  uVar4 = *param_2;
  uVar3 = *param_1;
  puVar5 = (uint *)(uVar4 + 0x13);
  if (((*puVar5 & 1) != 0) &&
     (*(short *)((uVar4 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*puVar5) - 1)) == 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
  }
  *puVar5 = (uint)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,puVar5,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,puVar5,uVar3);
    }
  }
  if (FLAG_trace_maps != '\0') {
    this = *(Logger **)((ulong)*(uint *)((long)param_1 + 4) << 0x20 | 0x9558);
    uVar3 = Logger::is_logging(this);
    if ((uVar3 & 1) != 0) {
      uVar3 = *param_2;
      local_48 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xb);
      uVar1 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_48);
      Logger::MapEvent(this,"InitialMap",0,uVar3,&DAT_0189703a,uVar1);
    }
  }
  return;
}

