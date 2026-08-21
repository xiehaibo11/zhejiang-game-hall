
/* fairygui::GList::handleScroll3(bool) */

void __thiscall fairygui::GList::handleScroll3(GList *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  GList *pGVar3;
  int iVar4;
  int iVar5;
  GList GVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  bool bVar16;
  int iVar17;
  long *plVar18;
  basic_string *extraout_x1;
  basic_string *extraout_x1_00;
  basic_string *extraout_x1_01;
  basic_string *pbVar19;
  int iVar20;
  GObject *pGVar21;
  long lVar22;
  float *pfVar23;
  uint uVar24;
  int *piVar25;
  int iVar26;
  long lVar27;
  ulong *puVar28;
  long lVar29;
  ulong uVar30;
  GButton *this_00;
  long lVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  GObject *local_e0;
  ulong local_d8;
  ulong uStack_d0;
  undefined1 *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  int local_a4;
  long local_a0;
  
  lVar15 = tpidr_el0;
  local_a0 = *(long *)(lVar15 + 0x28);
  fVar34 = (float)ScrollPane::getScrollingPosX(*(ScrollPane **)(this + 0x230));
  uVar32 = *(uint *)(this + 0x348);
  if (*(int *)(this + 0x340) < (int)uVar32) {
    uVar24 = 0;
  }
  else {
    fVar35 = (float)GComponent::getViewWidth((GComponent *)this);
    uVar32 = *(uint *)(this + 0x348);
    iVar20 = (int)(fVar34 / fVar35);
    iVar17 = *(int *)(this + 0x34c) * uVar32 * iVar20;
    if (0 < (int)uVar32) {
      uVar24 = *(uint *)(this + 0x2f4);
      fVar35 = fVar35 * (float)iVar20;
      lVar27 = 0;
      pfVar23 = (float *)(*(long *)(this + 0x368) + (long)iVar17 * 0x18);
      do {
        if (fVar34 < fVar35 + *pfVar23 + (float)(int)(uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU)))
        {
          uVar24 = iVar20 * *(int *)(this + 0x34c) * uVar32 - (int)lVar27;
          goto LAB_00a7cca8;
        }
        lVar27 = lVar27 + -1;
        fVar35 = fVar35 + *pfVar23 + (float)(int)uVar24;
        pfVar23 = pfVar23 + 6;
      } while ((ulong)uVar32 + lVar27 != 0);
    }
    uVar24 = (uVar32 + iVar17) - 1;
  }
LAB_00a7cca8:
  uVar33 = *(uint *)(this + 0x344);
  if ((uVar24 != uVar33) || (param_1)) {
    uVar33 = uVar33 & ((int)uVar33 >> 0x1f ^ 0xffffffffU);
    *(uint *)(this + 0x344) = uVar24;
    uVar9 = (int)((ulong)(*(long *)(this + 0x370) - *(long *)(this + 0x368)) >> 3) * -0x55555555;
    iVar10 = *(int *)(this + 0x34c) * uVar32;
    fVar34 = (float)GComponent::getViewWidth((GComponent *)this);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,(basic_string *)(this + 0x308));
    iVar17 = *(int *)(this + 0x360);
    iVar20 = *(int *)(this + 0x2f4);
    iVar26 = *(int *)(this + 0x348);
    iVar4 = *(int *)(this + 0x2f0);
    fVar37 = *(float *)(*(long *)(this + 0x230) + 100);
    fVar35 = *(float *)(*(long *)(this + 0x230) + 0x68);
    iVar5 = *(int *)(this + 0x34c);
    *(int *)(this + 0x360) = iVar17 + 1;
    if (0 < iVar10) {
      iVar12 = 0;
      if (iVar10 != 0) {
        iVar12 = (int)uVar24 / iVar10;
      }
      iVar7 = *(int *)(this + 0x340);
      iVar13 = 0;
      if (uVar32 != 0) {
        iVar13 = (int)uVar24 / (int)uVar32;
      }
      iVar11 = iVar12 * iVar10;
      iVar8 = uVar24 - iVar13 * uVar32;
      iVar13 = iVar11 + iVar10 * 2;
      lVar22 = 0;
      lVar27 = (long)iVar11 * 0x18 + 0x10;
      do {
        if (iVar11 + lVar22 < (long)iVar7) {
          iVar2 = iVar11 + (int)lVar22;
          iVar14 = 0;
          if (iVar26 != 0) {
            iVar14 = iVar2 / iVar26;
          }
          iVar2 = iVar2 - iVar14 * iVar26;
          if (lVar22 < iVar10) {
            if (iVar8 <= iVar2) {
LAB_00a7cda4:
              *(int *)(*(long *)(this + 0x368) + lVar27) = iVar17 + 1;
            }
          }
          else if (iVar2 <= iVar8) goto LAB_00a7cda4;
        }
        lVar22 = lVar22 + 1;
        lVar27 = lVar27 + 0x18;
      } while (iVar11 + lVar22 < (long)iVar13);
      if (0 < iVar10) {
        iVar17 = 0;
        fVar35 = (float)(int)((fVar35 - (float)((iVar5 + -1) * iVar4)) / (float)iVar5);
        fVar37 = (float)(int)((fVar37 - (float)((iVar26 + -1) * iVar20)) / (float)iVar26);
        lVar27 = (long)iVar11;
        local_e0 = (GObject *)0x0;
        do {
          if (lVar27 < *(int *)(this + 0x340)) {
            lVar22 = *(long *)(this + 0x368);
            iVar20 = *(int *)(lVar22 + lVar27 * 0x18 + 0x10);
            if (iVar20 == *(int *)(this + 0x360)) {
              puVar28 = (ulong *)(lVar22 + lVar27 * 0x18 + 8);
              pGVar21 = (GObject *)*puVar28;
              iVar26 = (int)lVar27;
              if (pGVar21 == (GObject *)0x0) {
                uVar32 = uVar33;
                if ((int)uVar33 < (int)uVar9) {
                  lVar31 = lVar22 + (long)(int)uVar33 * 0x18;
                  piVar25 = (int *)(lVar31 + 0x10);
                  uVar30 = *(ulong *)(lVar31 + 8);
                  if (uVar30 != 0) goto LAB_00a7cecc;
                  do {
                    do {
                      uVar33 = uVar33 + 1;
                      piVar1 = piVar25 + 6;
                      uVar32 = uVar9;
                      if (uVar9 == uVar33) goto LAB_00a7cf14;
                      uVar30 = *(ulong *)(piVar25 + 4);
                      piVar25 = piVar1;
                    } while (uVar30 == 0);
LAB_00a7cecc:
                  } while (*piVar25 == iVar20);
                  lVar31 = __dynamic_cast(uVar30,&GObject::typeinfo,&GButton::typeinfo,0);
                  if (lVar31 != 0) {
                    *(undefined1 *)(piVar25 + 1) = *(undefined1 *)(uVar30 + 0x33c);
                  }
                  *puVar28 = uVar30;
                  piVar25[-2] = 0;
                  piVar25[-1] = 0;
                  uVar32 = uVar33;
                }
LAB_00a7cf14:
                if (iVar17 == -1) {
                  iVar17 = GComponent::getChildIndex((GComponent *)this,local_e0);
                  iVar17 = iVar17 + 1;
                  pGVar21 = (GObject *)*puVar28;
                  if (pGVar21 != (GObject *)0x0) goto LAB_00a7cf24;
LAB_00a7cf50:
                  plVar18 = *(long **)(this + 0x2d0);
                  if (plVar18 != (long *)0x0) {
                    iVar20 = *(int *)(this + 0x33c);
                    iVar4 = 0;
                    if (iVar20 != 0) {
                      iVar4 = iVar26 / iVar20;
                    }
                    local_a4 = iVar26 - iVar4 * iVar20;
                    (**(code **)(*plVar18 + 0x30))(&local_d8,plVar18,&local_a4);
                    pbVar19 = extraout_x1;
                    if ((local_c0 & 1) != 0) {
                      *local_b0 = 0;
                      uStack_b8 = 0;
                      if ((local_c0 & 1) != 0) {
                        operator_delete(local_b0);
                        pbVar19 = extraout_x1_00;
                      }
                    }
                    uStack_b8 = uStack_d0;
                    local_c0 = local_d8;
                    local_b0 = local_c8;
                    uVar30 = local_d8 >> 1 & 0x7f;
                    if ((local_d8 & 1) != 0) {
                      uVar30 = uStack_d0;
                    }
                    if (((basic_string *)&local_c0 != (basic_string *)(this + 0x308)) &&
                       (uVar30 == 0)) {
                      pGVar3 = this + 0x309;
                      uVar30 = (ulong)((byte)this[0x308] >> 1);
                      if (((byte)this[0x308] & 1) != 0) {
                        pGVar3 = *(GList **)(this + 0x318);
                        uVar30 = *(ulong *)(this + 0x310);
                      }
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_c0,(char *)pGVar3,uVar30);
                      pbVar19 = extraout_x1_01;
                    }
                    UIPackage::normalizeURL((UIPackage *)&local_c0,pbVar19);
                    if ((local_c0 & 1) != 0) {
                      *local_b0 = 0;
                      uStack_b8 = 0;
                      if ((local_c0 & 1) != 0) {
                        operator_delete(local_b0);
                      }
                    }
                    uStack_b8 = uStack_d0;
                    local_c0 = local_d8;
                    local_b0 = local_c8;
                  }
                  uVar30 = GObjectPool::getObject
                                     (*(GObjectPool **)(this + 0x328),(basic_string *)&local_c0);
                  *puVar28 = uVar30;
                  (**(code **)(*(long *)this + 0xb0))(this,uVar30,iVar17);
                }
                else {
                  pGVar21 = (GObject *)*puVar28;
                  if (pGVar21 == (GObject *)0x0) goto LAB_00a7cf50;
LAB_00a7cf24:
                  iVar17 = GComponent::setChildIndexBefore((GComponent *)this,pGVar21,iVar17);
                }
                this_00 = (GButton *)*puVar28;
                iVar17 = iVar17 + 1;
                uVar33 = uVar32;
                if ((this_00 != (GButton *)0x0) &&
                   (lVar31 = __dynamic_cast(this_00,&GObject::typeinfo,&GButton::typeinfo,0),
                   lVar31 != 0)) {
                  GButton::setSelected(this_00,*(bool *)(lVar22 + lVar27 * 0x18 + 0x14));
                  goto LAB_00a7d0c4;
                }
                GVar6 = this[0x300];
              }
              else {
                iVar17 = -1;
                local_e0 = pGVar21;
                if (!param_1) goto LAB_00a7ce40;
LAB_00a7d0c4:
                GVar6 = this[0x300];
              }
              if (GVar6 != (GList)0x0) {
                if (*(int *)(this + 0x348) == *(int *)(this + 0x2ec)) {
                  pGVar21 = (GObject *)*puVar28;
                  if (*(int *)(this + 0x34c) == *(int *)(this + 0x2e8)) {
                    GObject::setSize(pGVar21,fVar37,fVar35,true);
                  }
                  else {
                    GObject::setSize(pGVar21,fVar37,*(float *)(pGVar21 + 0xcc),true);
                  }
                }
                else if (*(int *)(this + 0x34c) == *(int *)(this + 0x2e8)) {
                  GObject::setSize((GObject *)*puVar28,*(float *)((GObject *)*puVar28 + 200),fVar35,
                                   true);
                }
              }
              iVar20 = *(int *)(this + 0x33c);
              local_d8 = *puVar28;
              iVar4 = 0;
              if (iVar20 != 0) {
                iVar4 = iVar26 / iVar20;
              }
              local_a4 = iVar26 - iVar4 * iVar20;
              plVar18 = *(long **)(this + 0x2a0);
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              (**(code **)(*plVar18 + 0x30))(plVar18,&local_a4,&local_d8);
              *(ulong *)(lVar22 + lVar27 * 0x18) =
                   CONCAT44((int)(float)((ulong)*(undefined8 *)(*puVar28 + 200) >> 0x20),
                            (int)(float)*(undefined8 *)(*puVar28 + 200));
            }
          }
LAB_00a7ce40:
          lVar27 = lVar27 + 1;
        } while (lVar27 < iVar13);
        if (0 < iVar10) {
          fVar35 = 0.0;
          fVar37 = fVar34 * (float)iVar12;
          fVar38 = 0.0;
          lVar27 = (long)iVar11;
          lVar22 = (lVar27 + (long)iVar11 * 2) * 8;
          fVar39 = fVar37;
          do {
            if (lVar27 < *(int *)(this + 0x340)) {
              lVar29 = *(long *)(this + 0x368);
              lVar31 = lVar29 + lVar22;
              if (*(int *)(lVar31 + 0x10) == *(int *)(this + 0x360)) {
                GObject::setPosition(*(GObject **)(lVar31 + 8),fVar37,fVar38);
              }
              iVar17 = *(int *)(this + 0x348);
              iVar20 = 0;
              if (iVar17 != 0) {
                iVar20 = (int)lVar27 / iVar17;
              }
              fVar36 = *(float *)(lVar31 + 4);
              if (*(float *)(lVar31 + 4) <= fVar35) {
                fVar36 = fVar35;
              }
              fVar35 = fVar36;
              if ((int)lVar27 - iVar20 * iVar17 == iVar17 + -1) {
                bVar16 = iVar10 + iVar11 + -1 != lVar27;
                fVar37 = fVar34 + fVar39;
                if (bVar16) {
                  fVar37 = fVar39;
                }
                fVar36 = fVar38 + fVar35 + (float)*(int *)(this + 0x2f0);
                fVar35 = 0.0;
                fVar39 = fVar37;
                fVar38 = fVar35;
                if (bVar16) {
                  fVar38 = fVar36;
                }
              }
              else {
                fVar37 = fVar37 + *(float *)(lVar29 + lVar22) + (float)*(int *)(this + 0x2f4);
              }
            }
            lVar27 = lVar27 + 1;
            lVar22 = lVar22 + 0x18;
          } while (lVar27 < iVar13);
        }
      }
    }
    if ((int)uVar33 < (int)uVar9) {
      iVar17 = uVar9 - uVar33;
      lVar27 = (long)(int)uVar33 * 0x18;
      do {
        lVar31 = *(long *)(this + 0x368);
        lVar22 = lVar31 + lVar27;
        if ((*(int *)(lVar22 + 0x10) != *(int *)(this + 0x360)) &&
           (pGVar21 = *(GObject **)(lVar22 + 8), pGVar21 != (GObject *)0x0)) {
          lVar29 = __dynamic_cast(pGVar21,&GObject::typeinfo,&GButton::typeinfo,0);
          if (lVar29 != 0) {
            *(GObject *)(lVar31 + lVar27 + 0x14) = pGVar21[0x33c];
          }
          GObjectPool::returnObject(*(GObjectPool **)(this + 0x328),pGVar21);
          GComponent::removeChild((GComponent *)this,pGVar21);
          *(undefined8 *)(lVar22 + 8) = 0;
        }
        iVar17 = iVar17 + -1;
        lVar27 = lVar27 + 0x18;
      } while (iVar17 != 0);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
  }
  if (*(long *)(lVar15 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

