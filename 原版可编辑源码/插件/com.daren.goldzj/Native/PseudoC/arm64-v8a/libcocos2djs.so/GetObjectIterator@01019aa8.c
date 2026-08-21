
/* v8::internal::NewSpace::GetObjectIterator(v8::internal::Heap*) */

void v8::internal::NewSpace::GetObjectIterator(Heap *param_1)

{
  undefined8 *puVar1;
  ulong in_x1;
  undefined8 *in_x8;
  undefined8 uVar2;
  
  puVar1 = Malloced::operator_new((Malloced *)0x18,in_x1);
  *puVar1 = &PTR__ObjectIterator_01ca9690;
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puVar1[1] = *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x20);
  puVar1[2] = uVar2;
  *in_x8 = puVar1;
  return;
}

