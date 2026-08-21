
/* v8::internal::PatchingAssembler::PatchingAssembler(v8::internal::AssemblerOptions const&,
   unsigned char*, unsigned int) */

void __thiscall
v8::internal::PatchingAssembler::PatchingAssembler
          (PatchingAssembler *this,AssemblerOptions *param_1,uchar *param_2,uint param_3)

{
  long *plVar1;
  long *local_28;
  
  ExternalAssemblerBuffer((internal *)param_2,(void *)(ulong)(param_3 * 4 + 0x40),(int)param_2);
  Assembler::Assembler((Assembler *)this,param_1,&local_28);
  plVar1 = local_28;
  local_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(PatchingAssembler **)(this + 0x178) = this;
  *(undefined ***)this = &PTR__PatchingAssembler_01cbcf38;
  ConstantPool::BlockScope::BlockScope((BlockScope *)(this + 0x180),(Assembler *)this,0);
  Assembler::CheckVeneerPool(*(Assembler **)(this + 0x178),false,true,0);
  Assembler::StartBlockVeneerPool(*(Assembler **)(this + 0x178));
  return;
}

