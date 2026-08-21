
/* v8::internal::TranslatedFrame::~TranslatedFrame() */

void __thiscall v8::internal::TranslatedFrame::~TranslatedFrame(TranslatedFrame *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined8 **)(this + 0x30);
  puVar2 = *(undefined8 **)(this + 0x38);
  lVar3 = (long)puVar2 - (long)puVar8;
  if (lVar3 != 0) {
    uVar6 = *(ulong *)(this + 0x48);
    plVar5 = (long *)((long)puVar8 + (uVar6 >> 4 & 0xffffffffffffff8));
    lVar7 = *plVar5 + (uVar6 & 0x7f) * 0x20;
    lVar1 = *(long *)((long)puVar8 + (*(long *)(this + 0x50) + uVar6 >> 4 & 0xffffffffffffff8)) +
            (*(long *)(this + 0x50) + uVar6 & 0x7f) * 0x20;
    while (lVar1 != lVar7) {
      while (lVar7 = lVar7 + 0x20, lVar7 - *plVar5 == 0x1000) {
        plVar5 = plVar5 + 1;
        lVar7 = *plVar5;
        if (lVar1 == lVar7) goto LAB_00f1ffcc;
      }
    }
  }
LAB_00f1ffcc:
  *(undefined8 *)(this + 0x50) = 0;
  while (uVar6 = lVar3 >> 3, 2 < uVar6) {
    operator_delete((void *)*puVar8);
    puVar2 = *(undefined8 **)(this + 0x38);
    puVar8 = (undefined8 *)(*(long *)(this + 0x30) + 8);
    *(undefined8 **)(this + 0x30) = puVar8;
    lVar3 = (long)puVar2 - (long)puVar8;
  }
  if (uVar6 == 1) {
    uVar4 = 0x40;
  }
  else {
    if (uVar6 != 2) goto LAB_00f20020;
    uVar4 = 0x80;
  }
  *(undefined8 *)(this + 0x48) = uVar4;
LAB_00f20020:
  if (puVar8 != puVar2) {
    do {
      puVar9 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar9;
    } while (puVar2 != puVar9);
    lVar3 = *(long *)(this + 0x38) - *(long *)(this + 0x30);
    if (lVar3 != 0) {
      *(ulong *)(this + 0x38) = *(long *)(this + 0x38) + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28));
    return;
  }
  return;
}

