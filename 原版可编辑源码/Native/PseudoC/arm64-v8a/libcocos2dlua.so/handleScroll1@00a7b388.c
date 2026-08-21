
/* fairygui::GList::handleScroll1(bool) */

undefined4 __thiscall fairygui::GList::handleScroll1(GList *this,bool param_1)

{
  GList *pGVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  basic_string *extraout_x1;
  basic_string *extraout_x1_00;
  basic_string *extraout_x1_01;
  basic_string *pbVar21;
  float *pfVar22;
  float *pfVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined4 uVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  GObject *pGVar31;
  long lVar32;
  GButton *this_00;
  long lVar33;
  long lVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float local_ec;
  ulong local_e8;
  ulong uStack_e0;
  undefined1 *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  int local_b4;
  long local_b0;
  
  lVar10 = tpidr_el0;
  local_b0 = *(long *)(lVar10 + 0x28);
  fVar35 = (float)ScrollPane::getScrollingPosY(*(ScrollPane **)(this + 0x230));
  fVar40 = *(float *)(*(long *)(this + 0x230) + 0x68);
  fVar43 = *(float *)(*(long *)(this + 0x230) + 0x70);
  local_ec = fVar35;
  uVar17 = getIndexOnPos1(this,&local_ec,param_1);
  iVar16 = *(int *)(this + 0x344);
  iVar11 = (int)uVar17;
  if ((iVar11 == iVar16) && (!param_1)) {
    uVar26 = 0;
    goto LAB_00a7be14;
  }
  fVar35 = fVar35 + fVar40;
  *(int *)(this + 0x344) = iVar11;
  uVar13 = GComponent::numChildren((GComponent *)this);
  fVar40 = local_ec;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_d0,(basic_string *)(this + 0x308));
  iVar7 = *(int *)(this + 0x2f4);
  iVar8 = *(int *)(this + 0x348);
  fVar36 = *(float *)(*(long *)(this + 0x230) + 100);
  *(int *)(this + 0x360) = *(int *)(this + 0x360) + 1;
  fVar41 = 0.0;
  if (iVar11 < *(int *)(this + 0x340)) {
    fVar39 = 0.0;
    uVar17 = uVar17 & 0xffffffff;
    fVar41 = 0.0;
    if (fVar35 == fVar43 || fVar40 < fVar35) {
      puVar25 = (undefined1 *)((ulong)&local_d0 | 1);
      puVar24 = (undefined1 *)((ulong)&local_e8 | 1);
      uVar29 = (ulong)iVar11;
      fVar39 = 0.0;
      fVar41 = 0.0;
      iVar28 = uVar13 + iVar16 + -1;
      if (iVar16 <= iVar11) {
        iVar28 = iVar16;
      }
      fVar42 = 0.0;
      uVar17 = uVar29;
      fVar44 = fVar35;
      do {
        lVar33 = *(long *)(this + 0x368);
        pfVar22 = (float *)(lVar33 + uVar17 * 0x18);
        pfVar23 = pfVar22 + 2;
        pGVar31 = *(GObject **)pfVar23;
        iVar27 = (int)uVar17;
        if ((pGVar31 == (GObject *)0x0) || (param_1)) {
          plVar18 = *(long **)(this + 0x2d0);
          if (plVar18 != (long *)0x0) {
            iVar15 = *(int *)(this + 0x33c);
            iVar9 = 0;
            if (iVar15 != 0) {
              iVar9 = iVar27 / iVar15;
            }
            local_b4 = iVar27 - iVar9 * iVar15;
            (**(code **)(*plVar18 + 0x30))(&local_e8,plVar18,&local_b4);
            pbVar21 = extraout_x1;
            if ((local_d0 & 1) != 0) {
              *local_c0 = 0;
              uStack_c8 = 0;
              if ((local_d0 & 1) != 0) {
                operator_delete(local_c0);
                pbVar21 = extraout_x1_00;
              }
            }
            uStack_c8 = uStack_e0;
            local_d0 = local_e8;
            local_c0 = local_d8;
            uVar2 = local_e8 >> 1 & 0x7f;
            if ((local_e8 & 1) != 0) {
              uVar2 = uStack_e0;
            }
            if (((basic_string *)&local_d0 != (basic_string *)(this + 0x308)) && (uVar2 == 0)) {
              pGVar1 = this + 0x309;
              uVar2 = (ulong)((byte)this[0x308] >> 1);
                    /* try { // try from 00a7b5f4 to 00b7b627 has its CatchHandler @ 00a7b6f4 */
              if (((byte)this[0x308] & 1) != 0) {
                pGVar1 = *(GList **)(this + 0x318);
                uVar2 = *(ulong *)(this + 0x310);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_d0,(char *)pGVar1,uVar2);
              pbVar21 = extraout_x1_01;
            }
            UIPackage::normalizeURL((UIPackage *)&local_d0,pbVar21);
            if ((local_d0 & 1) != 0) {
              *local_c0 = 0;
                    /* try { // try from 00a7b628 to 00b7b63b has its CatchHandler @ 00a7b6c0 */
              uStack_c8 = 0;
              if ((local_d0 & 1) != 0) {
                operator_delete(local_c0);
              }
            }
                    /* try { // try from 00a7b640 to 00b7b673 has its CatchHandler @ 00a7b6c4 */
            local_c0 = local_d8;
            uStack_c8 = uStack_e0;
            local_d0 = local_e8;
            pGVar31 = *(GObject **)pfVar23;
          }
          if (pGVar31 == (GObject *)0x0) {
LAB_00a7b748:
            if (iVar11 < iVar16) {
              if (iVar16 <= iVar28) {
                lVar19 = 0;
                lVar34 = ((long)iVar28 + (long)iVar28 * 2) * 8;
                do {
                  lVar30 = *(long *)(this + 0x368);
                  if ((*(long *)(lVar30 + lVar34 + 8) != 0) &&
                     (*(int *)(lVar30 + lVar34 + 0x10) != *(int *)(this + 0x360))) {
                    GObject::getResourceURL();
                    uVar12 = local_e8;
                    uVar2 = local_d0 >> 1 & 0x7f;
                    if ((local_d0 & 1) != 0) {
                      uVar2 = uStack_c8;
                    }
                    uVar3 = local_e8 >> 1 & 0x7f;
                    if ((local_e8 & 1) != 0) {
                      uVar3 = uStack_e0;
                    }
                    sVar4 = uVar2;
                    if (uVar3 <= uVar2) {
                      sVar4 = uVar3;
                    }
                    if (sVar4 == 0) {
LAB_00a7b824:
                      uVar14 = (uint)(uVar2 < uVar3);
                      if (uVar3 < uVar2) {
                        uVar14 = 0xffffffff;
                      }
                    }
                    else {
                      puVar5 = puVar24;
                      if ((local_e8 & 1) != 0) {
                        puVar5 = local_d8;
                      }
                      puVar6 = puVar25;
                      if ((local_d0 & 1) != 0) {
                        puVar6 = local_c0;
                      }
                      uVar14 = memcmp(puVar5,puVar6,sVar4);
                      if (uVar14 == 0) goto LAB_00a7b824;
                    }
                    if ((uVar12 & 1) != 0) {
                      operator_delete(local_d8);
                    }
                    if (uVar14 == 0) {
                      lVar32 = *(long *)(lVar30 + lVar34 + 8);
                      if ((lVar32 != 0) &&
                         (lVar20 = __dynamic_cast(lVar32,&GObject::typeinfo,&GButton::typeinfo,0),
                         lVar20 != 0)) {
                        *(undefined1 *)(lVar30 + lVar34 + 0x14) = *(undefined1 *)(lVar32 + 0x33c);
                      }
                      *(long *)pfVar23 = lVar32;
                      *(undefined8 *)(lVar30 + lVar34 + 8) = 0;
                      iVar28 = iVar28 - (uint)((int)lVar19 == 0);
                      break;
                    }
                  }
                  lVar19 = lVar19 + -1;
                  lVar34 = lVar34 + -0x18;
                } while ((long)iVar16 < (long)iVar28 + 1 + lVar19);
              }
            }
            else if (iVar28 < (int)(uVar13 + iVar16)) {
              lVar19 = (long)iVar28 * 0x18;
              iVar15 = 0;
              do {
                lVar34 = *(long *)(this + 0x368);
                if ((*(long *)(lVar34 + lVar19 + 8) != 0) &&
                   (*(int *)(lVar34 + lVar19 + 0x10) != *(int *)(this + 0x360))) {
                  GObject::getResourceURL();
                  uVar12 = local_e8;
                  uVar2 = local_d0 >> 1 & 0x7f;
                  if ((local_d0 & 1) != 0) {
                    uVar2 = uStack_c8;
                  }
                  uVar3 = local_e8 >> 1 & 0x7f;
                  if ((local_e8 & 1) != 0) {
                    uVar3 = uStack_e0;
                  }
                  sVar4 = uVar2;
                  if (uVar3 <= uVar2) {
                    sVar4 = uVar3;
                  }
                  if (sVar4 == 0) {
LAB_00a7b914:
                    uVar14 = (uint)(uVar2 < uVar3);
                    if (uVar3 < uVar2) {
                      uVar14 = 0xffffffff;
                    }
                  }
                  else {
                    puVar5 = puVar24;
                    if ((local_e8 & 1) != 0) {
                      puVar5 = local_d8;
                    }
                    puVar6 = puVar25;
                    if ((local_d0 & 1) != 0) {
                      puVar6 = local_c0;
                    }
                    uVar14 = memcmp(puVar5,puVar6,sVar4);
                    if (uVar14 == 0) goto LAB_00a7b914;
                  }
                  if ((uVar12 & 1) != 0) {
                    operator_delete(local_d8);
                  }
                  if (uVar14 == 0) {
                    lVar30 = *(long *)(lVar34 + lVar19 + 8);
                    if ((lVar30 != 0) &&
                       (lVar32 = __dynamic_cast(lVar30,&GObject::typeinfo,&GButton::typeinfo,0),
                       lVar32 != 0)) {
                      *(undefined1 *)(lVar34 + lVar19 + 0x14) = *(undefined1 *)(lVar30 + 0x33c);
                    }
                    *(long *)pfVar23 = lVar30;
                    *(undefined8 *)(lVar34 + lVar19 + 8) = 0;
                    if (iVar15 == 0) {
                      iVar28 = iVar28 + 1;
                    }
                    break;
                  }
                }
                iVar15 = iVar15 + 1;
                lVar19 = lVar19 + 0x18;
              } while ((uVar13 + iVar16) - iVar28 != iVar15);
            }
            pGVar31 = *(GObject **)pfVar23;
            if (pGVar31 == (GObject *)0x0) {
              pGVar31 = (GObject *)
                        GObjectPool::getObject
                                  (*(GObjectPool **)(this + 0x328),(basic_string *)&local_d0);
              *(GObject **)pfVar23 = pGVar31;
              if (iVar11 < iVar16) {
                (**(code **)(*(long *)this + 0xb0))(this,pGVar31,iVar27 - iVar11);
              }
              else {
                GComponent::addChild((GComponent *)this,pGVar31);
              }
            }
            else {
              if (iVar11 < iVar16) {
                iVar15 = iVar27 - iVar11;
              }
              else {
                iVar15 = GComponent::numChildren((GComponent *)this);
              }
              GComponent::setChildIndex((GComponent *)this,pGVar31,iVar15);
            }
            this_00 = *(GButton **)pfVar23;
            if ((this_00 != (GButton *)0x0) &&
               (lVar19 = __dynamic_cast(this_00,&GObject::typeinfo,&GButton::typeinfo,0),
               lVar19 != 0)) {
              GButton::setSelected(this_00,*(bool *)(lVar33 + uVar17 * 0x18 + 0x14));
            }
          }
          else {
            GObject::getResourceURL();
            uVar12 = local_e8;
                    /* try { // try from 00a7b674 to 00b7b70f has its CatchHandler @ 00a7af6c */
            uVar2 = local_d0 >> 1 & 0x7f;
            if ((local_d0 & 1) != 0) {
              uVar2 = uStack_c8;
            }
            uVar3 = local_e8 >> 1 & 0x7f;
            if ((local_e8 & 1) != 0) {
              uVar3 = uStack_e0;
            }
            sVar4 = uVar2;
            if (uVar3 <= uVar2) {
              sVar4 = uVar3;
            }
            if (sVar4 == 0) {
LAB_00a7b6c8:
              uVar14 = (uint)(uVar2 < uVar3);
              if (uVar3 < uVar2) {
                uVar14 = 0xffffffff;
              }
            }
            else {
              puVar5 = puVar24;
              if ((local_e8 & 1) != 0) {
                puVar5 = local_d8;
              }
              puVar6 = puVar25;
              if ((local_d0 & 1) != 0) {
                puVar6 = local_c0;
              }
              uVar14 = memcmp(puVar5,puVar6,sVar4);
                    /* catch() { ... } // from try @ 00a7b628 with catch @ 00a7b6c0 */
                    /* catch() { ... } // from try @ 00a7b640 with catch @ 00a7b6c4 */
              if (uVar14 == 0) goto LAB_00a7b6c8;
            }
            if ((uVar12 & 1) != 0) {
              operator_delete(local_d8);
            }
            pGVar31 = *(GObject **)pfVar23;
            if (uVar14 != 0) {
                    /* catch() { ... } // from try @ 00a7b5f4 with catch @ 00a7b6f4 */
              if ((pGVar31 != (GObject *)0x0) &&
                 (lVar19 = __dynamic_cast(pGVar31,&GObject::typeinfo,&GButton::typeinfo,0),
                 lVar19 != 0)) {
                *(GObject *)(lVar33 + uVar17 * 0x18 + 0x14) = pGVar31[0x33c];
              }
              GObjectPool::returnObject(*(GObjectPool **)(this + 0x328),pGVar31);
              GComponent::removeChild((GComponent *)this,pGVar31);
              pfVar23[0] = 0.0;
              pfVar23[1] = 0.0;
              goto LAB_00a7b748;
            }
            if (pGVar31 == (GObject *)0x0) goto LAB_00a7b748;
            if (!param_1) goto LAB_00a7bb90;
          }
          if ((this[0x300] != (GList)0x0) &&
             ((*(int *)(this + 0x2e4) == 0 || (0 < *(int *)(this + 0x2ec))))) {
            GObject::setSize(*(GObject **)pfVar23,
                             (float)(int)((fVar36 - (float)((iVar8 + -1) * iVar7)) / (float)iVar8),
                             *(float *)(*(GObject **)pfVar23 + 0xcc),true);
          }
          iVar15 = *(int *)(this + 0x33c);
          local_e8 = *(ulong *)pfVar23;
          iVar9 = 0;
          if (iVar15 != 0) {
            iVar9 = iVar27 / iVar15;
          }
          local_b4 = iVar27 - iVar9 * iVar15;
          plVar18 = *(long **)(this + 0x2a0);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          (**(code **)(*plVar18 + 0x30))(plVar18,&local_b4,&local_e8);
          pGVar31 = *(GObject **)pfVar23;
          iVar15 = *(int *)(this + 0x348);
          fVar37 = *(float *)(pGVar31 + 0xcc);
          iVar9 = 0;
          if (iVar15 != 0) {
            iVar9 = iVar27 / iVar15;
          }
          if (iVar27 == iVar9 * iVar15) {
            fVar38 = (float)(int)fVar37 - *(float *)(lVar33 + uVar17 * 0x18 + 4);
            fVar41 = fVar41 + fVar38;
            if (uVar17 == uVar29 && iVar11 < iVar16) {
              fVar39 = fVar38;
            }
          }
          *pfVar22 = (float)(int)*(float *)(pGVar31 + 200);
          *(int *)(lVar33 + uVar17 * 0x18 + 4) = (int)fVar37;
        }
LAB_00a7bb90:
        *(undefined4 *)(lVar33 + uVar17 * 0x18 + 0x10) = *(undefined4 *)(this + 0x360);
        GObject::setPosition(pGVar31,fVar42,fVar40);
        if (uVar17 == uVar29) {
          fVar44 = fVar44 + *(float *)(lVar33 + uVar29 * 0x18 + 4);
        }
        iVar15 = *(int *)(this + 0x348);
        iVar9 = 0;
        if (iVar15 != 0) {
          iVar9 = iVar27 / iVar15;
        }
        if (iVar27 - iVar9 * iVar15 == iVar15 + -1) {
          fVar42 = 0.0;
          fVar40 = fVar40 + *(float *)(lVar33 + uVar17 * 0x18 + 4) + (float)*(int *)(this + 0x2f0);
        }
        else {
          fVar42 = fVar42 + *pfVar22 + (float)*(int *)(this + 0x2f4);
        }
        uVar17 = uVar17 + 1;
      } while (((long)uVar17 < (long)*(int *)(this + 0x340)) &&
              (fVar35 == fVar43 || fVar40 < fVar44));
    }
  }
  else {
    fVar39 = 0.0;
    uVar17 = uVar17 & 0xffffffff;
  }
  if (0 < (int)uVar13) {
    uVar29 = (ulong)uVar13;
    lVar33 = (long)iVar16 * 0x18;
    do {
      lVar34 = *(long *)(this + 0x368);
      lVar19 = lVar34 + lVar33;
      if ((*(int *)(lVar19 + 0x10) != *(int *)(this + 0x360)) &&
         (pGVar31 = *(GObject **)(lVar19 + 8), pGVar31 != (GObject *)0x0)) {
        lVar30 = __dynamic_cast(pGVar31,&GObject::typeinfo,&GButton::typeinfo,0);
        if (lVar30 != 0) {
          *(GObject *)(lVar34 + lVar33 + 0x14) = pGVar31[0x33c];
        }
        GObjectPool::returnObject(*(GObjectPool **)(this + 0x328),pGVar31);
        GComponent::removeChild((GComponent *)this,pGVar31);
        *(undefined8 *)(lVar19 + 8) = 0;
      }
      uVar29 = uVar29 - 1;
      lVar33 = lVar33 + 0x18;
    } while (uVar29 != 0);
  }
  lVar33 = *(long *)(this + 0x1e0);
  uVar29 = *(long *)(this + 0x1e8) - lVar33;
  if (0 < (int)(uVar29 >> 3)) {
    lVar34 = 0;
    lVar19 = (long)iVar11 * 0x18 + 8;
    while( true ) {
      if (*(GObject **)(lVar33 + lVar34 * 8) != *(GObject **)(*(long *)(this + 0x368) + lVar19)) {
        GComponent::setChildIndex
                  ((GComponent *)this,*(GObject **)(*(long *)(this + 0x368) + lVar19),(int)lVar34);
      }
      if ((uVar29 >> 3 & 0xffffffff) - 1 == lVar34) break;
      lVar33 = *(long *)(this + 0x1e0);
      lVar34 = lVar34 + 1;
      lVar19 = lVar19 + 0x18;
    }
  }
  if ((fVar41 != 0.0) || (fVar39 != 0.0)) {
    ScrollPane::changeContentSizeOnScrolling(*(ScrollPane **)(this + 0x230),0.0,fVar41,0.0,fVar39);
  }
  if ((((int)uVar17 < 1) || (iVar16 = GComponent::numChildren((GComponent *)this), iVar16 < 1)) ||
     (lVar19 = *(long *)(this + 0x228), lVar33 = (**(code **)(**(long **)(lVar19 + 400) + 0x168))(),
     0.0 < *(float *)(lVar33 + 4) - *(float *)(lVar19 + 0x54))) {
LAB_00a7bdfc:
    uVar26 = 0;
  }
  else {
    lVar33 = GComponent::getChildAt((GComponent *)this,0);
    lVar19 = *(long *)(this + 0x228);
    fVar35 = *(float *)(lVar33 + 0xc4);
    plVar18 = *(long **)(lVar19 + 400);
    lVar33 = (**(code **)(*plVar18 + 0x168))(plVar18);
    if (fVar35 <= -(*(float *)(lVar33 + 4) - *(float *)(lVar19 + 0x54))) goto LAB_00a7bdfc;
    uVar26 = 1;
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
LAB_00a7be14:
  if (*(long *)(lVar10 + 0x28) == local_b0) {
    return uVar26;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

