
/* v8::internal::compiler::CodeGenerator::CreateFrameAccessState(v8::internal::compiler::Frame*) */

void __thiscall
v8::internal::compiler::CodeGenerator::CreateFrameAccessState(CodeGenerator *this,Frame *param_1)

{
  undefined8 *puVar1;
  Zone *this_00;
  
  FinishFrame(this,param_1);
  this_00 = *(Zone **)(this + 8);
  puVar1 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar1) < 0x18) {
    puVar1 = (undefined8 *)Zone::NewExpand(this_00,0x18);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar1 + 3;
  }
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined4 *)((long)puVar1 + 0xc) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 **)(this + 0x18) = puVar1;
  return;
}

