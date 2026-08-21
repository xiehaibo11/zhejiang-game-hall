
/* v8::internal::Parser::InitializeVariables(v8::internal::ScopedList<v8::internal::Statement*,
   void*>*, v8::internal::VariableKind,
   v8::internal::ParserBase<v8::internal::Parser>::DeclarationParsingResult::Declaration const*) */

void __thiscall
v8::internal::Parser::InitializeVariables
          (Parser *this,undefined8 *param_1,undefined8 param_3,undefined8 *param_4)

{
  Zone *pZVar1;
  Assignment *pAVar2;
  vector<void*,std::__ndk1::allocator<void*>> *this_00;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  int *local_48;
  
  if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) == '\0') {
    iVar3 = *(int *)(param_4 + 2);
    if (iVar3 == -1) {
      piVar4 = (int *)param_4[1];
      iVar3 = *piVar4;
    }
    else {
      piVar4 = (int *)param_4[1];
    }
    pZVar1 = *(Zone **)(this + 0x68);
    uVar5 = *param_4;
    pAVar2 = *(Assignment **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pAVar2) < 0x18) {
      pAVar2 = (Assignment *)Zone::NewExpand(pZVar1,0x18);
    }
    else {
      *(Assignment **)(pZVar1 + 0x10) = pAVar2 + 0x18;
    }
    Assignment::Assignment(pAVar2,0x18,0x10,uVar5,piVar4,iVar3);
    pZVar1 = *(Zone **)(this + 0x68);
    local_48 = *(int **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)local_48) < 0x10) {
      local_48 = (int *)Zone::NewExpand(pZVar1,0x10);
    }
    else {
      *(int **)(pZVar1 + 0x10) = local_48 + 4;
    }
    *(Assignment **)(local_48 + 2) = pAVar2;
    *local_48 = iVar3;
    local_48[1] = 9;
    this_00 = (vector<void*,std::__ndk1::allocator<void*>> *)*param_1;
    if (*(undefined8 **)(this_00 + 8) < *(undefined8 **)(this_00 + 0x10)) {
      **(undefined8 **)(this_00 + 8) = local_48;
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                (this_00,&local_48);
    }
    param_1[2] = param_1[2] + 1;
  }
  return;
}

