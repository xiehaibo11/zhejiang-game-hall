
/* v8::internal::IC::stub_cache() */

undefined8 __thiscall v8::internal::IC::stub_cache(IC *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(long *)(this + 8) + 0x9560);
  if (3 < *(int *)(this + 0x1c) - 5U) {
    puVar1 = (undefined8 *)(*(long *)(this + 8) + 0x9568);
  }
  return *puVar1;
}

