
/* v8::internal::Parser::BuildInitializationBlock(v8::internal::ParserBase<v8::internal::Parser>::DeclarationParsingResult*)
    */

undefined8 * __thiscall
v8::internal::Parser::BuildInitializationBlock(Parser *this,DeclarationParsingResult *param_1)

{
  long lVar1;
  long lVar2;
  Zone *this_00;
  undefined8 *puVar3;
  ulong uVar4;
  Parser *local_48;
  ulong local_40;
  ulong uStack_38;
  
  local_48 = this + 200;
  local_40 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  lVar2 = *(long *)(param_1 + 0x18);
  uStack_38 = local_40;
  for (lVar1 = *(long *)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
    if (*(long *)(lVar1 + 8) != 0) {
      InitializeVariables(this,&local_48);
    }
  }
  this_00 = *(Zone **)(this + 0x68);
  puVar3 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < 0x20) {
    puVar3 = (undefined8 *)Zone::NewExpand(this_00,0x20);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar3 + 4;
  }
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0xc7ffffffff;
  puVar3[1] = 0;
  ScopedList<v8::internal::Statement*,void*>::CopyTo
            ((ScopedList<v8::internal::Statement*,void*> *)&local_48,(ZoneList *)(puVar3 + 1),
             *(Zone **)(this + 0x68));
  uVar4 = *(long *)(local_48 + 8) - *(long *)local_48 >> 3;
  if (local_40 < uVar4 || local_40 - uVar4 == 0) {
    if (local_40 < uVar4) {
      *(ulong *)(local_48 + 8) = *(long *)local_48 + local_40 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_48,local_40 - uVar4);
  }
  return puVar3;
}

