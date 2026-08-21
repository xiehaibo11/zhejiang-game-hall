
/* v8::internal::Factory::NewSelfReferenceMarker() */

void __thiscall v8::internal::Factory::NewSelfReferenceMarker(Factory *this)

{
  undefined8 *puVar1;
  
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(undefined8 **)(this + 0x95a0);
    if (puVar1 == *(undefined8 **)(this + 0x95a8)) {
      puVar1 = (undefined8 *)HandleScope::Extend((Isolate *)this);
    }
    *(undefined8 **)(this + 0x95a0) = puVar1 + 1;
    *puVar1 = 0xfffffffffffffffe;
  }
  else {
    puVar1 = (undefined8 *)
             CanonicalHandleScope::Lookup
                       (*(CanonicalHandleScope **)(this + 0x95b8),0xfffffffffffffffe);
  }
  NewOddball(this,this + 0x3a8,"self_reference_marker",puVar1,"undefined",10);
  return;
}

