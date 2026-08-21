
/* v8::internal::KeyAccumulator::AddShadowingKey(v8::internal::Handle<v8::internal::Object>) */

void __thiscall
v8::internal::KeyAccumulator::AddShadowingKey(KeyAccumulator *this,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(int *)(this + 0x20) != 0) {
    lVar2 = *(long *)(this + 0x18);
    if (lVar2 == 0) {
      lVar2 = HashTable<v8::internal::ObjectHashSet,v8::internal::ObjectHashSetShape>::New
                        (*(undefined8 *)this,0x10,0,0);
      *(long *)(this + 0x18) = lVar2;
    }
    uVar1 = ObjectHashSet::Add(*(undefined8 *)this,lVar2,param_2);
    *(undefined8 *)(this + 0x18) = uVar1;
  }
  return;
}

