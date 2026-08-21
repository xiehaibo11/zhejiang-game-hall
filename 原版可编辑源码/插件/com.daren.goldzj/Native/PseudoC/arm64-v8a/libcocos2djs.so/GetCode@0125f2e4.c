
/* v8::internal::Assembler::GetCode(v8::internal::Isolate*, v8::internal::CodeDesc*,
   v8::internal::SafepointTableBuilder*, int) */

void __thiscall
v8::internal::Assembler::GetCode
          (Assembler *this,Isolate *param_1,CodeDesc *param_2,SafepointTableBuilder *param_3,
          int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  ConstantPool::Check((ConstantPool *)(this + 0x138),1,0,0);
  iVar3 = WriteCodeComments(this);
  AllocateAndInstallRequestedHeapObjects(this,param_1);
  iVar3 = (*(int *)(this + 0x20) - *(int *)(this + 0x10)) - iVar3;
  iVar1 = iVar3;
  if (param_4 != 0) {
    iVar1 = param_4;
  }
  iVar4 = iVar1;
  if (param_3 != (SafepointTableBuilder *)0x0) {
    iVar4 = SafepointTableBuilder::GetCodeOffset(param_3);
  }
  iVar2 = *(int *)(this + 0xd8);
  iVar5 = (**(code **)(**(long **)(this + 8) + 0x10))();
  CodeDesc::Initialize(param_2,this,iVar4,iVar1,iVar3,iVar3,iVar2 - iVar5);
  return;
}

