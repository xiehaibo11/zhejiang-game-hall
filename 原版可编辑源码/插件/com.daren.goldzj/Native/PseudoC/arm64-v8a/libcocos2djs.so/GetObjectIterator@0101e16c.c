
/* v8::internal::LargeObjectSpace::GetObjectIterator(v8::internal::Heap*) */

void v8::internal::LargeObjectSpace::GetObjectIterator(Heap *param_1)

{
  undefined8 *puVar1;
  ulong in_x1;
  undefined8 *in_x8;
  
  puVar1 = Malloced::operator_new((Malloced *)0x10,in_x1);
  *puVar1 = &PTR__ObjectIterator_01ca9968;
  puVar1[1] = *(undefined8 *)(param_1 + 0x20);
  *in_x8 = puVar1;
  return;
}

