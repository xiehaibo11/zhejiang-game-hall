
/* v8::internal::compiler::HasOnlyStringMaps(v8::internal::compiler::JSHeapBroker*,
   v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map> > const&) */

undefined8 v8::internal::compiler::HasOnlyStringMaps(JSHeapBroker *param_1,ZoneVector *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ObjectRef aOStack_40 [16];
  
  puVar1 = *(undefined8 **)param_2;
  puVar2 = *(undefined8 **)(param_2 + 8);
  while( true ) {
    if (puVar1 == puVar2) {
      return 1;
    }
    ObjectRef::ObjectRef(aOStack_40,param_1,*puVar1,0);
    uVar3 = ObjectRef::IsMap(aOStack_40);
    if ((uVar3 & 1) == 0) break;
    uVar3 = MapRef::IsStringMap((MapRef *)aOStack_40);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    puVar1 = puVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

