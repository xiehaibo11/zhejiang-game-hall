
/* fairygui::GList::updateBounds() */

void __thiscall fairygui::GList::updateBounds(GList *this)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  GObject *pGVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (this[0x338] != (GList)0x0) {
    return;
  }
  lVar4 = *(long *)(this + 0x1e0);
  lVar2 = *(long *)(this + 0x1e8);
  fVar12 = (float)GComponent::getViewWidth((GComponent *)this);
  fVar13 = (float)GComponent::getViewHeight((GComponent *)this);
  iVar11 = (int)((ulong)(lVar2 - lVar4) >> 3);
  switch(*(undefined4 *)(this + 0x2e4)) {
  case 0:
    if (iVar11 < 1) {
      fVar14 = 0.0;
      fVar16 = 0.0;
    }
    else {
      iVar6 = 0;
      fVar16 = 0.0;
      fVar14 = 0.0;
      do {
        pGVar5 = (GObject *)GComponent::getChildAt((GComponent *)this,iVar6);
        if ((this[0x2e1] == (GList)0x0) || (pGVar5[0xf4] != (GObject)0x0)) {
          if (fVar14 != 0.0) {
            fVar14 = fVar14 + (float)*(int *)(this + 0x2f0);
          }
          GObject::setY(pGVar5,fVar14);
          if (this[0x300] != (GList)0x0) {
            GObject::setSize(pGVar5,fVar12,*(float *)(pGVar5 + 0xcc),true);
          }
          fVar14 = fVar14 + (float)(int)*(float *)(pGVar5 + 0xcc);
          fVar17 = *(float *)(pGVar5 + 200);
          if (*(float *)(pGVar5 + 200) <= fVar16) goto LAB_00a7d468;
        }
        else {
LAB_00a7d468:
          fVar17 = fVar16;
        }
        fVar16 = fVar17;
        iVar6 = iVar6 + 1;
      } while (iVar11 != iVar6);
    }
    if ((((fVar14 <= fVar13) && (this[0x300] != (GList)0x0)) &&
        (lVar4 = *(long *)(this + 0x230), lVar4 != 0)) &&
       (((*(char *)(lVar4 + 0x4e) != '\0' && (*(long *)(lVar4 + 0x118) != 0)) && (0 < iVar11)))) {
      fVar13 = *(float *)(*(long *)(lVar4 + 0x118) + 200);
      iVar6 = 0;
                    /* try { // try from 00a7db00 to 00b7db4b has its CatchHandler @ 00a7db00
                       catch() { ... } // from try @ 00a7db00 with catch @ 00a7db00
                       catch() { ... } // from try @ 00a7db50 with catch @ 00a7db00 */
      do {
        pGVar5 = (GObject *)GComponent::getChildAt((GComponent *)this,iVar6);
        if ((this[0x2e1] == (GList)0x0) || (pGVar5[0xf4] != (GObject)0x0)) {
          GObject::setSize(pGVar5,fVar12 + fVar13,*(float *)(pGVar5 + 0xcc),true);
                    /* try { // try from 00a7db4c to 00b7db4f has its CatchHandler @ 00a7db84 */
          if (fVar16 < *(float *)(pGVar5 + 200)) {
            fVar16 = *(float *)(pGVar5 + 200);
                    /* try { // try from 00a7db50 to 00b7db97 has its CatchHandler @ 00a7db00 */
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar11 != iVar6);
    }
    fVar16 = (float)(int)fVar16;
    break;
  case 1:
    if (iVar11 < 1) {
      fVar16 = 0.0;
      fVar14 = 0.0;
    }
    else {
      iVar6 = 0;
      fVar14 = 0.0;
      fVar16 = 0.0;
      do {
        pGVar5 = (GObject *)GComponent::getChildAt((GComponent *)this,iVar6);
        if ((this[0x2e1] == (GList)0x0) || (pGVar5[0xf4] != (GObject)0x0)) {
          if (fVar16 != 0.0) {
            fVar16 = fVar16 + (float)*(int *)(this + 0x2f4);
          }
          GObject::setX(pGVar5,fVar16);
          if (this[0x300] != (GList)0x0) {
            GObject::setSize(pGVar5,*(float *)(pGVar5 + 200),fVar13,true);
          }
          fVar16 = fVar16 + (float)(int)*(float *)(pGVar5 + 200);
          fVar17 = *(float *)(pGVar5 + 0xcc);
          if (*(float *)(pGVar5 + 0xcc) <= fVar14) goto LAB_00a7d544;
        }
        else {
LAB_00a7d544:
          fVar17 = fVar14;
        }
        fVar14 = fVar17;
        iVar6 = iVar6 + 1;
      } while (iVar11 != iVar6);
    }
                    /* catch() { ... } // from try @ 00a7db4c with catch @ 00a7db84 */
    if (((((fVar16 <= fVar12) && (this[0x300] != (GList)0x0)) &&
         (lVar4 = *(long *)(this + 0x230), lVar4 != 0)) &&
        ((*(char *)(lVar4 + 0x4e) != '\0' && (*(long *)(lVar4 + 0x110) != 0)))) && (0 < iVar11)) {
                    /* try { // try from 00a7db98 to 00b7e057 has its CatchHandler @ 00a7db98
                       catch() { ... } // from try @ 00a7db98 with catch @ 00a7db98
                       catch() { ... } // from try @ 00a7e0d8 with catch @ 00a7db98 */
      fVar12 = *(float *)(*(long *)(lVar4 + 0x110) + 0xcc);
      iVar6 = 0;
      do {
        pGVar5 = (GObject *)GComponent::getChildAt((GComponent *)this,iVar6);
        if ((this[0x2e1] == (GList)0x0) || (pGVar5[0xf4] != (GObject)0x0)) {
          GObject::setSize(pGVar5,*(float *)(pGVar5 + 200),fVar13 + fVar12,true);
          if (fVar14 < *(float *)(pGVar5 + 0xcc)) {
            fVar14 = *(float *)(pGVar5 + 0xcc);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar11 != iVar6);
    }
    fVar14 = (float)(int)fVar14;
    break;
  case 2:
    if ((this[0x300] == (GList)0x0) || (*(int *)(this + 0x2ec) < 1)) {
      if (iVar11 < 1) {
        fVar14 = 0.0;
        fVar13 = 0.0;
        fVar16 = 0.0;
      }
      else {
        iVar7 = 0;
        iVar6 = 0;
        fVar16 = 0.0;
        fVar13 = 0.0;
        fVar14 = 0.0;
        fVar17 = 0.0;
        do {
          pGVar5 = (GObject *)GComponent::getChildAt((GComponent *)this,iVar7);
          if ((this[0x2e1] == (GList)0x0) || (fVar15 = fVar16, pGVar5[0xf4] != (GObject)0x0)) {
            if (fVar17 != 0.0) {
              fVar17 = fVar17 + (float)*(int *)(this + 0x2f4);
            }
            iVar9 = *(int *)(this + 0x2ec);
            if (((iVar9 != 0) && (iVar9 <= iVar6)) ||
               ((iVar9 == 0 && ((fVar16 != 0.0 && (fVar12 < fVar17 + *(float *)(pGVar5 + 200)))))))
            {
              iVar6 = 0;
              fVar17 = 0.0;
              fVar14 = fVar14 + (float)(int)fVar16 + (float)*(int *)(this + 0x2f0);
              fVar16 = 0.0;
            }
            GObject::setPosition(pGVar5,fVar17,fVar14);
            iVar6 = iVar6 + 1;
            fVar17 = fVar17 + (float)(int)*(float *)(pGVar5 + 200);
            fVar15 = fVar17;
            if (fVar17 <= fVar13) {
              fVar15 = fVar13;
            }
            fVar13 = fVar15;
            fVar15 = *(float *)(pGVar5 + 0xcc);
            if (*(float *)(pGVar5 + 0xcc) <= fVar16) {
              fVar15 = fVar16;
            }
          }
          fVar16 = fVar15;
          iVar7 = iVar7 + 1;
        } while (iVar11 != iVar7);
      }
      fVar14 = fVar14 + (float)(int)fVar16;
      fVar16 = (float)(int)fVar13;
    }
    else {
      fVar14 = 0.0;
      if (0 < iVar11) {
        iVar7 = 0;
        iVar9 = 0;
        iVar6 = 0;
        fVar13 = 0.0;
        fVar14 = 0.0;
        do {
          lVar4 = GComponent::getChildAt((GComponent *)this,iVar7);
          if (((this[0x2e1] == (GList)0x0) || (iVar8 = iVar9, *(char *)(lVar4 + 0xf4) != '\0')) &&
             ((fVar13 = fVar13 + *(float *)(lVar4 + 0x78), iVar7 == iVar11 + -1 ||
              (iVar8 = iVar9 + 1, iVar9 + 1 == *(int *)(this + 0x2ec))))) {
            fVar16 = 0.0;
            if (iVar6 <= iVar7) {
              iVar8 = *(int *)(this + 0x2f4);
              fVar15 = 0.0;
              fVar17 = 0.0;
              do {
                pGVar5 = (GObject *)GComponent::getChildAt((GComponent *)this,iVar6);
                if ((this[0x2e1] == (GList)0x0) || (pGVar5[0xf4] != (GObject)0x0)) {
                  GObject::setPosition(pGVar5,fVar15,fVar14);
                  if (iVar6 < iVar7) {
                    GObject::setSize(pGVar5,*(float *)(pGVar5 + 0x78) +
                                            (float)(int)((((fVar12 - fVar13) -
                                                          (float)(iVar8 * iVar9)) / fVar13) *
                                                        *(float *)(pGVar5 + 0x78)),
                                     *(float *)(pGVar5 + 0xcc),true);
                    fVar15 = fVar15 + (float)(int)*(float *)(pGVar5 + 200) +
                                      (float)*(int *)(this + 0x2f4);
                  }
                  else {
                    GObject::setSize(pGVar5,fVar12 - fVar15,*(float *)(pGVar5 + 0xcc),true);
                  }
                  fVar16 = *(float *)(pGVar5 + 0xcc);
                  if (fVar16 <= fVar17) goto LAB_00a7d6ac;
                }
                else {
LAB_00a7d6ac:
                  fVar16 = fVar17;
                }
                bVar1 = iVar6 < iVar7;
                iVar6 = iVar6 + 1;
                fVar17 = fVar16;
              } while (bVar1);
            }
            iVar6 = iVar7 + 1;
            fVar14 = fVar14 + (float)(int)fVar16 + (float)*(int *)(this + 0x2f0);
            iVar8 = 0;
            fVar13 = 0.0;
          }
          iVar9 = iVar8;
          iVar7 = iVar7 + 1;
        } while (iVar7 != iVar11);
      }
      fVar14 = fVar14 + 0.0;
      fVar16 = fVar12;
    }
    break;
  case 3:
    if ((this[0x300] == (GList)0x0) || (*(int *)(this + 0x2e8) < 1)) {
      if (iVar11 < 1) {
        fVar16 = 0.0;
        fVar17 = 0.0;
        fVar12 = 0.0;
      }
      else {
        iVar7 = 0;
        iVar6 = 0;
        fVar12 = 0.0;
        fVar17 = 0.0;
        fVar14 = 0.0;
        fVar16 = 0.0;
        do {
          pGVar5 = (GObject *)GComponent::getChildAt((GComponent *)this,iVar7);
          if ((this[0x2e1] == (GList)0x0) || (fVar15 = fVar17, pGVar5[0xf4] != (GObject)0x0)) {
            if (fVar14 != 0.0) {
              fVar14 = fVar14 + (float)*(int *)(this + 0x2f0);
            }
            iVar9 = *(int *)(this + 0x2e8);
            if (((iVar9 != 0) && (iVar9 <= iVar6)) ||
               ((iVar9 == 0 && ((fVar17 != 0.0 && (fVar13 < fVar14 + *(float *)(pGVar5 + 0xcc)))))))
            {
              iVar6 = 0;
              fVar14 = 0.0;
              fVar16 = fVar16 + (float)(int)fVar17 + (float)*(int *)(this + 0x2f4);
              fVar17 = 0.0;
            }
            GObject::setPosition(pGVar5,fVar16,fVar14);
            iVar6 = iVar6 + 1;
            fVar14 = fVar14 + *(float *)(pGVar5 + 0xcc);
            fVar15 = fVar14;
            if (fVar14 <= fVar12) {
              fVar15 = fVar12;
            }
            fVar12 = fVar15;
            fVar15 = *(float *)(pGVar5 + 200);
            if (*(float *)(pGVar5 + 200) <= fVar17) {
              fVar15 = fVar17;
            }
          }
          fVar17 = fVar15;
          iVar7 = iVar7 + 1;
        } while (iVar11 != iVar7);
      }
      fVar14 = (float)(int)fVar12;
      fVar16 = fVar16 + (float)(int)fVar17;
    }
    else {
      fVar12 = 0.0;
      if (0 < iVar11) {
        iVar7 = 0;
        iVar9 = 0;
        iVar6 = 0;
        fVar16 = 0.0;
        fVar12 = 0.0;
        do {
          lVar4 = GComponent::getChildAt((GComponent *)this,iVar7);
          if (((this[0x2e1] == (GList)0x0) || (iVar8 = iVar9, *(char *)(lVar4 + 0xf4) != '\0')) &&
             ((fVar16 = fVar16 + *(float *)(lVar4 + 0x7c), iVar7 == iVar11 + -1 ||
              (iVar8 = iVar9 + 1, iVar9 + 1 == *(int *)(this + 0x2e8))))) {
            fVar14 = 0.0;
            if (iVar6 <= iVar7) {
              iVar8 = *(int *)(this + 0x2f0);
              fVar15 = 0.0;
              fVar17 = 0.0;
              do {
                pGVar5 = (GObject *)GComponent::getChildAt((GComponent *)this,iVar6);
                if ((this[0x2e1] == (GList)0x0) || (pGVar5[0xf4] != (GObject)0x0)) {
                  GObject::setPosition(pGVar5,fVar12,fVar15);
                  if (iVar6 < iVar7) {
                    GObject::setSize(pGVar5,*(float *)(pGVar5 + 200),
                                     *(float *)(pGVar5 + 0x7c) +
                                     (float)(int)((((fVar13 - fVar16) - (float)(iVar8 * iVar9)) /
                                                  fVar16) * *(float *)(pGVar5 + 0x7c)),true);
                    fVar15 = fVar15 + (float)(int)*(float *)(pGVar5 + 0xcc) +
                                      (float)*(int *)(this + 0x2f0);
                  }
                  else {
                    GObject::setSize(pGVar5,*(float *)(pGVar5 + 200),fVar13 - fVar15,true);
                  }
                  fVar14 = *(float *)(pGVar5 + 200);
                  if (fVar14 <= fVar17) goto LAB_00a7d838;
                }
                else {
LAB_00a7d838:
                  fVar14 = fVar17;
                }
                bVar1 = iVar6 < iVar7;
                iVar6 = iVar6 + 1;
                fVar17 = fVar14;
              } while (bVar1);
            }
            iVar6 = iVar7 + 1;
            fVar12 = fVar12 + (float)(int)fVar14 + (float)*(int *)(this + 0x2f4);
            iVar8 = 0;
            fVar16 = 0.0;
          }
          iVar9 = iVar8;
          iVar7 = iVar7 + 1;
        } while (iVar7 != iVar11);
      }
      fVar16 = fVar12 + 0.0;
      fVar14 = fVar13;
    }
    break;
  default:
    fVar16 = 0.0;
    if (this[0x300] == (GList)0x0) {
LAB_00a7ddf8:
      if (iVar11 < 1) {
        iVar6 = 0;
        fVar13 = 0.0;
      }
      else {
        iVar9 = 0;
        iVar8 = 0;
        iVar6 = 0;
        iVar7 = 0;
        fVar15 = 0.0;
        fVar14 = 0.0;
        fVar17 = 0.0;
        fVar18 = 0.0;
        do {
          pGVar5 = (GObject *)GComponent::getChildAt((GComponent *)this,iVar9);
          if ((this[0x2e1] == (GList)0x0) || (fVar19 = fVar15, pGVar5[0xf4] != (GObject)0x0)) {
            if (fVar18 != 0.0) {
              fVar18 = fVar18 + (float)*(int *)(this + 0x2f4);
            }
            if ((this[0x300] != (GList)0x0) && (0 < *(int *)(this + 0x2e8))) {
              GObject::setSize(pGVar5,*(float *)(pGVar5 + 200),fVar16,true);
            }
            iVar10 = *(int *)(this + 0x2ec);
            if (((iVar10 != 0) && (iVar10 <= iVar7)) ||
               ((iVar10 == 0 && ((fVar15 != 0.0 && (fVar12 < fVar18 + *(float *)(pGVar5 + 200)))))))
            {
              iVar7 = *(int *)(this + 0x2e8);
              iVar8 = iVar8 + 1;
              if (((iVar7 != 0) && (iVar7 <= iVar8)) ||
                 (((fVar17 = fVar17 + fVar15 + (float)*(int *)(this + 0x2f0), iVar7 == 0 &&
                   (fVar14 != 0.0)) && (fVar13 < fVar17 + *(float *)(pGVar5 + 0xcc))))) {
                iVar8 = 0;
                iVar6 = iVar6 + 1;
                fVar17 = 0.0;
              }
              fVar18 = 0.0;
              iVar7 = 0;
              fVar15 = 0.0;
            }
            GObject::setPosition(pGVar5,fVar18 + fVar12 * (float)iVar6,fVar17);
            iVar7 = iVar7 + 1;
            fVar18 = fVar18 + (float)(int)*(float *)(pGVar5 + 200);
            fVar19 = fVar18;
            if (fVar18 <= fVar14) {
              fVar19 = fVar14;
            }
            fVar14 = fVar19;
            fVar19 = *(float *)(pGVar5 + 0xcc);
            if (*(float *)(pGVar5 + 0xcc) <= fVar15) {
              fVar19 = fVar15;
            }
          }
          fVar15 = fVar19;
          iVar9 = iVar9 + 1;
        } while (iVar11 != iVar9);
LAB_00a7df64:
        if (iVar6 < 1) {
          fVar13 = fVar17 + (float)(int)fVar15;
        }
      }
    }
    else {
      iVar6 = *(int *)(this + 0x2e8);
      if (iVar6 < 1) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = (float)(int)((fVar13 - (float)(*(int *)(this + 0x2f0) * (iVar6 + -1))) /
                             (float)iVar6);
      }
      if (*(int *)(this + 0x2ec) < 1) goto LAB_00a7ddf8;
      if (0 < iVar11) {
        iVar8 = 0;
        iVar7 = 0;
        iVar9 = 0;
        iVar6 = 0;
        iVar10 = 0;
        fVar14 = 0.0;
        fVar17 = 0.0;
        do {
          lVar4 = GComponent::getChildAt((GComponent *)this,iVar8);
          if ((this[0x2e1] == (GList)0x0) || (iVar3 = iVar10, *(char *)(lVar4 + 0xf4) != '\0')) {
            if ((iVar10 == 0) &&
               (((iVar3 = *(int *)(this + 0x2e8), iVar3 != 0 && (iVar3 <= iVar9)) ||
                ((iVar3 == 0 && (fVar13 < fVar17 + *(float *)(lVar4 + 0xcc))))))) {
              iVar9 = 0;
              iVar6 = iVar6 + 1;
              fVar17 = 0.0;
            }
            fVar14 = fVar14 + *(float *)(lVar4 + 0x78);
            if ((iVar8 == iVar11 + -1) || (iVar3 = iVar10 + 1, iVar10 + 1 == *(int *)(this + 0x2ec))
               ) {
              fVar15 = 0.0;
              if (iVar7 <= iVar8) {
                iVar3 = *(int *)(this + 0x2f4);
                fVar19 = 0.0;
                fVar18 = 0.0;
                do {
                  pGVar5 = (GObject *)GComponent::getChildAt((GComponent *)this,iVar7);
                  if ((this[0x2e1] == (GList)0x0) || (pGVar5[0xf4] != (GObject)0x0)) {
                    GObject::setPosition(pGVar5,fVar12 * (float)iVar6 + fVar19,fVar17);
                    if (iVar7 < iVar8) {
                      fVar15 = fVar16;
                      if (*(int *)(this + 0x2e8) < 1) {
                        fVar15 = *(float *)(pGVar5 + 0xcc);
                      }
                      GObject::setSize(pGVar5,*(float *)(pGVar5 + 0x78) +
                                              (float)(int)((((fVar12 - fVar14) -
                                                            (float)(iVar3 * iVar10)) / fVar14) *
                                                          *(float *)(pGVar5 + 0x78)),fVar15,true);
                      fVar19 = fVar19 + (float)(int)*(float *)(pGVar5 + 200) +
                                        (float)*(int *)(this + 0x2f4);
                    }
                    else {
                      fVar15 = fVar16;
                      if (*(int *)(this + 0x2e8) < 1) {
                        fVar15 = *(float *)(pGVar5 + 0xcc);
                      }
                      GObject::setSize(pGVar5,fVar12 - fVar19,fVar15,true);
                    }
                    fVar15 = *(float *)(pGVar5 + 0xcc);
                    if (fVar15 <= fVar18) goto LAB_00a7dd2c;
                  }
                  else {
LAB_00a7dd2c:
                    fVar15 = fVar18;
                  }
                  bVar1 = iVar7 < iVar8;
                  iVar7 = iVar7 + 1;
                  fVar18 = fVar15;
                } while (bVar1);
              }
              iVar7 = iVar8 + 1;
              fVar17 = fVar17 + (float)(int)fVar15 + (float)*(int *)(this + 0x2f0);
              iVar9 = iVar9 + 1;
              iVar3 = 0;
              fVar14 = 0.0;
            }
          }
          iVar10 = iVar3;
          iVar8 = iVar8 + 1;
        } while (iVar8 != iVar11);
        fVar15 = 0.0;
        goto LAB_00a7df64;
      }
      iVar6 = 0;
      fVar13 = 0.0;
    }
    fVar16 = fVar12 * (float)(iVar6 + 1);
    fVar14 = fVar13;
  }
  handleAlign(this,fVar16,fVar14);
  GComponent::setBounds((GComponent *)this,0.0,0.0,fVar16,fVar14);
  return;
}

