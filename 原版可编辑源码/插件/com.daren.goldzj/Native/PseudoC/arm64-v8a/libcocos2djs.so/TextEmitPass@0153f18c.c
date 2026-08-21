
/* v8::internal::TextNode::TextEmitPass(v8::internal::RegExpCompiler*,
   v8::internal::TextNode::TextEmitPassType, bool, v8::internal::Trace*, bool, int*) */

void __thiscall
v8::internal::TextNode::TextEmitPass
          (TextNode *this,long param_1,uint param_3,uint param_4,int *param_5,byte param_6,
          uint *param_7)

{
  int iVar1;
  ushort uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  bool bVar5;
  ulong uVar6;
  ZoneList *pZVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long *plVar13;
  int *piVar14;
  code *pcVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  Zone *this_00;
  RegExpCharacterClass *this_01;
  uint uVar26;
  char *pcVar27;
  int local_80;
  undefined8 local_68;
  
  plVar19 = *(long **)(param_1 + 0x28);
  plVar13 = *(long **)(this + 0x40);
  lVar20 = plVar19[3];
  puVar23 = *(undefined8 **)(param_5 + 4);
  lVar21 = (long)*(int *)((long)plVar13 + 0xc) + -1;
  if (this[0x48] == (TextNode)0x0) {
    local_80 = 0;
  }
  else {
    piVar14 = (int *)(*plVar13 + lVar21 * 0x10);
    iVar16 = piVar14[1];
    iVar22 = 1;
    if (iVar16 != 1) {
      if (iVar16 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      iVar22 = *(int *)(*(long *)(*plVar13 + lVar21 * 0x10 + 8) + 0x10);
    }
    local_80 = -(*piVar14 + iVar22);
  }
  uVar18 = 0;
  if ((param_4 & 1) == 0) {
    uVar18 = (uint)lVar21;
  }
  if ((int)uVar18 < 0) {
    return;
  }
  uVar24 = (ulong)uVar18;
  iVar16 = 0xffff;
  if (*(char *)(param_1 + 0x30) != '\0') {
    iVar16 = 0xff;
  }
  do {
    piVar14 = (int *)(*plVar13 + uVar24 * 0x10);
    iVar22 = *piVar14;
    this_01 = *(RegExpCharacterClass **)(piVar14 + 2);
    lVar21 = (long)iVar22;
    uVar18 = iVar22 + local_80 + *param_5;
    if (piVar14[1] == 0) {
      bVar5 = (param_3 | 1) == 3;
      if (((byte)this_01[0x18] & 2) != 0) {
        bVar5 = param_3 == 1;
      }
      if (!bVar5) {
        uVar26 = 0;
        if ((param_4 & 1) == 0) {
          uVar26 = *(int *)(this_01 + 0x10) - 1;
        }
        if (-1 < (int)uVar26) {
          lVar25 = *(long *)(this_01 + 8);
          uVar8 = (ulong)uVar26;
          pcVar27 = (char *)((long)param_5 + (lVar21 + uVar8) * 6 + 0x38);
          if (uVar26 == 0 && (int)uVar24 == 0) goto LAB_0153f368;
          do {
            uVar10 = uVar8;
            if (((long)param_5[0xc] <= (long)(lVar21 + uVar8)) || (*pcVar27 == '\0')) {
              uVar2 = *(ushort *)(lVar25 + uVar8 * 2);
              uVar4 = uVar2;
              if ((((byte)this_01[0x18] >> 1 & 1) != 0) &&
                 (((uVar4 = 0xb5, uVar2 != 0x3bc && (uVar2 != 0x39c)) &&
                  (uVar4 = uVar2, uVar2 == 0x178)))) {
                uVar4 = 0xff;
              }
              if (param_3 < 4) {
                pcVar15 = FUN_0153f8d4;
                switch(param_3) {
                case 0:
                  if (0xff < uVar4) {
                    (**(code **)(*plVar19 + 0xe0))(plVar19,puVar23);
                    return;
                  }
                  goto LAB_0153f350;
                case 1:
                  pcVar15 = FUN_0153faa0;
                  break;
                case 3:
                  pcVar15 = FUN_0153fb18;
                }
                if ((long)(int)*param_7 < (long)((long)(int)uVar18 + uVar8)) {
                  bVar5 = true;
                }
                else {
                  bVar5 = this[0x48] != (TextNode)0x0;
                }
                uVar6 = (*pcVar15)(lVar20,param_1,uVar4,puVar23,uVar18 + uVar8 & 0xffffffff,bVar5,
                                   param_4 & 1);
                if (((uVar6 & 1) != 0) && ((long)(int)*param_7 < (long)((long)(int)uVar18 + uVar8)))
                {
                  *param_7 = (uint)(uVar18 + uVar8);
                }
              }
            }
LAB_0153f350:
            do {
              uVar8 = uVar10 - 1;
              pcVar27 = pcVar27 + -6;
              if ((long)uVar10 < 1) goto LAB_0153f804;
              if ((int)uVar8 != 0 || (int)uVar24 != 0) break;
LAB_0153f368:
              uVar10 = uVar8;
            } while ((param_6 & 1) != 0);
          } while( true );
        }
      }
    }
    else if (((param_3 == 4) && ((uVar24 == 0 & param_6) == 0)) &&
            ((param_5[0xc] <= iVar22 || (*(char *)((long)param_5 + lVar21 * 6 + 0x38) == '\0')))) {
      if ((int)*param_7 < (int)uVar18) {
        uVar26 = 1;
      }
      else {
        uVar26 = (uint)(this[0x48] != (TextNode)0x0);
      }
      this_00 = *(Zone **)(this + 0x30);
      pZVar7 = (ZoneList *)CharacterSet::ranges((CharacterSet *)(this_01 + 8),this_00);
      CharacterRange::Canonicalize(pZVar7);
      uVar12 = *(uint *)(pZVar7 + 0xc);
      do {
        uVar17 = uVar12;
        uVar12 = uVar17 - 1;
        if ((int)uVar12 < 0) goto LAB_0153f588;
        piVar14 = *(int **)pZVar7;
        iVar22 = piVar14[(ulong)uVar12 * 2];
      } while (iVar16 < iVar22);
      uVar12 = uVar12 - (iVar16 < iVar22);
      if ((int)uVar12 < 0) {
LAB_0153f588:
        if (((byte)this_01[0x1c] & 1) == 0) {
          (**(code **)(*plVar19 + 0xe0))(plVar19,puVar23);
        }
LAB_0153f5a4:
        if (uVar26 != 0) {
          (**(code **)(*plVar19 + 0xc0))(plVar19,(Label *)(ulong)uVar18,puVar23);
        }
      }
      else {
        if (((uVar12 == 0) && (*piVar14 == 0)) && (iVar16 <= piVar14[1])) {
          if (((byte)this_01[0x1c] & 1) == 0) goto LAB_0153f5a4;
          pcVar15 = *(code **)(*plVar19 + 0xe0);
          puVar11 = puVar23;
        }
        else {
          if ((param_4 & 1) == 0) {
            RegExpMacroAssembler::LoadCurrentCharacter
                      ((int)plVar19,(Label *)(ulong)uVar18,SUB81(puVar23,0),uVar26,1);
          }
          uVar8 = RegExpCharacterClass::is_standard(this_01,this_00);
          if (((uVar8 & 1) != 0) &&
             (uVar8 = (**(code **)(*plVar19 + 200))(plVar19,*(undefined2 *)(this_01 + 0x10),puVar23)
             , (uVar8 & 1) != 0)) goto LAB_0153f7dc;
          plVar13 = *(long **)(this_00 + 0x10);
          if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar13) < 0x10) {
            plVar13 = (long *)Zone::NewExpand(this_00,0x10);
            if (0 < (int)uVar12) goto LAB_0153f55c;
LAB_0153f5f8:
            lVar21 = 0;
          }
          else {
            *(long **)(this_00 + 0x10) = plVar13 + 2;
            if ((int)uVar12 < 1) goto LAB_0153f5f8;
LAB_0153f55c:
            lVar21 = *(long *)(this_00 + 0x10);
            uVar8 = (ulong)uVar12 * 4 + 7 & 0x7fffffff8;
            if ((ulong)(*(long *)(this_00 + 0x18) - lVar21) < uVar8) {
              lVar21 = Zone::NewExpand(this_00,uVar8);
            }
            else {
              *(ulong *)(this_00 + 0x10) = lVar21 + uVar8;
            }
          }
          *(uint *)(plVar13 + 1) = uVar12;
          *(undefined4 *)((long)plVar13 + 0xc) = 0;
          *plVar13 = lVar21;
          lVar21 = 0;
          bVar5 = ((byte)this_01[0x1c] & 1) == 0;
          uVar8 = (ulong)(uVar17 - (iVar16 < iVar22));
          do {
            lVar25 = *(long *)pZVar7;
            iVar22 = *(int *)(lVar25 + lVar21);
            if (iVar22 == 0) {
              bVar5 = (bool)(bVar5 ^ 1);
            }
            else {
              uVar26 = *(uint *)(plVar13 + 1);
              iVar1 = *(int *)((long)plVar13 + 0xc);
              if (iVar1 < (int)uVar26) {
                *(int *)((long)plVar13 + 0xc) = iVar1 + 1;
                *(int *)(*plVar13 + (long)iVar1 * 4) = iVar22;
              }
              else {
                pvVar9 = *(void **)(this_00 + 0x10);
                uVar12 = uVar26 << 1 | 1;
                uVar10 = (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                         (ulong)uVar12 << 2) + 7 & 0xfffffffffffffff8;
                if ((ulong)(*(long *)(this_00 + 0x18) - (long)pvVar9) < uVar10) {
                  pvVar9 = (void *)Zone::NewExpand(this_00,uVar10);
                }
                else {
                  *(ulong *)(this_00 + 0x10) = (long)pvVar9 + uVar10;
                }
                uVar26 = *(uint *)((long)plVar13 + 0xc);
                if (0 < (int)uVar26) {
                  MemCopy(pvVar9,(void *)*plVar13,(ulong)uVar26 << 2);
                  uVar26 = *(uint *)((long)plVar13 + 0xc);
                }
                *(uint *)(plVar13 + 1) = uVar12;
                *(uint *)((long)plVar13 + 0xc) = uVar26 + 1;
                *plVar13 = (long)pvVar9;
                *(int *)((long)pvVar9 + (long)(int)uVar26 * 4) = iVar22;
              }
            }
            uVar26 = *(uint *)(plVar13 + 1);
            uVar12 = *(uint *)((long)plVar13 + 0xc);
            iVar22 = *(int *)(lVar25 + lVar21 + 4);
            if ((int)uVar12 < (int)uVar26) {
              pvVar9 = (void *)*plVar13;
            }
            else {
              pvVar9 = *(void **)(this_00 + 0x10);
              uVar17 = uVar26 << 1 | 1;
              uVar10 = (-(ulong)((uVar26 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                       (ulong)uVar17 << 2) + 7 & 0xfffffffffffffff8;
              if ((ulong)(*(long *)(this_00 + 0x18) - (long)pvVar9) < uVar10) {
                pvVar9 = (void *)Zone::NewExpand(this_00,uVar10);
              }
              else {
                *(ulong *)(this_00 + 0x10) = (long)pvVar9 + uVar10;
              }
              uVar12 = *(uint *)((long)plVar13 + 0xc);
              if (0 < (int)uVar12) {
                MemCopy(pvVar9,(void *)*plVar13,(ulong)uVar12 << 2);
                uVar12 = *(uint *)((long)plVar13 + 0xc);
              }
              *plVar13 = (long)pvVar9;
              *(uint *)(plVar13 + 1) = uVar17;
            }
            uVar8 = uVar8 - 1;
            lVar21 = lVar21 + 8;
            *(uint *)((long)plVar13 + 0xc) = uVar12 + 1;
            *(int *)((long)pvVar9 + (long)(int)uVar12 * 4) = iVar22 + 1;
          } while (uVar8 != 0);
          iVar1 = *(int *)((long)plVar13 + 0xc) + -1;
          iVar22 = *(int *)((long)plVar13 + 0xc) + -2;
          if (*(int *)(*plVar13 + (long)iVar1 * 4) <= iVar16) {
            iVar22 = iVar1;
          }
          puVar11 = puVar23;
          puVar3 = &local_68;
          if (!bVar5) {
            puVar11 = &local_68;
            puVar3 = puVar23;
          }
          local_68 = 0;
          FUN_015438ec(plVar19,plVar13,0,iVar22,0,iVar16,&local_68,puVar3,puVar11);
          pcVar15 = *(code **)(*plVar19 + 0x40);
          puVar11 = &local_68;
        }
        (*pcVar15)(plVar19,puVar11);
      }
LAB_0153f7dc:
      if ((int)*param_7 < (int)uVar18) {
        *param_7 = uVar18;
      }
    }
LAB_0153f804:
    if ((long)uVar24 < 1) {
      return;
    }
    plVar13 = *(long **)(this + 0x40);
    uVar24 = uVar24 - 1;
  } while( true );
}

