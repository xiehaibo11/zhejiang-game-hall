
/* v8::internal::RegExpTree::Print(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >&, v8::internal::Zone*) */

basic_ostream * __thiscall
v8::internal::RegExpTree::Print(RegExpTree *this,basic_ostream *param_1,Zone *param_2)

{
  undefined **local_38;
  basic_ostream *pbStack_30;
  Zone *local_28;
  
  local_38 = &PTR__RegExpVisitor_01cc7fb8;
  pbStack_30 = param_1;
  local_28 = param_2;
  (**(code **)(*(long *)this + 0x10))(this,&local_38,0);
  return param_1;
}

