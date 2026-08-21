
/* v8::internal::compiler::SerializerForBackgroundCompilation::SerializerForBackgroundCompilation(v8::internal::compiler::ZoneStats*,
   v8::internal::compiler::JSHeapBroker*, v8::internal::compiler::CompilationDependencies*,
   v8::internal::Handle<v8::internal::JSFunction>,
   v8::base::Flags<v8::internal::compiler::SerializerForBackgroundCompilationFlag, int>,
   v8::internal::BailoutId) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::SerializerForBackgroundCompilation
          (SerializerForBackgroundCompilation *this,ZoneStats *param_1,undefined8 param_2,
          undefined8 param_3,ulong *param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  Zone *this_00;
  Environment *pEVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ObjectRef aOStack_80 [16];
  VirtualClosure aVStack_70 [24];
  ulong *local_58;
  
  *(undefined8 *)this = param_2;
  *(undefined8 *)(this + 8) = param_3;
  *(char **)(this + 0x10) = "../../src/compiler/serializer-for-background-compilation.cc:1008";
  *(ZoneStats **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  this_00 = (Zone *)ZoneStats::NewEmptyZone
                              (param_1,
                               "../../src/compiler/serializer-for-background-compilation.cc:1008");
  *(Zone **)(this + 0x20) = this_00;
  pEVar2 = *(Environment **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pEVar2) < 0x50) {
    pEVar2 = (Environment *)Zone::NewExpand(this_00,0x50);
    lVar6 = *(long *)(this + 0x20);
  }
  else {
    *(Environment **)(this_00 + 0x10) = pEVar2 + 0x50;
    lVar6 = *(long *)(this + 0x20);
  }
  if (lVar6 == 0) {
    lVar6 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
    *(long *)(this + 0x20) = lVar6;
    uVar7 = **(undefined8 **)this;
    lVar3 = lVar6;
    if (lVar6 == 0) {
      lVar3 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
      *(long *)(this + 0x20) = lVar3;
    }
  }
  else {
    uVar7 = **(undefined8 **)this;
    lVar3 = lVar6;
  }
  VirtualClosure::VirtualClosure(aVStack_70,param_5,uVar7,lVar3);
  uVar5 = *param_5;
  uVar4 = uVar5 & 0xffffffff00000000;
  uVar1 = *(uint *)((uVar4 | *(uint *)(uVar5 + 0xb)) + 3);
  local_58 = param_5;
  if ((uVar1 != 0x84) &&
     ((((uVar1 & 1) == 0 ||
       (1 < *(ushort *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar1) - 1)) - 0x95)) &&
      (*(short *)((uVar4 | 7) +
                 (ulong)*(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(uVar5 + 0x13)) + 3)) - 1))
       == 0x9f)))) {
    Environment::Environment(pEVar2,lVar6,aVStack_70);
    lVar6 = *(long *)(this + 0x20);
    *(Environment **)(this + 0x28) = pEVar2;
    if (lVar6 == 0) {
      lVar6 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
      *(long *)(this + 0x20) = lVar6;
    }
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(long *)(this + 0x40) = lVar6;
    *(undefined8 *)(this + 0x48) = 0;
    *(long *)(this + 0x50) = lVar6;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x60) = 0x3f800000;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>>>
    ::rehash((__hash_table<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,v8::internal::compiler::SerializerForBackgroundCompilation::Environment*>>>
              *)(this + 0x30),100);
    lVar6 = *(long *)(this + 0x20);
    *(undefined4 *)(this + 0x68) = param_6;
    *(undefined4 *)(this + 0x6c) = param_7;
    if (lVar6 == 0) {
      lVar6 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
      *(long *)(this + 0x20) = lVar6;
    }
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(long *)(this + 0x88) = lVar6;
    *(undefined8 *)(this + 0x90) = 0;
    ObjectRef::ObjectRef(aOStack_80,param_2,param_5,0);
    uVar4 = ObjectRef::IsJSFunction(aOStack_80);
    if ((uVar4 & 1) != 0) {
      JSFunctionRef::Serialize((JSFunctionRef *)aOStack_80);
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSFunction()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","closure->has_feedback_vector()");
}

