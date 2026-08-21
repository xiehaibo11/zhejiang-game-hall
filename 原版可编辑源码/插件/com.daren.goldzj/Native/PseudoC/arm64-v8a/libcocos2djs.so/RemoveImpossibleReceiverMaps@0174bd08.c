
/* WARNING: Removing unreachable block (ram,0x0174bebc) */
/* v8::internal::compiler::JSNativeContextSpecialization::RemoveImpossibleReceiverMaps(v8::internal::compiler::Node*,
   v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map> >*) const */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::RemoveImpossibleReceiverMaps
          (JSNativeContextSpecialization *this,Node *param_1,ZoneVector *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 local_c0 [8];
  undefined8 uStack_b8;
  undefined8 local_b0;
  JSNativeContextSpecialization *local_a8;
  char local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ObjectRef aOStack_78 [16];
  char local_68;
  ObjectRef aOStack_50 [16];
  
  InferReceiverRootMap((Node *)this);
  if (local_98 != '\0') {
    puVar3 = *(undefined8 **)param_2;
    puVar1 = *(undefined8 **)(param_2 + 8);
    uStack_b8 = uStack_90;
    local_b0 = local_88;
    local_a8 = this;
    if (puVar3 != puVar1) {
      ObjectRef::ObjectRef(aOStack_50,*(undefined8 *)(this + 0x18),*puVar3,0);
      uVar2 = ObjectRef::IsMap(aOStack_50);
      if ((uVar2 & 1) != 0) {
        do {
          puVar4 = puVar3 + 1;
          uVar2 = MapRef::is_abandoned_prototype_map((MapRef *)aOStack_50);
          if ((uVar2 & 1) != 0) goto LAB_0174bdfc;
          MapRef::FindRootMap();
          if (local_68 != '\0') {
            MapRef::FindRootMap();
            uVar2 = ObjectRef::equals(aOStack_78,(ObjectRef *)((ulong)local_c0 | 8));
            if ((uVar2 & 1) == 0) goto LAB_0174bdfc;
          }
          puVar3 = puVar1;
          if (puVar1 == puVar4) goto LAB_0174bdfc;
          ObjectRef::ObjectRef(aOStack_50,*(undefined8 *)(local_a8 + 0x18),*puVar4,0);
          uVar2 = ObjectRef::IsMap(aOStack_50);
          puVar3 = puVar4;
        } while ((uVar2 & 1) != 0);
      }
LAB_0174bee4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
LAB_0174bdfc:
    if ((puVar3 != puVar1) && (puVar4 = puVar3 + 1, puVar4 != puVar1)) {
      do {
        ObjectRef::ObjectRef(aOStack_50,*(undefined8 *)(local_a8 + 0x18),*puVar4,0);
        uVar2 = ObjectRef::IsMap(aOStack_50);
        if ((uVar2 & 1) == 0) goto LAB_0174bee4;
        uVar2 = MapRef::is_abandoned_prototype_map((MapRef *)aOStack_50);
        if ((uVar2 & 1) == 0) {
          MapRef::FindRootMap();
          if (local_68 != '\0') {
            MapRef::FindRootMap();
            uVar2 = ObjectRef::equals(aOStack_78,(ObjectRef *)((ulong)local_c0 | 8));
            if ((uVar2 & 1) == 0) goto LAB_0174be2c;
          }
          *puVar3 = *puVar4;
          puVar3 = puVar3 + 1;
        }
LAB_0174be2c:
        puVar4 = puVar4 + 1;
      } while (puVar1 != puVar4);
    }
    if (puVar3 != *(undefined8 **)(param_2 + 8)) {
      *(undefined8 **)(param_2 + 8) = puVar3;
    }
  }
  return;
}

