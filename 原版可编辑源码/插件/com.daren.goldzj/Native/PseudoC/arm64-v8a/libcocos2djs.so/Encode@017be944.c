
/* v8::internal::interpreter::CreateObjectLiteralFlags::Encode(int, bool) */

uint v8::internal::interpreter::CreateObjectLiteralFlags::Encode(int param_1,bool param_2)

{
  uint uVar1;
  
  uVar1 = 0x20;
  if (!param_2) {
    uVar1 = 0;
  }
  return uVar1 | param_1;
}

