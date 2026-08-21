
/* v8::internal::StringToBigIntHelper::ResultMultiplyAdd(unsigned int, unsigned int) */

void __thiscall
v8::internal::StringToBigIntHelper::ResultMultiplyAdd
          (StringToBigIntHelper *this,uint param_1,uint param_2)

{
  BigInt::InplaceMultiplyAdd(*(undefined8 *)(this + 0x38),param_1,param_2);
  return;
}

