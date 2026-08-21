
/* v8::internal::compiler::RegisterAllocationData::NewLiveRange(int,
   v8::internal::MachineRepresentation) */

void __thiscall
v8::internal::compiler::RegisterAllocationData::NewLiveRange
          (RegisterAllocationData *this,undefined4 param_1,uint param_3)

{
  undefined4 *puVar1;
  Zone *this_00;
  
  this_00 = *(Zone **)this;
  puVar1 = *(undefined4 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) < 0xa8) {
    puVar1 = (undefined4 *)Zone::NewExpand(this_00,0xa8);
  }
  else {
    *(undefined4 **)(this_00 + 0x10) = puVar1 + 0x2a;
  }
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined4 **)(puVar1 + 8) = puVar1;
  puVar1[0x17] = param_1;
  puVar1[0x18] = 0;
  *(undefined8 *)(puVar1 + 0x1c) = 0;
  *(undefined8 *)(puVar1 + 0x1e) = 0;
  *(undefined8 *)(puVar1 + 0x1a) = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x22) = 0;
  *(undefined4 **)(puVar1 + 0x24) = puVar1;
  *(undefined8 *)(puVar1 + 0x26) = 0;
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined8 *)(puVar1 + 10) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0xe) = 0;
  *(undefined8 *)(puVar1 + 0x14) = 0;
  *(undefined8 *)(puVar1 + 0x12) = 0;
  puVar1[0x16] = 0xffffffff;
  puVar1[0x21] = 0x7fffffff;
  *puVar1 = 0;
  puVar1[1] = (param_3 & 0xff) << 0xd | 0x8001000;
  *(undefined1 *)(puVar1 + 0x28) = 0;
  return;
}

