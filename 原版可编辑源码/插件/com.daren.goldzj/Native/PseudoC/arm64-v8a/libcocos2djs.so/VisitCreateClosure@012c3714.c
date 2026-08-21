
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitCreateClosure(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitCreateClosure
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  Zone *pZVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_78;
  ulong *puStack_70;
  long local_68;
  ObjectRef aOStack_60 [16];
  ObjectRef aOStack_50 [16];
  undefined8 local_28;
  
  uVar3 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)param_1,0,(Isolate *)**(undefined8 **)this);
  uVar8 = **(ulong **)(*(long *)(this + 0x28) + 8);
  iVar2 = interpreter::BytecodeArrayAccessor::GetIndexOperand((BytecodeArrayAccessor *)param_1,1);
  pIVar4 = (Isolate *)(uVar8 & 0xffffffff00000000);
  uVar8 = (ulong)pIVar4 |
          (ulong)*(uint *)(((ulong)pIVar4 | (ulong)*(uint *)(uVar8 + 0xb)) + (long)(iVar2 << 2) + 7)
  ;
  if (*(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8),uVar8);
  }
  ObjectRef::ObjectRef(aOStack_50,*(undefined8 *)this,puVar5,0);
  uVar8 = ObjectRef::IsFeedbackCell(aOStack_50);
  if ((uVar8 & 1) != 0) {
    pIVar4 = (Isolate *)**(undefined8 **)this;
    uVar8 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 3);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar8;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar8);
    }
    ObjectRef::ObjectRef(aOStack_60,*(undefined8 *)this,puVar5,1);
    local_28 = 0;
    uVar8 = *puVar5;
    if (((uVar8 & 1) != 0) &&
       (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x9f)) {
      local_68 = *(long *)(*(long *)(this + 0x28) + 0x28);
      local_78 = uVar3;
      puStack_70 = puVar5;
      if ((local_68 != 0) && (*(long *)(local_68 + 0x10) != 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","context_hints_.virtual_closures().IsEmpty()");
      }
      pZVar6 = *(Zone **)(this + 0x20);
      if (pZVar6 == (Zone *)0x0) {
        pZVar6 = (Zone *)ZoneStats::NewEmptyZone
                                   (*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
        *(Zone **)(this + 0x20) = pZVar6;
      }
      Hints::AddVirtualClosure((Hints *)&local_28,(VirtualClosure *)&local_78,pZVar6);
    }
    lVar7 = *(long *)(this + 0x28);
    uVar1 = *(int *)(lVar7 + 0x1c) + *(int *)(lVar7 + 0x18);
    if ((-1 < (int)uVar1) &&
       ((ulong)(*(long *)(lVar7 + 0x38) - *(long *)(lVar7 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
    }
    *(undefined8 *)(*(long *)(lVar7 + 0x30) + (long)(int)uVar1 * 8) = local_28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsFeedbackCell()");
}

