
/* v8::internal::compiler::StableMapDependency::Install(v8::internal::MaybeObjectHandle const&)
   const */

void __thiscall
v8::internal::compiler::StableMapDependency::Install
          (StableMapDependency *this,MaybeObjectHandle *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = ObjectRef::isolate((ObjectRef *)(this + 8));
  uVar2 = MapRef::object((MapRef *)(this + 8));
  DependentCode::InstallDependency(uVar1,param_1,uVar2,1);
  return;
}

