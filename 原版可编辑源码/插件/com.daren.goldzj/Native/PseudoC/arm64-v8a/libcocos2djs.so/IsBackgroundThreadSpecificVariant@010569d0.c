
/* v8::internal::RuntimeCallStats::IsBackgroundThreadSpecificVariant(v8::internal::RuntimeCallCounterId)
    */

bool __thiscall
v8::internal::RuntimeCallStats::IsBackgroundThreadSpecificVariant(undefined8 param_1,int param_2)

{
  return (param_2 - 0x42fU & 0xffffff81) == 1;
}

