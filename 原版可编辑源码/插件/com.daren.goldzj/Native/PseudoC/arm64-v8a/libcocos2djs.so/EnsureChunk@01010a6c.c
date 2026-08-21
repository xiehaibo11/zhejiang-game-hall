
/* v8::internal::TypedSlots::EnsureChunk() */

undefined8 * __thiscall v8::internal::TypedSlots::EnsureChunk(TypedSlots *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(this + 8);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = operator_new(0x20);
    *puVar4 = 0;
    pvVar1 = operator_new(400);
    puVar4[1] = pvVar1;
    puVar4[2] = pvVar1;
    puVar4[3] = (long)pvVar1 + 400;
    *(undefined8 **)(this + 8) = puVar4;
    *(undefined8 **)(this + 0x10) = puVar4;
  }
  puVar2 = puVar4;
  if (puVar4[2] == puVar4[3]) {
    uVar3 = (long)(puVar4[2] - puVar4[1]) >> 1;
    if (0x3fff < uVar3) {
      uVar3 = 0x4000;
    }
    puVar2 = operator_new(0x20);
    *puVar2 = puVar4;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    if (uVar3 != 0) {
      pvVar1 = operator_new(uVar3 * 4);
      puVar2[1] = pvVar1;
      puVar2[2] = pvVar1;
      puVar2[3] = (void *)((long)pvVar1 + uVar3 * 4);
    }
    *(undefined8 **)(this + 8) = puVar2;
  }
  return puVar2;
}

