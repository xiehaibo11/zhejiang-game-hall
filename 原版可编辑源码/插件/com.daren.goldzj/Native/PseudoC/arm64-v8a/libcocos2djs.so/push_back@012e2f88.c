
/* std::__ndk1::__split_buffer<v8::internal::compiler::RepresentationSelector::NodeState*,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RepresentationSelector::NodeState*>
   >::push_back(v8::internal::compiler::RepresentationSelector::NodeState*&&) */

void __thiscall
std::__ndk1::
__split_buffer<v8::internal::compiler::RepresentationSelector::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RepresentationSelector::NodeState*>>
::push_back(__split_buffer<v8::internal::compiler::RepresentationSelector::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RepresentationSelector::NodeState*>>
            *this,NodeState **param_1)

{
  undefined8 *puVar1;
  size_t __n;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  Zone *this_00;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar8 = *(undefined8 **)(this + 0x10);
  if (puVar8 != *(undefined8 **)(this + 0x18)) goto LAB_012e315c;
  puVar11 = *(undefined8 **)this;
  puVar3 = *(undefined8 **)(this + 8);
  if (puVar11 <= puVar3 && (long)puVar3 - (long)puVar11 != 0) {
    lVar9 = (long)puVar3 - (long)puVar11 >> 3;
    lVar12 = lVar9 + 2;
    if (-1 < lVar9 + 1) {
      lVar12 = lVar9 + 1;
    }
    __n = (long)puVar8 - (long)puVar3;
    puVar8 = puVar3 + -(lVar12 >> 1);
    if (__n != 0) {
      memmove(puVar8,puVar3,__n);
      puVar3 = *(undefined8 **)(this + 8);
    }
    puVar8 = puVar8 + ((long)__n >> 3);
    *(undefined8 **)(this + 8) = puVar3 + -(lVar12 >> 1);
    *(undefined8 **)(this + 0x10) = puVar8;
    goto LAB_012e315c;
  }
  puVar2 = *(undefined8 **)(this + 0x28);
  lVar12 = (long)*(undefined8 **)(this + 0x18) - (long)puVar11;
  uVar10 = lVar12 >> 2;
  if (lVar12 == 0) {
    uVar10 = 1;
  }
  uVar13 = uVar10 >> 2;
  if ((puVar2 == (undefined8 *)0x0) || ((ulong)puVar2[1] < uVar10)) {
    this_00 = *(Zone **)(this + 0x20);
    uVar4 = uVar10 * 8;
    puVar2 = *(undefined8 **)(this_00 + 0x10);
    if (uVar4 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) ||
        uVar4 - (*(long *)(this_00 + 0x18) - (long)puVar2) == 0) {
      *(undefined8 **)(this_00 + 0x10) = puVar2 + uVar10;
    }
    else {
      puVar2 = (undefined8 *)v8::internal::Zone::NewExpand(this_00,uVar4);
    }
    puVar3 = *(undefined8 **)(this + 8);
    puVar11 = *(undefined8 **)(this + 0x10);
  }
  else {
    *(undefined8 *)(this + 0x28) = *puVar2;
    puVar11 = puVar8;
  }
  puVar1 = puVar2 + uVar13;
  puVar8 = puVar1;
  if (puVar3 != puVar11) {
    uVar6 = (ulong)((long)puVar11 + (-8 - (long)puVar3)) >> 3;
    uVar4 = uVar6 + 1;
    puVar7 = puVar1;
    if ((3 < uVar4) && ((puVar3 + uVar6 + 1 <= puVar1 || (puVar2 + uVar13 + uVar6 + 1 <= puVar3))))
    {
      uVar6 = uVar4 & 0x3ffffffffffffffc;
      puVar8 = puVar3 + 2;
      puVar3 = puVar3 + uVar6;
      puVar7 = puVar2 + uVar13 + 2;
      uVar13 = uVar6;
      do {
        puVar5 = puVar8 + -1;
        uVar14 = puVar8[-2];
        uVar16 = puVar8[1];
        uVar15 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar13 = uVar13 - 4;
        puVar7[-1] = *puVar5;
        puVar7[-2] = uVar14;
        puVar7[1] = uVar16;
        *puVar7 = uVar15;
        puVar7 = puVar7 + 4;
      } while (uVar13 != 0);
      puVar7 = puVar1 + uVar6;
      puVar8 = puVar1 + uVar6;
      if (uVar4 == uVar6) goto LAB_012e3110;
    }
    do {
      puVar5 = puVar3 + 1;
      puVar8 = puVar7 + 1;
      *puVar7 = *puVar3;
      puVar3 = puVar5;
      puVar7 = puVar8;
    } while (puVar11 != puVar5);
  }
LAB_012e3110:
  puVar3 = *(undefined8 **)this;
  lVar12 = *(long *)(this + 0x18);
  *(undefined8 **)this = puVar2;
  *(undefined8 **)(this + 8) = puVar1;
  *(undefined8 **)(this + 0x10) = puVar8;
  *(undefined8 **)(this + 0x18) = puVar2 + uVar10;
  if ((puVar3 != (undefined8 *)0x0) && (0xf < (ulong)(lVar12 - (long)puVar3))) {
    uVar10 = lVar12 - (long)puVar3 >> 3;
    if ((*(long *)(this + 0x28) == 0) || (*(ulong *)(*(long *)(this + 0x28) + 8) <= uVar10)) {
      puVar3[1] = uVar10;
      *puVar3 = *(undefined8 *)(this + 0x28);
      puVar8 = *(undefined8 **)(this + 0x10);
      *(undefined8 **)(this + 0x28) = puVar3;
    }
  }
LAB_012e315c:
  *puVar8 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}

