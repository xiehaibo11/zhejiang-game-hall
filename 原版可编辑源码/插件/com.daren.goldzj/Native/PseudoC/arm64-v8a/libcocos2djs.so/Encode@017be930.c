
/* v8::internal::interpreter::CreateArrayLiteralFlags::Encode(bool, int) */

uint v8::internal::interpreter::CreateArrayLiteralFlags::Encode(bool param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0x20;
  if (!param_1) {
    uVar1 = 0;
  }
  return uVar1 | param_2;
}

