
/* v8::internal::Page::AllocateLocalTracker() */

void __thiscall v8::internal::Page::AllocateLocalTracker(Page *this)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  *puVar1 = this;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  *(undefined8 **)(this + 0xf8) = puVar1;
  return;
}

