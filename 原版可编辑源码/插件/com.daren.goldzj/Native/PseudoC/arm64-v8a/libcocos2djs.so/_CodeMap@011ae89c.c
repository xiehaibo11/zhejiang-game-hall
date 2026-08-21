
/* v8::internal::CodeMap::~CodeMap() */

void __thiscall v8::internal::CodeMap::~CodeMap(CodeMap *this)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  void *in_x1;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  RareData *this_00;
  Malloced *this_01;
  undefined8 *puVar13;
  
  uVar3 = *(uint *)(this + 0x48);
  while (uVar3 != 0xffffffff) {
    lVar6 = *(long *)(*(long *)(this + 8) +
                     (*(long *)(this + 0x20) + (ulong)uVar3 >> 6 & 0x3fffffffffffff8));
    lVar9 = (*(long *)(this + 0x20) + (ulong)uVar3 & 0x1ff) * 8;
    uVar3 = *(uint *)(lVar6 + lVar9);
    *(undefined8 *)(lVar6 + lVar9) = 0;
  }
  lVar6 = *(long *)(this + 8);
  if (*(long *)(this + 0x10) != lVar6) {
    uVar7 = *(ulong *)(this + 0x20);
    plVar8 = (long *)(lVar6 + (uVar7 >> 6 & 0x3fffffffffffff8));
    puVar13 = (undefined8 *)(*plVar8 + (uVar7 & 0x1ff) * 8);
    puVar1 = (undefined8 *)
             (*(long *)(lVar6 + (*(long *)(this + 0x28) + uVar7 >> 6 & 0x3fffffffffffff8)) +
             (*(long *)(this + 0x28) + uVar7 & 0x1ff) * 8);
    while (puVar1 != puVar13) {
      while( true ) {
        pvVar11 = (void *)*puVar13;
        if (pvVar11 != (void *)0x0) {
          this_00 = *(RareData **)((long)pvVar11 + 0x38);
          *(undefined8 *)((long)pvVar11 + 0x38) = 0;
          if (this_00 != (RareData *)0x0) {
            CodeEntry::RareData::~RareData(this_00);
            operator_delete(this_00);
            in_x1 = extraout_x1;
          }
          this_01 = *(Malloced **)((long)pvVar11 + 0x28);
          *(undefined8 *)((long)pvVar11 + 0x28) = 0;
          if (this_01 != (Malloced *)0x0) {
            pvVar4 = *(void **)this_01;
            if (pvVar4 != (void *)0x0) {
              *(void **)(this_01 + 8) = pvVar4;
              operator_delete(pvVar4);
              in_x1 = extraout_x1_00;
            }
            Malloced::operator_delete(this_01,in_x1);
          }
          operator_delete(pvVar11);
          in_x1 = extraout_x1_01;
        }
        puVar13 = puVar13 + 1;
        if ((long)puVar13 - *plVar8 != 0x1000) break;
        plVar8 = plVar8 + 1;
        puVar13 = (undefined8 *)*plVar8;
        if (puVar1 == puVar13) goto LAB_011ae9bc;
      }
    }
  }
LAB_011ae9bc:
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::CodeMap::CodeEntryMapInfo>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::CodeMap::CodeEntryMapInfo>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,v8::internal::CodeMap::CodeEntryMapInfo>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::CodeMap::CodeEntryMapInfo>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::CodeMap::CodeEntryMapInfo>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,v8::internal::CodeMap::CodeEntryMapInfo>>>
             *)(this + 0x30),*(__tree_node **)(this + 0x38));
  puVar13 = *(undefined8 **)(this + 8);
  puVar1 = *(undefined8 **)(this + 0x10);
  lVar6 = (long)puVar1 - (long)puVar13;
  if (lVar6 != 0) {
    uVar10 = *(ulong *)(this + 0x20);
    uVar7 = *(long *)(this + 0x28) + uVar10;
    plVar8 = (long *)((long)puVar13 + (uVar10 >> 6 & 0x3fffffffffffff8));
    lVar9 = *plVar8 + (uVar10 & 0x1ff) * 8;
    lVar2 = *(long *)((long)puVar13 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8;
    while (lVar2 != lVar9) {
      while (lVar9 = lVar9 + 8, lVar9 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        lVar9 = *plVar8;
        if (lVar2 == lVar9) goto LAB_011aea34;
      }
    }
  }
LAB_011aea34:
  *(undefined8 *)(this + 0x28) = 0;
  while (uVar7 = lVar6 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar13);
    puVar1 = *(undefined8 **)(this + 0x10);
    puVar13 = (undefined8 *)(*(long *)(this + 8) + 8);
    *(undefined8 **)(this + 8) = puVar13;
    lVar6 = (long)puVar1 - (long)puVar13;
  }
  if (uVar7 == 1) {
    uVar5 = 0x100;
  }
  else {
    if (uVar7 != 2) goto LAB_011aea88;
    uVar5 = 0x200;
  }
  *(undefined8 *)(this + 0x20) = uVar5;
LAB_011aea88:
  if (puVar13 != puVar1) {
    do {
      puVar12 = puVar13 + 1;
      operator_delete((void *)*puVar13);
      puVar13 = puVar12;
    } while (puVar1 != puVar12);
    lVar6 = *(long *)(this + 0x10) - *(long *)(this + 8);
    if (lVar6 != 0) {
      *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (lVar6 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}

