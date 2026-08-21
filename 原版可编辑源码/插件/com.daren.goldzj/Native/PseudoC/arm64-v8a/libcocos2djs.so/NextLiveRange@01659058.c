
/* v8::internal::compiler::RegisterAllocationData::NextLiveRange(v8::internal::MachineRepresentation)
    */

void __thiscall
v8::internal::compiler::RegisterAllocationData::NextLiveRange
          (RegisterAllocationData *this,uint param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  Zone *this_00;
  ulong uVar5;
  TopLevelLiveRange *local_18;
  
  lVar4 = *(long *)(this + 0x88);
  iVar2 = *(int *)(this + 0x188);
  uVar5 = *(long *)(this + 0x90) - lVar4 >> 3;
  uVar1 = (long)iVar2 + 1;
  *(int *)(this + 0x188) = (int)uVar1;
  if ((int)uVar5 <= iVar2) {
    local_18 = (TopLevelLiveRange *)0x0;
    if (uVar5 < uVar1) {
      std::__ndk1::
      vector<v8::internal::compiler::TopLevelLiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::TopLevelLiveRange*>>
      ::__append((vector<v8::internal::compiler::TopLevelLiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::TopLevelLiveRange*>>
                  *)(this + 0x88),uVar1 - uVar5,&local_18);
    }
    else if (uVar5 != uVar1) {
      *(ulong *)(this + 0x90) = lVar4 + uVar1 * 8;
    }
  }
  this_00 = *(Zone **)this;
  puVar3 = *(undefined4 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < 0xa8) {
    puVar3 = (undefined4 *)Zone::NewExpand(this_00,0xa8);
  }
  else {
    *(undefined4 **)(this_00 + 0x10) = puVar3 + 0x2a;
  }
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined4 **)(puVar3 + 8) = puVar3;
  puVar3[0x17] = iVar2;
  puVar3[0x18] = 0;
  *(undefined8 *)(puVar3 + 0x1c) = 0;
  *(undefined8 *)(puVar3 + 0x1e) = 0;
  *(undefined8 *)(puVar3 + 0x1a) = 0;
  *(undefined1 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x22) = 0;
  *(undefined4 **)(puVar3 + 0x24) = puVar3;
  *(undefined8 *)(puVar3 + 0x26) = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(undefined8 *)(puVar3 + 10) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0xe) = 0;
  *(undefined8 *)(puVar3 + 0x14) = 0;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  puVar3[0x16] = 0xffffffff;
  puVar3[0x21] = 0x7fffffff;
  *puVar3 = 0;
  puVar3[1] = (param_2 & 0xff) << 0xd | 0x8001000;
  *(undefined1 *)(puVar3 + 0x28) = 0;
  return;
}

