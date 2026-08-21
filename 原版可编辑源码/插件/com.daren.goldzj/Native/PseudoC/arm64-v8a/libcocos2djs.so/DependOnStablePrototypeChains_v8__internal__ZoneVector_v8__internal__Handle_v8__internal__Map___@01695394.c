
/* void 
   v8::internal::compiler::CompilationDependencies::DependOnStablePrototypeChains<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>
   > >(v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map> > const&,
   v8::internal::WhereToStart, v8::base::Optional<v8::internal::compiler::JSObjectRef>) */

void __thiscall
v8::internal::compiler::CompilationDependencies::
DependOnStablePrototypeChains<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>
          (CompilationDependencies *this,long *param_1,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  Zone *pZVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  char local_78;
  JSFunctionRef aJStack_70 [16];
  undefined1 local_60 [16];
  
  puVar7 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar7 != puVar1) {
    do {
      ObjectRef::ObjectRef((ObjectRef *)local_60,*(undefined8 *)(this + 8),*puVar7,0);
      uVar2 = ObjectRef::IsMap((ObjectRef *)local_60);
      if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      if ((param_3 == 0) && (uVar2 = MapRef::CanTransition((MapRef *)local_60), (uVar2 & 1) != 0)) {
        pZVar3 = *(Zone **)this;
        puVar4 = *(undefined8 **)(pZVar3 + 0x10);
        if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar4) < 0x18) {
          puVar4 = (undefined8 *)Zone::NewExpand(pZVar3,0x18);
        }
        else {
          *(undefined8 **)(pZVar3 + 0x10) = puVar4 + 3;
        }
        *puVar4 = &PTR_IsValid_01cccc78;
        *(undefined1 (*) [16])(puVar4 + 1) = local_60;
        if (puVar4 != (undefined8 *)0x0) {
          pZVar3 = *(Zone **)(this + 0x18);
          puVar5 = *(undefined8 **)(pZVar3 + 0x10);
          if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar5) < 0x10) {
            puVar5 = (undefined8 *)Zone::NewExpand(pZVar3,0x10);
          }
          else {
            *(undefined8 **)(pZVar3 + 0x10) = puVar5 + 2;
          }
          puVar5[1] = puVar4;
          *puVar5 = *(undefined8 *)(this + 0x10);
          *(undefined8 **)(this + 0x10) = puVar5;
        }
      }
      uVar2 = MapRef::IsPrimitiveMap((MapRef *)local_60);
      auVar8 = local_60;
      if ((uVar2 & 1) != 0) {
        lVar6 = *(long *)(this + 8);
        if (*(char *)(lVar6 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","storage_.is_populated_");
        }
        uStack_88 = *(undefined8 *)(lVar6 + 0x28);
        local_90 = *(undefined8 *)(lVar6 + 0x20);
        NativeContextRef::GetConstructorFunction((MapRef *)&local_90);
        auVar8 = local_60;
        if (local_78 != '\0') {
          auVar8 = JSFunctionRef::initial_map(aJStack_70);
        }
      }
      local_60._8_8_ = auVar8._8_8_;
      local_60._0_8_ = auVar8._0_8_;
      local_a0 = param_4[2];
      uStack_a8 = param_4[1];
      local_b0 = *param_4;
      FUN_016955fc(this,local_60._0_8_,local_60._8_8_,&local_b0);
      local_60 = auVar8;
      puVar7 = puVar7 + 1;
    } while (puVar1 != puVar7);
  }
  return;
}

