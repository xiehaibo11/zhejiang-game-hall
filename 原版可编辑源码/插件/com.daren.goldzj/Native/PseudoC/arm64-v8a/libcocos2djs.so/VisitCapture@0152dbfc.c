
/* v8::internal::RegExpUnparser::VisitCapture(v8::internal::RegExpCapture*, void*) */

undefined8 __thiscall
v8::internal::RegExpUnparser::VisitCapture
          (RegExpUnparser *this,RegExpCapture *param_1,void *param_2)

{
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)(this + 8),"(^ ",3);
  (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),this,param_2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)(this + 8),")",1);
  return 0;
}

