
/* v8::internal::compiler::CodeGenerator::AddJumpTable(v8::internal::Label**, unsigned long) */

void __thiscall
v8::internal::compiler::CodeGenerator::AddJumpTable
          (CodeGenerator *this,Label **param_1,ulong param_2)

{
  undefined8 *puVar1;
  Zone *this_00;
  undefined8 uVar2;
  
  this_00 = *(Zone **)(this + 8);
  puVar1 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) < 0x20) {
    puVar1 = (undefined8 *)Zone::NewExpand(this_00,0x20);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar1 + 4;
  }
  uVar2 = *(undefined8 *)(this + 0x3d0);
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  *puVar1 = 0;
  puVar1[1] = uVar2;
  *(undefined8 **)(this + 0x3d0) = puVar1;
  return;
}

