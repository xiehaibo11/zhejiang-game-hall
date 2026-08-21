
/* v8::internal::compiler::JSNativeContextSpecialization::CanTreatHoleAsUndefined(v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>
   > const&) */

uint __thiscall
v8::internal::compiler::JSNativeContextSpecialization::CanTreatHoleAsUndefined
          (JSNativeContextSpecialization *this,ZoneVector *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  JSHeapBroker *this_00;
  undefined1 auVar5 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  ObjectRef aOStack_40 [16];
  
  puVar1 = *(undefined8 **)param_1;
  puVar2 = *(undefined8 **)(param_1 + 8);
  do {
    if (puVar1 == puVar2) {
      uVar3 = CompilationDependencies::DependOnNoElementsProtector
                        (*(CompilationDependencies **)(this + 0x38));
LAB_01751e70:
      return uVar3 & 1;
    }
    ObjectRef::ObjectRef(aOStack_40,*(undefined8 *)(this + 0x18),*puVar1,0);
    uVar4 = ObjectRef::IsMap(aOStack_40);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    auVar5 = MapRef::prototype((MapRef *)aOStack_40);
    local_50 = auVar5;
    uVar4 = ObjectRef::IsJSObject((ObjectRef *)local_50);
    if ((uVar4 & 1) == 0) {
LAB_01751e6c:
      uVar3 = 0;
      goto LAB_01751e70;
    }
    this_00 = *(JSHeapBroker **)(this + 0x18);
    auVar5 = ObjectRef::AsJSObject((ObjectRef *)local_50);
    local_60 = auVar5;
    uVar4 = JSHeapBroker::IsArrayOrObjectPrototype(this_00,local_60);
    if ((uVar4 & 1) == 0) goto LAB_01751e6c;
    puVar1 = puVar1 + 1;
  } while( true );
}

