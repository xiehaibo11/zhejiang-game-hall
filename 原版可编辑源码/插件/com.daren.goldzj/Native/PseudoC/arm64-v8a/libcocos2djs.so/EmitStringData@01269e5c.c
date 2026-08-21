
/* v8::internal::Assembler::EmitStringData(char const*) */

void __thiscall v8::internal::Assembler::EmitStringData(Assembler *this,char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  EmitData(this,param_1,(int)sVar1 + 1);
  EmitData(this,&DAT_019f37e1,
           ((*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 3U & 0xfffffffc) -
           (*(int *)(this + 0x20) - *(int *)(this + 0x10)));
  return;
}

