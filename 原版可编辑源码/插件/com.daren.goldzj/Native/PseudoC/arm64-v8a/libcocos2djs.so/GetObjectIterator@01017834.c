
/* v8::internal::PagedSpace::GetObjectIterator(v8::internal::Heap*) */

void v8::internal::PagedSpace::GetObjectIterator(Heap *param_1)

{
  undefined8 *puVar1;
  ulong in_x1;
  undefined8 *in_x8;
  undefined8 uVar2;
  
  puVar1 = Malloced::operator_new((Malloced *)0x40,in_x1);
  puVar1[2] = 0;
  puVar1[3] = in_x1;
  puVar1[4] = param_1;
  *puVar1 = &PTR__ObjectIterator_01ca94f0;
  puVar1[1] = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  puVar1[6] = 0;
  puVar1[7] = uVar2;
  MarkCompactCollector::EnsureSweepingCompleted(*(MarkCompactCollector **)(in_x1 + 0x800));
  *in_x8 = puVar1;
  return;
}

