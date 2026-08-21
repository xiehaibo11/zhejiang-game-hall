
/* v8::internal::compiler::FeedbackVectorData::GetClosureFeedbackCell(v8::internal::compiler::JSHeapBroker*,
   int) const */

long __thiscall
v8::internal::compiler::FeedbackVectorData::GetClosureFeedbackCell
          (FeedbackVectorData *this,JSHeapBroker *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  basic_ostream *pbVar3;
  long *plVar4;
  locale alStack_28 [8];
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","index >= 0");
  }
  if (this[0x20] == (FeedbackVectorData)0x0) {
    if (param_1[0x74] != (JSHeapBroker)0x0) {
      pbVar3 = (basic_ostream *)JSHeapBroker::Trace(param_1);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,"Missing ",8);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3," closure feedback cell array for vector ",0x28);
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
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,0x508);
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
    lVar2 = 0;
  }
  else {
    if ((ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3) <= (ulong)(uint)param_2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","index < cell_array_size");
    }
    lVar2 = *(long *)(*(long *)(this + 0x28) + (ulong)(uint)param_2 * 8);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0x5d) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFeedbackCell()");
    }
  }
  return lVar2;
}

