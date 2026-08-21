
/* v8::internal::ParseInfo::set_character_stream(std::__ndk1::unique_ptr<v8::internal::Utf16CharacterStream,
   std::__ndk1::default_delete<v8::internal::Utf16CharacterStream> >) */

void __thiscall v8::internal::ParseInfo::set_character_stream(ParseInfo *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this + 0x60) = *param_2;
  *param_2 = uVar1;
  return;
}

