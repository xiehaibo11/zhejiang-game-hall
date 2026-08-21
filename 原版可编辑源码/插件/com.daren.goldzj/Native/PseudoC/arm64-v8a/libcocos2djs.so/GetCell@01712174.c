
/* v8::internal::compiler::SourceTextModuleData::GetCell(v8::internal::compiler::JSHeapBroker*, int)
   const */

long __thiscall
v8::internal::compiler::SourceTextModuleData::GetCell
          (SourceTextModuleData *this,JSHeapBroker *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  basic_ostream *pbVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  locale alStack_28 [8];
  
  if (this[0x18] == (SourceTextModuleData)0x0) {
    if (param_1[0x74] != (JSHeapBroker)0x0) {
      pbVar3 = (basic_ostream *)JSHeapBroker::Trace(param_1);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,"Missing ",8);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,"module cell ",0xc);
      pbVar3 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,param_2);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3," on ",4);
      pbVar3 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,this);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3," (",2);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,"../../src/compiler/js-heap-broker.cc",0x24);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,":",1);
      pbVar3 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,0x6da);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,")",1);
      std::__ndk1::ios_base::getloc();
      plVar4 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_28,(id *)&std::__ndk1::ctype<char>::id);
      cVar1 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
      std::__ndk1::locale::~locale(alStack_28);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,cVar1);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3);
    }
    lVar5 = 0;
  }
  else {
    iVar2 = SourceTextModuleDescriptor::GetCellIndexKind(param_2);
    if (iVar2 == 1) {
      iVar2 = SourceTextModule::ExportIndex(param_2);
      lVar5 = *(long *)(this + 0x40);
      lVar6 = *(long *)(this + 0x48);
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        goto LAB_017122f8;
      }
      iVar2 = SourceTextModule::ImportIndex(param_2);
      lVar5 = *(long *)(this + 0x20);
      lVar6 = *(long *)(this + 0x28);
    }
    if ((ulong)(lVar6 - lVar5 >> 3) <= (ulong)(long)iVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = *(long *)(lVar5 + (long)iVar2 * 8);
    if (lVar5 == 0) {
LAB_017122f8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(cell) != nullptr");
    }
  }
  return lVar5;
}

