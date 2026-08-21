
/* fairygui::RelationItem::copyFrom(fairygui::RelationItem const&) */

void __thiscall fairygui::RelationItem::copyFrom(RelationItem *this,RelationItem *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  GObject *pGVar5;
  GObject *pGVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  
  pGVar5 = (GObject *)WeakPtr::ptr((WeakPtr *)(param_1 + 8));
  pGVar6 = (GObject *)WeakPtr::ptr((WeakPtr *)(this + 8));
  if (pGVar6 != pGVar5) {
    if (pGVar6 != (GObject *)0x0) {
      releaseRefTarget(this,pGVar6);
    }
    WeakPtr::operator=((WeakPtr *)(this + 8),pGVar5);
    if (pGVar5 != (GObject *)0x0) {
      addRefTarget(this,pGVar5);
    }
  }
  puVar12 = *(undefined1 **)(this + 0x10);
  *(undefined1 **)(this + 0x18) = puVar12;
  puVar13 = *(undefined1 **)(param_1 + 0x10);
  puVar2 = *(undefined1 **)(param_1 + 0x18);
  if (puVar13 == puVar2) {
    return;
  }
  do {
    if (puVar12 == *(undefined1 **)(this + 0x20)) {
      puVar15 = *(undefined1 **)(this + 0x10);
      lVar8 = (long)puVar12 - (long)puVar15 >> 2;
      uVar1 = lVar8 * -0x5555555555555555 + 1;
      if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      lVar9 = (long)*(undefined1 **)(this + 0x20) - (long)puVar15 >> 2;
      uVar14 = 0x1555555555555555;
      if ((ulong)(lVar9 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
        uVar10 = lVar9 * 0x5555555555555556;
        uVar14 = uVar1;
        if (uVar1 <= uVar10) {
          uVar14 = uVar10;
        }
        if (uVar14 != 0) goto LAB_00ac3b9c;
        pvVar7 = (void *)0x0;
      }
      else {
LAB_00ac3b9c:
        pvVar7 = operator_new(uVar14 * 0xc);
      }
      puVar11 = (undefined1 *)((long)pvVar7 + lVar8 * 4);
      *puVar11 = *puVar13;
      *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar13 + 4);
      puVar3 = puVar11;
      puVar4 = puVar12;
      while (puVar4 != puVar15) {
        puVar3[-0xc] = puVar4[-0xc];
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar4 + -8);
        puVar3 = puVar3 + -0xc;
        puVar12 = puVar15;
        puVar4 = puVar4 + -0xc;
      }
      *(undefined1 **)(this + 0x10) = puVar3;
      *(undefined1 **)(this + 0x18) = puVar11 + 0xc;
      *(void **)(this + 0x20) = (void *)((long)pvVar7 + uVar14 * 0xc);
      if (puVar12 != (undefined1 *)0x0) {
        operator_delete(puVar12);
      }
    }
    else {
      *puVar12 = *puVar13;
      *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar13 + 4);
      *(undefined1 **)(this + 0x18) = puVar12 + 0xc;
    }
    puVar13 = puVar13 + 0xc;
    if (puVar13 == puVar2) {
      return;
    }
    puVar12 = *(undefined1 **)(this + 0x18);
  } while( true );
}

