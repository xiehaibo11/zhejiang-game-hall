
/* void 
   v8::internal::compiler::CompilationDependencies::DependOnStablePrototypeChains<v8::internal::ZoneHandleSet<v8::internal::Map>
   >(v8::internal::ZoneHandleSet<v8::internal::Map> const&, v8::internal::WhereToStart,
   v8::base::Optional<v8::internal::compiler::JSObjectRef>) */

void __thiscall
v8::internal::compiler::CompilationDependencies::
DependOnStablePrototypeChains<v8::internal::ZoneHandleSet<v8::internal::Map>>
          (CompilationDependencies *this,ulong *param_1,int param_3,undefined8 *param_4)

{
  Zone *pZVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  char local_88;
  JSFunctionRef aJStack_80 [16];
  undefined1 local_70 [16];
  
  uVar4 = *param_1;
  if ((uVar4 & 3) == 0) {
    lVar5 = 1;
  }
  else {
    if ((uVar4 & 3) == 1) {
      return;
    }
    lVar5 = *(long *)(uVar4 + 6) - *(long *)(uVar4 - 2);
    if (lVar5 == 0) {
      return;
    }
    lVar5 = lVar5 >> 3;
  }
  lVar7 = 0;
  while( true ) {
    lVar5 = lVar5 + -1;
    if ((uVar4 & 3) != 0) {
      if ((ulong)(*(long *)(uVar4 + 6) - *(long *)(uVar4 - 2) >> 3) <= (ulong)(lVar7 >> 0x20)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar4 = *(ulong *)(*(long *)(uVar4 - 2) + (lVar7 >> 0x20) * 8);
    }
    ObjectRef::ObjectRef((ObjectRef *)local_70,*(undefined8 *)(this + 8),uVar4,0);
    uVar4 = ObjectRef::IsMap((ObjectRef *)local_70);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    if (param_3 == 0) {
      uVar4 = MapRef::CanTransition((MapRef *)local_70);
      if ((uVar4 & 1) != 0) {
        pZVar1 = *(Zone **)this;
        puVar2 = *(undefined8 **)(pZVar1 + 0x10);
        if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar2) < 0x18) {
          puVar2 = (undefined8 *)Zone::NewExpand(pZVar1,0x18);
        }
        else {
          *(undefined8 **)(pZVar1 + 0x10) = puVar2 + 3;
        }
        *puVar2 = &PTR_IsValid_01cccc78;
        *(undefined1 (*) [16])(puVar2 + 1) = local_70;
        if (puVar2 != (undefined8 *)0x0) {
          pZVar1 = *(Zone **)(this + 0x18);
          puVar3 = *(undefined8 **)(pZVar1 + 0x10);
          if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar3) < 0x10) {
            puVar3 = (undefined8 *)Zone::NewExpand(pZVar1,0x10);
          }
          else {
            *(undefined8 **)(pZVar1 + 0x10) = puVar3 + 2;
          }
          puVar3[1] = puVar2;
          *puVar3 = *(undefined8 *)(this + 0x10);
          *(undefined8 **)(this + 0x10) = puVar3;
        }
      }
    }
    uVar4 = MapRef::IsPrimitiveMap((MapRef *)local_70);
    auVar8 = local_70;
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(this + 8);
      if (*(char *)(lVar6 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","storage_.is_populated_");
      }
      uStack_98 = *(undefined8 *)(lVar6 + 0x28);
      local_a0 = *(undefined8 *)(lVar6 + 0x20);
      NativeContextRef::GetConstructorFunction((MapRef *)&local_a0);
      auVar8 = local_70;
      if (local_88 != '\0') {
        auVar8 = JSFunctionRef::initial_map(aJStack_80);
      }
    }
    local_70._8_8_ = auVar8._8_8_;
    local_70._0_8_ = auVar8._0_8_;
    local_b0 = param_4[2];
    uStack_b8 = param_4[1];
    local_c0 = *param_4;
    FUN_016955fc(this,local_70._0_8_,local_70._8_8_,&local_c0);
    local_70 = auVar8;
    if (lVar5 == 0) break;
    uVar4 = *param_1;
    lVar7 = lVar7 + 0x100000000;
  }
  return;
}

