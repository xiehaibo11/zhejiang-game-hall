
/* std::__ndk1::__deque_base<v8::internal::compiler::RpoNumber,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RpoNumber> >::clear() */

void __thiscall
std::__ndk1::
__deque_base<v8::internal::compiler::RpoNumber,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RpoNumber>>
::clear(__deque_base<v8::internal::compiler::RpoNumber,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RpoNumber>>
        *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
  puVar2 = *(undefined8 **)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  if (lVar4 - (long)puVar2 != 0) {
    uVar8 = *(ulong *)(this + 0x30);
    plVar6 = (long *)((long)puVar2 + (uVar8 >> 7 & 0x1fffffffffffff8));
    lVar9 = *plVar6 + (uVar8 & 0x3ff) * 4;
    lVar1 = *(long *)((long)puVar2 + (*(long *)(this + 0x38) + uVar8 >> 7 & 0x1fffffffffffff8)) +
            (*(long *)(this + 0x38) + uVar8 & 0x3ff) * 4;
    while (lVar1 != lVar9) {
      while (lVar9 = lVar9 + 4, lVar9 - *plVar6 == 0x1000) {
        plVar6 = plVar6 + 1;
        lVar9 = *plVar6;
        if (lVar1 == lVar9) goto LAB_0164cbe8;
      }
    }
  }
LAB_0164cbe8:
  uVar8 = lVar4 - (long)puVar2 >> 3;
  *(undefined8 *)(this + 0x38) = 0;
  if (uVar8 < 3) {
LAB_0164cc50:
    if (uVar8 == 1) {
      uVar3 = 0x200;
    }
    else {
      if (uVar8 != 2) {
        return;
      }
      uVar3 = 0x400;
    }
    *(undefined8 *)(this + 0x30) = uVar3;
    return;
  }
  puVar5 = *(undefined8 **)(this + 0x48);
  puVar7 = (undefined8 *)*puVar2;
  if (puVar5 != (undefined8 *)0x0) goto LAB_0164cc40;
  do {
    puVar5 = puVar7;
    puVar5[1] = 0x400;
    *puVar5 = *(undefined8 *)(this + 0x48);
    puVar2 = *(undefined8 **)(this + 8);
    lVar4 = *(long *)(this + 0x10);
    *(undefined8 **)(this + 0x48) = puVar5;
    do {
      puVar2 = puVar2 + 1;
      uVar8 = lVar4 - (long)puVar2 >> 3;
      *(undefined8 **)(this + 8) = puVar2;
      if (uVar8 < 3) goto LAB_0164cc50;
      puVar7 = (undefined8 *)*puVar2;
      if (puVar5 == (undefined8 *)0x0) break;
LAB_0164cc40:
    } while (0x400 < (ulong)puVar5[1]);
  } while( true );
}

