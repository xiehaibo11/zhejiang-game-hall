
/* std::__ndk1::__deque_base<v8::internal::compiler::ControlEquivalence::DFSStackEntry,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::ControlEquivalence::DFSStackEntry>
   >::clear() */

void __thiscall
std::__ndk1::
__deque_base<v8::internal::compiler::ControlEquivalence::DFSStackEntry,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::ControlEquivalence::DFSStackEntry>>
::clear(__deque_base<v8::internal::compiler::ControlEquivalence::DFSStackEntry,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::ControlEquivalence::DFSStackEntry>>
        *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  
  puVar1 = *(undefined8 **)(this + 8);
  lVar3 = *(long *)(this + 0x10);
  if (lVar3 - (long)puVar1 != 0) {
    uVar5 = *(ulong *)(this + 0x30);
    lVar8 = puVar1[uVar5 / 0x49] + (uVar5 % 0x49) * 0x38;
    lVar6 = puVar1[(*(long *)(this + 0x38) + uVar5) / 0x49] +
            ((*(long *)(this + 0x38) + uVar5) % 0x49) * 0x38;
    if (lVar6 != lVar8) {
      plVar9 = puVar1 + uVar5 / 0x49;
      do {
        lVar8 = lVar8 + 0x38;
        if (lVar8 - *plVar9 == 0xff8) {
          plVar9 = plVar9 + 1;
          lVar8 = *plVar9;
        }
      } while (lVar6 != lVar8);
    }
  }
  uVar5 = lVar3 - (long)puVar1 >> 3;
  *(undefined8 *)(this + 0x38) = 0;
  if (uVar5 < 3) {
LAB_01698fc8:
    if (uVar5 == 1) {
      uVar2 = 0x24;
    }
    else {
      if (uVar5 != 2) {
        return;
      }
      uVar2 = 0x49;
    }
    *(undefined8 *)(this + 0x30) = uVar2;
    return;
  }
  puVar4 = *(undefined8 **)(this + 0x48);
  puVar7 = (undefined8 *)*puVar1;
  if (puVar4 != (undefined8 *)0x0) goto LAB_01698fb8;
  do {
    puVar4 = puVar7;
    puVar4[1] = 0x49;
    *puVar4 = *(undefined8 *)(this + 0x48);
    puVar1 = *(undefined8 **)(this + 8);
    lVar3 = *(long *)(this + 0x10);
    *(undefined8 **)(this + 0x48) = puVar4;
    do {
      puVar1 = puVar1 + 1;
      uVar5 = lVar3 - (long)puVar1 >> 3;
      *(undefined8 **)(this + 8) = puVar1;
      if (uVar5 < 3) goto LAB_01698fc8;
      puVar7 = (undefined8 *)*puVar1;
      if (puVar4 == (undefined8 *)0x0) break;
LAB_01698fb8:
    } while (0x49 < (ulong)puVar4[1]);
  } while( true );
}

