
/* v8::internal::TypedSlots::NewChunk(v8::internal::TypedSlots::Chunk*, unsigned long) */

undefined8 * __thiscall
v8::internal::TypedSlots::NewChunk(TypedSlots *this,Chunk *param_1,ulong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = operator_new(0x20);
  *puVar1 = param_1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar2 = operator_new(param_2 * 4);
    puVar1[2] = pvVar2;
    puVar1[1] = pvVar2;
    puVar1[3] = (void *)((long)pvVar2 + param_2 * 4);
  }
  return puVar1;
}

