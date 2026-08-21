
/* std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char>
   >::__exec(std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__bracket_expression<char,std::__ndk1::regex_traits<char>>::__exec
          (__bracket_expression<char,std::__ndk1::regex_traits<char>> *this,__state *param_1)

{
  size_t sVar1;
  void *pvVar2;
  ulong uVar3;
  size_t sVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  size_t sVar8;
  undefined1 uVar9;
  byte bVar10;
  int iVar11;
  bool bVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  byte *pbVar20;
  char *pcVar21;
  __bracket_expression<char,std::__ndk1::regex_traits<char>> *p_Var22;
  ulong uVar23;
  __bracket_expression<char,std::__ndk1::regex_traits<char>> _Var24;
  __bracket_expression<char,std::__ndk1::regex_traits<char>> *p_Var25;
  __bracket_expression<char,std::__ndk1::regex_traits<char>> _Var26;
  undefined8 local_a0;
  ulong local_98;
  void *local_90;
  undefined2 local_88;
  undefined8 local_80;
  size_t local_78;
  byte *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pbVar14 = *(byte **)(param_1 + 0x10);
  if (pbVar14 == *(byte **)(param_1 + 0x18)) {
    _Var26 = this[0xa4];
    lVar15 = 0;
    goto LAB_00866e9c;
  }
  if ((this[0xa7] != (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) &&
     (pbVar14 + 1 != *(byte **)(param_1 + 0x18))) {
    bVar10 = pbVar14[1];
    local_88 = *(ushort *)pbVar14;
    if (this[0xa5] == (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) {
      if (this[0xa6] != (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) {
        local_88 = (ushort)*pbVar14;
        goto LAB_008667e8;
      }
    }
    else {
      uVar9 = (**(code **)(**(long **)(this + 0x18) + 0x28))();
      local_88 = CONCAT11(local_88._1_1_,uVar9);
      bVar10 = (**(code **)(**(long **)(this + 0x18) + 0x28))(*(long **)(this + 0x18),bVar10);
LAB_008667e8:
      local_88 = CONCAT11(bVar10,(char)local_88);
    }
    regex_traits<char>::__lookup_collatename<char*>
              ((regex_traits<char> *)(this + 0x10),(char *)&local_88,(char *)((ulong)&local_88 | 2),
               '\0');
    sVar4 = local_78;
    if ((local_80 & 1) == 0) {
      if (1 < (byte)local_80) {
LAB_00866920:
        lVar15 = *(long *)(this + 0x78) - *(long *)(this + 0x70);
        if (lVar15 != 0) {
          uVar18 = 0;
          pcVar21 = (char *)(*(long *)(this + 0x70) + 1);
          do {
            if (((char)local_88 == pcVar21[-1]) && (local_88._1_1_ == *pcVar21)) goto LAB_00867084;
            uVar18 = uVar18 + 1;
            pcVar21 = pcVar21 + 2;
          } while (uVar18 < (ulong)(lVar15 >> 1));
        }
        if ((this[0xa6] == (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) ||
           (*(long *)(this + 0x58) == *(long *)(this + 0x60))) {
          _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0;
LAB_008669f8:
          if (*(long *)(this + 0x88) == *(long *)(this + 0x90)) {
LAB_00867030:
            lVar15 = (long)(char)local_88;
            if (lVar15 < 0) goto LAB_00866a4c;
LAB_00867038:
            uVar6 = *(ushort *)(this + 0xa0);
            uVar18 = *(ulong *)(*(long *)(*(long *)(this + 0x18) + 0x10) + lVar15 * 8);
            if (((uVar18 & uVar6) == 0) && (((int)lVar15 != 0x5f || (-1 < (short)uVar6)))) {
LAB_00867090:
              if (((uVar18 & *(ushort *)(this + 0xa2)) != 0) ||
                 ((uVar13 = (uint)(short)*(ushort *)(this + 0xa2), _Var24 = _Var26,
                  (int)lVar15 == 0x5f && ((int)uVar13 < 0)))) goto LAB_008670b0;
              goto LAB_00866a50;
            }
            if (((long)local_88._1_1_ < 0) ||
               (((*(ulong *)(*(long *)(*(long *)(this + 0x18) + 0x10) + (long)local_88._1_1_ * 8) &
                 (ulong)uVar6) == 0 && ((-1 < (short)uVar6 || (local_88._1_1_ != '_'))))))
            goto LAB_00867090;
          }
          else {
            regex_traits<char>::__transform_primary<char*>
                      ((regex_traits<char> *)(this + 0x10),(char *)&local_88,
                       (char *)((ulong)&local_88 | 2),'\0');
            uVar18 = local_80;
            lVar15 = *(long *)(this + 0x88);
            lVar17 = *(long *)(this + 0x90);
            if (lVar17 - lVar15 != 0) {
              uVar19 = local_80 >> 1 & 0x7f;
              uVar23 = 0;
              sVar4 = uVar19;
              pbVar14 = (byte *)((ulong)&local_80 | 1);
              if ((local_80 & 1) != 0) {
                sVar4 = local_78;
                pbVar14 = local_70;
              }
              do {
                pbVar16 = (byte *)(lVar15 + uVar23 * 0x18);
                bVar10 = *pbVar16;
                sVar1 = (ulong)(bVar10 >> 1);
                if ((bVar10 & 1) != 0) {
                  sVar1 = *(size_t *)(pbVar16 + 8);
                }
                if (sVar4 == sVar1) {
                  pbVar20 = *(byte **)(lVar15 + uVar23 * 0x18 + 0x10);
                  if ((bVar10 & 1) == 0) {
                    pbVar20 = pbVar16 + 1;
                  }
                  pbVar16 = (byte *)((ulong)&local_80 | 1);
                  sVar1 = -uVar19;
                  sVar8 = sVar4;
                  if ((uVar18 & 1) == 0) {
                    while( true ) {
                      if (sVar8 == 0) {
                        _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
                        goto LAB_008670b0;
                      }
                      if (*pbVar16 != *pbVar20) break;
                      sVar1 = sVar1 + 1;
                      pbVar20 = pbVar20 + 1;
                      pbVar16 = pbVar16 + 1;
                      sVar8 = sVar1;
                    }
                  }
                  else if ((sVar4 == 0) || (iVar11 = memcmp(pbVar14,pbVar20,sVar4), iVar11 == 0)) {
                    bVar12 = false;
                    _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
                    goto LAB_00867024;
                  }
                }
                uVar23 = uVar23 + 1;
              } while (uVar23 < (ulong)((lVar17 - lVar15 >> 3) * -0x5555555555555555));
            }
            if ((uVar18 & 1) != 0) {
              bVar12 = true;
LAB_00867024:
              operator_delete(local_70);
              if (!bVar12) goto LAB_008670b0;
              goto LAB_00867030;
            }
            lVar15 = (long)(char)local_88;
            if (-1 < lVar15) goto LAB_00867038;
LAB_00866a4c:
            uVar13 = (uint)*(ushort *)(this + 0xa2);
            _Var24 = _Var26;
LAB_00866a50:
            if (-1 < (long)local_88._1_1_) {
              _Var26 = _Var24;
              if (((((uint)*(undefined8 *)
                            (*(long *)(*(long *)(this + 0x18) + 0x10) + (long)local_88._1_1_ * 8) &
                     uVar13 & 0xffff) == 0) &&
                  (_Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1,
                  (short)uVar13 < 0)) && (_Var26 = _Var24, local_88._1_1_ != '_')) {
                _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
              }
              goto LAB_008670b0;
            }
          }
LAB_00867084:
          _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
          lVar15 = 2;
        }
        else {
          local_78 = 0;
          local_70 = (byte *)0x0;
          local_80 = (ulong)CONCAT21(local_88,4);
          (**(code **)(**(long **)(this + 0x20) + 0x20))
                    (&local_a0,*(long **)(this + 0x20),(ulong)&local_80 | 1,(ulong)&local_80 | 3);
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          uVar18 = local_a0;
          lVar15 = *(long *)(this + 0x60) - *(long *)(this + 0x58);
          if (lVar15 != 0) {
            uVar23 = 0;
            pvVar2 = (void *)((ulong)&local_a0 | 1);
            uVar19 = local_a0 >> 1 & 0x7f;
            if ((local_a0 & 1) != 0) {
              pvVar2 = local_90;
              uVar19 = local_98;
            }
            pbVar14 = (byte *)(*(long *)(this + 0x58) + 0x18);
            do {
              bVar10 = pbVar14[-0x18];
              uVar3 = (ulong)(bVar10 >> 1);
              if ((bVar10 & 1) != 0) {
                uVar3 = *(ulong *)(pbVar14 + -0x10);
              }
              sVar4 = uVar3;
              if (uVar19 <= uVar3) {
                sVar4 = uVar19;
              }
              if (sVar4 == 0) {
LAB_00866f80:
                if (uVar3 <= uVar19) {
LAB_00866f88:
                  bVar10 = *pbVar14;
                  uVar3 = (ulong)(bVar10 >> 1);
                  if ((bVar10 & 1) != 0) {
                    uVar3 = *(ulong *)(pbVar14 + 8);
                  }
                  sVar4 = uVar19;
                  if (uVar3 <= uVar19) {
                    sVar4 = uVar3;
                  }
                  if (sVar4 == 0) {
LAB_00866fc8:
                    if (uVar3 < uVar19) goto LAB_00866fd0;
                  }
                  else {
                    pbVar16 = *(byte **)(pbVar14 + 0x10);
                    if ((bVar10 & 1) == 0) {
                      pbVar16 = pbVar14 + 1;
                    }
                    iVar11 = memcmp(pbVar16,pvVar2,sVar4);
                    if (iVar11 == 0) goto LAB_00866fc8;
                    if (iVar11 < 0) goto LAB_00866fd0;
                  }
                  bVar12 = false;
                  _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
                  goto joined_r0x008670c4;
                }
              }
              else {
                pbVar16 = pbVar14 + -0x17;
                if ((bVar10 & 1) != 0) {
                  pbVar16 = *(byte **)(pbVar14 + -8);
                }
                iVar11 = memcmp(pvVar2,pbVar16,sVar4);
                if (iVar11 == 0) goto LAB_00866f80;
                if (-1 < iVar11) goto LAB_00866f88;
              }
LAB_00866fd0:
              uVar23 = uVar23 + 1;
              pbVar14 = pbVar14 + 0x30;
            } while (uVar23 < (ulong)((lVar15 >> 4) * -0x5555555555555555));
          }
          _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0;
          bVar12 = true;
joined_r0x008670c4:
          if ((uVar18 & 1) != 0) {
            operator_delete(local_90);
          }
          if (bVar12) goto LAB_008669f8;
LAB_008670b0:
          lVar15 = 2;
        }
        goto LAB_00866e9c;
      }
    }
    else {
      operator_delete(local_70);
      if (sVar4 != 0) goto LAB_00866920;
    }
    pbVar14 = *(byte **)(param_1 + 0x10);
  }
  bVar10 = *pbVar14;
  local_88 = CONCAT11(local_88._1_1_,bVar10);
  if (this[0xa5] == (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) {
    if (this[0xa6] != (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) {
      local_88 = CONCAT11(local_88._1_1_,bVar10);
    }
  }
  else {
    bVar10 = (**(code **)(**(long **)(this + 0x18) + 0x28))();
    local_88 = CONCAT11(local_88._1_1_,bVar10);
  }
  lVar15 = *(long *)(this + 0x28);
  if (*(long *)(this + 0x30) != lVar15) {
    uVar18 = 0;
    do {
      if (*(byte *)(lVar15 + uVar18) == bVar10) goto LAB_00866e94;
      uVar18 = uVar18 + 1;
    } while (uVar18 < (ulong)(*(long *)(this + 0x30) - lVar15));
  }
  uVar6 = *(ushort *)(this + 0xa2);
  if (((ulong)uVar6 == 0) && (*(long *)(this + 0x40) == *(long *)(this + 0x48))) {
    _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0;
LAB_00866aa4:
    p_Var22 = this + 0x58;
    lVar15 = *(long *)p_Var22;
    p_Var25 = this + 0x60;
    lVar17 = *(long *)p_Var25;
    if (lVar15 != lVar17) {
      if (this[0xa6] == (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) {
        local_98 = 0;
        local_90 = (void *)0x0;
        local_a0 = (ulong)CONCAT11(bVar10,2);
      }
      else {
        local_78 = 0;
        local_70 = (byte *)0x0;
        local_80 = (ulong)CONCAT11(bVar10,2);
        (**(code **)(**(long **)(this + 0x20) + 0x20))
                  (&local_a0,*(long **)(this + 0x20),(ulong)&local_80 | 1,(ulong)&local_80 | 2);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        lVar17 = *(long *)p_Var25;
        lVar15 = *(long *)p_Var22;
      }
      uVar18 = local_a0;
      if (lVar17 != lVar15) {
        pbVar14 = (byte *)(lVar15 + 0x18);
        uVar23 = 0;
        uVar19 = local_a0 >> 1 & 0x7f;
        pvVar2 = (void *)((ulong)&local_a0 | 1);
        if ((local_a0 & 1) != 0) {
          uVar19 = local_98;
          pvVar2 = local_90;
        }
        do {
          bVar10 = pbVar14[-0x18];
          uVar3 = (ulong)(bVar10 >> 1);
          if ((bVar10 & 1) != 0) {
            uVar3 = *(ulong *)(pbVar14 + -0x10);
          }
          sVar4 = uVar3;
          if (uVar19 <= uVar3) {
            sVar4 = uVar19;
          }
          if (sVar4 == 0) {
LAB_00866c28:
            if (uVar3 <= uVar19) {
LAB_00866c30:
              bVar10 = *pbVar14;
              uVar3 = (ulong)(bVar10 >> 1);
              if ((bVar10 & 1) != 0) {
                uVar3 = *(ulong *)(pbVar14 + 8);
              }
              sVar4 = uVar19;
              if (uVar3 <= uVar19) {
                sVar4 = uVar3;
              }
              if (sVar4 == 0) {
LAB_00866c70:
                if (uVar3 < uVar19) goto LAB_00866c78;
              }
              else {
                pbVar16 = *(byte **)(pbVar14 + 0x10);
                if ((bVar10 & 1) == 0) {
                  pbVar16 = pbVar14 + 1;
                }
                iVar11 = memcmp(pbVar16,pvVar2,sVar4);
                if (iVar11 == 0) goto LAB_00866c70;
                if (iVar11 < 0) goto LAB_00866c78;
              }
              bVar12 = false;
              _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
              goto joined_r0x00867004;
            }
          }
          else {
            pbVar16 = pbVar14 + -0x17;
            if ((bVar10 & 1) != 0) {
              pbVar16 = *(byte **)(pbVar14 + -8);
            }
            iVar11 = memcmp(pvVar2,pbVar16,sVar4);
            if (iVar11 == 0) goto LAB_00866c28;
            if (-1 < iVar11) goto LAB_00866c30;
          }
LAB_00866c78:
          uVar23 = uVar23 + 1;
          pbVar14 = pbVar14 + 0x30;
        } while (uVar23 < (ulong)((*(long *)p_Var25 - *(long *)p_Var22 >> 4) * -0x5555555555555555))
        ;
      }
      bVar12 = true;
joined_r0x00867004:
      if ((uVar18 & 1) != 0) {
        operator_delete(local_90);
      }
      if (!bVar12) goto LAB_00866e98;
    }
    if (*(long *)(this + 0x88) == *(long *)(this + 0x90)) {
LAB_00866e64:
    }
    else {
      regex_traits<char>::__transform_primary<char*>
                ((regex_traits<char> *)(this + 0x10),(char *)&local_88,
                 (char *)((ulong)&local_88 | 1),'\0');
      uVar18 = local_80;
      lVar15 = *(long *)(this + 0x88);
      lVar17 = *(long *)(this + 0x90);
      if (lVar17 - lVar15 != 0) {
        uVar19 = local_80 >> 1 & 0x7f;
        uVar23 = 0;
        sVar4 = uVar19;
        pbVar14 = (byte *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          sVar4 = local_78;
          pbVar14 = local_70;
        }
        do {
          pbVar16 = (byte *)(lVar15 + uVar23 * 0x18);
          bVar10 = *pbVar16;
          sVar1 = (ulong)(bVar10 >> 1);
          if ((bVar10 & 1) != 0) {
            sVar1 = *(size_t *)(pbVar16 + 8);
          }
          if (sVar4 == sVar1) {
            pbVar20 = *(byte **)(lVar15 + uVar23 * 0x18 + 0x10);
            if ((bVar10 & 1) == 0) {
              pbVar20 = pbVar16 + 1;
            }
            pbVar16 = (byte *)((ulong)&local_80 | 1);
            sVar1 = -uVar19;
            sVar8 = sVar4;
            if ((uVar18 & 1) == 0) {
              while( true ) {
                if (sVar8 == 0) {
                  _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
                  goto LAB_00866e98;
                }
                if (*pbVar16 != *pbVar20) break;
                sVar1 = sVar1 + 1;
                pbVar20 = pbVar20 + 1;
                pbVar16 = pbVar16 + 1;
                sVar8 = sVar1;
              }
            }
            else if ((sVar4 == 0) || (iVar11 = memcmp(pbVar14,pbVar20,sVar4), iVar11 == 0)) {
              bVar12 = false;
              _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
              goto LAB_00866e54;
            }
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < (ulong)((lVar17 - lVar15 >> 3) * -0x5555555555555555));
      }
      if ((uVar18 & 1) != 0) {
        bVar12 = true;
LAB_00866e54:
        operator_delete(local_70);
        if (!bVar12) goto LAB_00866e98;
        goto LAB_00866e64;
      }
    }
    if ((-1 < (long)(char)local_88) &&
       (((*(ulong *)(*(long *)(*(long *)(this + 0x18) + 0x10) + (long)(char)local_88 * 8) &
         (ulong)*(ushort *)(this + 0xa0)) != 0 ||
        (((char)local_88 == '_' && ((short)*(ushort *)(this + 0xa0) < 0)))))) {
LAB_00866e94:
      _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
    }
  }
  else {
    if (((char)bVar10 < '\0') ||
       ((*(ulong *)(*(long *)(*(long *)(this + 0x18) + 0x10) + (long)(char)bVar10 * 8) &
        (ulong)uVar6) == 0)) {
      bVar12 = (short)uVar6 < 0 && bVar10 == 0x5f;
    }
    else {
      bVar12 = true;
    }
    pbVar14 = *(byte **)(this + 0x40);
    pbVar16 = *(byte **)(this + 0x48);
    pbVar20 = pbVar14;
    if (pbVar14 != pbVar16) {
      bVar5 = *pbVar14;
      while ((pbVar20 = pbVar14, bVar5 != bVar10 &&
             (pbVar14 = pbVar14 + 1, pbVar20 = pbVar16, pbVar16 != pbVar14))) {
        bVar5 = *pbVar14;
      }
    }
    _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)
             (pbVar20 == pbVar16 & (bVar12 ^ 0xffU));
    if (_Var26 == (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0)
    goto LAB_00866aa4;
  }
LAB_00866e98:
  lVar15 = 1;
LAB_00866e9c:
  if (_Var26 == this[0xa4]) {
    *(undefined4 *)param_1 = 0xfffffc1f;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    *(undefined4 *)param_1 = 0xfffffc1d;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar15;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

