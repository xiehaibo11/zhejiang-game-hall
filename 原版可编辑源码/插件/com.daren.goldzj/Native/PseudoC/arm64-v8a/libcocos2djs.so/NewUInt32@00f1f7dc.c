
/* v8::internal::TranslatedValue::NewUInt32(v8::internal::TranslatedState*, unsigned int) */

void __thiscall
v8::internal::TranslatedValue::NewUInt32
          (TranslatedValue *this,TranslatedState *param_1,uint param_2)

{
  undefined2 *in_x8;
  
  *(TranslatedValue **)(in_x8 + 4) = this;
  *(undefined8 *)(in_x8 + 8) = 0;
  *in_x8 = 4;
  *(int *)(in_x8 + 0xc) = (int)param_1;
  return;
}

