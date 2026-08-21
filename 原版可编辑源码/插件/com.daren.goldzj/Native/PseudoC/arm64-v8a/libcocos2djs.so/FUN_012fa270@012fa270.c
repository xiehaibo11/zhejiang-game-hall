
void FUN_012fa270(long *param_1,undefined8 param_2,byte param_3)

{
  char cVar1;
  undefined8 *puVar2;
  long *plVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  __tree_node_base *p_Var12;
  long *plVar13;
  uint *puVar14;
  long *plVar15;
  Zone *pZVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  uint *puVar25;
  long *plVar26;
  long *plVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  long *plVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 local_168 [32];
  undefined8 local_68;
  ulong uVar7;
  
  param_3 = param_3 & 1;
  uVar5 = (uint)((ulong)param_2 >> 0x20);
  local_68 = param_2;
  uVar7 = v8::base::hash_value(uVar5);
  uVar7 = v8::base::hash_combine(0,uVar7);
  uVar22 = (uint)param_2;
  uVar8 = v8::base::hash_value(uVar22);
  uVar6 = v8::base::hash_combine(uVar7,uVar8);
  puVar25 = (uint *)*param_1;
  uVar7 = 0;
joined_r0x012fa2dc:
  if (puVar25 == (uint *)0x0) goto LAB_012fa45c;
  uVar28 = (uint)uVar7;
  if (puVar25[4] != uVar6) {
    cVar1 = (char)puVar25[3];
    uVar18 = puVar25[4] ^ uVar6;
    if (-1 < (int)(uVar18 << (ulong)(uVar28 & 0x1f))) {
      uVar7 = (ulong)(int)uVar28;
      if ((long)cVar1 <= (long)uVar7) goto LAB_012fa334;
      do {
        uVar24 = *(undefined8 *)(puVar25 + uVar7 * 2 + 8);
        uVar8 = uVar7;
        while( true ) {
          uVar7 = uVar8 + 1;
          local_168[uVar8] = uVar24;
          if ((int)(uVar18 << (ulong)((int)uVar8 + 1U & 0x1f)) < 0) goto LAB_012fa33c;
          if ((long)uVar7 < (long)cVar1) break;
LAB_012fa334:
          uVar24 = 0;
          uVar8 = uVar7;
        }
      } while( true );
    }
LAB_012fa33c:
    iVar29 = (int)uVar7;
    local_168[iVar29] = puVar25;
    if (iVar29 < cVar1) goto code_r0x012fa34c;
    uVar7 = (ulong)(iVar29 + 1);
    goto LAB_012fa45c;
  }
  cVar1 = (char)puVar25[3];
  if ((int)cVar1 <= (int)uVar28) goto LAB_012fa3cc;
  lVar30 = (long)(int)cVar1;
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3;
  lVar17 = (long)(int)uVar28;
  memcpy((void *)((long)local_168 + uVar7),(void *)((long)puVar25 + uVar7 + 0x20),lVar30 * 8 - uVar7
        );
  uVar7 = lVar30 - lVar17;
  if (uVar7 < 2) goto LAB_012fa3bc;
  uVar19 = uVar7 & 0xfffffffffffffffe;
  lVar17 = uVar19 + lVar17;
  uVar8 = uVar19;
  do {
    uVar8 = uVar8 - 2;
  } while (uVar8 != 0);
  if (uVar7 != uVar19) {
LAB_012fa3bc:
    lVar30 = lVar30 - lVar17;
    do {
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
  }
  uVar7 = (ulong)(uint)(int)cVar1;
LAB_012fa3cc:
  uVar28 = (uint)uVar7;
  if (*(long *)(puVar25 + 6) != 0) {
    plVar31 = (long *)(*(long *)(puVar25 + 6) + 8);
    plVar27 = (long *)*plVar31;
    plVar13 = plVar31;
    if (plVar27 != (long *)0x0) {
      do {
        while (uVar22 <= *(uint *)((long)plVar27 + 0x1c)) {
          if ((*(uint *)((long)plVar27 + 0x1c) == uVar22) && (*(uint *)(plVar27 + 4) < uVar5)) {
            plVar26 = (long *)plVar27[1];
          }
          else {
            plVar26 = (long *)*plVar27;
            plVar13 = plVar27;
          }
          plVar27 = plVar26;
          if (plVar27 == (long *)0x0) goto LAB_012fa428;
        }
        plVar27 = (long *)plVar27[1];
      } while (plVar27 != (long *)0x0);
LAB_012fa428:
      if (plVar13 != plVar31) {
        uVar18 = (uint)*(undefined8 *)((long)plVar13 + 0x1c);
        if ((uVar18 <= uVar22) &&
           ((uVar22 != uVar18 ||
            ((uint)((ulong)*(undefined8 *)((long)plVar13 + 0x1c) >> 0x20) <= uVar5)))) {
          bVar4 = false;
          puVar14 = (uint *)((long)plVar13 + 0x24);
          goto LAB_012fa468;
        }
      }
    }
LAB_012fa738:
    bVar4 = false;
    puVar14 = (uint *)(param_1 + 1);
    goto LAB_012fa468;
  }
  if ((uVar22 != (uint)*(undefined8 *)puVar25) ||
     (uVar5 != (uint)((ulong)*(undefined8 *)puVar25 >> 0x20))) goto LAB_012fa738;
  bVar4 = false;
  puVar14 = puVar25 + 2;
LAB_012fa468:
  if ((byte)*puVar14 == param_3) {
    return;
  }
  if ((bVar4) || (((*(long *)(puVar25 + 6) == 0 && (*puVar25 == uVar22)) && (puVar25[1] == uVar5))))
  {
    plVar27 = (long *)0x0;
  }
  else {
    pZVar16 = (Zone *)param_1[2];
    plVar27 = *(long **)(pZVar16 + 0x10);
    if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)plVar27) < 0x20) {
      plVar27 = (long *)v8::internal::Zone::NewExpand(pZVar16,0x20);
    }
    else {
      *(long **)(pZVar16 + 0x10) = plVar27 + 4;
    }
    pZVar16 = (Zone *)param_1[2];
    plVar13 = plVar27 + 1;
    *plVar13 = 0;
    *plVar27 = (long)plVar13;
    plVar27[2] = (long)pZVar16;
    plVar27[3] = 0;
    plVar31 = *(long **)(puVar25 + 6);
    if (plVar31 == (long *)0x0) {
      uVar22 = puVar25[2];
      puVar9 = (undefined1 *)FUN_012faa44(plVar27,puVar25);
      *puVar9 = (char)uVar22;
    }
    else if (plVar31 != plVar27) {
      plVar26 = (long *)*plVar31;
      if (plVar26 != plVar31 + 1) {
        do {
          p_Var12 = *(__tree_node_base **)(pZVar16 + 0x10);
          if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)p_Var12) < 0x28) {
            p_Var12 = (__tree_node_base *)v8::internal::Zone::NewExpand(pZVar16,0x28);
          }
          else {
            *(__tree_node_base **)(pZVar16 + 0x10) = p_Var12 + 0x28;
          }
          uVar24 = *(undefined8 *)((long)plVar26 + 0x1c);
          *(undefined4 *)(p_Var12 + 0x24) = *(undefined4 *)((long)plVar26 + 0x24);
          *(undefined8 *)(p_Var12 + 0x1c) = uVar24;
          plVar15 = plVar13;
          plVar20 = plVar13;
          if ((long *)*plVar13 != (long *)0x0) {
            plVar3 = (long *)*plVar13;
            do {
              while( true ) {
                plVar15 = plVar3;
                uVar22 = (uint)*(undefined8 *)((long)plVar15 + 0x1c);
                if ((*(uint *)(p_Var12 + 0x1c) < uVar22) ||
                   ((*(uint *)(p_Var12 + 0x1c) == uVar22 &&
                    (*(uint *)(p_Var12 + 0x20) <
                     (uint)((ulong)*(undefined8 *)((long)plVar15 + 0x1c) >> 0x20))))) break;
                plVar3 = (long *)plVar15[1];
                if ((long *)plVar15[1] == (long *)0x0) {
                  plVar20 = plVar15 + 1;
                  goto LAB_012fa570;
                }
              }
              plVar3 = (long *)*plVar15;
              plVar20 = plVar15;
            } while ((long *)*plVar15 != (long *)0x0);
          }
LAB_012fa570:
          *(undefined8 *)p_Var12 = 0;
          *(undefined8 *)(p_Var12 + 8) = 0;
          *(long **)(p_Var12 + 0x10) = plVar15;
          *plVar20 = (long)p_Var12;
          if (*(long *)*plVar27 != 0) {
            *plVar27 = *(long *)*plVar27;
            p_Var12 = (__tree_node_base *)*plVar20;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)plVar27[1],p_Var12);
          plVar27[3] = plVar27[3] + 1;
          plVar15 = (long *)plVar26[1];
          if ((long *)plVar26[1] == (long *)0x0) {
            plVar15 = plVar26 + 2;
            bVar4 = *(long **)*plVar15 != plVar26;
            plVar26 = (long *)*plVar15;
            if (bVar4) {
              do {
                lVar17 = *plVar15;
                plVar15 = (long *)(lVar17 + 0x10);
                plVar26 = (long *)*plVar15;
              } while (*plVar26 != lVar17);
            }
          }
          else {
            do {
              plVar26 = plVar15;
              plVar15 = (long *)*plVar26;
            } while ((long *)*plVar26 != (long *)0x0);
          }
          if (plVar26 == plVar31 + 1) break;
          pZVar16 = (Zone *)plVar27[2];
        } while( true );
      }
    }
    pbVar10 = (byte *)FUN_012faa44(plVar27,&local_68);
    *pbVar10 = param_3;
  }
  pZVar16 = (Zone *)param_1[2];
  uVar22 = uVar28;
  if ((int)uVar28 < 2) {
    uVar22 = 1;
  }
  puVar11 = *(undefined8 **)(pZVar16 + 0x10);
  uVar7 = (-(ulong)(uVar22 - 1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uVar22 - 1) << 3) + 0x28;
  if ((ulong)(*(long *)(pZVar16 + 0x18) - (long)puVar11) < uVar7) {
    puVar11 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar16,uVar7);
  }
  else {
    *(ulong *)(pZVar16 + 0x10) = (long)puVar11 + uVar7;
  }
  *(byte *)(puVar11 + 1) = param_3;
  *(char *)((long)puVar11 + 0xc) = (char)uVar28;
  *(uint *)(puVar11 + 2) = uVar6;
  *puVar11 = local_68;
  puVar11[3] = plVar27;
  puVar11[4] = 0;
  if (0 < (int)uVar28) {
    uVar7 = (ulong)uVar28;
    if ((uVar28 < 4) || ((puVar11 + 4 < local_168 + uVar7 && (local_168 < puVar11 + uVar7 + 4)))) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar7 & 0xfffffffc;
      puVar21 = local_168 + 2;
      puVar23 = puVar11 + 6;
      uVar19 = uVar8;
      do {
        puVar2 = puVar21 + -1;
        uVar24 = puVar21[-2];
        uVar33 = puVar21[1];
        uVar32 = *puVar21;
        puVar21 = puVar21 + 4;
        uVar19 = uVar19 - 4;
        puVar23[-1] = *puVar2;
        puVar23[-2] = uVar24;
        puVar23[1] = uVar33;
        *puVar23 = uVar32;
        puVar23 = puVar23 + 4;
      } while (uVar19 != 0);
      if (uVar8 == uVar7) goto LAB_012fa6f0;
    }
    lVar17 = uVar7 - uVar8;
    puVar21 = local_168 + uVar8;
    puVar23 = puVar11 + uVar8 + 4;
    do {
      lVar17 = lVar17 + -1;
      *puVar23 = *puVar21;
      puVar21 = puVar21 + 1;
      puVar23 = puVar23 + 1;
    } while (lVar17 != 0);
  }
LAB_012fa6f0:
  *param_1 = (long)puVar11;
  return;
code_r0x012fa34c:
  puVar25 = *(uint **)(puVar25 + (long)iVar29 * 2 + 8);
  uVar7 = (ulong)(iVar29 + 1);
  goto joined_r0x012fa2dc;
LAB_012fa45c:
  uVar28 = (uint)uVar7;
  puVar25 = (uint *)0x0;
  puVar14 = (uint *)(param_1 + 1);
  bVar4 = true;
  goto LAB_012fa468;
}

