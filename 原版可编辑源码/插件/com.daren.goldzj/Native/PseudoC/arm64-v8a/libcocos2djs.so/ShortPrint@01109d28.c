
/* v8::internal::Object::ShortPrint(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >&) const */

void __thiscall v8::internal::Object::ShortPrint(Object *this,basic_ostream *param_1)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)this;
  internal::operator<<(param_1,(Brief *)&local_18);
  return;
}

