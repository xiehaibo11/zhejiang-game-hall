
/* std::__ndk1::__deque_base<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates>
   >::clear() */

void __thiscall
std::__ndk1::
__deque_base<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates>>
::clear(__deque_base<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::OsrIteratorState::IteratorsStates>>
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
    lVar8 = puVar1[uVar5 / 0x55] + (uVar5 % 0x55) * 0x30;
    lVar6 = puVar1[(*(long *)(this + 0x38) + uVar5) / 0x55] +
            ((*(long *)(this + 0x38) + uVar5) % 0x55) * 0x30;
    if (lVar6 != lVar8) {
      plVar9 = puVar1 + uVar5 / 0x55;
      do {
        lVar8 = lVar8 + 0x30;
        if (lVar8 - *plVar9 == 0xff0) {
          plVar9 = plVar9 + 1;
          lVar8 = *plVar9;
        }
      } while (lVar6 != lVar8);
    }
  }
  uVar5 = lVar3 - (long)puVar1 >> 3;
  *(undefined8 *)(this + 0x38) = 0;
  if (uVar5 < 3) {
LAB_0167e928:
    if (uVar5 == 1) {
      uVar2 = 0x2a;
    }
    else {
      if (uVar5 != 2) {
        return;
      }
      uVar2 = 0x55;
    }
    *(undefined8 *)(this + 0x30) = uVar2;
    return;
  }
  puVar4 = *(undefined8 **)(this + 0x48);
  puVar7 = (undefined8 *)*puVar1;
  if (puVar4 != (undefined8 *)0x0) goto LAB_0167e918;
  do {
    puVar4 = puVar7;
    puVar4[1] = 0x55;
    *puVar4 = *(undefined8 *)(this + 0x48);
    puVar1 = *(undefined8 **)(this + 8);
    lVar3 = *(long *)(this + 0x10);
    *(undefined8 **)(this + 0x48) = puVar4;
    do {
      puVar1 = puVar1 + 1;
      uVar5 = lVar3 - (long)puVar1 >> 3;
      *(undefined8 **)(this + 8) = puVar1;
      if (uVar5 < 3) goto LAB_0167e928;
      puVar7 = (undefined8 *)*puVar1;
      if (puVar4 == (undefined8 *)0x0) break;
LAB_0167e918:
    } while (0x55 < (ulong)puVar4[1]);
  } while( true );
}

