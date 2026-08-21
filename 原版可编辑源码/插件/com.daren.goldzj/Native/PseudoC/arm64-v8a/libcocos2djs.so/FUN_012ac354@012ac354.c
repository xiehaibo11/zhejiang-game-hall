
void FUN_012ac354(undefined8 param_1,void *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 != (void *)0x0) {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
    ::destroy((__tree<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::__map_value_compare<v8::internal::compiler::JSHeapBroker::SerializedFunction,std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>,std::__ndk1::less<v8::internal::compiler::JSHeapBroker::SerializedFunction>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::JSHeapBroker::SerializedFunction,v8::internal::ZoneVector<v8::internal::compiler::Hints>>>>
               *)((long)param_2 + 0x248),*(__tree_node **)((long)param_2 + 0x250));
    if (*(long *)((long)param_2 + 0x228) != 0) {
      *(long *)((long)param_2 + 0x230) = *(long *)((long)param_2 + 0x228);
    }
    plVar2 = (long *)*(long *)((long)param_2 + 0x208);
    while (plVar1 = plVar2, plVar1 != (long *)0x0) {
      if (plVar1[0xc] != 0) {
        plVar1[0xd] = plVar1[0xc];
      }
      plVar2 = (long *)*plVar1;
      if (plVar1[8] != 0) {
        plVar1[9] = plVar1[8];
      }
    }
    plVar2 = *(long **)((long)param_2 + 0x1d0);
    *(undefined8 *)((long)param_2 + 0x1f0) = 0;
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    }
    plVar2 = *(long **)((long)param_2 + 0x198);
    *(undefined8 *)((long)param_2 + 0x1b8) = 0;
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    }
    *(undefined ***)((long)param_2 + 0xd8) = &PTR__StdoutStream_01ca1150;
    *(undefined8 *)((long)param_2 + 0x180) = 0;
    *(undefined ***)((long)param_2 + 0x78) = &PTR__StdoutStream_01ca1128;
    v8::internal::AndroidLogStream::~AndroidLogStream((AndroidLogStream *)((long)param_2 + 0x80));
    std::__ndk1::ios_base::~ios_base((ios_base *)((long)param_2 + 0xd8));
    for (plVar2 = *(long **)((long)param_2 + 0x50); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2)
    {
    }
    operator_delete(param_2);
    return;
  }
  return;
}

