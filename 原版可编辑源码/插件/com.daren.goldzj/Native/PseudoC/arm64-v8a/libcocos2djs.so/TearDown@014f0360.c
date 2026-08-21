
/* v8::internal::ArrayBufferTracker::TearDown(v8::internal::Heap*) */

void v8::internal::ArrayBufferTracker::TearDown(Heap *param_1)

{
  Page *pPVar1;
  
  for (pPVar1 = *(Page **)(*(long *)(param_1 + 0xf0) + 0x20); pPVar1 != (Page *)0x0;
      pPVar1 = *(Page **)(pPVar1 + 0xe0)) {
    FreeAll(pPVar1);
  }
  if (*(char *)(*(long *)(param_1 + 0xe8) + 0x158) != '\0') {
    for (pPVar1 = *(Page **)(*(long *)(param_1 + 0xe8) + 0xf0); pPVar1 != (Page *)0x0;
        pPVar1 = *(Page **)(pPVar1 + 0xe0)) {
      FreeAll(pPVar1);
    }
  }
  return;
}

