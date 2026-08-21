
/* v8::internal::FastKeyAccumulator::Prepare() */

void __thiscall v8::internal::FastKeyAccumulator::Prepare(FastKeyAccumulator *this)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  FastKeyAccumulator FVar9;
  ulong uVar10;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined4 local_58;
  char local_54;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x18) != 0) {
    puVar7 = *(ulong **)(this + 8);
    *(undefined2 *)(this + 0x22) = 0x100;
    local_70 = *puVar7;
    if (*(ushort *)((local_70 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_70 - 1)) < 0xaa) {
      FVar9 = (FastKeyAccumulator)0x1;
    }
    else {
      uVar5 = JSObject::HasEnumerableElements((JSObject *)&local_70);
      if ((uVar5 & 1) == 0) {
        FVar9 = (FastKeyAccumulator)
                (*(byte *)((local_70 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(local_70 - 1)) >>
                 3 & 1);
      }
      else {
        FVar9 = (FastKeyAccumulator)0x1;
      }
      puVar7 = *(ulong **)(this + 8);
    }
    this[0x24] = FVar9;
    local_70 = *(ulong *)this;
    local_68 = *puVar7;
    local_58 = 0;
    local_54 = '\0';
    local_60 = 0;
    local_50 = 0;
    PrototypeIterator::Advance((PrototypeIterator *)&local_70);
    uVar5 = 0;
    if (local_54 == '\0') {
      uVar5 = 0;
      do {
        uVar2 = local_68;
        uVar10 = local_68 & 0xffffffff00000000;
        if (this[0x24] == (FastKeyAccumulator)0x0) {
          if (*(ushort *)((uVar10 | 7) + (ulong)*(uint *)(local_68 - 1)) < 0xaa) {
LAB_010e0d04:
            FVar9 = (FastKeyAccumulator)0x1;
          }
          else {
            local_78 = local_68;
            uVar6 = JSObject::HasEnumerableElements((JSObject *)&local_78);
            if ((uVar6 & 1) != 0) goto LAB_010e0d04;
            FVar9 = (FastKeyAccumulator)
                    (*(byte *)((local_78 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(local_78 - 1))
                     >> 3 & 1);
          }
          this[0x24] = FVar9;
        }
        if ((~*(uint *)((uVar10 | *(uint *)(uVar2 - 1)) + 0xb) & 0x3ff) == 0) {
          local_78 = uVar10 | *(uint *)(uVar2 - 1);
          uVar6 = Map::OnlyHasSimpleProperties((Map *)&local_78);
          if ((((uVar6 & 1) != 0) && (*(short *)(local_78 + 7) != 0xa9)) &&
             (iVar4 = Map::NumberOfEnumerableProperties((Map *)&local_78), iVar4 < 1)) {
            *(uint *)(local_78 + 0xb) = *(uint *)(local_78 + 0xb) & 0xfffffc00;
          }
        }
        if ((*(uint *)((uVar10 | *(uint *)(uVar2 - 1)) + 0xb) & 0x3ff) == 0) {
          local_78 = uVar2;
          uVar10 = JSObject::HasEnumerableElements((JSObject *)&local_78);
          if ((uVar10 & 1) != 0) goto LAB_010e0cb8;
        }
        else {
LAB_010e0cb8:
          this[0x23] = (FastKeyAccumulator)0x0;
          uVar5 = uVar2;
        }
        PrototypeIterator::Advance((PrototypeIterator *)&local_70);
      } while (local_54 == '\0');
    }
    if (this[0x23] == (FastKeyAccumulator)0x0) {
      if ((int)uVar5 != 0) {
        pIVar8 = *(Isolate **)this;
        if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)(pIVar8 + 0x95a0);
          if (puVar7 == *(ulong **)(pIVar8 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(pIVar8);
          }
          *(ulong **)(pIVar8 + 0x95a0) = puVar7 + 1;
          *puVar7 = uVar5;
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar5);
        }
        *(ulong **)(this + 0x10) = puVar7;
      }
    }
    else {
      uVar5 = **(ulong **)(this + 8);
      if ((~*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1)) + 0xb) & 0x3ff) ==
          0) {
        this[0x22] = (FastKeyAccumulator)0x0;
      }
      else {
        local_70 = uVar5;
        bVar3 = JSObject::HasEnumerableElements((JSObject *)&local_70);
        this[0x22] = (FastKeyAccumulator)(~bVar3 & 1);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

