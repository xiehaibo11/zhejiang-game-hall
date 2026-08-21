
/* std::__ndk1::__split_buffer<v8::internal::compiler::EffectGraphReducer::NodeState*,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::EffectGraphReducer::NodeState*>
   >::push_front(v8::internal::compiler::EffectGraphReducer::NodeState*&&) */

void __thiscall
std::__ndk1::
__split_buffer<v8::internal::compiler::EffectGraphReducer::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::EffectGraphReducer::NodeState*>>
::push_front(__split_buffer<v8::internal::compiler::EffectGraphReducer::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::EffectGraphReducer::NodeState*>>
             *this,NodeState **param_1)

{
  undefined8 *puVar1;
  size_t __n;
  ulong uVar2;
  Zone *this_00;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *__src;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  __src = *(undefined8 **)(this + 8);
  if (__src != *(undefined8 **)this) goto LAB_016bd800;
  puVar4 = *(undefined8 **)(this + 0x10);
  puVar12 = *(undefined8 **)(this + 0x18);
  if (puVar4 < puVar12) {
    lVar6 = (long)puVar12 - (long)puVar4 >> 3;
    lVar5 = lVar6 + 2;
    if (-1 < lVar6 + 1) {
      lVar5 = lVar6 + 1;
    }
    __n = (long)puVar4 - (long)__src;
    puVar12 = puVar4 + (lVar5 >> 1);
    if (__n != 0) {
      puVar12 = (undefined8 *)((long)puVar12 - __n);
      memmove(puVar12,__src,__n);
      puVar4 = *(undefined8 **)(this + 0x10);
    }
    *(undefined8 **)(this + 8) = puVar12;
    *(undefined8 **)(this + 0x10) = puVar4 + (lVar5 >> 1);
    __src = puVar12;
    goto LAB_016bd800;
  }
  lVar5 = (long)puVar12 - (long)*(undefined8 **)this;
  puVar12 = *(undefined8 **)(this + 0x28);
  uVar7 = lVar5 >> 2;
  if (lVar5 == 0) {
    uVar7 = 1;
  }
  uVar8 = uVar7 + 3 >> 2;
  if ((puVar12 == (undefined8 *)0x0) || ((ulong)puVar12[1] < uVar7)) {
    this_00 = *(Zone **)(this + 0x20);
    uVar2 = uVar7 * 8;
    puVar12 = *(undefined8 **)(this_00 + 0x10);
    if (uVar2 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar12) ||
        uVar2 - (*(long *)(this_00 + 0x18) - (long)puVar12) == 0) {
      *(undefined8 **)(this_00 + 0x10) = puVar12 + uVar7;
    }
    else {
      puVar12 = (undefined8 *)v8::internal::Zone::NewExpand(this_00,uVar2);
    }
    __src = *(undefined8 **)(this + 8);
    puVar4 = *(undefined8 **)(this + 0x10);
  }
  else {
    *(undefined8 *)(this + 0x28) = *puVar12;
  }
  puVar1 = puVar12 + uVar8;
  puVar10 = puVar1;
  if (__src != puVar4) {
    uVar11 = (ulong)((long)puVar4 + (-8 - (long)__src)) >> 3;
    uVar2 = uVar11 + 1;
    puVar9 = puVar1;
    if ((3 < uVar2) && ((__src + uVar11 + 1 <= puVar1 || (puVar12 + uVar11 + uVar8 + 1 <= __src))))
    {
      uVar11 = uVar2 & 0x3ffffffffffffffc;
      puVar10 = __src + 2;
      __src = __src + uVar11;
      puVar9 = puVar12 + uVar8 + 2;
      uVar8 = uVar11;
      do {
        puVar3 = puVar10 + -1;
        uVar13 = puVar10[-2];
        uVar15 = puVar10[1];
        uVar14 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar8 = uVar8 - 4;
        puVar9[-1] = *puVar3;
        puVar9[-2] = uVar13;
        puVar9[1] = uVar15;
        *puVar9 = uVar14;
        puVar9 = puVar9 + 4;
      } while (uVar8 != 0);
      puVar9 = puVar1 + uVar11;
      puVar10 = puVar1 + uVar11;
      if (uVar2 == uVar11) goto LAB_016bd7b4;
    }
    do {
      puVar3 = __src + 1;
      puVar10 = puVar9 + 1;
      *puVar9 = *__src;
      __src = puVar3;
      puVar9 = puVar10;
    } while (puVar4 != puVar3);
  }
LAB_016bd7b4:
  puVar4 = *(undefined8 **)this;
  lVar5 = *(long *)(this + 0x18);
  *(undefined8 **)this = puVar12;
  *(undefined8 **)(this + 8) = puVar1;
  *(undefined8 **)(this + 0x10) = puVar10;
  *(undefined8 **)(this + 0x18) = puVar12 + uVar7;
  __src = puVar1;
  if ((puVar4 != (undefined8 *)0x0) && (0xf < (ulong)(lVar5 - (long)puVar4))) {
    uVar7 = lVar5 - (long)puVar4 >> 3;
    if ((*(long *)(this + 0x28) == 0) || (*(ulong *)(*(long *)(this + 0x28) + 8) <= uVar7)) {
      puVar4[1] = uVar7;
      *puVar4 = *(undefined8 *)(this + 0x28);
      __src = *(undefined8 **)(this + 8);
      *(undefined8 **)(this + 0x28) = puVar4;
    }
  }
LAB_016bd800:
  __src[-1] = *param_1;
  *(long *)(this + 8) = *(long *)(this + 8) + -8;
  return;
}

