
/* v8::internal::TranslatedValue::NewInt64(v8::internal::TranslatedState*, long) */

void __thiscall
v8::internal::TranslatedValue::NewInt64(TranslatedValue *this,TranslatedState *param_1,long param_2)

{
  undefined2 *in_x8;
  
  *(TranslatedValue **)(in_x8 + 4) = this;
  *(undefined8 *)(in_x8 + 8) = 0;
  *in_x8 = 3;
  *(TranslatedState **)(in_x8 + 0xc) = param_1;
  return;
}

