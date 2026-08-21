
/* v8::internal::OrderedNameDictionaryHandler::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::HeapObject>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDetails) */

void v8::internal::OrderedNameDictionaryHandler::Add
               (undefined8 param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  long lVar1;
  
  if ((*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) == 0x94) &&
     ((lVar1 = SmallOrderedNameDictionary::Add(param_1,param_2,param_3,param_4,param_5), lVar1 != 0
      || (param_2 = (ulong *)AdjustRepresentation(param_1,param_2), param_2 == (ulong *)0x0)))) {
    return;
  }
  OrderedNameDictionary::Add(param_1,param_2,param_3,param_4,param_5);
  return;
}

