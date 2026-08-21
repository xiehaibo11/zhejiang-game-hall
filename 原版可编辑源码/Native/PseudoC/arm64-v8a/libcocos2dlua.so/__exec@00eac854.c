
/* std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char>
   >::__exec(std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__bracket_expression<char,std::__ndk1::regex_traits<char>>::__exec
          (__bracket_expression<char,std::__ndk1::regex_traits<char>> *this,__state *param_1)

{
  void *pvVar1;
  ulong uVar2;
  size_t sVar3;
  byte bVar4;
  ushort uVar5;
  size_t sVar6;
  long lVar7;
  size_t sVar8;
  undefined1 uVar9;
  byte bVar10;
  __bracket_expression<char,std::__ndk1::regex_traits<char>> _Var11;
  int iVar12;
  bool bVar13;
  uint uVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  ulong uVar19;
  byte *pbVar20;
  char *pcVar21;
  ulong uVar22;
  __bracket_expression<char,std::__ndk1::regex_traits<char>> *p_Var23;
  ulong uVar24;
  __bracket_expression<char,std::__ndk1::regex_traits<char>> *p_Var25;
  __bracket_expression<char,std::__ndk1::regex_traits<char>> _Var26;
  ulong local_a0;
  ulong local_98;
  void *local_90;
  undefined2 local_88;
  undefined8 local_80;
  size_t local_78;
  byte *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pbVar15 = *(byte **)(param_1 + 0x10);
  if (pbVar15 == *(byte **)(param_1 + 0x18)) {
    _Var26 = this[0xa4];
    lVar16 = 0;
    goto LAB_00eacffc;
  }
  if ((this[0xa7] != (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) &&
     (pbVar15 + 1 != *(byte **)(param_1 + 0x18))) {
    bVar10 = pbVar15[1];
    local_88 = *(ushort *)pbVar15;
    if (this[0xa5] == (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) {
      if (this[0xa6] != (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) {
        local_88 = (ushort)*pbVar15;
        goto LAB_00eac908;
      }
    }
    else {
      uVar9 = (**(code **)(**(long **)(this + 0x18) + 0x28))();
      local_88 = CONCAT11(local_88._1_1_,uVar9);
                    /* try { // try from 00eac8d8 to 00fac90f has its CatchHandler @ 00eac8d8
                       catch() { ... } // from try @ 00eac8d8 with catch @ 00eac8d8
                       catch() { ... } // from try @ 00eac91c with catch @ 00eac8d8 */
      bVar10 = (**(code **)(**(long **)(this + 0x18) + 0x28))(*(long **)(this + 0x18),bVar10);
LAB_00eac908:
      local_88 = CONCAT11(bVar10,(char)local_88);
    }
                    /* try { // try from 00eac910 to 00fac91b has its CatchHandler @ 00eac958 */
                    /* try { // try from 00eac91c to 00fac973 has its CatchHandler @ 00eac8d8 */
    regex_traits<char>::__lookup_collatename<char*>
              ((regex_traits<char> *)(this + 0x10),(char *)&local_88,(char *)((ulong)&local_88 | 2),
               '\0');
    sVar3 = local_78;
    if ((local_80 & 1) == 0) {
      if (1 < (byte)local_80) {
LAB_00eaca40:
        lVar16 = *(long *)(this + 0x78) - *(long *)(this + 0x70);
        if (lVar16 != 0) {
          uVar19 = 0;
          pcVar21 = (char *)(*(long *)(this + 0x70) + 1);
          do {
            if (((char)local_88 == pcVar21[-1]) && (local_88._1_1_ == *pcVar21)) goto LAB_00ead1cc;
            uVar19 = uVar19 + 1;
            pcVar21 = pcVar21 + 2;
          } while (uVar19 < (ulong)(lVar16 >> 1));
        }
        if ((this[0xa6] == (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) ||
           (*(long *)(this + 0x58) == *(long *)(this + 0x60))) {
          _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0;
LAB_00eacb20:
          if (*(long *)(this + 0x88) == *(long *)(this + 0x90)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eacf0c with catch @ 00eace8c
                        */
            lVar16 = (long)(char)local_88;
            if (lVar16 < 0) goto LAB_00eace98;
LAB_00ead180:
            uVar5 = *(ushort *)(this + 0xa0);
            uVar19 = *(ulong *)(*(long *)(*(long *)(this + 0x18) + 0x10) + lVar16 * 8);
            if (((uVar19 & uVar5) == 0) && (((int)lVar16 != 0x5f || (-1 < (short)uVar5)))) {
LAB_00ead1d8:
              if (((uVar19 & *(ushort *)(this + 0xa2)) != 0) ||
                 ((uVar14 = (uint)(short)*(ushort *)(this + 0xa2), _Var11 = _Var26,
                  (int)lVar16 == 0x5f && ((int)uVar14 < 0)))) goto LAB_00ead1f8;
              goto LAB_00eace9c;
            }
            if (((long)local_88._1_1_ < 0) ||
               (((*(ulong *)(*(long *)(*(long *)(this + 0x18) + 0x10) + (long)local_88._1_1_ * 8) &
                 (ulong)uVar5) == 0 && ((-1 < (short)uVar5 || (local_88._1_1_ != '_'))))))
            goto LAB_00ead1d8;
          }
          else {
            regex_traits<char>::__transform_primary<char*>
                      ((regex_traits<char> *)(this + 0x10),(char *)&local_88,
                       (char *)((ulong)&local_88 | 2),'\0');
            uVar19 = local_80;
            lVar16 = *(long *)(this + 0x88);
            lVar18 = *(long *)(this + 0x90);
            if (lVar18 - lVar16 != 0) {
              uVar22 = local_80 >> 1 & 0x7f;
              uVar24 = 0;
                    /* try { // try from 00eacefc to 00facf0b has its CatchHandler @ 00eacf50 */
              sVar3 = uVar22;
              pbVar15 = (byte *)((ulong)&local_80 | 1);
              if ((local_80 & 1) != 0) {
                sVar3 = local_78;
                pbVar15 = local_70;
              }
              do {
                pbVar17 = (byte *)(lVar16 + uVar24 * 0x18);
                bVar10 = *pbVar17;
                sVar6 = (ulong)(bVar10 >> 1);
                if ((bVar10 & 1) != 0) {
                  sVar6 = *(size_t *)(pbVar17 + 8);
                }
                if (sVar3 == sVar6) {
                  pbVar20 = *(byte **)(lVar16 + uVar24 * 0x18 + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eacefc with catch @ 00eacf50
                        */
                  if ((bVar10 & 1) == 0) {
                    pbVar20 = pbVar17 + 1;
                  }
                  sVar6 = uVar22;
                  pbVar17 = (byte *)((ulong)&local_80 | 1);
                  sVar8 = sVar3;
                  if ((uVar19 & 1) == 0) {
                    while( true ) {
                      if (sVar8 == 0) goto LAB_00ead1cc;
                      if (*pbVar17 != *pbVar20) break;
                      sVar6 = sVar6 - 1;
                      pbVar20 = pbVar20 + 1;
                      pbVar17 = pbVar17 + 1;
                      sVar8 = sVar6;
                    }
                  }
                  else if ((sVar3 == 0) || (iVar12 = memcmp(pbVar15,pbVar20,sVar3), iVar12 == 0)) {
                    bVar13 = false;
                    _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
                    goto LAB_00ead168;
                  }
                }
                uVar24 = uVar24 + 1;
              } while (uVar24 < (ulong)((lVar18 - lVar16 >> 3) * -0x5555555555555555));
            }
            if ((uVar19 & 1) == 0) {
            }
            else {
              bVar13 = true;
LAB_00ead168:
              operator_delete(local_70);
              if (!bVar13) goto LAB_00ead1f8;
            }
            lVar16 = (long)(char)local_88;
            if (-1 < lVar16) goto LAB_00ead180;
LAB_00eace98:
            uVar14 = (uint)*(ushort *)(this + 0xa2);
            _Var11 = _Var26;
LAB_00eace9c:
            if (-1 < (long)local_88._1_1_) {
              _Var26 = _Var11;
              if ((((uVar14 & (uint)*(undefined8 *)
                                     (*(long *)(*(long *)(this + 0x18) + 0x10) +
                                     (long)local_88._1_1_ * 8) & 0xffff) == 0) &&
                  (_Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1,
                  (short)uVar14 < 0)) && (_Var26 = _Var11, local_88._1_1_ != '_')) {
                _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
              }
              goto LAB_00ead1f8;
            }
          }
LAB_00ead1cc:
          _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
          lVar16 = 2;
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
          uVar19 = local_a0;
          lVar16 = *(long *)(this + 0x60) - *(long *)(this + 0x58);
          if (lVar16 != 0) {
            uVar24 = 0;
            pvVar1 = (void *)((ulong)&local_a0 | 1);
            uVar22 = local_a0 >> 1 & 0x7f;
            if ((local_a0 & 1) != 0) {
              pvVar1 = local_90;
              uVar22 = local_98;
            }
            pbVar15 = (byte *)(*(long *)(this + 0x58) + 0x18);
            do {
              bVar10 = pbVar15[-0x18];
              uVar2 = (ulong)(bVar10 >> 1);
              if ((bVar10 & 1) != 0) {
                uVar2 = *(ulong *)(pbVar15 + -0x10);
              }
              sVar3 = uVar2;
              if (uVar22 <= uVar2) {
                sVar3 = uVar22;
              }
              if (sVar3 == 0) {
LAB_00ead0fc:
                if (uVar2 <= uVar22) {
LAB_00ead104:
                  bVar10 = *pbVar15;
                  uVar2 = (ulong)(bVar10 >> 1);
                  if ((bVar10 & 1) != 0) {
                    uVar2 = *(ulong *)(pbVar15 + 8);
                  }
                  sVar3 = uVar22;
                  if (uVar2 <= uVar22) {
                    sVar3 = uVar2;
                  }
                  if (sVar3 == 0) {
LAB_00ead0a0:
                    if (uVar2 < uVar22) goto LAB_00ead0a8;
                  }
                  else {
                    pbVar17 = *(byte **)(pbVar15 + 0x10);
                    if ((bVar10 & 1) == 0) {
                      pbVar17 = pbVar15 + 1;
                    }
                    iVar12 = memcmp(pbVar17,pvVar1,sVar3);
                    if (iVar12 == 0) goto LAB_00ead0a0;
                    if (iVar12 < 0) goto LAB_00ead0a8;
                  }
                  bVar13 = false;
                  _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
                  goto joined_r0x00ead14c;
                }
              }
              else {
                pbVar17 = pbVar15 + -0x17;
                if ((bVar10 & 1) != 0) {
                  pbVar17 = *(byte **)(pbVar15 + -8);
                }
                iVar12 = memcmp(pvVar1,pbVar17,sVar3);
                if (iVar12 == 0) goto LAB_00ead0fc;
                if (-1 < iVar12) goto LAB_00ead104;
              }
LAB_00ead0a8:
              uVar24 = uVar24 + 1;
              pbVar15 = pbVar15 + 0x30;
            } while (uVar24 < (ulong)((lVar16 >> 4) * -0x5555555555555555));
          }
          _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0;
          bVar13 = true;
joined_r0x00ead14c:
          if ((uVar19 & 1) != 0) {
            operator_delete(local_90);
          }
          if (bVar13) goto LAB_00eacb20;
LAB_00ead1f8:
          lVar16 = 2;
        }
        goto LAB_00eacffc;
      }
    }
    else {
      operator_delete(local_70);
      if (sVar3 != 0) goto LAB_00eaca40;
    }
    pbVar15 = *(byte **)(param_1 + 0x10);
  }
  bVar10 = *pbVar15;
  local_88 = CONCAT11(local_88._1_1_,bVar10);
  if (this[0xa5] == (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) {
                    /* try { // try from 00eac974 to 00fac9ab has its CatchHandler @ 00eac974
                       catch() { ... } // from try @ 00eac974 with catch @ 00eac974
                       catch() { ... } // from try @ 00eac9b8 with catch @ 00eac974 */
    if (this[0xa6] != (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) {
      local_88 = CONCAT11(local_88._1_1_,bVar10);
    }
  }
  else {
                    /* catch() { ... } // from try @ 00eac910 with catch @ 00eac958 */
    bVar10 = (**(code **)(**(long **)(this + 0x18) + 0x28))();
    local_88 = CONCAT11(local_88._1_1_,bVar10);
  }
  lVar16 = *(long *)(this + 0x28);
  if (*(long *)(this + 0x30) != lVar16) {
    uVar19 = 0;
    do {
      if (*(byte *)(lVar16 + uVar19) == bVar10) goto LAB_00eacff4;
      uVar19 = uVar19 + 1;
    } while (uVar19 < (ulong)(*(long *)(this + 0x30) - lVar16));
  }
  uVar5 = *(ushort *)(this + 0xa2);
                    /* try { // try from 00eac9ac to 00fac9b7 has its CatchHandler @ 00eac9f4 */
  if (((ulong)uVar5 == 0) && (*(long *)(this + 0x40) == *(long *)(this + 0x48))) {
    _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0;
LAB_00eacb94:
    p_Var23 = this + 0x58;
    lVar16 = *(long *)p_Var23;
    p_Var25 = this + 0x60;
    lVar18 = *(long *)p_Var25;
    if (lVar16 != lVar18) {
      if (this[0xa6] == (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0) {
        local_98 = 0;
        local_90 = (void *)0x0;
        local_a0 = CONCAT71((uint7)bVar10,2);
      }
      else {
        local_78 = 0;
        local_70 = (byte *)0x0;
        local_80 = CONCAT71((uint7)bVar10,2);
        (**(code **)(**(long **)(this + 0x20) + 0x20))
                  (&local_a0,*(long **)(this + 0x20),(ulong)&local_80 | 1,(ulong)&local_80 | 2);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        lVar18 = *(long *)p_Var25;
        lVar16 = *(long *)p_Var23;
      }
      uVar19 = local_a0;
      if (lVar18 != lVar16) {
        pbVar15 = (byte *)(lVar16 + 0x18);
        uVar24 = 0;
        uVar22 = local_a0 >> 1 & 0x7f;
        pvVar1 = (void *)((ulong)&local_a0 | 1);
        if ((local_a0 & 1) != 0) {
          uVar22 = local_98;
          pvVar1 = local_90;
        }
        do {
          bVar10 = pbVar15[-0x18];
          uVar2 = (ulong)(bVar10 >> 1);
          if ((bVar10 & 1) != 0) {
            uVar2 = *(ulong *)(pbVar15 + -0x10);
          }
          sVar3 = uVar2;
          if (uVar22 <= uVar2) {
            sVar3 = uVar22;
          }
          if (sVar3 == 0) {
LAB_00eacd48:
            if (uVar2 <= uVar22) {
LAB_00eacd50:
              bVar10 = *pbVar15;
              uVar2 = (ulong)(bVar10 >> 1);
              if ((bVar10 & 1) != 0) {
                uVar2 = *(ulong *)(pbVar15 + 8);
              }
                    /* try { // try from 00eacd64 to 00face03 has its CatchHandler @ 00eacd64
                       catch() { ... } // from try @ 00eacd64 with catch @ 00eacd64
                       catch() { ... } // from try @ 00eace14 with catch @ 00eacd64 */
              sVar3 = uVar22;
              if (uVar2 <= uVar22) {
                sVar3 = uVar2;
              }
              if (sVar3 == 0) {
LAB_00eaccd8:
                if (uVar2 < uVar22) goto LAB_00eacce0;
              }
              else {
                pbVar17 = *(byte **)(pbVar15 + 0x10);
                if ((bVar10 & 1) == 0) {
                  pbVar17 = pbVar15 + 1;
                }
                iVar12 = memcmp(pbVar17,pvVar1,sVar3);
                if (iVar12 == 0) goto LAB_00eaccd8;
                if (iVar12 < 0) goto LAB_00eacce0;
              }
              bVar13 = false;
              _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
              goto joined_r0x00eacd9c;
            }
          }
          else {
            pbVar17 = pbVar15 + -0x17;
            if ((bVar10 & 1) != 0) {
              pbVar17 = *(byte **)(pbVar15 + -8);
            }
            iVar12 = memcmp(pvVar1,pbVar17,sVar3);
            if (iVar12 == 0) goto LAB_00eacd48;
            if (-1 < iVar12) goto LAB_00eacd50;
          }
LAB_00eacce0:
          uVar24 = uVar24 + 1;
          pbVar15 = pbVar15 + 0x30;
        } while (uVar24 < (ulong)((*(long *)p_Var25 - *(long *)p_Var23 >> 4) * -0x5555555555555555))
        ;
      }
      bVar13 = true;
joined_r0x00eacd9c:
      if ((uVar19 & 1) != 0) {
        operator_delete(local_90);
      }
      if (!bVar13) goto LAB_00eacff8;
    }
    if (*(long *)(this + 0x88) == *(long *)(this + 0x90)) {
LAB_00eacfc4:
    }
    else {
      regex_traits<char>::__transform_primary<char*>
                ((regex_traits<char> *)(this + 0x10),(char *)&local_88,
                 (char *)((ulong)&local_88 | 1),'\0');
      uVar19 = local_80;
      lVar16 = *(long *)(this + 0x88);
      lVar18 = *(long *)(this + 0x90);
      if (lVar18 - lVar16 != 0) {
        uVar22 = local_80 >> 1 & 0x7f;
        uVar24 = 0;
        sVar3 = uVar22;
        pbVar15 = (byte *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          sVar3 = local_78;
          pbVar15 = local_70;
        }
        do {
          pbVar17 = (byte *)(lVar16 + uVar24 * 0x18);
          bVar10 = *pbVar17;
          sVar6 = (ulong)(bVar10 >> 1);
          if ((bVar10 & 1) != 0) {
            sVar6 = *(size_t *)(pbVar17 + 8);
          }
                    /* try { // try from 00eace04 to 00face13 has its CatchHandler @ 00eace58 */
          if (sVar3 == sVar6) {
            pbVar20 = *(byte **)(lVar16 + uVar24 * 0x18 + 0x10);
                    /* try { // try from 00eace14 to 00face6b has its CatchHandler @ 00eacd64 */
            if ((bVar10 & 1) == 0) {
              pbVar20 = pbVar17 + 1;
            }
            sVar6 = uVar22;
            pbVar17 = (byte *)((ulong)&local_80 | 1);
            sVar8 = sVar3;
            if ((uVar19 & 1) == 0) {
              while( true ) {
                if (sVar8 == 0) goto LAB_00eacff4;
                if (*pbVar17 != *pbVar20) break;
                sVar6 = sVar6 - 1;
                pbVar20 = pbVar20 + 1;
                pbVar17 = pbVar17 + 1;
                sVar8 = sVar6;
              }
            }
            else {
                    /* catch() { ... } // from try @ 00eace04 with catch @ 00eace58 */
              if ((sVar3 == 0) || (iVar12 = memcmp(pbVar15,pbVar20,sVar3), iVar12 == 0)) {
                bVar13 = false;
                _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
                goto LAB_00eacfb8;
              }
            }
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < (ulong)((lVar18 - lVar16 >> 3) * -0x5555555555555555));
      }
      if ((uVar19 & 1) != 0) {
        bVar13 = true;
LAB_00eacfb8:
        operator_delete(local_70);
        if (!bVar13) goto LAB_00eacff8;
        goto LAB_00eacfc4;
      }
    }
    if ((-1 < (long)(char)local_88) &&
       (((*(ulong *)(*(long *)(*(long *)(this + 0x18) + 0x10) + (long)(char)local_88 * 8) &
         (ulong)*(ushort *)(this + 0xa0)) != 0 ||
        (((char)local_88 == '_' && ((short)*(ushort *)(this + 0xa0) < 0)))))) {
LAB_00eacff4:
      _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x1;
    }
  }
  else {
                    /* try { // try from 00eac9b8 to 00faca0f has its CatchHandler @ 00eac974 */
    if (((char)bVar10 < '\0') ||
       ((*(ulong *)(*(long *)(*(long *)(this + 0x18) + 0x10) + (long)(char)bVar10 * 8) &
        (ulong)uVar5) == 0)) {
                    /* catch() { ... } // from try @ 00eac9ac with catch @ 00eac9f4 */
      bVar13 = (short)uVar5 < 0 && bVar10 == 0x5f;
    }
    else {
      bVar13 = true;
    }
    pbVar15 = *(byte **)(this + 0x40);
    pbVar17 = *(byte **)(this + 0x48);
    pbVar20 = pbVar15;
    if (pbVar15 != pbVar17) {
      bVar4 = *pbVar15;
      while ((pbVar20 = pbVar15, bVar4 != bVar10 &&
             (pbVar15 = pbVar15 + 1, pbVar20 = pbVar17, pbVar17 != pbVar15))) {
        bVar4 = *pbVar15;
      }
    }
    _Var26 = (__bracket_expression<char,std::__ndk1::regex_traits<char>>)
             (pbVar20 == pbVar17 & (bVar13 ^ 0xffU));
    if (_Var26 == (__bracket_expression<char,std::__ndk1::regex_traits<char>>)0x0)
    goto LAB_00eacb94;
  }
LAB_00eacff8:
  lVar16 = 1;
LAB_00eacffc:
  if (_Var26 == this[0xa4]) {
    *(undefined4 *)param_1 = 0xfffffc1f;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    *(undefined4 *)param_1 = 0xfffffc1d;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar16;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

