
/* v8::internal::RegExpUnparser::VisitCharacterRange(v8::internal::CharacterRange) */

void __thiscall
v8::internal::RegExpUnparser::VisitCharacterRange(RegExpUnparser *this,undefined8 param_2)

{
  basic_ostream *pbVar1;
  int local_38 [2];
  int local_18 [2];
  
  local_18[0] = (int)param_2;
  internal::operator<<(*(basic_ostream **)(this + 8),(AsUC32 *)local_18);
  local_38[0] = (int)((ulong)param_2 >> 0x20);
  if ((int)param_2 != local_38[0]) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (*(basic_ostream **)(this + 8),"-",1);
    internal::operator<<(pbVar1,(AsUC32 *)local_38);
  }
  return;
}

