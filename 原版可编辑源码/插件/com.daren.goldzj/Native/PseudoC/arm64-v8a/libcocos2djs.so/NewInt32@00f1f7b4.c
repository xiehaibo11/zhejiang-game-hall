
/* v8::internal::TranslatedValue::NewInt32(v8::internal::TranslatedState*, int) */

void __thiscall
v8::internal::TranslatedValue::NewInt32(TranslatedValue *this,TranslatedState *param_1,int param_2)

{
  undefined2 *in_x8;
  
  *(TranslatedValue **)(in_x8 + 4) = this;
  *(undefined8 *)(in_x8 + 8) = 0;
  *in_x8 = 2;
  *(int *)(in_x8 + 0xc) = (int)param_1;
  return;
}

