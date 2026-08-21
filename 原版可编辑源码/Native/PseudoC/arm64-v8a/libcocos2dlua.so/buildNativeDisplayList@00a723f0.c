
/* fairygui::GComponent::buildNativeDisplayList() */

void __thiscall fairygui::GComponent::buildNativeDisplayList(GComponent *this)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  GObject *pGVar8;
  long lVar9;
  ulong uVar10;
  
                    /* catch() { ... } // from try @ 00a7236c with catch @ 00a72404 */
                    /* catch() { ... } // from try @ 00a72384 with catch @ 00a72408 */
  lVar5 = *(long *)(this + 0x1e0);
  uVar10 = *(long *)(this + 0x1e8) - lVar5;
  iVar6 = (int)(uVar10 >> 3);
  if (iVar6 != 0) {
    iVar7 = *(int *)(this + 0x250);
    if (iVar7 == 0) {
      if (0 < iVar6) {
        uVar2 = 0;
        while( true ) {
          pGVar8 = *(GObject **)(lVar5 + uVar2 * 8);
          if (((*(long *)(pGVar8 + 0xa8) != 0) && (pGVar8 != *(GObject **)(this + 0x260))) &&
             (uVar3 = GObject::internalVisible(pGVar8), (uVar3 & 1) != 0)) {
            (**(code **)(**(long **)(this + 0x228) + 0x210))
                      (*(long **)(this + 0x228),*(undefined8 *)(pGVar8 + 0xa8),uVar2 & 0xffffffff);
          }
          if ((uVar10 >> 3 & 0xffffffff) - 1 == uVar2) break;
          lVar5 = *(long *)(this + 0x1e0);
          uVar2 = uVar2 + 1;
        }
      }
    }
    else if (iVar7 == 2) {
      iVar1 = *(int *)(this + 0x254);
      iVar7 = iVar1;
      if (iVar6 <= iVar1) {
        iVar7 = iVar6;
      }
      if (0 < iVar7) {
        uVar2 = 0;
        while( true ) {
          pGVar8 = *(GObject **)(lVar5 + uVar2 * 8);
          if (((*(long *)(pGVar8 + 0xa8) != 0) && (pGVar8 != *(GObject **)(this + 0x260))) &&
             (uVar3 = GObject::internalVisible(pGVar8), (uVar3 & 1) != 0)) {
            lVar5 = (**(code **)(**(long **)(pGVar8 + 0xa8) + 0x260))();
            if (lVar5 == 0) {
              (**(code **)(**(long **)(this + 0x228) + 0x210))
                        (*(long **)(this + 0x228),*(undefined8 *)(pGVar8 + 0xa8),uVar2 & 0xffffffff)
              ;
            }
            else {
              (**(code **)(**(long **)(pGVar8 + 0xa8) + 0x18))
                        (*(long **)(pGVar8 + 0xa8),uVar2 & 0xffffffff);
            }
          }
          uVar2 = uVar2 + 1;
          if ((long)iVar7 <= (long)uVar2) break;
          lVar5 = *(long *)(this + 0x1e0);
        }
      }
      if (iVar1 < iVar6) {
        lVar5 = (long)(uVar10 * 0x20000000) >> 0x20;
        lVar9 = (long)iVar7;
        do {
          pGVar8 = *(GObject **)(*(long *)(this + 0x1e0) + lVar5 * 8 + -8);
          lVar5 = lVar5 + -1;
          if (((*(long *)(pGVar8 + 0xa8) != 0) && (pGVar8 != *(GObject **)(this + 0x260))) &&
             (uVar10 = GObject::internalVisible(pGVar8), (uVar10 & 1) != 0)) {
            lVar4 = (**(code **)(**(long **)(pGVar8 + 0xa8) + 0x260))();
            if (lVar4 == 0) {
              (**(code **)(**(long **)(this + 0x228) + 0x210))
                        (*(long **)(this + 0x228),*(undefined8 *)(pGVar8 + 0xa8),iVar7);
            }
            else {
              (**(code **)(**(long **)(pGVar8 + 0xa8) + 0x18))(*(long **)(pGVar8 + 0xa8),iVar7);
            }
          }
          iVar7 = iVar7 + 1;
        } while (lVar9 < lVar5);
      }
    }
    else {
                    /* catch() { ... } // from try @ 00a72338 with catch @ 00a72438 */
      if ((iVar7 == 1) && (0 < iVar6)) {
        lVar9 = 0;
        while( true ) {
          iVar6 = iVar6 + -1;
          pGVar8 = *(GObject **)(lVar5 + lVar9);
          if (((*(long *)(pGVar8 + 0xa8) != 0) && (pGVar8 != *(GObject **)(this + 0x260))) &&
             (uVar2 = GObject::internalVisible(pGVar8), (uVar2 & 1) != 0)) {
            (**(code **)(**(long **)(this + 0x228) + 0x210))
                      (*(long **)(this + 0x228),*(undefined8 *)(pGVar8 + 0xa8),iVar6);
          }
          if ((uVar10 >> 3 & 0xffffffff) * 8 + -8 == lVar9) break;
          lVar5 = *(long *)(this + 0x1e0);
          lVar9 = lVar9 + 8;
        }
      }
    }
  }
  return;
}

