
/* v8::internal::compiler::PropertyAccessBuilder::BuildCheckMaps(v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, v8::internal::compiler::Node*,
   v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map> > const&) */

void __thiscall
v8::internal::compiler::PropertyAccessBuilder::BuildCheckMaps
          (PropertyAccessBuilder *this,Node *param_1,Node **param_2,Node *param_3,
          ZoneVector *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  Node *pNVar7;
  Graph *this_00;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 local_88;
  Node *local_80;
  Node *pNStack_78;
  Node *local_70;
  undefined1 local_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(short *)(*(long *)param_1 + 0x10) == 0x1e) {
    ObjectRef::ObjectRef
              ((ObjectRef *)&local_80,*(undefined8 *)(this + 8),
               *(undefined8 *)(*(long *)param_1 + 0x30),0);
    uVar4 = ObjectRef::IsHeapObject((ObjectRef *)&local_80);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    local_68 = HeapObjectRef::map((HeapObjectRef *)&local_80);
    uVar4 = MapRef::is_stable((MapRef *)local_68);
    if ((uVar4 & 1) != 0) {
      puVar1 = *(undefined8 **)(param_4 + 8);
      for (puVar8 = *(undefined8 **)param_4; puVar8 != puVar1; puVar8 = puVar8 + 1) {
        ObjectRef::ObjectRef((ObjectRef *)&local_80,*(undefined8 *)(this + 8),*puVar8,0);
        uVar4 = ObjectRef::IsMap((ObjectRef *)&local_80);
        if ((uVar4 & 1) == 0) goto LAB_0179e47c;
        uVar4 = ObjectRef::equals((ObjectRef *)&local_80,(ObjectRef *)local_68);
        if ((uVar4 & 1) != 0) {
          CompilationDependencies::DependOnStableMap
                    (*(CompilationDependencies **)(this + 0x10),local_68);
          goto LAB_0179e440;
        }
      }
    }
  }
  local_88 = 1;
  puVar8 = *(undefined8 **)param_4;
  puVar1 = *(undefined8 **)(param_4 + 8);
  if (puVar8 == puVar1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      ObjectRef::ObjectRef((ObjectRef *)&local_80,*(undefined8 *)(this + 8),*puVar8,0);
      uVar4 = ObjectRef::IsMap((ObjectRef *)&local_80);
      if ((uVar4 & 1) == 0) {
LAB_0179e47c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      uVar5 = MapRef::object((MapRef *)&local_80);
      ZoneHandleSet<v8::internal::Map>::insert
                ((ZoneHandleSet<v8::internal::Map> *)&local_88,uVar5,
                 *(undefined8 *)**(undefined8 **)this);
      uVar3 = MapRef::is_migration_target((MapRef *)&local_80);
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 | uVar3 & 1;
    } while (puVar1 != puVar8);
  }
  this_00 = (Graph *)**(undefined8 **)this;
  local_68._0_8_ = 0;
  local_68._8_4_ = 0xffffffff;
  pOVar6 = (Operator *)
           SimplifiedOperatorBuilder::CheckMaps
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)this)[0x2f],uVar9,local_88,
                      local_68);
  pNStack_78 = *param_2;
  local_80 = param_1;
  local_70 = param_3;
  pNVar7 = (Node *)Graph::NewNode(this_00,pOVar6,3,&local_80,false);
  *param_2 = pNVar7;
LAB_0179e440:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

