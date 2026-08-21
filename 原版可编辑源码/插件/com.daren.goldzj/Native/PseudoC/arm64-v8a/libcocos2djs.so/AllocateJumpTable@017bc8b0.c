
/* v8::internal::interpreter::BytecodeArrayBuilder::AllocateJumpTable(int, int) */

undefined8 * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::AllocateJumpTable
          (BytecodeArrayBuilder *this,int param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  Zone *this_00;
  
  uVar1 = ConstantArrayBuilder::InsertJumpTable((ConstantArrayBuilder *)(this + 0x18),(long)param_1)
  ;
  this_00 = *(Zone **)this;
  puVar2 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) < 0x18) {
    puVar2 = (undefined8 *)Zone::NewExpand(this_00,0x18);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar2 + 3;
  }
  *puVar2 = uVar1;
  puVar2[1] = 0xffffffffffffffff;
  *(int *)(puVar2 + 2) = param_1;
  *(int *)((long)puVar2 + 0x14) = param_2;
  return puVar2;
}

