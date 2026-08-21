
/* dragonBones::JSONDataParser::_parseZOrderFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

int dragonBones::JSONDataParser::_parseZOrderFrame(GenericValue *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int *__s2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined *__s1;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  int *piVar20;
  int *piVar21;
  ulong uVar22;
  int *piVar23;
  char *pcVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  puVar9 = (uint *)(ulong)param_2;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 00d96c20 to 00e96cdf has its CatchHandler @ 00d96dcc */
  iVar7 = (**(code **)(*(long *)param_1 + 0x90))(param_1,puVar9,param_3);
  __s1 = DataParser::Z_ORDER;
  pcVar24 = DataParser::Z_ORDER + -1;
  pcVar12 = pcVar24;
  do {
    pcVar12 = pcVar12 + 1;
  } while (*pcVar12 != '\0');
  piVar20 = *(int **)(puVar9 + 2);
  uVar3 = *puVar9;
  uVar25 = (ulong)uVar3;
  piVar23 = piVar20 + uVar25 * 0xc;
  piVar21 = piVar20;
  if (uVar3 == 0) {
LAB_00d96cd8:
    if (piVar23 != piVar21) {
      do {
        pcVar24 = pcVar24 + 1;
      } while (*pcVar24 != '\0');
      if (uVar3 == 0) {
LAB_00d96d64:
        if (piVar20 != piVar23) {
          if (piVar20[6] == 0) goto LAB_00d96dbc;
                    /* catch() { ... } // from try @ 00d969f8 with catch @ 00d96d7c */
                    /* catch() { ... } // from try @ 00d9683c with catch @ 00d96d80 */
          local_78 = (void *)0x0;
          uStack_70 = 0;
          local_88 = 0;
          local_80 = (void *)0x0;
          local_98 = (void *)0x0;
          local_90 = (void *)0x0;
          lVar19 = *(long *)(*(long *)(param_1 + 0x30) + 0x80) -
                   *(long *)(*(long *)(param_1 + 0x30) + 0x78);
                    /* catch() { ... } // from try @ 00d9682c with catch @ 00d96d90 */
          uVar26 = lVar19 >> 3;
          uVar25 = uVar26 - ((uint)piVar20[6] >> 1);
          if (uVar25 != 0) {
                    /* catch() { ... } // from try @ 00d96820 with catch @ 00d96da0 */
            std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
                      ((vector<int,std::__ndk1::allocator<int>> *)&local_80,uVar25);
          }
          uVar25 = (long)local_90 - (long)local_98 >> 2;
          if (uVar26 < uVar25 || uVar26 - uVar25 == 0) {
            if (uVar26 < uVar25) {
              local_90 = (void *)((long)local_98 + uVar26 * 4);
            }
          }
          else {
            std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
                      ((vector<int,std::__ndk1::allocator<int>> *)&local_98,uVar26 - uVar25);
          }
          if ((long)local_78 - (long)local_80 != 0) {
            uVar25 = (long)local_78 - (long)local_80 >> 2;
            if (uVar25 < 2) {
              uVar25 = 1;
            }
            memset(local_80,0,uVar25 << 2);
          }
          if (lVar19 != 0) {
            uVar25 = uVar26;
            if (uVar26 < 2) {
              uVar25 = 1;
            }
            memset(local_98,0xff,uVar25 << 2);
          }
          uVar3 = piVar20[6];
          if (uVar3 == 0) {
            uVar10 = 0;
            uVar27 = 0;
          }
          else {
            uVar27 = 0;
            uVar25 = 0;
            uVar10 = 0;
            do {
              uVar15 = *(uint *)(*(long *)(piVar20 + 8) + uVar25 * 0x18);
              iVar8 = *(int *)(*(long *)(piVar20 + 8) + (uVar25 | 1) * 0x18);
              uVar5 = uVar15 - uVar27;
              uVar17 = uVar27;
              if (uVar5 != 0) {
                uVar18 = uVar27;
                uVar11 = uVar10;
                uVar17 = uVar15;
                if ((7 < uVar5) && (uVar15 + ~uVar27 <= ~uVar10)) {
                  uVar2 = uVar5 & 0xfffffff8;
                  uVar18 = uVar27 + uVar2;
                  uVar11 = uVar10 + uVar2;
                  iVar28 = uVar27 + 1;
                  iVar29 = uVar27 + 2;
                  iVar30 = uVar27 + 3;
                  uVar4 = uVar2;
                  do {
                    puVar1 = (undefined8 *)((long)local_80 + (ulong)uVar10 * 4);
                    uVar4 = uVar4 - 8;
                    puVar1[1] = CONCAT44(iVar30,iVar29);
                    *puVar1 = CONCAT44(iVar28,uVar27);
                    puVar1[3] = CONCAT44(iVar30 + 4,iVar29 + 4);
                    puVar1[2] = CONCAT44(iVar28 + 4,uVar27 + 4);
                    uVar27 = uVar27 + 8;
                    iVar28 = iVar28 + 8;
                    iVar29 = iVar29 + 8;
                    iVar30 = iVar30 + 8;
                    uVar10 = uVar10 + 8;
                  } while (uVar4 != 0);
                  uVar10 = uVar11;
                  if (uVar5 == uVar2) goto LAB_00d96ed4;
                }
                do {
                  *(uint *)((long)local_80 + (ulong)uVar11 * 4) = uVar18;
                  uVar18 = uVar18 + 1;
                  uVar10 = uVar11 + 1;
                  uVar11 = uVar11 + 1;
                } while (uVar15 != uVar18);
              }
LAB_00d96ed4:
              uVar27 = uVar17 + 1;
              uVar25 = uVar25 + 2;
              *(uint *)((long)local_98 + (ulong)(uVar17 + iVar8) * 4) = uVar17;
            } while (uVar25 < uVar3);
          }
          if (uVar27 < uVar26) {
            uVar25 = (ulong)(uVar27 + 1);
            iVar8 = (int)uVar26;
            if (uVar26 <= uVar25) {
              iVar8 = uVar27 + 1;
            }
            uVar3 = iVar8 - uVar27;
            if (uVar3 < 8) {
LAB_00d96fc0:
              uVar22 = (ulong)uVar10;
              uVar15 = uVar27;
            }
            else {
              uVar22 = uVar26;
              if (uVar26 <= uVar25) {
                uVar22 = uVar25;
              }
              uVar15 = (uint)(uVar22 - uVar25);
              if (((-uVar27 - 2 < uVar15) || (uVar22 - uVar25 >> 0x20 != 0)) || (~uVar10 < uVar15))
              goto LAB_00d96fc0;
              uVar5 = uVar3 & 0xfffffff8;
              uVar15 = uVar27 + uVar5;
              uVar22 = (ulong)(uVar10 + uVar5);
              iVar8 = uVar27 + 1;
              iVar28 = uVar27 + 2;
              iVar29 = uVar27 + 3;
              uVar17 = uVar5;
              do {
                puVar1 = (undefined8 *)((long)local_80 + (ulong)uVar10 * 4);
                uVar17 = uVar17 - 8;
                puVar1[1] = CONCAT44(iVar29,iVar28);
                *puVar1 = CONCAT44(iVar8,uVar27);
                puVar1[3] = CONCAT44(iVar29 + 4,iVar28 + 4);
                puVar1[2] = CONCAT44(iVar8 + 4,uVar27 + 4);
                uVar27 = uVar27 + 8;
                iVar8 = iVar8 + 8;
                iVar28 = iVar28 + 8;
                iVar29 = iVar29 + 8;
                uVar10 = uVar10 + 8;
              } while (uVar17 != 0);
              uVar25 = uVar22;
              if (uVar3 == uVar5) goto LAB_00d96fec;
            }
            do {
              uVar3 = uVar15 + 1;
              uVar25 = (ulong)((int)uVar22 + 1);
              *(uint *)((long)local_80 + uVar22 * 4) = uVar15;
              uVar22 = uVar25;
              uVar15 = uVar3;
            } while (uVar3 < uVar26);
          }
          else {
            uVar25 = (ulong)uVar10;
          }
LAB_00d96fec:
          lVar13 = *(long *)(param_1 + 0x168);
          uVar14 = *(long *)(param_1 + 0x170) - lVar13 >> 1;
          uVar22 = uVar26 + 1 + uVar14;
          if (uVar14 < uVar22) {
            std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                      ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x168),uVar26 + 1);
            lVar13 = *(long *)(param_1 + 0x168);
          }
          else if (uVar22 < uVar14) {
            *(ulong *)(param_1 + 0x170) = lVar13 + uVar22 * 2;
          }
          *(short *)(lVar13 + (ulong)(iVar7 + 1U) * 2) = (short)uVar26;
          if ((int)uVar26 == 0) {
            if (local_98 != (void *)0x0) goto LAB_00d97088;
          }
          else {
            lVar19 = lVar19 * 0x20000000 >> 0x20;
            do {
              iVar8 = *(int *)((long)local_98 + lVar19 * 4 + -4);
              lVar16 = lVar19 + -1;
              if (iVar8 == -1) {
                uVar25 = (ulong)((int)uVar25 - 1);
                iVar8 = *(int *)((long)local_80 + uVar25 * 4);
              }
              *(short *)(lVar13 + (ulong)(iVar7 + 1U + (int)lVar19) * 2) = (short)iVar8;
              lVar19 = lVar16;
            } while (lVar16 != 0);
LAB_00d97088:
            local_90 = local_98;
            operator_delete(local_98);
          }
          if (local_80 != (void *)0x0) {
            local_78 = local_80;
            operator_delete(local_80);
          }
          goto LAB_00d96dfc;
        }
      }
      else {
        lVar19 = uVar25 * 0x30;
        do {
          iVar8 = *piVar20;
          if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
            iVar8 = 0x15 - *(char *)((long)piVar20 + 0x15);
          }
          if (iVar8 == (int)((long)pcVar24 - (long)__s1)) {
            piVar21 = *(int **)(piVar20 + 2);
            if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
              piVar21 = piVar20;
            }
            if ((piVar21 == (int *)__s1) ||
               (iVar8 = memcmp(__s1,piVar21,(long)pcVar24 - (long)__s1 & 0xffffffff), iVar8 == 0))
            goto LAB_00d96d64;
          }
          lVar19 = lVar19 + -0x30;
          piVar20 = piVar20 + 0xc;
        } while (lVar19 != 0);
      }
                    /* catch() { ... } // from try @ 00d96940 with catch @ 00d96db0 */
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
  }
  else {
    uVar26 = (long)pcVar12 - (long)DataParser::Z_ORDER;
    lVar19 = uVar25 * 0x30;
    do {
      iVar8 = *piVar21;
      if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
        iVar8 = 0x15 - *(char *)((long)piVar21 + 0x15);
      }
      if (iVar8 == (int)uVar26) {
        __s2 = *(int **)(piVar21 + 2);
        if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
          __s2 = piVar21;
        }
        if ((__s2 == (int *)__s1) || (iVar8 = memcmp(__s1,__s2,uVar26 & 0xffffffff), iVar8 == 0))
        goto LAB_00d96cd8;
      }
      lVar19 = lVar19 + -0x30;
      piVar21 = piVar21 + 0xc;
    } while (lVar19 != 0);
  }
LAB_00d96dbc:
                    /* catch() { ... } // from try @ 00d96a9c with catch @ 00d96dc0 */
  lVar19 = *(long *)(param_1 + 0x168);
                    /* catch() { ... } // from try @ 00d96a90 with catch @ 00d96dc8 */
                    /* catch() { ... } // from try @ 00d96c20 with catch @ 00d96dcc */
  if (*(long *)(param_1 + 0x170) - lVar19 == -2) {
                    /* catch() { ... } // from try @ 00d96ad0 with catch @ 00d96dd0 */
    *(long *)(param_1 + 0x170) = lVar19;
                    /* catch() { ... } // from try @ 00d96b80 with catch @ 00d96dd4 */
  }
  else {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
              ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x168),1);
    lVar19 = *(long *)(param_1 + 0x168);
  }
                    /* catch() { ... } // from try @ 00d96a48 with catch @ 00d96df4 */
                    /* catch() { ... } // from try @ 00d968ac with catch @ 00d96df8 */
  *(undefined2 *)(lVar19 + (ulong)(iVar7 + 1) * 2) = 0;
LAB_00d96dfc:
                    /* catch() { ... } // from try @ 00d96898 with catch @ 00d96e08 */
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00d96afc with catch @ 00d96e18 */
                    /* catch() { ... } // from try @ 00d96b1c with catch @ 00d96e1c */
  return iVar7;
}

