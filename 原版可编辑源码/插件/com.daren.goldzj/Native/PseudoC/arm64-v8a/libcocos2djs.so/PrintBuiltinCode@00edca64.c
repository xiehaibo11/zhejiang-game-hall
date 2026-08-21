
/* v8::internal::Builtins::PrintBuiltinCode() */

ulong __thiscall v8::internal::Builtins::PrintBuiltinCode(Builtins *this)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  size_t sVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 *puVar8;
  __sFILE *p_Var9;
  long lVar10;
  undefined **ppuVar11;
  char *__s;
  undefined8 local_158;
  undefined **local_150;
  undefined **ppuStack_148;
  locale alStack_140 [64];
  undefined **local_100 [20];
  
  lVar10 = 0;
  ppuVar11 = &PTR_s_RecordWrite_01a41e5c_0x21_01c98618;
  do {
    __s = *ppuVar11;
    puVar4 = (undefined8 *)Heap::builtin_address((Heap *)(*(long *)this + 0x8850),(int)lVar10);
    sVar5 = strlen(__s);
    puVar2 = FLAG_print_builtin_code_filter;
    sVar6 = strlen(FLAG_print_builtin_code_filter);
    uVar7 = PassesFilter(__s,sVar5,puVar2,sVar6);
    if ((uVar7 & 1) != 0) {
      puVar8 = (undefined8 *)Isolate::GetCodeTracer();
      p_Var9 = (__sFILE *)puVar8[0x12];
      if (FLAG_redirect_code_traces != '\0') {
        if (p_Var9 == (__sFILE *)0x0) {
          p_Var9 = (__sFILE *)base::OS::FOpen((char *)*puVar8,"ab");
          puVar8[0x12] = p_Var9;
        }
        *(int *)(puVar8 + 0x13) = *(int *)(puVar8 + 0x13) + 1;
      }
      OFStream::OFStream((OFStream *)&local_150,p_Var9);
      local_158 = *puVar4;
      Code::Disassemble((Code *)&local_158,__s,(basic_ostream *)&local_150,*(Isolate **)this,0);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_150,"\n",1);
      local_150 = &PTR__OFStream_01ca1000;
      local_100[0] = &PTR__OFStream_01ca1028;
      ppuStack_148 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_140);
      uVar7 = std::__ndk1::ios_base::~ios_base((ios_base *)local_100);
      if ((FLAG_redirect_code_traces != '\0') &&
         (iVar1 = *(int *)(puVar8 + 0x13), *(int *)(puVar8 + 0x13) = iVar1 + -1, iVar1 + -1 == 0)) {
        uVar3 = fclose((FILE *)puVar8[0x12]);
        uVar7 = (ulong)uVar3;
        puVar8[0x12] = 0;
      }
    }
    lVar10 = lVar10 + 1;
    ppuVar11 = ppuVar11 + 3;
  } while (lVar10 != 0x5bc);
  return uVar7;
}

