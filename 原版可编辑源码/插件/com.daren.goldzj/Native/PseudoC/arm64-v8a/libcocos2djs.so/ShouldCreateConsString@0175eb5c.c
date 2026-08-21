
/* v8::internal::compiler::JSBinopReduction::ShouldCreateConsString() */

uint __thiscall
v8::internal::compiler::JSBinopReduction::ShouldCreateConsString(JSBinopReduction *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  long local_60 [2];
  undefined8 local_50;
  char local_48;
  undefined8 local_38;
  char local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar4 = *(uint *)(*(long *)(this + 8) + 0x14);
  plVar6 = (long *)(*(long *)(this + 8) + 0x20);
  plVar7 = plVar6;
  if ((~uVar4 & 0xf000000) == 0) {
    plVar7 = (long *)(*plVar6 + 0x10);
  }
  local_60[0] = *(long *)(*plVar7 + 8);
  if (local_60[0] == 0x4021) {
LAB_0175ebd4:
    if ((~uVar4 & 0xf000000) == 0) {
      plVar6 = (long *)(*plVar6 + 0x10);
    }
    local_60[0] = *(long *)(plVar6[1] + 8);
    if ((local_60[0] != 0x4021) && (uVar5 = Type::SlowIs((Type *)local_60,0x4021), (uVar5 & 1) == 0)
       ) goto LAB_0175ec10;
LAB_0175ec28:
    BinopMatcher<v8::internal::compiler::HeapObjectMatcherImpl<(v8::internal::compiler::IrOpcode::Value)30>,v8::internal::compiler::HeapObjectMatcherImpl<(v8::internal::compiler::IrOpcode::Value)30>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::HeapObjectMatcherImpl<(v8::internal::compiler::IrOpcode::Value)30>,v8::internal::compiler::HeapObjectMatcherImpl<(v8::internal::compiler::IrOpcode::Value)30>>
                    *)local_60,*(Node **)(this + 8));
    uVar8 = *(undefined8 *)(*(long *)this + 0x18);
    if (local_30 != '\0') {
      ObjectRef::ObjectRef((ObjectRef *)local_70,uVar8,local_38,0);
      uVar5 = ObjectRef::IsHeapObject((ObjectRef *)local_70);
      if ((uVar5 & 1) == 0) goto LAB_0175ed84;
      local_80._0_8_ = local_70._0_8_;
      local_80._8_8_ = local_70._8_8_;
      uVar5 = ObjectRef::IsString((ObjectRef *)local_80);
      if ((uVar5 & 1) == 0) goto LAB_0175ecbc;
      ObjectRef::ObjectRef((ObjectRef *)local_70,uVar8,local_38,0);
      uVar5 = ObjectRef::IsHeapObject((ObjectRef *)local_70);
      if ((uVar5 & 1) == 0) goto LAB_0175ed84;
      local_80._0_8_ = local_70._0_8_;
      local_80._8_8_ = local_70._8_8_;
      local_70 = ObjectRef::AsString((ObjectRef *)local_80);
      iVar3 = StringRef::length((StringRef *)local_70);
      if (iVar3 < 0xd) goto LAB_0175ecbc;
LAB_0175ed48:
      uVar4 = 1;
      goto LAB_0175ed54;
    }
LAB_0175ecbc:
    if (local_48 != '\0') {
      ObjectRef::ObjectRef((ObjectRef *)local_70,uVar8,local_50,0);
      uVar5 = ObjectRef::IsHeapObject((ObjectRef *)local_70);
      if ((uVar5 & 1) == 0) {
LAB_0175ed84:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsHeapObject()");
      }
      local_80 = local_70;
      uVar5 = ObjectRef::IsString((ObjectRef *)local_80);
      if ((uVar5 & 1) != 0) {
        ObjectRef::ObjectRef((ObjectRef *)local_70,uVar8,local_50,0);
        uVar5 = ObjectRef::IsHeapObject((ObjectRef *)local_70);
        if ((uVar5 & 1) == 0) goto LAB_0175ed84;
        auVar9 = ObjectRef::AsString((ObjectRef *)local_70);
        local_80 = auVar9;
        iVar3 = StringRef::length((StringRef *)local_80);
        if (0xc < iVar3) {
          uVar5 = StringRef::IsSeqString((StringRef *)local_80);
          if ((uVar5 & 1) == 0) {
            uVar4 = StringRef::IsExternalString((StringRef *)local_80);
            goto LAB_0175ed54;
          }
          goto LAB_0175ed48;
        }
      }
    }
  }
  else {
    uVar5 = Type::SlowIs((Type *)local_60,0x4021);
    if ((uVar5 & 1) != 0) {
      uVar4 = *(uint *)(*(long *)(this + 8) + 0x14);
      plVar6 = (long *)(*(long *)(this + 8) + 0x20);
      goto LAB_0175ebd4;
    }
LAB_0175ec10:
    cVar2 = BinaryOperationHintOf((Operator *)**(undefined8 **)(this + 8));
    if (cVar2 == '\x06') goto LAB_0175ec28;
  }
  uVar4 = 0;
LAB_0175ed54:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

