
/* std::__ndk1::__split_buffer<v8::internal::Map*,
   v8::internal::RecyclingZoneAllocator<v8::internal::Map*>&>::push_front(v8::internal::Map* const&)
    */

void __thiscall
std::__ndk1::
__split_buffer<v8::internal::Map*,v8::internal::RecyclingZoneAllocator<v8::internal::Map*>&>::
push_front(__split_buffer<v8::internal::Map*,v8::internal::RecyclingZoneAllocator<v8::internal::Map*>&>
           *this,Map **param_1)

{
  undefined8 *puVar1;
  size_t __n;
  undefined8 *puVar2;
  ulong uVar3;
  Zone *this_00;
  undefined8 *__src;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  __src = *(undefined8 **)(this + 8);
  if (__src != *(undefined8 **)this) goto LAB_010f2ed8;
  uVar4 = *(ulong *)(this + 0x10);
  uVar7 = *(ulong *)(this + 0x18);
  if (uVar4 < uVar7) {
    lVar5 = (long)(uVar7 - uVar4) >> 3;
    lVar9 = lVar5 + 2;
    if (-1 < lVar5 + 1) {
      lVar9 = lVar5 + 1;
    }
    __n = uVar4 - (long)__src;
    puVar13 = (undefined8 *)(uVar4 + (lVar9 >> 1) * 8);
    if (__n != 0) {
      puVar13 = (undefined8 *)((long)puVar13 - __n);
      memmove(puVar13,__src,__n);
      uVar4 = *(ulong *)(this + 0x10);
    }
    __src = puVar13;
    *(undefined8 **)(this + 8) = __src;
    *(ulong *)(this + 0x10) = uVar4 + (lVar9 >> 1) * 8;
    goto LAB_010f2ed8;
  }
  puVar13 = *(undefined8 **)(this + 0x20);
  lVar9 = uVar7 - (long)*(undefined8 **)this;
  uVar4 = lVar9 >> 2;
  if (lVar9 == 0) {
    uVar4 = 1;
  }
  puVar2 = (undefined8 *)puVar13[1];
  uVar7 = uVar4 + 3 >> 2;
  if ((puVar2 == (undefined8 *)0x0) || ((ulong)puVar2[1] < uVar4)) {
    this_00 = (Zone *)*puVar13;
    uVar3 = uVar4 * 8;
    puVar2 = *(undefined8 **)(this_00 + 0x10);
    if (uVar3 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar2) ||
        uVar3 - (*(long *)(this_00 + 0x18) - (long)puVar2) == 0) {
      *(undefined8 **)(this_00 + 0x10) = puVar2 + uVar4;
    }
    else {
      puVar2 = (undefined8 *)v8::internal::Zone::NewExpand(this_00,uVar3);
    }
  }
  else {
    puVar13[1] = *puVar2;
  }
  puVar6 = *(undefined8 **)(this + 8);
  puVar1 = *(undefined8 **)(this + 0x10);
  __src = puVar2 + uVar7;
  puVar11 = __src;
  if (puVar6 != puVar1) {
    uVar10 = (ulong)((long)puVar1 + (-8 - (long)puVar6)) >> 3;
    uVar3 = uVar10 + 1;
    puVar8 = __src;
    if ((3 < uVar3) && ((puVar6 + uVar10 + 1 <= __src || (puVar2 + uVar10 + uVar7 + 1 <= puVar6))))
    {
      uVar10 = uVar3 & 0x3ffffffffffffffc;
      puVar11 = puVar6 + 2;
      puVar6 = puVar6 + uVar10;
      puVar8 = puVar2 + uVar7 + 2;
      uVar7 = uVar10;
      do {
        puVar12 = puVar11 + -1;
        uVar14 = puVar11[-2];
        uVar16 = puVar11[1];
        uVar15 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar7 = uVar7 - 4;
        puVar8[-1] = *puVar12;
        puVar8[-2] = uVar14;
        puVar8[1] = uVar16;
        *puVar8 = uVar15;
        puVar8 = puVar8 + 4;
      } while (uVar7 != 0);
      puVar11 = __src + uVar10;
      puVar8 = __src + uVar10;
      if (uVar3 == uVar10) goto LAB_010f2e8c;
    }
    do {
      puVar12 = puVar6 + 1;
      *puVar8 = *puVar6;
      puVar11 = puVar8 + 1;
      puVar8 = puVar8 + 1;
      puVar6 = puVar12;
    } while (puVar1 != puVar12);
  }
LAB_010f2e8c:
  puVar6 = *(undefined8 **)this;
  lVar9 = *(long *)(this + 0x18);
  *(undefined8 **)this = puVar2;
  *(undefined8 **)(this + 8) = __src;
  *(undefined8 **)(this + 0x10) = puVar11;
  *(undefined8 **)(this + 0x18) = puVar2 + uVar4;
  if ((puVar6 != (undefined8 *)0x0) && (0xf < (ulong)(lVar9 - (long)puVar6))) {
    uVar4 = lVar9 - (long)puVar6 >> 3;
    if ((puVar13[1] == 0) || (*(ulong *)(puVar13[1] + 8) <= uVar4)) {
      puVar6[1] = uVar4;
      *puVar6 = puVar13[1];
      puVar13[1] = puVar6;
      __src = *(undefined8 **)(this + 8);
    }
  }
LAB_010f2ed8:
  __src[-1] = *param_1;
  *(long *)(this + 8) = *(long *)(this + 8) + -8;
  return;
}

