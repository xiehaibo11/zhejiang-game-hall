
/* v8::internal::Heap::KeepDuringJob(v8::internal::Handle<v8::internal::JSReceiver>) */

void __thiscall v8::internal::Heap::KeepDuringJob(Heap *this,undefined8 param_2)

{
  Factory *this_00;
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + -0x78a0);
  this_00 = (Factory *)(this + -0x8850);
  if ((int)uVar3 == *(int *)(this + -0x87b0)) {
    puVar1 = (ulong *)Factory::NewOrderedHashSet(this_00);
  }
  else if (*(CanonicalHandleScope **)(this + 0xd68) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(this + 0xd50);
    if (puVar1 == *(ulong **)(this + 0xd58)) {
      puVar1 = (ulong *)HandleScope::Extend((Isolate *)this_00);
    }
    *(ulong **)(this + 0xd50) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0xd68),uVar3);
  }
  puVar2 = (undefined8 *)OrderedHashSet::Add(this_00,puVar1,param_2);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(this + -0x78a0) = *puVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

