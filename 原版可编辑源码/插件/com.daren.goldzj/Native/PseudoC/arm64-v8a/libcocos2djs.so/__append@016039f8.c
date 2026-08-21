
/* std::__ndk1::vector<unsigned int, v8::internal::ZoneAllocator<unsigned int> >::__append(unsigned
   long, unsigned int const&) */

void __thiscall
std::__ndk1::vector<unsigned_int,v8::internal::ZoneAllocator<unsigned_int>>::__append
          (vector<unsigned_int,v8::internal::ZoneAllocator<unsigned_int>> *this,ulong param_1,
          uint *param_2)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  Zone *this_00;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  long lVar12;
  
  puVar4 = *(uint **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar4 >> 2)) {
    do {
      param_1 = param_1 - 1;
      *puVar4 = *param_2;
      puVar4 = (uint *)(*(long *)(this + 8) + 4);
      *(uint **)(this + 8) = puVar4;
    } while (param_1 != 0);
    return;
  }
  lVar12 = (long)puVar4 - *(long *)this >> 2;
  uVar1 = lVar12 + param_1;
  if (uVar1 >> 0x1d != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this;
  uVar8 = lVar5 >> 1;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0xffffffe < (ulong)(lVar5 >> 2)) {
    uVar1 = 0x1fffffff;
  }
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar8 = uVar1 * 4 + 7 & 0xfffffffffffffff8;
    lVar5 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar5) < uVar8) {
      lVar5 = v8::internal::Zone::NewExpand(this_00,uVar8);
    }
    else {
      *(ulong *)(this_00 + 0x10) = lVar5 + uVar8;
    }
  }
  puVar4 = (uint *)(lVar5 + lVar12 * 4);
  puVar6 = puVar4;
  if ((7 < param_1) &&
     (((uint *)((long)param_2 + 1U) <= puVar4 ||
      ((uint *)(lVar5 + (lVar12 + param_1) * 4) <= param_2)))) {
    uVar2 = *param_2;
    uVar9 = param_1 & 0xfffffffffffffff8;
    puVar7 = puVar4 + uVar9;
    puVar11 = (undefined8 *)(lVar5 + lVar12 * 4 + 0x10);
    uVar8 = uVar9;
    do {
      puVar11[-1] = CONCAT44(uVar2,uVar2);
      puVar11[-2] = CONCAT44(uVar2,uVar2);
      puVar11[1] = CONCAT44(uVar2,uVar2);
      *puVar11 = CONCAT44(uVar2,uVar2);
      uVar8 = uVar8 - 8;
      puVar11 = puVar11 + 4;
    } while (uVar8 != 0);
    bVar3 = uVar9 == param_1;
    puVar6 = puVar7;
    param_1 = param_1 - uVar9;
    if (bVar3) goto LAB_01603af4;
  }
  do {
    param_1 = param_1 - 1;
    puVar7 = puVar6 + 1;
    *puVar6 = *param_2;
    puVar6 = puVar7;
  } while (param_1 != 0);
LAB_01603af4:
  puVar6 = *(uint **)this;
  puVar10 = *(uint **)(this + 8);
  while (puVar10 != puVar6) {
    puVar10 = puVar10 + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *puVar10;
  }
  *(uint **)this = puVar4;
  *(uint **)(this + 8) = puVar7;
  *(ulong *)(this + 0x10) = lVar5 + uVar1 * 4;
  return;
}

