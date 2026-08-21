
/* v8::internal::CpuProfile::~CpuProfile() */

void __thiscall v8::internal::CpuProfile::~CpuProfile(CpuProfile *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  ProfileTree::~ProfileTree((ProfileTree *)(this + 0x68));
  puVar9 = *(undefined8 **)(this + 0x40);
  puVar1 = *(undefined8 **)(this + 0x48);
  lVar3 = (long)puVar1 - (long)puVar9;
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(this + 0x58);
    lVar7 = puVar9[uVar5 / 0xaa] + (uVar5 % 0xaa) * 0x18;
    lVar6 = puVar9[(*(long *)(this + 0x60) + uVar5) / 0xaa] +
            ((*(long *)(this + 0x60) + uVar5) % 0xaa) * 0x18;
    if (lVar6 != lVar7) {
      plVar8 = puVar9 + uVar5 / 0xaa;
      do {
        lVar7 = lVar7 + 0x18;
        if (lVar7 - *plVar8 == 0xff0) {
          plVar8 = plVar8 + 1;
          lVar7 = *plVar8;
        }
      } while (lVar6 != lVar7);
    }
  }
  *(undefined8 *)(this + 0x60) = 0;
  while (uVar5 = lVar3 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar9);
    puVar1 = *(undefined8 **)(this + 0x48);
    puVar9 = (undefined8 *)(*(long *)(this + 0x40) + 8);
    *(undefined8 **)(this + 0x40) = puVar9;
    lVar3 = (long)puVar1 - (long)puVar9;
  }
  if (uVar5 == 1) {
    uVar4 = 0x55;
  }
  else {
    if (uVar5 != 2) goto LAB_0119b528;
    uVar4 = 0xaa;
  }
  *(undefined8 *)(this + 0x58) = uVar4;
LAB_0119b528:
  if (puVar9 != puVar1) {
    do {
      puVar10 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar10;
    } while (puVar1 != puVar10);
    lVar3 = *(long *)(this + 0x48) - *(long *)(this + 0x40);
    if (lVar3 != 0) {
      *(ulong *)(this + 0x48) = *(long *)(this + 0x48) + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x38));
  }
  pvVar2 = *(void **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (*(ulong **)(this + 0x18) != (ulong *)0x0) {
    v8::V8::DisposeGlobal(*(ulong **)(this + 0x18));
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}

