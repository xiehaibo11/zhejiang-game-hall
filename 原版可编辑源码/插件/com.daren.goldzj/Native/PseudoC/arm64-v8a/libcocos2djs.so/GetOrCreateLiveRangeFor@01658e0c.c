
/* v8::internal::compiler::RegisterAllocationData::GetOrCreateLiveRangeFor(int) */

undefined4 * __thiscall
v8::internal::compiler::RegisterAllocationData::GetOrCreateLiveRangeFor
          (RegisterAllocationData *this,int param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  Zone *this_00;
  vector<v8::internal::compiler::TopLevelLiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::TopLevelLiveRange*>>
  *this_01;
  TopLevelLiveRange *local_38;
  
  this_01 = (vector<v8::internal::compiler::TopLevelLiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::TopLevelLiveRange*>>
             *)(this + 0x88);
  lVar3 = *(long *)this_01;
  uVar5 = *(long *)(this + 0x90) - lVar3 >> 3;
  if ((int)uVar5 <= param_1) {
    uVar1 = (long)param_1 + 1;
    local_38 = (TopLevelLiveRange *)0x0;
    if (uVar5 < uVar1) {
      std::__ndk1::
      vector<v8::internal::compiler::TopLevelLiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::TopLevelLiveRange*>>
      ::__append(this_01,uVar1 - uVar5,&local_38);
      puVar4 = *(undefined4 **)(*(long *)this_01 + (long)param_1 * 8);
      goto joined_r0x01658e88;
    }
    if (uVar5 != uVar1) {
      *(ulong *)(this + 0x90) = lVar3 + uVar1 * 8;
    }
  }
  puVar4 = *(undefined4 **)(lVar3 + (long)param_1 * 8);
joined_r0x01658e88:
  if (puVar4 == (undefined4 *)0x0) {
    uVar2 = InstructionSequence::GetRepresentation(*(InstructionSequence **)(this + 0x10),param_1);
    this_00 = *(Zone **)this;
    puVar4 = *(undefined4 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar4) < 0xa8) {
      puVar4 = (undefined4 *)Zone::NewExpand(this_00,0xa8);
    }
    else {
      *(undefined4 **)(this_00 + 0x10) = puVar4 + 0x2a;
    }
    *(undefined8 *)(puVar4 + 2) = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    *(undefined4 **)(puVar4 + 8) = puVar4;
    puVar4[0x17] = param_1;
    puVar4[0x18] = 0;
    *(undefined8 *)(puVar4 + 0x1c) = 0;
    *(undefined8 *)(puVar4 + 0x1e) = 0;
    *(undefined8 *)(puVar4 + 0x1a) = 0;
    *(undefined1 *)(puVar4 + 0x20) = 0;
    *(undefined8 *)(puVar4 + 0x22) = 0;
    *(undefined4 **)(puVar4 + 0x24) = puVar4;
    *(undefined8 *)(puVar4 + 0x26) = 0;
    *(undefined8 *)(puVar4 + 0xc) = 0;
    *(undefined8 *)(puVar4 + 10) = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0xe) = 0;
    *(undefined8 *)(puVar4 + 0x14) = 0;
    *(undefined8 *)(puVar4 + 0x12) = 0;
    puVar4[0x16] = 0xffffffff;
    puVar4[0x21] = 0x7fffffff;
    *puVar4 = 0;
    puVar4[1] = (uVar2 & 0xff) << 0xd | 0x8001000;
    *(undefined1 *)(puVar4 + 0x28) = 0;
    *(undefined4 **)(*(long *)this_01 + (long)param_1 * 8) = puVar4;
  }
  return puVar4;
}

