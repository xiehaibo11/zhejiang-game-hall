
/* v8::internal::compiler::MapRef::GetFieldType(v8::internal::InternalIndex) const */

undefined1  [16] __thiscall v8::internal::compiler::MapRef::GetFieldType(MapRef *this,long param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  Isolate *pIVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  long local_40;
  undefined8 uStack_38;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar3 = *(ulong *)**(undefined8 **)this;
    uVar4 = uVar3 & 0xffffffff00000000;
    uVar3 = Map::UnwrapFieldType
                      (uVar4 | *(uint *)((uVar4 | *(uint *)(uVar3 + 0x17)) +
                                         (param_2 * 0xc00000000 + 0x1000000000 >> 0x20) + 7));
    pIVar5 = (Isolate *)**(undefined8 **)(this + 8);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar3);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,*(undefined8 *)(this + 8),puVar1,0);
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    uStack_38 = *(undefined8 *)(this + 8);
    plVar8 = (long *)(*(long *)(lVar2 + 0x70) + 0x20);
    plVar6 = (long *)*plVar8;
    if (plVar6 != (long *)0x0) {
      plVar8 = (long *)(*(long *)(lVar2 + 0x70) + 0x20);
      do {
        while( true ) {
          plVar7 = plVar6;
          if ((int)plVar7[4] <= (int)param_2) break;
          plVar6 = (long *)*plVar7;
          plVar8 = plVar7;
          if ((long *)*plVar7 == (long *)0x0) goto LAB_01723b4c;
        }
        if ((int)param_2 <= (int)plVar7[4]) break;
        plVar8 = plVar7 + 1;
        plVar6 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
LAB_01723b4c:
    local_40 = *(long *)(*plVar8 + 0x50);
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
  }
  auVar9._8_8_ = uStack_38;
  auVar9._0_8_ = local_40;
  return auVar9;
}

