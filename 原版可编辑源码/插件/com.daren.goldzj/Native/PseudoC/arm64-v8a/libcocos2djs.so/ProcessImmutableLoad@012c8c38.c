
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessImmutableLoad(v8::internal::compiler::ContextRef
   const&, int, v8::internal::compiler::SerializerForBackgroundCompilation::ContextProcessingMode,
   v8::internal::compiler::Hints*) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessImmutableLoad
          (SerializerForBackgroundCompilation *this,undefined8 param_1,undefined4 param_2,
          undefined8 param_4,Hints *param_5)

{
  undefined8 uVar1;
  long lVar2;
  char local_48 [8];
  ObjectRef aOStack_40 [16];
  
  ContextRef::get(local_48,param_1,param_2,1);
  if ((param_5 != (Hints *)0x0) && (local_48[0] != '\0')) {
    uVar1 = ObjectRef::object(aOStack_40);
    lVar2 = *(long *)(this + 0x20);
    if (lVar2 == 0) {
      lVar2 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
      *(long *)(this + 0x20) = lVar2;
    }
    Hints::AddConstant(param_5,uVar1,lVar2);
  }
  return;
}

