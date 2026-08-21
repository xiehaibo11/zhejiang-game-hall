
/* v8::internal::OrderedHashMapHandler::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::HeapObject>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::OrderedHashMapHandler::Add
               (undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) == 0x92) &&
     ((lVar1 = SmallOrderedHashMap::Add(param_1,param_2,param_3,param_4), lVar1 != 0 ||
      (param_2 = (ulong *)AdjustRepresentation(param_1,param_2), param_2 == (ulong *)0x0)))) {
    return;
  }
  OrderedHashMap::Add(param_1,param_2,param_3,param_4);
  return;
}

