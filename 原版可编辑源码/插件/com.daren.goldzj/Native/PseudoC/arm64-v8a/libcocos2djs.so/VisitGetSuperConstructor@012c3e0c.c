
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitGetSuperConstructor(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitGetSuperConstructor
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  int local_68 [4];
  undefined8 local_58;
  
  uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand((BytecodeArrayAccessor *)param_1,0)
  ;
  local_58 = 0;
  lVar9 = *(long *)(this + 0x28);
  uVar2 = *(int *)(lVar9 + 0x1c) + *(int *)(lVar9 + 0x18);
  if ((-1 < (int)uVar2) &&
     ((ulong)(*(long *)(lVar9 + 0x38) - *(long *)(lVar9 + 0x30) >> 3) <= (ulong)uVar2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
  }
  puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x30) + (long)(int)uVar2 * 8);
  if ((puVar6 != (undefined8 *)0x0) && (puVar6 = (undefined8 *)*puVar6, puVar6 != (undefined8 *)0x0)
     ) {
    do {
      uVar7 = *(ulong *)*puVar6;
      if (((uVar7 & 1) != 0) &&
         (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x439)) {
        puVar10 = *(undefined8 **)this;
        pIVar3 = (Isolate *)*puVar10;
        uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1);
        if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)(pIVar3 + 0x95a0);
          if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(pIVar3);
          }
          *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
          *puVar4 = uVar7;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar7);
        }
        ObjectRef::ObjectRef((ObjectRef *)local_68,puVar10,puVar4,0);
        uVar7 = ObjectRef::IsMap((ObjectRef *)local_68);
        if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsMap()");
        }
        MapRef::SerializePrototype((MapRef *)local_68);
        auVar11 = MapRef::prototype((MapRef *)local_68);
        local_78 = auVar11;
        uVar7 = ObjectRef::IsHeapObject((ObjectRef *)local_78);
        if ((uVar7 & 1) != 0) {
          auVar11 = ObjectRef::AsHeapObject((ObjectRef *)local_78);
          local_98 = auVar11;
          auVar11 = HeapObjectRef::map((HeapObjectRef *)local_98);
          local_88 = auVar11;
          uVar7 = MapRef::is_constructor((MapRef *)local_88);
          if ((uVar7 & 1) != 0) {
            uVar5 = ObjectRef::object((ObjectRef *)local_78);
            lVar9 = *(long *)(this + 0x20);
            if (lVar9 == 0) {
              lVar9 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
              *(long *)(this + 0x20) = lVar9;
            }
            Hints::AddConstant((Hints *)&local_58,uVar5,lVar9);
          }
        }
      }
      puVar6 = (undefined8 *)puVar6[1];
    } while (puVar6 != (undefined8 *)0x0);
    lVar9 = *(long *)(this + 0x28);
  }
  local_78._0_4_ = uVar1;
  uVar7 = interpreter::Register::is_function_closure((Register *)local_78);
  if ((uVar7 & 1) == 0) {
    uVar7 = interpreter::Register::is_current_context((Register *)local_78);
    if ((uVar7 & 1) == 0) {
      local_68[0] = local_78._0_4_;
      if ((int)local_78._0_4_ < 0) {
        uVar2 = interpreter::Register::ToParameterIndex((Register *)local_68,*(int *)(lVar9 + 0x18))
        ;
        lVar8 = *(long *)(lVar9 + 0x30);
      }
      else {
        uVar2 = *(int *)(lVar9 + 0x18) + local_78._0_4_;
        lVar8 = *(long *)(lVar9 + 0x30);
      }
      if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar9 + 0x38) - lVar8 >> 3) <= (ulong)uVar2)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
      }
      puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8);
    }
    else {
      puVar6 = (undefined8 *)(lVar9 + 0x28);
    }
  }
  else {
    puVar6 = (undefined8 *)(lVar9 + 0x20);
  }
  *puVar6 = local_58;
  return;
}

