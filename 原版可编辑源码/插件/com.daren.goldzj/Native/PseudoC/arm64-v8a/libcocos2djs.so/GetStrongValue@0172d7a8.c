
/* v8::internal::compiler::MapRef::GetStrongValue(v8::internal::InternalIndex) const */

undefined1  [16] __thiscall
v8::internal::compiler::MapRef::GetStrongValue(MapRef *this,long param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 auVar11 [16];
  long local_40;
  undefined8 *puStack_38;
  
  puVar9 = *(undefined8 **)(this + 8);
  if (*(int *)(*(undefined8 **)this + 1) != 2) {
    lVar3 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar3 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar3 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    plVar5 = (long *)(*(long *)(lVar3 + 0x70) + 0x20);
    plVar7 = (long *)*plVar5;
    plVar6 = plVar5;
    if (plVar7 != (long *)0x0) {
      do {
        iVar10 = (int)param_2;
        if (iVar10 <= (int)plVar7[4]) {
          plVar6 = plVar7;
        }
        plVar7 = (long *)plVar7[(int)plVar7[4] < iVar10];
      } while (plVar7 != (long *)0x0);
      if (((plVar6 != plVar5) && ((int)plVar6[4] <= iVar10)) &&
         (local_40 = plVar6[6], local_40 != 0)) goto LAB_0172d8c8;
    }
    local_40 = 0;
    puStack_38 = puVar9;
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(data_) != nullptr");
  }
  uVar4 = *(ulong *)**(undefined8 **)this;
  uVar8 = uVar4 & 0xffffffff00000000;
  pIVar1 = (Isolate *)*puVar9;
  uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar4 + 0x17)) +
                            (param_2 * 0xc00000000 + 0x1000000000 >> 0x20) + 7);
  if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar8;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar8);
  }
  ObjectRef::ObjectRef((ObjectRef *)&local_40,puVar9,puVar2,0);
  puVar9 = puStack_38;
LAB_0172d8c8:
  auVar11._8_8_ = puVar9;
  auVar11._0_8_ = local_40;
  return auVar11;
}

