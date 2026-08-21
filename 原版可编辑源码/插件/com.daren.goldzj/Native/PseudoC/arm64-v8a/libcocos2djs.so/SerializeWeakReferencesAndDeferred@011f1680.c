
/* v8::internal::StartupSerializer::SerializeWeakReferencesAndDeferred() */

void __thiscall
v8::internal::StartupSerializer::SerializeWeakReferencesAndDeferred(StartupSerializer *this)

{
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(*(long *)(this + 0x68) + 0xa0);
  (**(code **)(*(long *)this + 0x18))(this,0x12,0,&local_8);
  Heap::IterateWeakRoots((Heap *)(*(long *)(this + 0x68) + 0x8850),this,6);
  Serializer::SerializeDeferredObjects((Serializer *)this);
  Serializer::Pad((Serializer *)this,0);
  return;
}

