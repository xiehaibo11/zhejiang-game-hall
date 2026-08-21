
/* v8::internal::ReadOnlySerializer::FinalizeSerialization() */

void __thiscall v8::internal::ReadOnlySerializer::FinalizeSerialization(ReadOnlySerializer *this)

{
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(*(long *)(this + 0x68) + 0xa0);
  (**(code **)(*(long *)this + 0x18))(this,0x13,0,&local_8);
  Serializer::SerializeDeferredObjects((Serializer *)this);
  Serializer::Pad((Serializer *)this,0);
  return;
}

