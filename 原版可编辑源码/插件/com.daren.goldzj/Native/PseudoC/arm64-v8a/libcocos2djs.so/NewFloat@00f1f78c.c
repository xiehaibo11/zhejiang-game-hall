
/* v8::internal::TranslatedValue::NewFloat(v8::internal::TranslatedState*, v8::internal::Float32) */

void __thiscall
v8::internal::TranslatedValue::NewFloat
          (undefined2 *param_1,TranslatedValue *this,undefined4 param_3)

{
  *(TranslatedValue **)(param_1 + 4) = this;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 6;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

