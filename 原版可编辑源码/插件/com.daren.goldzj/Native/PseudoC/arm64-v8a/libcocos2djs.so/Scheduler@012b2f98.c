
/* v8::internal::compiler::Scheduler::Scheduler(v8::internal::Zone*, v8::internal::compiler::Graph*,
   v8::internal::compiler::Schedule*, v8::base::Flags<v8::internal::compiler::Scheduler::Flag, int>,
   unsigned long, v8::internal::TickCounter*) */

void __thiscall
v8::internal::compiler::Scheduler::Scheduler
          (Scheduler *this,Zone *param_1,long param_2,long param_3,undefined4 param_5,long param_6,
          undefined8 param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *(Zone **)this = param_1;
  *(long *)(this + 8) = param_2;
  *(long *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x18) = param_5;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(Zone **)(this + 0x38) = param_1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(Zone **)(this + 0x58) = param_1;
  *(Zone **)(this + 0x80) = param_1;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(Zone **)(this + 0xa0) = param_1;
  *(Zone **)(this + 200) = param_1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xe8) = param_7;
  if (param_6 == 0) {
    lVar4 = 0;
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
    uVar3 = param_6 * 0x10;
    if (uVar3 < (ulong)(*(long *)(param_1 + 0x18) - lVar2) ||
        uVar3 - (*(long *)(param_1 + 0x18) - lVar2) == 0) {
      *(ulong *)(param_1 + 0x10) = lVar2 + uVar3;
    }
    else {
      lVar2 = Zone::NewExpand(param_1,uVar3);
    }
    lVar1 = *(long *)(this + 0xb0);
    lVar4 = lVar2;
    for (lVar6 = *(long *)(this + 0xb8); lVar6 != lVar1; lVar6 = lVar6 + -0x10) {
      uVar7 = *(undefined8 *)(lVar6 + -0x10);
      *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(lVar6 + -8);
      *(undefined8 *)(lVar4 + -0x10) = uVar7;
      lVar4 = lVar4 + -0x10;
    }
    param_3 = *(long *)(this + 0x10);
    *(long *)(this + 0xb0) = lVar4;
    *(long *)(this + 0xb8) = lVar2;
    *(long *)(this + 0xc0) = lVar2 + param_6 * 0x10;
  }
  uVar3 = (ulong)*(uint *)(param_2 + 0x1c);
  local_40 = *(undefined8 *)(param_3 + 0x68);
  uVar5 = lVar2 - lVar4 >> 4;
  uStack_38 = 0;
  if (uVar5 < uVar3) {
    std::__ndk1::
    vector<v8::internal::compiler::Scheduler::SchedulerData,v8::internal::ZoneAllocator<v8::internal::compiler::Scheduler::SchedulerData>>
    ::__append((vector<v8::internal::compiler::Scheduler::SchedulerData,v8::internal::ZoneAllocator<v8::internal::compiler::Scheduler::SchedulerData>>
                *)(this + 0xb0),uVar3 - uVar5,(SchedulerData *)&local_40);
  }
  else if (uVar5 != uVar3) {
    *(ulong *)(this + 0xb8) = lVar4 + uVar3 * 0x10;
  }
  return;
}

