
/* v8::tracing::TracedValue::Create() */

void __thiscall v8::tracing::TracedValue::Create(TracedValue *this)

{
  undefined8 *puVar1;
  undefined8 *in_x8;
  
  puVar1 = operator_new(0x28);
  *in_x8 = puVar1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  *puVar1 = &PTR__TracedValue_01cbbe80;
  puVar1[1] = 0;
  return;
}

