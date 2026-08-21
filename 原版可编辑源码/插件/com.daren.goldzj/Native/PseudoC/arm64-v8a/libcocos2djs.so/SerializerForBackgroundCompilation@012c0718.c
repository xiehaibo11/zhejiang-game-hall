
/* v8::internal::compiler::SerializerForBackgroundCompilation::SerializerForBackgroundCompilation(v8::internal::compiler::ZoneStats*,
   v8::internal::compiler::JSHeapBroker*, v8::internal::compiler::CompilationDependencies*,
   v8::internal::compiler::CompilationSubject, v8::base::Optional<v8::internal::compiler::Hints>,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> const&,
   v8::internal::compiler::MissingArgumentsPolicy,
   v8::base::Flags<v8::internal::compiler::SerializerForBackgroundCompilationFlag, int>) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::SerializerForBackgroundCompilation
          (SerializerForBackgroundCompilation *this,ZoneStats *param_1,undefined8 param_2,
          undefined8 param_3,undefined8 *param_5,undefined8 param_6,undefined8 param_7,long *param_8
          ,undefined4 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  Zone *pZVar2;
  basic_ostream *pbVar3;
  ulong uVar4;
  Environment *pEVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ObjectRef local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  JSHeapBroker *local_48;
  
  *(undefined8 *)this = param_2;
  *(undefined8 *)(this + 8) = param_3;
  *(char **)(this + 0x10) = "../../src/compiler/serializer-for-background-compilation.cc:1026";
  *(ZoneStats **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  pZVar2 = (Zone *)ZoneStats::NewEmptyZone
                             (param_1,
                              "../../src/compiler/serializer-for-background-compilation.cc:1026");
  *(Zone **)(this + 0x20) = pZVar2;
  pEVar5 = *(Environment **)(pZVar2 + 0x10);
  if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)pEVar5) < 0x50) {
    pEVar5 = (Environment *)Zone::NewExpand(pZVar2,0x50);
    lVar7 = *(long *)(this + 0x20);
  }
  else {
    *(Environment **)(pZVar2 + 0x10) = pEVar5 + 0x50;
    lVar7 = *(long *)(this + 0x20);
  }
  if (lVar7 == 0) {
    lVar7 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(long *)(this + 0x20) = lVar7;
  }
  uStack_78 = param_5[1];
  local_80 = *param_5;
  uStack_68 = param_5[3];
  uStack_70 = param_5[2];
  Environment::Environment
            (pEVar5,lVar7,**(undefined8 **)this,&local_80,param_6,param_7,param_8,param_9);
  lVar7 = *(long *)(this + 0x20);
  *(Environment **)(this + 0x28) = pEVar5;
  if (lVar7 == 0) {
    lVar7 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(long *)(this + 0x20) = lVar7;
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(long *)(this + 0x40) = lVar7;
  *(undefined8 *)(this + 0x48) = 0;
  *(long *)(this + 0x50) = lVar7;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>>>
            *)(this + 0x30),100);
  *(undefined4 *)(this + 0x68) = param_10;
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  pZVar2 = (Zone *)param_8[3];
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(Zone **)(this + 0x88) = pZVar2;
  uVar4 = param_8[1] - *param_8;
  if (uVar4 != 0) {
    if ((ulong)((long)uVar4 >> 3) >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar6 = *(undefined8 **)(pZVar2 + 0x10);
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)puVar6) < uVar4) {
      puVar6 = (undefined8 *)Zone::NewExpand(pZVar2,uVar4);
    }
    else {
      *(ulong *)(pZVar2 + 0x10) = (long)puVar6 + uVar4;
    }
    *(undefined8 **)(this + 0x70) = puVar6;
    *(undefined8 **)(this + 0x78) = puVar6;
    *(undefined8 **)(this + 0x80) = puVar6 + ((long)uVar4 >> 3);
    puVar1 = (undefined8 *)param_8[1];
    for (puVar8 = (undefined8 *)*param_8; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      *puVar6 = *puVar8;
      puVar6 = (undefined8 *)(*(long *)(this + 0x78) + 8);
      *(undefined8 **)(this + 0x78) = puVar6;
    }
  }
  *(undefined8 *)(this + 0x90) = 0;
  TraceScope::TraceScope
            ((TraceScope *)&local_48,*(JSHeapBroker **)this,this,
             "SerializerForBackgroundCompilation::SerializerForBackgroundCompilation");
  if (((*(JSHeapBroker **)this)[0x74] != (JSHeapBroker)0x0) &&
     (FLAG_trace_heap_broker_verbose != '\0')) {
    pbVar3 = (basic_ostream *)JSHeapBroker::Trace(*(JSHeapBroker **)this);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,"Initial environment:\n",0x15);
    pbVar3 = (basic_ostream *)compiler::operator<<(pbVar3,*(Environment **)(this + 0x28));
    local_90[0] = (ObjectRef)0xa;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar3,(char *)local_90,1);
  }
  if (param_5[3] != 0) {
    ObjectRef::ObjectRef(local_90,param_2,param_5[3],0);
    uVar4 = ObjectRef::IsJSFunction(local_90);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSFunction()");
    }
    JSFunctionRef::Serialize((JSFunctionRef *)local_90);
  }
  JSHeapBroker::DecrementTracingIndentation(local_48);
  return;
}

