
/* v8::internal::TranslatedValue::NewDeferredObject(v8::internal::TranslatedState*, int, int) */

void __thiscall
v8::internal::TranslatedValue::NewDeferredObject
          (TranslatedValue *this,TranslatedState *param_1,int param_2,int param_3)

{
  undefined2 *in_x8;
  
  *(TranslatedValue **)(in_x8 + 4) = this;
  *(undefined8 *)(in_x8 + 8) = 0;
  *in_x8 = 8;
  *(int *)(in_x8 + 0xc) = param_2;
  *(int *)(in_x8 + 0xe) = (int)param_1;
  return;
}

