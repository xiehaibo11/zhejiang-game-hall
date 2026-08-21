
/* v8::internal::GetDefaultHeaderSizeForElementsKind(v8::internal::ElementsKind) */

undefined4 v8::internal::GetDefaultHeaderSizeForElementsKind(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (10 < (byte)(param_1 - 0x11U)) {
    uVar1 = 7;
  }
  return uVar1;
}

