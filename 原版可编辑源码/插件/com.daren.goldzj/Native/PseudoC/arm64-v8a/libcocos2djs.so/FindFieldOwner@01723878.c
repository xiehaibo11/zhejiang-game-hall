
/* v8::internal::compiler::MapRef::FindFieldOwner(v8::internal::InternalIndex) const */

undefined1  [16] __thiscall
v8::internal::compiler::MapRef::FindFieldOwner(MapRef *this,undefined8 param_2)

{
  short sVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 *puVar7;
  Isolate *pIVar8;
  long *plVar9;
  long *plVar10;
  long local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    local_18 = *(undefined8 *)**(undefined8 **)this;
    uVar4 = Map::FindFieldOwner((Map *)&local_18,**(undefined8 **)(this + 8),param_2);
    pIVar8 = (Isolate *)**(undefined8 **)(this + 8);
    if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar4;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar4);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,*(undefined8 *)(this + 8),puVar5,0);
  }
  else {
    lVar6 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar6 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar6 + 0x10) + 0x18) != 0xa2) goto LAB_01723a28;
    uStack_38 = *(undefined8 *)(this + 8);
    plVar10 = (long *)(*(long *)(lVar6 + 0x70) + 0x20);
    plVar9 = (long *)*plVar10;
    if (plVar9 != (long *)0x0) {
      plVar10 = (long *)(*(long *)(lVar6 + 0x70) + 0x20);
      do {
        if ((int)param_2 < (int)plVar9[4]) {
          plVar3 = (long *)*plVar9;
          plVar10 = plVar9;
        }
        else {
          if ((int)param_2 <= (int)plVar9[4]) break;
          plVar10 = plVar9 + 1;
          plVar3 = (long *)*plVar10;
        }
        plVar9 = plVar3;
      } while (plVar9 != (long *)0x0);
    }
    local_40 = *(long *)(*plVar10 + 0x48);
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
  }
  puVar7 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
  if (*(int *)(puVar7 + 1) == 2) {
    uVar4 = *(ulong *)*puVar7;
    if ((uVar4 & 1) == 0) goto LAB_01723a28;
    sVar1 = *(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
  }
  else {
    if (*(int *)(puVar7 + 1) == 0) goto LAB_01723a28;
    sVar1 = *(short *)(puVar7[2] + 0x18);
  }
  if (sVar1 == 0xa2) {
    auVar2._8_8_ = uStack_38;
    auVar2._0_8_ = local_40;
    return auVar2;
  }
LAB_01723a28:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

