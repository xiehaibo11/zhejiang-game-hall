
/* v8::internal::InvalidatedSlotsCleanup::NoCleanup(v8::internal::MemoryChunk*) */

void __thiscall
v8::internal::InvalidatedSlotsCleanup::NoCleanup(InvalidatedSlotsCleanup *this,MemoryChunk *param_1)

{
  undefined8 *in_x8;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = in_x8 + 4;
  *puVar1 = 0;
  in_x8[3] = puVar1;
  *in_x8 = puVar1;
  in_x8[1] = puVar1;
  in_x8[2] = in_x8 + 3;
  uVar2 = *(undefined8 *)(this + 0x28);
  in_x8[5] = 0;
  in_x8[6] = uVar2;
  in_x8[7] = uVar2;
  return;
}

