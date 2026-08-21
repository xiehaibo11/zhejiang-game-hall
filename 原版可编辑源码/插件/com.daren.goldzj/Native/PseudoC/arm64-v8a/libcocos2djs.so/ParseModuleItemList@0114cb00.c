
/* v8::internal::Parser::ParseModuleItemList(v8::internal::ScopedList<v8::internal::Statement*,
   void*>*) */

void __thiscall v8::internal::Parser::ParseModuleItemList(Parser *this,ScopedList *param_1)

{
  void *pvVar1;
  char cVar2;
  Scanner *this_00;
  void *pvVar3;
  vector<void*,std::__ndk1::allocator<void*>> *this_01;
  void *local_28;
  
  this_00 = *(Scanner **)(this + 0xf8);
  cVar2 = *(char *)(*(long *)(this_00 + 8) + 0x38);
  do {
    if (cVar2 == '\x0e') {
      return;
    }
    if (cVar2 == 'k') {
      cVar2 = Scanner::PeekAhead(this_00);
      if (((cVar2 == '\x05') && (this[0x132] != (Parser)0x0)) ||
         ((cVar2 == '\x02' && (this[0x133] != (Parser)0x0)))) goto LAB_0114cba8;
      ParseImportDeclaration(this);
      pvVar3 = *(void **)(this + 0x78);
      pvVar1 = local_28;
    }
    else if (cVar2 == 'i') {
      pvVar3 = (void *)ParseExportDeclaration(this);
      pvVar1 = local_28;
    }
    else {
LAB_0114cba8:
      pvVar3 = (void *)ParserBase<v8::internal::Parser>::ParseStatementListItem
                                 ((ParserBase<v8::internal::Parser> *)this);
      pvVar1 = local_28;
    }
    local_28 = pvVar3;
    if (local_28 == (void *)0x0) {
      return;
    }
    if ((*(uint *)((long)local_28 + 4) & 0x3f) != 10) {
      this_01 = *(vector<void*,std::__ndk1::allocator<void*>> **)param_1;
      if (*(long **)(this_01 + 8) < *(long **)(this_01 + 0x10)) {
        **(long **)(this_01 + 8) = (long)local_28;
        *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  (this_01,&local_28);
      }
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
      pvVar1 = local_28;
    }
    local_28 = pvVar1;
    this_00 = *(Scanner **)(this + 0xf8);
    cVar2 = *(char *)(*(long *)(this_00 + 8) + 0x38);
  } while( true );
}

