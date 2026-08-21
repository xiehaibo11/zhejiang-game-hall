
/* v8::internal::IC::UpdateMegamorphicCache(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::MaybeObjectHandle const&) */

void __thiscall
v8::internal::IC::UpdateMegamorphicCache
          (IC *this,undefined8 *param_2,undefined8 *param_3,int *param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (*(int *)(this + 0x1c) == 9) {
    return;
  }
  puVar1 = (undefined8 *)(*(long *)(this + 8) + 0x9560);
  if (3 < *(int *)(this + 0x1c) - 5U) {
    puVar1 = (undefined8 *)(*(long *)(this + 8) + 0x9568);
  }
  puVar2 = *(ulong **)(param_4 + 2);
  if (*param_4 == 0) {
    if (puVar2 != (ulong *)0x0) {
      StubCache::Set((StubCache *)*puVar1,*param_3,*param_2,*puVar2 | 2);
      return;
    }
  }
  else if (puVar2 != (ulong *)0x0) {
    StubCache::Set((StubCache *)*puVar1,*param_3,*param_2,*puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

