
/* v8::internal::compiler::TypedOptimization::ReduceStringLength(v8::internal::compiler::Node*) */

long __thiscall
v8::internal::compiler::TypedOptimization::ReduceStringLength(TypedOptimization *this,Node *param_1)

{
  short sVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30 [16];
  
  plVar3 = (long *)NodeProperties::GetValueInput(param_1,0);
  sVar1 = *(short *)(*plVar3 + 0x10);
  if (sVar1 == 200) {
    plVar6 = plVar3 + 4;
    if ((~*(uint *)((long)plVar3 + 0x14) & 0xf000000) == 0) {
      plVar6 = (long *)(*plVar6 + 0x10);
    }
    lVar5 = *plVar6;
  }
  else {
    if (sVar1 == 0x1e) {
      uVar7 = *(undefined8 *)(*plVar3 + 0x30);
      ObjectRef::ObjectRef((ObjectRef *)local_30,*(undefined8 *)(this + 0x20),uVar7,0);
      uVar4 = ObjectRef::IsHeapObject((ObjectRef *)local_30);
      if ((uVar4 & 1) == 0) {
LAB_012fd458:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsHeapObject()");
      }
      uVar4 = ObjectRef::IsString((ObjectRef *)local_30);
      if ((uVar4 & 1) != 0) {
        ObjectRef::ObjectRef((ObjectRef *)local_30,*(undefined8 *)(this + 0x20),uVar7,0);
        uVar4 = ObjectRef::IsHeapObject((ObjectRef *)local_30);
        if ((uVar4 & 1) != 0) {
          local_40 = local_30._0_8_;
          uStack_38 = local_30._8_8_;
          local_30 = ObjectRef::AsString((ObjectRef *)&local_40);
          uVar2 = StringRef::length((StringRef *)local_30);
          lVar5 = JSGraph::Constant(*(JSGraph **)(this + 0x18),(double)uVar2);
          return lVar5;
        }
        goto LAB_012fd458;
      }
    }
    lVar5 = 0;
  }
  return lVar5;
}

