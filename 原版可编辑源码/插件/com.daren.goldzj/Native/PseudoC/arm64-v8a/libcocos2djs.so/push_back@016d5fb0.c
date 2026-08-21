
/* std::__ndk1::__split_buffer<v8::internal::compiler::Int64Lowering::NodeState*,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Int64Lowering::NodeState*>&>::push_back(v8::internal::compiler::Int64Lowering::NodeState*&&)
    */

void __thiscall
std::__ndk1::
__split_buffer<v8::internal::compiler::Int64Lowering::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Int64Lowering::NodeState*>&>
::push_back(__split_buffer<v8::internal::compiler::Int64Lowering::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Int64Lowering::NodeState*>&>
            *this,NodeState **param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *puVar3;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  Zone *this_00;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar8 = *(undefined8 **)(this + 0x10);
  if (puVar8 != *(undefined8 **)(this + 0x18)) goto LAB_016d6180;
  pvVar14 = *(void **)this;
  __src = *(void **)(this + 8);
  if (pvVar14 <= __src && (long)__src - (long)pvVar14 != 0) {
    lVar9 = (long)__src - (long)pvVar14 >> 3;
    lVar12 = lVar9 + 2;
    if (-1 < lVar9 + 1) {
      lVar12 = lVar9 + 1;
    }
    __n = (long)puVar8 - (long)__src;
    pvVar14 = (void *)((long)__src + (lVar12 >> 1) * -8);
    if (__n != 0) {
      memmove(pvVar14,__src,__n);
      __src = *(void **)(this + 8);
    }
    puVar8 = (undefined8 *)((long)pvVar14 + ((long)__n >> 3) * 8);
    *(void **)(this + 8) = (void *)((long)__src + (lVar12 >> 1) * -8);
    *(undefined8 **)(this + 0x10) = puVar8;
    goto LAB_016d6180;
  }
  puVar15 = *(undefined8 **)(this + 0x20);
  lVar12 = (long)*(undefined8 **)(this + 0x18) - (long)pvVar14;
  uVar5 = lVar12 >> 2;
  if (lVar12 == 0) {
    uVar5 = 1;
  }
  puVar3 = (undefined8 *)puVar15[1];
  uVar11 = uVar5 >> 2;
  if ((puVar3 == (undefined8 *)0x0) || ((ulong)puVar3[1] < uVar5)) {
    this_00 = (Zone *)*puVar15;
    uVar4 = uVar5 * 8;
    puVar3 = *(undefined8 **)(this_00 + 0x10);
    if (uVar4 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) ||
        uVar4 - (*(long *)(this_00 + 0x18) - (long)puVar3) == 0) {
      *(undefined8 **)(this_00 + 0x10) = puVar3 + uVar5;
    }
    else {
      puVar3 = (undefined8 *)v8::internal::Zone::NewExpand(this_00,uVar4);
    }
  }
  else {
    puVar15[1] = *puVar3;
  }
  puVar10 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)(this + 0x10);
  puVar1 = puVar3 + uVar11;
  puVar8 = puVar1;
  if (puVar10 != puVar2) {
    uVar6 = (ulong)((long)puVar2 + (-8 - (long)puVar10)) >> 3;
    uVar4 = uVar6 + 1;
    puVar7 = puVar1;
    if ((3 < uVar4) && ((puVar10 + uVar6 + 1 <= puVar1 || (puVar3 + uVar11 + uVar6 + 1 <= puVar10)))
       ) {
      uVar6 = uVar4 & 0x3ffffffffffffffc;
      puVar8 = puVar10 + 2;
      puVar10 = puVar10 + uVar6;
      puVar7 = puVar3 + uVar11 + 2;
      uVar11 = uVar6;
      do {
        puVar13 = puVar8 + -1;
        uVar16 = puVar8[-2];
        uVar18 = puVar8[1];
        uVar17 = *puVar8;
        puVar8 = puVar8 + 4;
        uVar11 = uVar11 - 4;
        puVar7[-1] = *puVar13;
        puVar7[-2] = uVar16;
        puVar7[1] = uVar18;
        *puVar7 = uVar17;
        puVar7 = puVar7 + 4;
      } while (uVar11 != 0);
      puVar8 = puVar1 + uVar6;
      puVar7 = puVar1 + uVar6;
      if (uVar4 == uVar6) goto LAB_016d6134;
    }
    do {
      puVar13 = puVar10 + 1;
      *puVar7 = *puVar10;
      puVar8 = puVar7 + 1;
      puVar7 = puVar7 + 1;
      puVar10 = puVar13;
    } while (puVar2 != puVar13);
  }
LAB_016d6134:
  puVar10 = *(undefined8 **)this;
  lVar12 = *(long *)(this + 0x18);
  *(undefined8 **)this = puVar3;
  *(undefined8 **)(this + 8) = puVar1;
  *(undefined8 **)(this + 0x10) = puVar8;
  *(undefined8 **)(this + 0x18) = puVar3 + uVar5;
  if ((puVar10 != (undefined8 *)0x0) && (0xf < (ulong)(lVar12 - (long)puVar10))) {
    uVar5 = lVar12 - (long)puVar10 >> 3;
    if ((puVar15[1] == 0) || (*(ulong *)(puVar15[1] + 8) <= uVar5)) {
      puVar10[1] = uVar5;
      *puVar10 = puVar15[1];
      puVar15[1] = puVar10;
      puVar8 = *(undefined8 **)(this + 0x10);
    }
  }
LAB_016d6180:
  *puVar8 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}

