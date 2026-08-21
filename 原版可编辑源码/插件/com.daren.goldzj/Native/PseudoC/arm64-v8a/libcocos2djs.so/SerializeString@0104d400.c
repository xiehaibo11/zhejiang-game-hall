
/* v8::internal::JsonStringifier::SerializeString(v8::internal::Handle<v8::internal::String>) */

void __thiscall v8::internal::JsonStringifier::SerializeString(JsonStringifier *this,ulong *param_2)

{
  IncrementalStringBuilder *this_00;
  ushort *puVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar14;
  byte bVar15;
  byte *pbVar16;
  JsonStringifier *pJVar17;
  JsonStringifier *pJVar18;
  byte *pbVar19;
  JsonStringifier *pJVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined **local_98;
  long local_90;
  undefined8 uStack_88;
  int local_74;
  long local_70;
  byte *pbVar13;
  
  do {
    param_2 = (ulong *)String::Flatten(*(undefined8 *)this,param_2,0);
    uVar6 = *param_2;
    this_00 = (IncrementalStringBuilder *)(this + 8);
    uVar14 = uVar6;
    while( true ) {
      uVar5 = *(ushort *)((uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1)) + 7);
      if ((uVar5 & 9) == 0) break;
      if ((uVar5 & 9) == 8) {
        bVar3 = true;
        goto joined_r0x0104d478;
      }
      uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb);
    }
    bVar3 = false;
joined_r0x0104d478:
    if (*(int *)(this + 0x10) != 0) {
      iVar22 = *(int *)(uVar6 + 7);
      pJVar20 = this + 0x28;
      lVar7 = **(long **)pJVar20;
      pJVar17 = this + 0x1c;
      iVar21 = *(int *)pJVar17;
      *(int *)pJVar17 = iVar21 + 1;
      *(undefined2 *)(lVar7 + (long)iVar21 * 2 + 0xb) = 0x22;
      pJVar18 = this + 0x18;
      if (bVar3) {
        if (*(int *)pJVar17 == *(int *)pJVar18) {
          IncrementalStringBuilder::Extend(this_00);
        }
        if (((iVar22 < 0x4001) && (iVar22 * 8 != 0)) &&
           (iVar22 * 8 < *(int *)pJVar18 - *(int *)pJVar17)) {
          local_98 = (undefined **)*param_2;
          auVar23 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_98);
          iVar22 = *(int *)pJVar17;
          puVar1 = (ushort *)(**(long **)pJVar20 + (long)iVar22 * 2 + 0xb);
          puVar9 = puVar1;
          if (0 < auVar23._8_4_) {
            uVar14 = 0;
            puVar10 = puVar1;
            do {
              bVar15 = *(byte *)(auVar23._0_8_ + uVar14);
              if ((bVar15 == 0x5c) || (0x5b < (byte)(bVar15 - 0x23))) {
                uVar5 = (ushort)(byte)(&DAT_019cc17c)[(ulong)bVar15 * 8];
                puVar9 = puVar10;
                if ((&DAT_019cc17c)[(ulong)bVar15 * 8] != 0) {
                  pbVar19 = &DAT_019cc17c + (ulong)bVar15 * 8;
                  do {
                    pbVar19 = pbVar19 + 1;
                    puVar9 = puVar10 + 1;
                    *puVar10 = uVar5;
                    uVar5 = (ushort)*pbVar19;
                    puVar10 = puVar9;
                  } while (uVar5 != 0);
                }
              }
              else {
                puVar9 = puVar10 + 1;
                *puVar10 = (ushort)bVar15;
              }
              uVar14 = uVar14 + 1;
              puVar10 = puVar9;
            } while (uVar14 != (auVar23._8_8_ & 0xffffffff));
            iVar22 = *(int *)pJVar17;
          }
          iVar22 = iVar22 + (int)((ulong)((long)puVar9 - (long)puVar1) >> 1);
          *(int *)pJVar17 = iVar22;
          goto LAB_0104e1dc;
        }
        FlatStringReader::FlatStringReader
                  ((FlatStringReader *)&local_98,*(undefined8 *)this,param_2);
        if (0 < local_74) {
          lVar7 = 0;
          do {
            bVar15 = *(byte *)(local_70 + lVar7);
            if ((bVar15 == 0x5c) || (0x5b < (byte)(bVar15 - 0x23))) {
              lVar11 = (ulong)bVar15 * 8;
              uVar5 = (ushort)(byte)(&DAT_019cc17c)[lVar11];
              if (*(int *)(this + 0x10) == 0) {
                if (uVar5 != 0) {
                  pbVar19 = &DAT_019cc17c + lVar11;
                  do {
                    pbVar19 = pbVar19 + 1;
                    iVar22 = *(int *)pJVar17;
                    lVar11 = **(long **)pJVar20;
                    *(int *)pJVar17 = iVar22 + 1;
                    *(char *)(lVar11 + iVar22 + 0xb) = (char)uVar5;
                    if (*(int *)pJVar17 == *(int *)pJVar18) {
                      IncrementalStringBuilder::Extend(this_00);
                    }
                    uVar5 = (ushort)*pbVar19;
                  } while (uVar5 != 0);
                }
              }
              else if (uVar5 != 0) {
                pbVar19 = &DAT_019cc17c + lVar11;
                do {
                  pbVar19 = pbVar19 + 1;
                  iVar22 = *(int *)pJVar17;
                  lVar11 = **(long **)pJVar20;
                  *(int *)pJVar17 = iVar22 + 1;
                  *(ushort *)(lVar11 + (long)iVar22 * 2 + 0xb) = uVar5;
                  if (*(int *)pJVar17 == *(int *)pJVar18) {
                    IncrementalStringBuilder::Extend(this_00);
                  }
                  uVar5 = (ushort)*pbVar19;
                } while (*pbVar19 != 0);
              }
            }
            else {
              iVar22 = *(int *)pJVar17;
              lVar11 = **(long **)pJVar20;
              *(int *)pJVar17 = iVar22 + 1;
              *(ushort *)(lVar11 + (long)iVar22 * 2 + 0xb) = (ushort)bVar15;
              if (*(int *)pJVar17 == *(int *)pJVar18) {
                IncrementalStringBuilder::Extend(this_00);
              }
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < local_74);
        }
        goto LAB_0104e1bc;
      }
      if (*(int *)pJVar17 == *(int *)pJVar18) {
        IncrementalStringBuilder::Extend(this_00);
      }
      if (((iVar22 < 0x4001) && (iVar22 * 8 != 0)) &&
         (iVar22 * 8 < *(int *)pJVar18 - *(int *)pJVar17)) {
        local_98 = (undefined **)*param_2;
        auVar24 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_98);
        iVar21 = auVar24._8_4_;
        iVar22 = *(int *)pJVar17;
        puVar1 = (ushort *)(**(long **)pJVar20 + (long)iVar22 * 2 + 0xb);
        puVar9 = puVar1;
        if (iVar21 < 1) goto LAB_0104e254;
        iVar22 = 0;
        puVar10 = puVar1;
        goto LAB_0104d98c;
      }
      FlatStringReader::FlatStringReader((FlatStringReader *)&local_98,*(undefined8 *)this,param_2);
      if (local_74 < 1) goto LAB_0104e1bc;
      iVar22 = 0;
      break;
    }
    if (bVar3) goto code_r0x0104d598;
    puVar4 = (undefined8 *)
             SeqString::Truncate(*(undefined8 *)(this + 0x28),*(undefined4 *)(this + 0x1c));
    **(undefined8 **)(this + 0x28) = *puVar4;
    *(undefined4 *)(this + 0x10) = 1;
    IncrementalStringBuilder::Extend(this_00);
  } while( true );
  do {
    uVar5 = *(ushort *)(local_70 + (long)iVar22 * 2);
    iVar21 = iVar22;
    if ((((ulong)uVar5 < 0x23) || (uVar5 == 0x5c)) || (uVar5 == 0x7f)) {
      lVar7 = (ulong)uVar5 * 8;
      uVar5 = (ushort)(byte)(&DAT_019cc17c)[lVar7];
      if (*(int *)(this + 0x10) == 0) {
        if (uVar5 != 0) {
          pbVar19 = &DAT_019cc17c + lVar7;
          do {
            pbVar19 = pbVar19 + 1;
            iVar22 = *(int *)pJVar17;
            lVar7 = **(long **)pJVar20;
            *(int *)pJVar17 = iVar22 + 1;
            *(char *)(lVar7 + iVar22 + 0xb) = (char)uVar5;
            if (*(int *)pJVar17 == *(int *)pJVar18) {
              IncrementalStringBuilder::Extend(this_00);
            }
            uVar5 = (ushort)*pbVar19;
          } while (uVar5 != 0);
        }
      }
      else if (uVar5 != 0) {
        pbVar19 = &DAT_019cc17c + lVar7;
        do {
          pbVar19 = pbVar19 + 1;
          iVar22 = *(int *)pJVar17;
          lVar7 = **(long **)pJVar20;
          *(int *)pJVar17 = iVar22 + 1;
          *(ushort *)(lVar7 + (long)iVar22 * 2 + 0xb) = uVar5;
          if (*(int *)pJVar17 == *(int *)pJVar18) {
            IncrementalStringBuilder::Extend(this_00);
          }
          uVar5 = (ushort)*pbVar19;
        } while (*pbVar19 != 0);
      }
    }
    else if (uVar5 >> 0xb == 0x1b) {
      if (uVar5 >> 10 < 0x37) {
        iVar21 = (int)((long)iVar22 + 1);
        if (iVar21 < local_74) {
          uVar2 = *(ushort *)(local_70 + ((long)iVar22 + 1) * 2);
          if (uVar2 >> 10 == 0x37) {
            iVar22 = *(int *)pJVar17;
            lVar7 = **(long **)pJVar20;
            *(int *)pJVar17 = iVar22 + 1;
            *(ushort *)(lVar7 + (long)iVar22 * 2 + 0xb) = uVar5;
            iVar22 = *(int *)pJVar17;
            if (iVar22 == *(int *)pJVar18) {
              IncrementalStringBuilder::Extend(this_00);
              iVar22 = *(int *)pJVar17;
            }
            lVar7 = **(long **)pJVar20;
            *(int *)pJVar17 = iVar22 + 1;
            *(ushort *)(lVar7 + (long)iVar22 * 2 + 0xb) = uVar2;
            if (*(int *)pJVar17 == *(int *)pJVar18) {
              IncrementalStringBuilder::Extend(this_00);
            }
            goto LAB_0104db94;
          }
          iVar21 = *(int *)(this + 0x1c);
          lVar7 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar21 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar7 + iVar21 + 0xb) = 0x5c;
            iVar21 = *(int *)pJVar17;
            if (iVar21 == *(int *)pJVar18) {
              IncrementalStringBuilder::Extend(this_00);
              iVar21 = *(int *)pJVar17;
            }
            lVar7 = **(long **)pJVar20;
            *(int *)pJVar17 = iVar21 + 1;
            *(undefined1 *)(lVar7 + iVar21 + 0xb) = 0x75;
          }
          else {
            *(undefined2 *)(lVar7 + (long)iVar21 * 2 + 0xb) = 0x5c;
            iVar21 = *(int *)pJVar17;
            if (iVar21 == *(int *)pJVar18) {
              IncrementalStringBuilder::Extend(this_00);
              iVar21 = *(int *)pJVar17;
            }
            lVar7 = **(long **)pJVar20;
            *(int *)pJVar17 = iVar21 + 1;
            *(undefined2 *)(lVar7 + (long)iVar21 * 2 + 0xb) = 0x75;
          }
          if (*(int *)pJVar17 == *(int *)pJVar18) {
            IncrementalStringBuilder::Extend(this_00);
          }
          pbVar12 = (byte *)DoubleToRadixCString((double)uVar5,0x10);
          uVar5 = (ushort)*pbVar12;
          pbVar19 = pbVar12;
          if (*(int *)(this + 0x10) == 0) {
            while (uVar5 != 0) {
              iVar21 = *(int *)pJVar17;
              lVar7 = **(long **)pJVar20;
              *(int *)pJVar17 = iVar21 + 1;
              *(char *)(lVar7 + iVar21 + 0xb) = (char)uVar5;
              if (*(int *)pJVar17 == *(int *)pJVar18) {
                IncrementalStringBuilder::Extend(this_00);
              }
              uVar5 = (ushort)pbVar19[1];
              pbVar19 = pbVar19 + 1;
            }
          }
          else if (uVar5 != 0) {
            do {
              iVar21 = *(int *)pJVar17;
              lVar7 = **(long **)pJVar20;
              *(int *)pJVar17 = iVar21 + 1;
              *(ushort *)(lVar7 + (long)iVar21 * 2 + 0xb) = uVar5;
              if (*(int *)pJVar17 == *(int *)pJVar18) {
                IncrementalStringBuilder::Extend(this_00);
              }
              bVar15 = pbVar19[1];
              uVar5 = (ushort)bVar15;
              pbVar19 = pbVar19 + 1;
            } while (bVar15 != 0);
          }
        }
        else {
          iVar21 = *(int *)(this + 0x1c);
          lVar7 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar21 + 1;
          if (*(int *)(this + 0x10) == 0) {
            *(undefined1 *)(lVar7 + iVar21 + 0xb) = 0x5c;
            iVar21 = *(int *)pJVar17;
            if (iVar21 == *(int *)pJVar18) {
              IncrementalStringBuilder::Extend(this_00);
              iVar21 = *(int *)pJVar17;
            }
            lVar7 = **(long **)pJVar20;
            *(int *)pJVar17 = iVar21 + 1;
            *(undefined1 *)(lVar7 + iVar21 + 0xb) = 0x75;
          }
          else {
            *(undefined2 *)(lVar7 + (long)iVar21 * 2 + 0xb) = 0x5c;
            iVar21 = *(int *)pJVar17;
            if (iVar21 == *(int *)pJVar18) {
              IncrementalStringBuilder::Extend(this_00);
              iVar21 = *(int *)pJVar17;
            }
            lVar7 = **(long **)pJVar20;
            *(int *)pJVar17 = iVar21 + 1;
            *(undefined2 *)(lVar7 + (long)iVar21 * 2 + 0xb) = 0x75;
          }
          if (*(int *)pJVar17 == *(int *)pJVar18) {
            IncrementalStringBuilder::Extend(this_00);
          }
          pbVar12 = (byte *)DoubleToRadixCString((double)uVar5,0x10);
          uVar5 = (ushort)*pbVar12;
          pbVar19 = pbVar12;
          if (*(int *)(this + 0x10) == 0) {
            while (uVar5 != 0) {
              iVar21 = *(int *)pJVar17;
              lVar7 = **(long **)pJVar20;
              *(int *)pJVar17 = iVar21 + 1;
              *(char *)(lVar7 + iVar21 + 0xb) = (char)uVar5;
              if (*(int *)pJVar17 == *(int *)pJVar18) {
                IncrementalStringBuilder::Extend(this_00);
              }
              uVar5 = (ushort)pbVar19[1];
              pbVar19 = pbVar19 + 1;
            }
          }
          else if (uVar5 != 0) {
            do {
              iVar21 = *(int *)pJVar17;
              lVar7 = **(long **)pJVar20;
              *(int *)pJVar17 = iVar21 + 1;
              *(ushort *)(lVar7 + (long)iVar21 * 2 + 0xb) = uVar5;
              if (*(int *)pJVar17 == *(int *)pJVar18) {
                IncrementalStringBuilder::Extend(this_00);
              }
              bVar15 = pbVar19[1];
              uVar5 = (ushort)bVar15;
              pbVar19 = pbVar19 + 1;
            } while (bVar15 != 0);
          }
        }
      }
      else {
        iVar21 = *(int *)(this + 0x1c);
        lVar7 = **(long **)(this + 0x28);
        *(int *)(this + 0x1c) = iVar21 + 1;
        if (*(int *)(this + 0x10) == 0) {
          *(undefined1 *)(lVar7 + iVar21 + 0xb) = 0x5c;
          iVar21 = *(int *)pJVar17;
          if (iVar21 == *(int *)pJVar18) {
            IncrementalStringBuilder::Extend(this_00);
            iVar21 = *(int *)pJVar17;
          }
          lVar7 = **(long **)pJVar20;
          *(int *)pJVar17 = iVar21 + 1;
          *(undefined1 *)(lVar7 + iVar21 + 0xb) = 0x75;
        }
        else {
          *(undefined2 *)(lVar7 + (long)iVar21 * 2 + 0xb) = 0x5c;
          iVar21 = *(int *)pJVar17;
          if (iVar21 == *(int *)pJVar18) {
            IncrementalStringBuilder::Extend(this_00);
            iVar21 = *(int *)pJVar17;
          }
          lVar7 = **(long **)pJVar20;
          *(int *)pJVar17 = iVar21 + 1;
          *(undefined2 *)(lVar7 + (long)iVar21 * 2 + 0xb) = 0x75;
        }
        if (*(int *)pJVar17 == *(int *)pJVar18) {
          IncrementalStringBuilder::Extend(this_00);
        }
        pbVar12 = (byte *)DoubleToRadixCString((double)uVar5,0x10);
        uVar5 = (ushort)*pbVar12;
        pbVar19 = pbVar12;
        if (*(int *)(this + 0x10) == 0) {
          while (uVar5 != 0) {
            iVar21 = *(int *)pJVar17;
            lVar7 = **(long **)pJVar20;
            *(int *)pJVar17 = iVar21 + 1;
            *(char *)(lVar7 + iVar21 + 0xb) = (char)uVar5;
            if (*(int *)pJVar17 == *(int *)pJVar18) {
              IncrementalStringBuilder::Extend(this_00);
            }
            uVar5 = (ushort)pbVar19[1];
            pbVar19 = pbVar19 + 1;
          }
        }
        else if (uVar5 != 0) {
          do {
            iVar21 = *(int *)pJVar17;
            lVar7 = **(long **)pJVar20;
            *(int *)pJVar17 = iVar21 + 1;
            *(ushort *)(lVar7 + (long)iVar21 * 2 + 0xb) = uVar5;
            if (*(int *)pJVar17 == *(int *)pJVar18) {
              IncrementalStringBuilder::Extend(this_00);
            }
            bVar15 = pbVar19[1];
            uVar5 = (ushort)bVar15;
            pbVar19 = pbVar19 + 1;
          } while (bVar15 != 0);
        }
      }
      iVar21 = iVar22;
      if (pbVar12 != (byte *)0x0) {
        operator_delete__(pbVar12);
      }
    }
    else {
      iVar22 = *(int *)pJVar17;
      lVar7 = **(long **)pJVar20;
      *(int *)pJVar17 = iVar22 + 1;
      *(ushort *)(lVar7 + (long)iVar22 * 2 + 0xb) = uVar5;
      if (*(int *)pJVar17 == *(int *)pJVar18) {
        IncrementalStringBuilder::Extend(this_00);
      }
    }
LAB_0104db94:
    iVar22 = iVar21 + 1;
  } while (iVar22 < local_74);
LAB_0104e1bc:
  local_98 = &PTR__Relocatable_01cacc40;
  *(undefined8 *)(local_90 + 0xb790) = uStack_88;
  iVar22 = *(int *)pJVar17;
  goto LAB_0104e1dc;
code_r0x0104d598:
  iVar21 = *(int *)(this + 0x1c);
  iVar22 = *(int *)(uVar6 + 7);
  lVar7 = **(long **)(this + 0x28);
  *(int *)(this + 0x1c) = iVar21 + 1;
  *(undefined1 *)(lVar7 + iVar21 + 0xb) = 0x22;
  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
    IncrementalStringBuilder::Extend(this_00);
  }
  if (((iVar22 < 0x4001) && (iVar22 = iVar22 * 8, iVar22 != 0)) &&
     (iVar22 < *(int *)(this + 0x18) - *(int *)(this + 0x1c))) {
    local_98 = (undefined **)*param_2;
    auVar23 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_98);
    iVar22 = *(int *)(this + 0x1c);
    pbVar19 = (byte *)(**(long **)(this + 0x28) + (long)iVar22 + 0xb);
    pbVar12 = pbVar19;
    if (0 < auVar23._8_4_) {
      uVar14 = 0;
      pbVar13 = pbVar19;
      do {
        bVar15 = *(byte *)(auVar23._0_8_ + uVar14);
        if (((ulong)bVar15 == 0x5c) || (0x5b < (byte)(bVar15 - 0x23))) {
          lVar7 = (ulong)bVar15 * 8;
          bVar15 = (&DAT_019cc17c)[lVar7];
          pbVar12 = pbVar13;
          if (bVar15 != 0) {
            pbVar16 = &DAT_019cc17c + lVar7;
            do {
              pbVar16 = pbVar16 + 1;
              pbVar12 = pbVar13 + 1;
              *pbVar13 = bVar15;
              bVar15 = *pbVar16;
              pbVar13 = pbVar12;
            } while (bVar15 != 0);
          }
        }
        else {
          pbVar12 = pbVar13 + 1;
          *pbVar13 = bVar15;
        }
        uVar14 = uVar14 + 1;
        pbVar13 = pbVar12;
      } while (uVar14 != (auVar23._8_8_ & 0xffffffff));
      iVar22 = *(int *)(this + 0x1c);
    }
    iVar22 = iVar22 + ((int)pbVar12 - (int)pbVar19);
    *(int *)(this + 0x1c) = iVar22;
  }
  else {
    FlatStringReader::FlatStringReader((FlatStringReader *)&local_98,*(undefined8 *)this,param_2);
    if (0 < local_74) {
      lVar7 = 0;
      do {
        bVar15 = *(byte *)(local_70 + lVar7);
        if (((ulong)bVar15 == 0x5c) || (0x5b < (byte)(bVar15 - 0x23))) {
          lVar11 = (ulong)bVar15 * 8;
          uVar5 = (ushort)(byte)(&DAT_019cc17c)[lVar11];
          if (*(int *)(this + 0x10) == 0) {
            if (uVar5 != 0) {
              pbVar19 = &DAT_019cc17c + lVar11;
              do {
                pbVar19 = pbVar19 + 1;
                iVar22 = *(int *)(this + 0x1c);
                lVar11 = **(long **)(this + 0x28);
                *(int *)(this + 0x1c) = iVar22 + 1;
                *(char *)(lVar11 + iVar22 + 0xb) = (char)uVar5;
                if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                  IncrementalStringBuilder::Extend(this_00);
                }
                uVar5 = (ushort)*pbVar19;
              } while (uVar5 != 0);
            }
          }
          else if (uVar5 != 0) {
            pbVar19 = &DAT_019cc17c + lVar11;
            do {
              pbVar19 = pbVar19 + 1;
              iVar22 = *(int *)(this + 0x1c);
              lVar11 = **(long **)(this + 0x28);
              *(int *)(this + 0x1c) = iVar22 + 1;
              *(ushort *)(lVar11 + (long)iVar22 * 2 + 0xb) = uVar5;
              if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
                IncrementalStringBuilder::Extend(this_00);
              }
              uVar5 = (ushort)*pbVar19;
            } while (*pbVar19 != 0);
          }
        }
        else {
          iVar22 = *(int *)(this + 0x1c);
          lVar11 = **(long **)(this + 0x28);
          *(int *)(this + 0x1c) = iVar22 + 1;
          *(byte *)(lVar11 + iVar22 + 0xb) = bVar15;
          if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
            IncrementalStringBuilder::Extend(this_00);
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < local_74);
    }
    local_98 = &PTR__Relocatable_01cacc40;
    *(undefined8 *)(local_90 + 0xb790) = uStack_88;
    iVar22 = *(int *)(this + 0x1c);
  }
  lVar7 = **(long **)(this + 0x28);
  *(int *)(this + 0x1c) = iVar22 + 1;
  *(undefined1 *)(lVar7 + iVar22 + 0xb) = 0x22;
  if (*(int *)(this + 0x1c) != *(int *)(this + 0x18)) {
    return;
  }
  goto LAB_0104e208;
LAB_0104d98c:
  do {
    uVar5 = *(ushort *)(auVar24._0_8_ + (long)iVar22 * 2);
    if ((((ulong)uVar5 < 0x23) || (uVar5 == 0x5c)) || (uVar5 == 0x7f)) {
      lVar7 = (ulong)uVar5 * 8;
      uVar5 = (ushort)(byte)(&DAT_019cc17c)[lVar7];
      puVar9 = puVar10;
      if ((&DAT_019cc17c)[lVar7] != 0) {
        pbVar19 = &DAT_019cc17c + lVar7;
        do {
          pbVar19 = pbVar19 + 1;
          puVar9 = puVar10 + 1;
          *puVar10 = uVar5;
          uVar5 = (ushort)*pbVar19;
          puVar10 = puVar9;
        } while (uVar5 != 0);
      }
    }
    else if (uVar5 >> 0xb == 0x1b) {
      if (uVar5 >> 10 < 0x37) {
        iVar8 = (int)((long)iVar22 + 1);
        if (iVar8 < iVar21) {
          uVar2 = *(ushort *)(auVar24._0_8_ + ((long)iVar22 + 1) * 2);
          if (uVar2 >> 10 == 0x37) {
            *puVar10 = uVar5;
            puVar9 = puVar10 + 2;
            puVar10[1] = uVar2;
            iVar22 = iVar8;
            goto LAB_0104d980;
          }
          puVar9 = puVar10 + 2;
          puVar10[0] = 0x5c;
          puVar10[1] = 0x75;
          pbVar12 = (byte *)DoubleToRadixCString((double)uVar5,0x10);
          uVar5 = (ushort)*pbVar12;
          puVar10 = puVar9;
          pbVar19 = pbVar12;
          if (*pbVar12 != 0) {
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = uVar5;
              uVar5 = (ushort)pbVar19[1];
              puVar10 = puVar9;
              pbVar19 = pbVar19 + 1;
            } while (uVar5 != 0);
          }
        }
        else {
          puVar9 = puVar10 + 2;
          puVar10[0] = 0x5c;
          puVar10[1] = 0x75;
          pbVar12 = (byte *)DoubleToRadixCString((double)uVar5,0x10);
          uVar5 = (ushort)*pbVar12;
          puVar10 = puVar9;
          pbVar19 = pbVar12;
          if (*pbVar12 != 0) {
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = uVar5;
              uVar5 = (ushort)pbVar19[1];
              puVar10 = puVar9;
              pbVar19 = pbVar19 + 1;
            } while (uVar5 != 0);
          }
        }
      }
      else {
        puVar9 = puVar10 + 2;
        puVar10[0] = 0x5c;
        puVar10[1] = 0x75;
        pbVar12 = (byte *)DoubleToRadixCString((double)uVar5,0x10);
        uVar5 = (ushort)*pbVar12;
        puVar10 = puVar9;
        pbVar19 = pbVar12;
        if (*pbVar12 != 0) {
          do {
            puVar9 = puVar10 + 1;
            *puVar10 = uVar5;
            uVar5 = (ushort)pbVar19[1];
            puVar10 = puVar9;
            pbVar19 = pbVar19 + 1;
          } while (uVar5 != 0);
        }
      }
      if (pbVar12 != (byte *)0x0) {
        operator_delete__(pbVar12);
      }
    }
    else {
      puVar9 = puVar10 + 1;
      *puVar10 = uVar5;
    }
LAB_0104d980:
    iVar22 = iVar22 + 1;
    puVar10 = puVar9;
  } while (iVar22 < iVar21);
  iVar22 = *(int *)pJVar17;
LAB_0104e254:
  iVar22 = iVar22 + (int)((ulong)((long)puVar9 - (long)puVar1) >> 1);
  *(int *)pJVar17 = iVar22;
LAB_0104e1dc:
  lVar7 = **(long **)pJVar20;
  *(int *)pJVar17 = iVar22 + 1;
  *(undefined2 *)(lVar7 + (long)iVar22 * 2 + 0xb) = 0x22;
  if (*(int *)pJVar17 == *(int *)pJVar18) {
LAB_0104e208:
    IncrementalStringBuilder::Extend(this_00);
  }
  return;
}

