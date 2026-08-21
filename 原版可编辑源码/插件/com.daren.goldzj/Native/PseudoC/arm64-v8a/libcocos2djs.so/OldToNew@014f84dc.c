
/* v8::internal::InvalidatedSlotsCleanup::OldToNew(v8::internal::MemoryChunk*) */

void __thiscall
v8::internal::InvalidatedSlotsCleanup::OldToNew(InvalidatedSlotsCleanup *this,MemoryChunk *param_1)

{
  undefined8 *puVar1;
  undefined8 *in_x8;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined8 **)(this + 0x88);
  in_x8[4] = 0;
  in_x8[5] = 0;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[3] = in_x8 + 4;
  puVar1 = in_x8 + 3;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  in_x8[2] = puVar1;
  puVar2 = (undefined8 *)*puVar1;
  *in_x8 = puVar2;
  in_x8[1] = puVar1 + 1;
  lVar3 = *(long *)(this + 0x28);
  in_x8[6] = lVar3;
  if (puVar2 != puVar1 + 1) {
    lVar3 = puVar2[4] + -1;
  }
  in_x8[7] = lVar3;
  return;
}

