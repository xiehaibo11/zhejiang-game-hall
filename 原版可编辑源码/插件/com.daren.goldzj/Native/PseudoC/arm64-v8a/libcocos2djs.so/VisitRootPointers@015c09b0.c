
/* v8::internal::Deserializer::VisitRootPointers(v8::internal::Root, char const*,
   v8::internal::FullObjectSlot, v8::internal::FullObjectSlot) */

bool __thiscall
v8::internal::Deserializer::VisitRootPointers
          (Deserializer *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  bool bVar1;
  
  bVar1 = ReadData<v8::internal::FullMaybeObjectSlot>(this,param_4,param_5,1,0);
  return bVar1;
}

