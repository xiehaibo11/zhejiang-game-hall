
/* v8::internal::TranslatedValue::NewDouble(v8::internal::TranslatedState*, v8::internal::Float64)
    */

void __thiscall
v8::internal::TranslatedValue::NewDouble
          (undefined2 *param_1_00,TranslatedValue *this,undefined8 param_1)

{
  *(TranslatedValue **)(param_1_00 + 4) = this;
  *(undefined8 *)(param_1_00 + 8) = 0;
  *param_1_00 = 7;
  *(undefined8 *)(param_1_00 + 0xc) = param_1;
  return;
}

