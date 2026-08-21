
/* v8::internal::compiler::MapRef::GetPropertyKey(v8::internal::InternalIndex) const */

undefined1  [16] __thiscall
v8::internal::compiler::MapRef::GetPropertyKey(MapRef *this,long param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long local_40;
  undefined8 uStack_38;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    puVar11 = *(undefined8 **)(this + 8);
    uVar7 = *(ulong *)**(undefined8 **)this;
    uVar10 = uVar7 & 0xffffffff00000000;
    pIVar4 = (Isolate *)*puVar11;
    uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)(uVar7 + 0x17)) +
                                (param_2 * 0xc00000000 + 0x1000000000 >> 0x20) + -1);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar10;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar10);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,puVar11,puVar5,0);
  }
  else {
    lVar6 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar6 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar6 + 0x10) + 0x18) != 0xa2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    uStack_38 = *(undefined8 *)(this + 8);
    plVar9 = (long *)(*(long *)(lVar6 + 0x70) + 0x20);
    plVar8 = (long *)*plVar9;
    if (plVar8 != (long *)0x0) {
      plVar9 = (long *)(*(long *)(lVar6 + 0x70) + 0x20);
      do {
        if ((int)param_2 < (int)plVar8[4]) {
          plVar3 = (long *)*plVar8;
          plVar9 = plVar8;
        }
        else {
          if ((int)param_2 <= (int)plVar8[4]) break;
          plVar9 = plVar8 + 1;
          plVar3 = (long *)*plVar9;
        }
        plVar8 = plVar3;
      } while (plVar8 != (long *)0x0);
    }
    local_40 = *(long *)(*plVar9 + 0x28);
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
  }
  puVar11 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
  if (*(int *)(puVar11 + 1) == 2) {
    uVar7 = *(ulong *)*puVar11;
    if ((uVar7 & 1) == 0) goto LAB_01723704;
    uVar1 = *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1));
  }
  else {
    if (*(int *)(puVar11 + 1) == 0) goto LAB_01723704;
    uVar1 = *(ushort *)(puVar11[2] + 0x18);
  }
  if (uVar1 < 0x41) {
    auVar2._8_8_ = uStack_38;
    auVar2._0_8_ = local_40;
    return auVar2;
  }
LAB_01723704:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsName()");
}

