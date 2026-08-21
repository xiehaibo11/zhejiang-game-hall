
/* dragonBones::JSONDataParser::_parseZOrderFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

int dragonBones::JSONDataParser::_parseZOrderFrame(GenericValue *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int *__s2;
  uint uVar4;
  long lVar5;
  undefined *__s1;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  char *pcVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  puVar8 = (uint *)(ulong)param_2;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar6 = (**(code **)(*(long *)param_1 + 0x90))(param_1,puVar8,param_3);
  __s1 = DataParser::Z_ORDER;
  pcVar22 = DataParser::Z_ORDER + -1;
  pcVar11 = pcVar22;
  do {
    pcVar11 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  piVar18 = *(int **)(puVar8 + 2);
  uVar10 = *puVar8;
  uVar23 = (ulong)uVar10;
  piVar21 = piVar18 + uVar23 * 0xc;
  piVar20 = piVar18;
  if (uVar10 != 0) {
    uVar24 = (long)pcVar11 - (long)DataParser::Z_ORDER;
    lVar17 = uVar23 * 0x30;
    piVar19 = piVar18;
    do {
      iVar7 = *piVar19;
      if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
        iVar7 = 0x15 - *(char *)((long)piVar19 + 0x15);
      }
      if (iVar7 == (int)uVar24) {
        __s2 = *(int **)(piVar19 + 2);
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          __s2 = piVar19;
        }
        piVar20 = piVar19;
        if ((__s2 == (int *)__s1) || (iVar7 = memcmp(__s1,__s2,uVar24 & 0xffffffff), iVar7 == 0))
        break;
      }
      lVar17 = lVar17 + -0x30;
      piVar19 = piVar19 + 0xc;
      piVar20 = piVar21;
    } while (lVar17 != 0);
  }
  if (piVar21 != piVar20) {
    do {
      pcVar22 = pcVar22 + 1;
    } while (*pcVar22 != '\0');
    if (uVar10 == 0) {
LAB_00d488b4:
      if (piVar18 != piVar21) {
        if (piVar18[6] == 0) goto LAB_00d48910;
        local_80 = (void *)0x0;
        local_78 = (void *)0x0;
        local_70 = 0;
        local_98 = (void *)0x0;
        local_90 = (void *)0x0;
        lVar17 = *(long *)(*(long *)(param_1 + 0x30) + 0x80) -
                 *(long *)(*(long *)(param_1 + 0x30) + 0x78);
        uVar24 = lVar17 >> 3;
        uVar23 = uVar24 - ((uint)piVar18[6] >> 1);
        local_88 = 0;
        if (uVar23 != 0) {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
                    ((vector<int,std::__ndk1::allocator<int>> *)&local_80,uVar23);
        }
        uVar23 = (long)local_90 - (long)local_98 >> 2;
        if (uVar24 < uVar23 || uVar24 - uVar23 == 0) {
          if (uVar24 < uVar23) {
            local_90 = (void *)((long)local_98 + uVar24 * 4);
          }
        }
        else {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
                    ((vector<int,std::__ndk1::allocator<int>> *)&local_98,uVar24 - uVar23);
        }
        if ((long)local_78 - (long)local_80 != 0) {
          uVar23 = (long)local_78 - (long)local_80 >> 2;
          if (uVar23 < 2) {
            uVar23 = 1;
          }
          memset(local_80,0,uVar23 << 2);
        }
        if (lVar17 != 0) {
          uVar23 = uVar24;
          if (uVar24 < 2) {
            uVar23 = 1;
          }
          memset(local_98,0xff,uVar23 << 2);
        }
        uVar10 = piVar18[6];
        if (uVar10 == 0) {
          uVar9 = 0;
          uVar10 = 0;
          uVar25 = 0;
          if (uVar24 == 0) goto LAB_00d48b54;
LAB_00d48b00:
          uVar23 = (ulong)(uVar25 + 1);
          iVar7 = (int)uVar24;
          if (uVar24 <= uVar23) {
            iVar7 = uVar25 + 1;
          }
          uVar10 = iVar7 - uVar25;
          if (uVar10 < 8) {
LAB_00d48b1c:
            uVar15 = (ulong)uVar9;
            uVar14 = uVar25;
          }
          else {
            uVar15 = uVar24;
            if (uVar24 <= uVar23) {
              uVar15 = uVar23;
            }
            uVar14 = (uint)(uVar15 - uVar23);
            if (((-uVar25 - 2 < uVar14) || (uVar15 - uVar23 >> 0x20 != 0)) || (~uVar9 < uVar14))
            goto LAB_00d48b1c;
            uVar4 = uVar10 & 0xfffffff8;
            uVar14 = uVar25 + uVar4;
            uVar15 = (ulong)(uVar9 + uVar4);
            iVar7 = uVar25 + 1;
            iVar26 = uVar25 + 2;
            iVar27 = uVar25 + 3;
            uVar16 = uVar4;
            do {
              puVar1 = (undefined8 *)((long)local_80 + (ulong)uVar9 * 4);
              uVar16 = uVar16 - 8;
              puVar1[1] = CONCAT44(iVar27,iVar26);
              *puVar1 = CONCAT44(iVar7,uVar25);
              puVar1[3] = CONCAT44(iVar27 + 4,iVar26 + 4);
              puVar1[2] = CONCAT44(iVar7 + 4,uVar25 + 4);
              uVar25 = uVar25 + 8;
              iVar7 = iVar7 + 8;
              iVar26 = iVar26 + 8;
              iVar27 = iVar27 + 8;
              uVar9 = uVar9 + 8;
            } while (uVar16 != 0);
            uVar23 = uVar15;
            if (uVar10 == uVar4) goto LAB_00d48b58;
          }
          do {
            uVar10 = uVar14 + 1;
            uVar23 = (ulong)((int)uVar15 + 1);
            *(uint *)((long)local_80 + uVar15 * 4) = uVar14;
            uVar15 = uVar23;
            uVar14 = uVar10;
          } while (uVar10 < uVar24);
        }
        else {
          uVar25 = 0;
          uVar23 = 0;
          uVar9 = 0;
          do {
            uVar14 = *(uint *)(*(long *)(piVar18 + 8) + uVar23 * 0x18);
            iVar7 = *(int *)(*(long *)(piVar18 + 8) + (uVar23 | 1) * 0x18);
            uVar4 = uVar14 - uVar25;
            if (uVar4 != 0) {
              iVar26 = uVar9 + uVar14;
              uVar16 = uVar25;
              if ((uVar4 < 8) || (~uVar9 < uVar14 + ~uVar25)) {
LAB_00d48aac:
                do {
                  uVar4 = uVar16 + 1;
                  *(uint *)((long)local_80 + (ulong)uVar9 * 4) = uVar16;
                  uVar16 = uVar4;
                  uVar9 = uVar9 + 1;
                } while (uVar14 != uVar4);
              }
              else {
                uVar3 = uVar4 & 0xfffffff8;
                uVar2 = uVar9 + uVar3;
                iVar27 = uVar25 + 1;
                iVar29 = uVar25 + 2;
                iVar30 = uVar25 + 3;
                uVar28 = uVar25;
                uVar16 = uVar3;
                do {
                  puVar1 = (undefined8 *)((long)local_80 + (ulong)uVar9 * 4);
                  uVar16 = uVar16 - 8;
                  puVar1[1] = CONCAT44(iVar30,iVar29);
                  *puVar1 = CONCAT44(iVar27,uVar28);
                  puVar1[3] = CONCAT44(iVar30 + 4,iVar29 + 4);
                  puVar1[2] = CONCAT44(iVar27 + 4,uVar28 + 4);
                  uVar28 = uVar28 + 8;
                  iVar27 = iVar27 + 8;
                  iVar29 = iVar29 + 8;
                  iVar30 = iVar30 + 8;
                  uVar9 = uVar9 + 8;
                } while (uVar16 != 0);
                uVar16 = uVar25 + uVar3;
                uVar9 = uVar2;
                if (uVar4 != uVar3) goto LAB_00d48aac;
              }
              uVar9 = iVar26 - uVar25;
              uVar25 = uVar14;
            }
            uVar15 = (ulong)(uVar25 + iVar7);
            if (uVar15 < (ulong)((long)local_90 - (long)local_98 >> 2)) {
              *(uint *)((long)local_98 + uVar15 * 4) = uVar25;
            }
            uVar23 = uVar23 + 2;
            uVar25 = uVar25 + 1;
          } while (uVar23 < uVar10);
          uVar10 = uVar9;
          if (uVar25 < uVar24) goto LAB_00d48b00;
LAB_00d48b54:
          uVar23 = (ulong)uVar10;
        }
LAB_00d48b58:
        lVar12 = *(long *)(param_1 + 0x168);
        uVar13 = *(long *)(param_1 + 0x170) - lVar12 >> 1;
        uVar15 = uVar24 + 1 + uVar13;
        if (uVar13 < uVar15) {
          std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                    ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x168),uVar24 + 1);
          lVar12 = *(long *)(param_1 + 0x168);
        }
        else if (uVar15 < uVar13) {
          *(ulong *)(param_1 + 0x170) = lVar12 + uVar15 * 2;
        }
        *(short *)(lVar12 + (ulong)(iVar6 + 1) * 2) = (short)uVar24;
        if ((int)uVar24 == 0) {
          if (local_98 != (void *)0x0) goto LAB_00d48c04;
        }
        else {
          lVar17 = (lVar17 * 0x20000000 >> 0x20) + -1;
          do {
            iVar7 = *(int *)((long)local_98 + lVar17 * 4);
            if (iVar7 == -1) {
              if ((int)uVar23 == 0) {
                iVar7 = 0;
              }
              else {
                uVar23 = (ulong)((int)uVar23 - 1);
                iVar7 = *(int *)((long)local_80 + uVar23 * 4);
              }
            }
            iVar26 = (int)lVar17;
            lVar17 = lVar17 + -1;
            *(short *)(lVar12 + (ulong)(iVar6 + iVar26 + 2) * 2) = (short)iVar7;
          } while (lVar17 != -1);
LAB_00d48c04:
          local_90 = local_98;
          operator_delete(local_98);
        }
        if (local_80 != (void *)0x0) {
          local_78 = local_80;
          operator_delete(local_80);
        }
        goto LAB_00d48950;
      }
    }
    else {
      lVar17 = uVar23 * 0x30;
      do {
        iVar7 = *piVar18;
        if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
          iVar7 = 0x15 - *(char *)((long)piVar18 + 0x15);
        }
        if (iVar7 == (int)((long)pcVar22 - (long)__s1)) {
          piVar20 = *(int **)(piVar18 + 2);
          if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
            piVar20 = piVar18;
          }
          if ((piVar20 == (int *)__s1) ||
             (iVar7 = memcmp(__s1,piVar20,(long)pcVar22 - (long)__s1 & 0xffffffff), iVar7 == 0))
          goto LAB_00d488b4;
        }
        lVar17 = lVar17 + -0x30;
        piVar18 = piVar18 + 0xc;
      } while (lVar17 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d48910:
  lVar17 = *(long *)(param_1 + 0x168);
  if (*(long *)(param_1 + 0x170) - lVar17 == -2) {
    *(long *)(param_1 + 0x170) = lVar17;
  }
  else {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
              ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x168),1);
    lVar17 = *(long *)(param_1 + 0x168);
  }
  *(undefined2 *)(lVar17 + (ulong)(iVar6 + 1) * 2) = 0;
LAB_00d48950:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

