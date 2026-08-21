
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::__do_get(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::locale const&, unsigned int, unsigned int&,
   bool&, std::__ndk1::ctype<char> const&, std::__ndk1::unique_ptr<char, void (*)(void*)>&, char*&,
   char*) */

undefined4
std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
__do_get(long *param_1,long *param_2,byte param_3,locale *param_4,uint param_5,uint *param_6,
        undefined1 *param_7,long param_8,long *param_9,long *param_10,byte *param_11)

{
  byte *pbVar1;
  ulong uVar2;
  char *pcVar3;
  void *pvVar4;
  code *pcVar5;
  basic_string bVar6;
  long lVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  void *pvVar14;
  ulong uVar15;
  size_t sVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  char *pcVar20;
  byte *pbVar21;
  char *pcVar22;
  byte *pbVar23;
  char *pcVar24;
  uint *puVar25;
  undefined4 uVar26;
  uint *puVar27;
  byte *pbVar28;
  code *pcVar29;
  uint uVar30;
  ulong uVar31;
  byte *pbVar32;
  byte *pbVar33;
  long *plVar34;
  ulong *local_2d8;
  uint *local_2a0;
  uint local_290;
  int local_28c;
  undefined8 local_288;
  ulong local_280;
  void *local_278;
  ulong local_270;
  ulong local_268;
  char *local_260;
  ulong local_258;
  ulong local_250;
  char *local_248;
  ulong local_240;
  ulong local_238;
  byte *local_230;
  ulong local_228;
  ulong local_220;
  void *local_218;
  byte local_210 [4];
  byte local_20c [4];
  pattern local_208 [3];
  char local_205;
  uint auStack_200 [100];
  long local_70 [2];
  
  lVar7 = tpidr_el0;
  local_70[0] = *(long *)(lVar7 + 0x28);
  local_220 = 0;
  local_218 = (void *)0x0;
  local_230 = (byte *)0x0;
  local_228 = 0;
  local_240 = 0;
  local_238 = 0;
  local_250 = 0;
  local_248 = (char *)0x0;
  local_260 = (char *)0x0;
  local_258 = 0;
  local_270 = 0;
  local_268 = 0;
  local_280 = 0;
  local_278 = (void *)0x0;
  local_288 = 0;
  __money_get<char>::__gather_info
            ((bool)(param_3 & 1),param_4,local_208,(char *)local_20c,(char *)local_210,
             (basic_string *)&local_228,(basic_string *)&local_240,(basic_string *)&local_258,
             (basic_string *)&local_270,&local_28c);
  pcVar20 = (char *)((ulong)&local_270 | 1);
  local_2d8 = (ulong *)0x0;
  pcVar29 = __do_nothing;
  pbVar28 = (byte *)((ulong)&local_240 | 1);
  puVar13 = auStack_200;
  local_2a0 = (uint *)local_70;
  uVar31 = 0;
  puVar27 = auStack_200;
  *param_10 = *param_9;
  plVar34 = (long *)*param_1;
  if (plVar34 != (long *)0x0) goto LAB_011ecfe8;
LAB_011ecff4:
  if (param_2 == (long *)0x0) goto LAB_011ed044;
LAB_011ecff8:
  if ((param_2[3] == param_2[4]) && (iVar11 = (**(code **)(*param_2 + 0x48))(param_2), iVar11 == -1)
     ) goto LAB_011ed044;
  if (plVar34 == (long *)0x0) {
    do {
      puVar19 = local_2d8;
      switch(local_208[uVar31]) {
      case (pattern)0x0:
        if (uVar31 != 3) goto LAB_011ed510;
        goto LAB_011edd64;
      case (pattern)0x1:
        if (uVar31 != 3) {
          plVar34 = (long *)*param_1;
          if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
            bVar10 = (**(code **)(*plVar34 + 0x48))();
          }
          else {
            bVar10 = *(byte *)plVar34[3];
          }
          if ((-1 < (char)bVar10) &&
             ((*(ulong *)(*(long *)(param_8 + 0x10) + (ulong)bVar10 * 8) & 1) != 0)) {
            plVar34 = (long *)*param_1;
            pcVar22 = (char *)plVar34[3];
            if (pcVar22 == (char *)plVar34[4]) {
              cVar9 = (**(code **)(*plVar34 + 0x50))();
            }
            else {
              plVar34[3] = (long)(pcVar22 + 1);
              cVar9 = *pcVar22;
            }
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_288,cVar9);
LAB_011ed510:
            do {
              plVar34 = (long *)*param_1;
              if ((plVar34 == (long *)0x0) || (plVar34[3] != plVar34[4])) {
joined_r0x011ed524:
                if (param_2 == (long *)0x0) goto LAB_011ed574;
LAB_011ed528:
                if ((param_2[3] == param_2[4]) &&
                   (iVar11 = (**(code **)(*param_2 + 0x48))(param_2), iVar11 == -1))
                goto LAB_011ed574;
                if (plVar34 != (long *)0x0) goto switchD_011ed074_default;
              }
              else {
                iVar11 = (**(code **)(*plVar34 + 0x48))(plVar34);
                if (iVar11 == -1) {
                  plVar34 = (long *)0x0;
                  *param_1 = 0;
                  goto joined_r0x011ed524;
                }
                plVar34 = (long *)*param_1;
                if (param_2 != (long *)0x0) goto LAB_011ed528;
LAB_011ed574:
                param_2 = (long *)0x0;
                if (plVar34 == (long *)0x0) goto switchD_011ed074_default;
              }
              plVar34 = (long *)*param_1;
              if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
                bVar10 = (**(code **)(*plVar34 + 0x48))();
              }
              else {
                bVar10 = *(byte *)plVar34[3];
              }
              if (((char)bVar10 < '\0') ||
                 ((*(ulong *)(*(long *)(param_8 + 0x10) + (ulong)bVar10 * 8) & 1) == 0))
              goto switchD_011ed074_default;
              plVar34 = (long *)*param_1;
              pcVar22 = (char *)plVar34[3];
              if (pcVar22 == (char *)plVar34[4]) {
                cVar9 = (**(code **)(*plVar34 + 0x50))();
              }
              else {
                plVar34[3] = (long)(pcVar22 + 1);
                cVar9 = *pcVar22;
              }
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&local_288,cVar9);
            } while( true );
          }
          goto LAB_011edecc;
        }
        goto LAB_011edd64;
      case (pattern)0x2:
        if ((1 < uVar31) && (local_2d8 == (ulong *)0x0)) {
          if (((param_5 >> 9 & 1) == 0) && (uVar31 != 2 || local_205 == '\0')) {
            local_2d8 = (ulong *)0x0;
            puVar19 = local_2d8;
            break;
          }
        }
        pbVar33 = pbVar28;
        if ((local_240 & 1) != 0) {
          pbVar33 = local_230;
        }
        pbVar32 = pbVar33;
        if ((uVar31 != 0) && ((byte)local_208[(int)uVar31 - 1] < 2)) {
          uVar18 = (ulong)((byte)local_240._0_1_ >> 1);
          if ((local_240 & 1) != 0) {
            uVar18 = local_238;
          }
          pbVar23 = pbVar33;
          if (((uVar18 != 0) && (-1 < (char)*pbVar33)) &&
             ((*(ulong *)(*(long *)(param_8 + 0x10) + (ulong)*pbVar33 * 8) & 1) != 0)) {
            pbVar21 = pbVar33 + uVar18;
            pbVar1 = pbVar33;
            while (uVar18 = uVar18 - 1, pbVar23 = pbVar21, uVar18 != 0) {
              pbVar23 = pbVar1 + 1;
              if (((char)*pbVar23 < '\0') ||
                 (pbVar1 = pbVar23,
                 (*(ulong *)(*(long *)(param_8 + 0x10) + (ulong)*pbVar23 * 8) & 1) == 0)) break;
            }
          }
          uVar15 = local_288 >> 1 & 0x7f;
          uVar18 = uVar15;
          if ((local_288 & 1) != 0) {
            uVar18 = local_280;
          }
          if ((ulong)((long)pbVar23 - (long)pbVar33) <= uVar18) {
            bVar8 = (local_288 & 1) == 0;
            lVar17 = (long)local_278 + local_280;
            if (bVar8) {
              lVar17 = (long)&local_288 + uVar15 + 1;
            }
            pbVar21 = (byte *)(lVar17 - ((long)pbVar23 - (long)pbVar33));
            pvVar4 = (void *)((ulong)&local_288 | 1);
            if (!bVar8) {
              pvVar4 = local_278;
            }
            pbVar1 = pbVar33;
            for (; (pbVar32 = pbVar23, pbVar21 != (byte *)((long)pvVar4 + uVar18) &&
                   (pbVar32 = pbVar33, *pbVar21 == *pbVar1)); pbVar21 = pbVar21 + 1) {
              pbVar1 = pbVar1 + 1;
            }
          }
        }
        uVar18 = (ulong)((byte)local_240._0_1_ >> 1);
        if ((local_240 & 1) != 0) {
          uVar18 = local_238;
        }
        if (pbVar33 + uVar18 != pbVar32) {
          do {
            plVar34 = (long *)*param_1;
            if ((plVar34 == (long *)0x0) || (plVar34[3] != plVar34[4])) {
joined_r0x011ed6fc:
              if (param_2 == (long *)0x0) goto LAB_011ed74c;
LAB_011ed700:
              if ((param_2[3] == param_2[4]) &&
                 (iVar11 = (**(code **)(*param_2 + 0x48))(param_2), iVar11 == -1))
              goto LAB_011ed74c;
              if (plVar34 != (long *)0x0) break;
            }
            else {
              iVar11 = (**(code **)(*plVar34 + 0x48))(plVar34);
              if (iVar11 == -1) {
                plVar34 = (long *)0x0;
                *param_1 = 0;
                goto joined_r0x011ed6fc;
              }
              plVar34 = (long *)*param_1;
              if (param_2 != (long *)0x0) goto LAB_011ed700;
LAB_011ed74c:
              param_2 = (long *)0x0;
              if (plVar34 == (long *)0x0) break;
            }
            plVar34 = (long *)*param_1;
            if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
              bVar10 = (**(code **)(*plVar34 + 0x48))();
            }
            else {
              bVar10 = *(byte *)plVar34[3];
            }
            if (*pbVar32 != bVar10) break;
            plVar34 = (long *)*param_1;
            if (plVar34[3] == plVar34[4]) {
              (**(code **)(*plVar34 + 0x50))();
            }
            else {
              plVar34[3] = plVar34[3] + 1;
            }
            pbVar32 = pbVar32 + 1;
            uVar18 = local_240 >> 1 & 0x7f;
            pbVar33 = pbVar28;
            if ((local_240 & 1) != 0) {
              uVar18 = local_238;
              pbVar33 = local_230;
            }
          } while (pbVar32 != pbVar33 + uVar18);
        }
        if ((param_5 >> 9 & 1) != 0) {
          uVar18 = local_240 >> 1 & 0x7f;
          pbVar33 = pbVar28;
          if ((local_240 & 1) != 0) {
            uVar18 = local_238;
            pbVar33 = local_230;
          }
          if (pbVar32 != pbVar33 + uVar18) goto LAB_011edecc;
        }
        break;
      case (pattern)0x3:
        uVar15 = local_258 & 0xff;
        uVar18 = (ulong)((byte)local_258._0_1_ >> 1);
        if ((local_258 & 1) != 0) {
          uVar18 = local_250;
        }
        uVar2 = (ulong)((byte)local_270._0_1_ >> 1);
        if ((local_270 & 1) != 0) {
          uVar2 = local_268;
        }
        if (uVar18 + uVar2 != 0) {
          if (uVar18 == 0) {
            plVar34 = (long *)*param_1;
            if ((char *)plVar34[3] == (char *)plVar34[4]) {
              cVar9 = (**(code **)(*plVar34 + 0x48))();
            }
            else {
              cVar9 = *(char *)plVar34[3];
            }
            pcVar22 = pcVar20;
            if (((byte)local_270._0_1_ & 1) != 0) {
              pcVar22 = local_260;
            }
            if (*pcVar22 != cVar9) break;
            plVar34 = (long *)*param_1;
            if (plVar34[3] == plVar34[4]) {
              (**(code **)(*plVar34 + 0x50))();
              bVar6 = local_270._0_1_;
            }
            else {
              plVar34[3] = plVar34[3] + 1;
              bVar6 = local_270._0_1_;
            }
LAB_011edcf8:
            *param_7 = 1;
            uVar18 = (ulong)((byte)bVar6 >> 1);
            if (((byte)bVar6 & 1) != 0) {
              uVar18 = local_268;
            }
            puVar19 = &local_270;
          }
          else {
            plVar34 = (long *)*param_1;
            bVar10 = (byte)local_258._0_1_ & 1;
            pcVar22 = (char *)plVar34[3];
            pcVar24 = (char *)plVar34[4];
            if (uVar2 == 0) {
              if (pcVar22 == pcVar24) {
                cVar9 = (**(code **)(*plVar34 + 0x48))();
                uVar15 = local_258 & 0xff;
                bVar10 = (byte)local_258._0_1_ & 1;
              }
              else {
                cVar9 = *pcVar22;
              }
              pcVar22 = (char *)((ulong)&local_258 | 1);
              if (bVar10 != 0) {
                pcVar22 = local_248;
              }
              if (*pcVar22 != cVar9) {
                *param_7 = 1;
                break;
              }
              plVar34 = (long *)*param_1;
              pcVar22 = (char *)plVar34[3];
              if (pcVar22 == (char *)plVar34[4]) {
                (**(code **)(*plVar34 + 0x50))();
                goto LAB_011edd24;
              }
LAB_011edc40:
              plVar34[3] = (long)(pcVar22 + 1);
            }
            else {
              if (pcVar22 == pcVar24) {
                cVar9 = (**(code **)(*plVar34 + 0x48))();
                plVar34 = (long *)*param_1;
                uVar15 = local_258 & 0xff;
                pcVar22 = (char *)plVar34[3];
                pcVar24 = (char *)plVar34[4];
                bVar10 = (byte)local_258._0_1_ & 1;
              }
              else {
                cVar9 = *pcVar22;
              }
              pcVar3 = (char *)((ulong)&local_258 | 1);
              if (bVar10 != 0) {
                pcVar3 = local_248;
              }
              if (*pcVar3 != cVar9) {
                if (pcVar22 == pcVar24) {
                  cVar9 = (**(code **)(*plVar34 + 0x48))();
                }
                else {
                  cVar9 = *pcVar22;
                }
                pcVar22 = pcVar20;
                if ((local_270 & 1) != 0) {
                  pcVar22 = local_260;
                }
                if (*pcVar22 == cVar9) {
                  plVar34 = (long *)*param_1;
                  if (plVar34[3] == plVar34[4]) {
                    (**(code **)(*plVar34 + 0x50))();
                    bVar6 = local_270._0_1_;
                  }
                  else {
                    plVar34[3] = plVar34[3] + 1;
                    bVar6 = local_270._0_1_;
                  }
                  goto LAB_011edcf8;
                }
                goto LAB_011edecc;
              }
              if (pcVar22 != pcVar24) goto LAB_011edc40;
              (**(code **)(*plVar34 + 0x50))();
LAB_011edd24:
              uVar15 = local_258 & 0xff;
              bVar10 = (byte)local_258._0_1_ & 1;
            }
            uVar18 = uVar15 >> 1;
            if (bVar10 != 0) {
              uVar18 = local_250;
            }
            puVar19 = &local_258;
          }
          if (uVar18 < 2) {
            puVar19 = local_2d8;
          }
        }
        break;
      case (pattern)0x4:
        uVar30 = 0;
        plVar34 = (long *)*param_1;
        if (plVar34 != (long *)0x0) goto LAB_011ed0a4;
LAB_011ed0b0:
        if (param_2 == (long *)0x0) goto LAB_011ed100;
LAB_011ed0b4:
        if ((param_2[3] == param_2[4]) &&
           (iVar11 = (**(code **)(*param_2 + 0x48))(param_2), iVar11 == -1)) goto LAB_011ed100;
        puVar25 = puVar13;
        puVar12 = puVar27;
        if (plVar34 == (long *)0x0) {
          do {
            plVar34 = (long *)*param_1;
            if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
              bVar10 = (**(code **)(*plVar34 + 0x48))();
              if (-1 < (char)bVar10) goto LAB_011ed140;
LAB_011ed154:
              uVar18 = local_228 >> 1 & 0x7f;
              if ((local_228 & 1) != 0) {
                uVar18 = local_220;
              }
              puVar25 = puVar13;
              puVar12 = puVar27;
              if (((local_210[0] != bVar10) || (uVar30 == 0)) || (uVar18 == 0)) break;
              puVar12 = puVar13;
              if (puVar27 == local_2a0) {
                if ((ulong)((long)local_2a0 - (long)puVar13) < 0x7fffffffffffffff) {
                  uVar15 = ((long)local_2a0 - (long)puVar13) * 2;
                  uVar18 = 4;
                  if (uVar15 != 0) {
                    uVar18 = uVar15;
                  }
                }
                else {
                  uVar18 = 0xffffffffffffffff;
                }
                puVar12 = (uint *)0x0;
                if (pcVar29 != __do_nothing) {
                  puVar12 = puVar13;
                }
                puVar12 = realloc(puVar12,uVar18);
                if (puVar12 == (uint *)0x0) {
                  __throw_bad_alloc();
LAB_011edfac:
                  __throw_bad_alloc();
                  goto LAB_011edfb0;
                }
                puVar27 = (uint *)((long)puVar12 + ((long)puVar27 - (long)puVar13));
                local_2a0 = (uint *)((long)puVar12 + (uVar18 & 0xfffffffffffffffc));
                pcVar29 = free;
              }
              *puVar27 = uVar30;
              uVar30 = 0;
              puVar13 = puVar12;
              puVar27 = puVar27 + 1;
            }
            else {
              bVar10 = *(byte *)plVar34[3];
              if ((char)bVar10 < '\0') goto LAB_011ed154;
LAB_011ed140:
              if (((uint)*(undefined8 *)(*(long *)(param_8 + 0x10) + (ulong)bVar10 * 8) >> 6 & 1) ==
                  0) goto LAB_011ed154;
              pbVar33 = (byte *)*param_10;
              if (pbVar33 == param_11) {
                pvVar4 = (void *)*param_9;
                pcVar5 = (code *)param_9[1];
                if ((ulong)((long)param_11 - (long)pvVar4) < 0x7fffffffffffffff) {
                  sVar16 = ((long)param_11 - (long)pvVar4) * 2;
                  if (sVar16 == 0) {
                    sVar16 = 1;
                  }
                }
                else {
                  sVar16 = 0xffffffffffffffff;
                }
                pvVar14 = pvVar4;
                if (pcVar5 == __do_nothing) {
                  pvVar14 = (void *)0x0;
                }
                pvVar14 = realloc(pvVar14,sVar16);
                if (pvVar14 != (void *)0x0) {
                  if (pcVar5 == __do_nothing) {
                    lVar17 = *param_9;
                    *param_9 = (long)pvVar14;
                    if (lVar17 != 0) {
                      (*(code *)param_9[1])(lVar17);
                      pvVar14 = (void *)*param_9;
                    }
                  }
                  else {
                    *param_9 = (long)pvVar14;
                  }
                  pbVar33 = (byte *)((long)pvVar14 + ((long)pbVar33 - (long)pvVar4));
                  param_9[1] = (long)free;
                  *param_10 = (long)pbVar33;
                  param_11 = (byte *)(*param_9 + sVar16);
                  goto LAB_011ed2cc;
                }
                goto LAB_011edfac;
              }
LAB_011ed2cc:
              *param_10 = (long)(pbVar33 + 1);
              *pbVar33 = bVar10;
              uVar30 = uVar30 + 1;
            }
            plVar34 = (long *)*param_1;
            if (plVar34[3] == plVar34[4]) {
              (**(code **)(*plVar34 + 0x50))();
            }
            else {
              plVar34[3] = plVar34[3] + 1;
            }
            plVar34 = (long *)*param_1;
            if (plVar34 == (long *)0x0) goto LAB_011ed0b0;
LAB_011ed0a4:
            if (plVar34[3] != plVar34[4]) goto LAB_011ed0b0;
            iVar11 = (**(code **)(*plVar34 + 0x48))(plVar34);
            if (iVar11 == -1) {
              plVar34 = (long *)0x0;
              *param_1 = 0;
            }
            else {
              plVar34 = (long *)*param_1;
            }
            if (param_2 != (long *)0x0) goto LAB_011ed0b4;
LAB_011ed100:
            param_2 = (long *)0x0;
            puVar25 = puVar13;
            puVar12 = puVar27;
            if (plVar34 == (long *)0x0) break;
          } while( true );
        }
        puVar13 = puVar25;
        puVar27 = puVar12;
        if ((puVar25 != puVar12) && (uVar30 != 0)) {
          if (puVar12 == local_2a0) {
            if ((ulong)((long)local_2a0 - (long)puVar25) < 0x7fffffffffffffff) {
              uVar15 = ((long)local_2a0 - (long)puVar25) * 2;
              uVar18 = 4;
              if (uVar15 != 0) {
                uVar18 = uVar15;
              }
            }
            else {
              uVar18 = 0xffffffffffffffff;
            }
            puVar13 = (uint *)0x0;
            if (pcVar29 != __do_nothing) {
              puVar13 = puVar25;
            }
            puVar13 = realloc(puVar13,uVar18);
            if (puVar13 == (uint *)0x0) {
LAB_011edfb0:
              __throw_bad_alloc();
LAB_011edfbc:
              __throw_bad_alloc();
              goto LAB_011edfc4;
            }
            puVar12 = (uint *)((long)puVar13 + ((long)puVar12 - (long)puVar25));
            local_2a0 = (uint *)((long)puVar13 + (uVar18 & 0xfffffffffffffffc));
            pcVar29 = free;
          }
          puVar27 = puVar12 + 1;
          *puVar12 = uVar30;
        }
        if (0 < local_28c) {
          plVar34 = (long *)*param_1;
          if ((plVar34 == (long *)0x0) || (plVar34[3] != plVar34[4])) {
joined_r0x011ed85c:
            if (param_2 == (long *)0x0) goto LAB_011ed964;
LAB_011ed860:
            if ((param_2[3] == param_2[4]) &&
               (iVar11 = (**(code **)(*param_2 + 0x48))(param_2), iVar11 == -1)) goto LAB_011ed964;
            if (plVar34 != (long *)0x0) goto LAB_011edecc;
          }
          else {
            iVar11 = (**(code **)(*plVar34 + 0x48))(plVar34);
            if (iVar11 == -1) {
              plVar34 = (long *)0x0;
              *param_1 = 0;
              goto joined_r0x011ed85c;
            }
            plVar34 = (long *)*param_1;
            if (param_2 != (long *)0x0) goto LAB_011ed860;
LAB_011ed964:
            if (plVar34 == (long *)0x0) goto LAB_011edecc;
            param_2 = (long *)0x0;
          }
          plVar34 = (long *)*param_1;
          if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
            bVar10 = (**(code **)(*plVar34 + 0x48))();
          }
          else {
            bVar10 = *(byte *)plVar34[3];
          }
          if (local_20c[0] != bVar10) goto LAB_011edecc;
          plVar34 = (long *)*param_1;
          if (plVar34[3] == plVar34[4]) {
            (**(code **)(*plVar34 + 0x50))();
          }
          else {
            plVar34[3] = plVar34[3] + 1;
          }
          if (0 < local_28c) {
            plVar34 = (long *)*param_1;
            if (plVar34 != (long *)0x0) goto LAB_011ed9fc;
LAB_011eda30:
            if (param_2 == (long *)0x0) goto LAB_011eda78;
            while( true ) {
              if ((param_2[3] == param_2[4]) &&
                 (iVar11 = (**(code **)(*param_2 + 0x48))(param_2), iVar11 == -1))
              goto LAB_011eda78;
              if (plVar34 != (long *)0x0) break;
              while( true ) {
                plVar34 = (long *)*param_1;
                if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
                  bVar10 = (**(code **)(*plVar34 + 0x48))();
                }
                else {
                  bVar10 = *(byte *)plVar34[3];
                }
                if (((char)bVar10 < '\0') ||
                   (((uint)*(undefined8 *)(*(long *)(param_8 + 0x10) + (ulong)bVar10 * 8) >> 6 & 1)
                    == 0)) goto LAB_011edecc;
                pbVar33 = (byte *)*param_10;
                if (pbVar33 == param_11) {
                  pvVar4 = (void *)*param_9;
                  pcVar5 = (code *)param_9[1];
                  if ((ulong)((long)param_11 - (long)pvVar4) < 0x7fffffffffffffff) {
                    sVar16 = ((long)param_11 - (long)pvVar4) * 2;
                    if (sVar16 == 0) {
                      sVar16 = 1;
                    }
                  }
                  else {
                    sVar16 = 0xffffffffffffffff;
                  }
                  pvVar14 = pvVar4;
                  if (pcVar5 == __do_nothing) {
                    pvVar14 = (void *)0x0;
                  }
                  pvVar14 = realloc(pvVar14,sVar16);
                  if (pvVar14 == (void *)0x0) goto LAB_011edfbc;
                  if (pcVar5 == __do_nothing) {
                    lVar17 = *param_9;
                    *param_9 = (long)pvVar14;
                    if (lVar17 != 0) {
                      (*(code *)param_9[1])(lVar17);
                      pvVar14 = (void *)*param_9;
                    }
                  }
                  else {
                    *param_9 = (long)pvVar14;
                  }
                  pbVar33 = (byte *)((long)pvVar14 + ((long)pbVar33 - (long)pvVar4));
                  param_9[1] = (long)free;
                  *param_10 = (long)pbVar33;
                  param_11 = (byte *)(*param_9 + sVar16);
                }
                plVar34 = (long *)*param_1;
                if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
                  bVar10 = (**(code **)(*plVar34 + 0x48))();
                  pbVar33 = (byte *)*param_10;
                }
                else {
                  bVar10 = *(byte *)plVar34[3];
                }
                *param_10 = (long)(pbVar33 + 1);
                *pbVar33 = bVar10;
                local_28c = local_28c + -1;
                plVar34 = (long *)*param_1;
                if (plVar34[3] == plVar34[4]) {
                  (**(code **)(*plVar34 + 0x50))();
                }
                else {
                  plVar34[3] = plVar34[3] + 1;
                }
                if (local_28c < 1) goto LAB_011edbe4;
                plVar34 = (long *)*param_1;
                if (plVar34 == (long *)0x0) goto LAB_011eda30;
LAB_011ed9fc:
                if (plVar34[3] == plVar34[4]) {
                  iVar11 = (**(code **)(*plVar34 + 0x48))(plVar34);
                  if (iVar11 != -1) {
                    plVar34 = (long *)*param_1;
                    goto LAB_011eda30;
                  }
                  plVar34 = (long *)0x0;
                  *param_1 = 0;
                }
                if (param_2 != (long *)0x0) break;
LAB_011eda78:
                if (plVar34 == (long *)0x0) goto LAB_011edecc;
                param_2 = (long *)0x0;
              }
            }
            goto LAB_011edecc;
          }
        }
LAB_011edbe4:
        if (*param_10 == *param_9) goto LAB_011edecc;
      }
switchD_011ed074_default:
      local_2d8 = puVar19;
      uVar31 = uVar31 + 1;
      if (uVar31 == 4) break;
      plVar34 = (long *)*param_1;
      if (plVar34 == (long *)0x0) goto LAB_011ecff4;
LAB_011ecfe8:
      if (plVar34[3] != plVar34[4]) goto LAB_011ecff4;
      iVar11 = (**(code **)(*plVar34 + 0x48))(plVar34);
      if (iVar11 == -1) {
        plVar34 = (long *)0x0;
        *param_1 = 0;
      }
      else {
        plVar34 = (long *)*param_1;
      }
      if (param_2 != (long *)0x0) goto LAB_011ecff8;
LAB_011ed044:
      param_2 = (long *)0x0;
      if (plVar34 == (long *)0x0) break;
    } while( true );
  }
LAB_011edd64:
  if (local_2d8 != (ulong *)0x0) {
    uVar31 = 1;
LAB_011edd88:
    if (((byte)*local_2d8 & 1) == 0) {
      uVar18 = (ulong)(byte)((byte)*local_2d8 >> 1);
    }
    else {
      uVar18 = local_2d8[1];
    }
    if (uVar18 <= uVar31) goto LAB_011ede90;
    plVar34 = (long *)*param_1;
    if ((plVar34 == (long *)0x0) || (plVar34[3] != plVar34[4])) {
joined_r0x011eddb4:
      if (param_2 == (long *)0x0) goto LAB_011ede14;
LAB_011eddb8:
      if ((param_2[3] == param_2[4]) &&
         (iVar11 = (**(code **)(*param_2 + 0x48))(param_2), iVar11 == -1)) goto LAB_011ede14;
      if (plVar34 != (long *)0x0) goto LAB_011edecc;
    }
    else {
      iVar11 = (**(code **)(*plVar34 + 0x48))(plVar34);
      if (iVar11 == -1) {
        plVar34 = (long *)0x0;
        *param_1 = 0;
        goto joined_r0x011eddb4;
      }
      plVar34 = (long *)*param_1;
      if (param_2 != (long *)0x0) goto LAB_011eddb8;
LAB_011ede14:
      if (plVar34 == (long *)0x0) goto LAB_011edecc;
      param_2 = (long *)0x0;
    }
    plVar34 = (long *)*param_1;
    if ((byte *)plVar34[3] == (byte *)plVar34[4]) {
      bVar10 = (**(code **)(*plVar34 + 0x48))();
    }
    else {
      bVar10 = *(byte *)plVar34[3];
    }
    pbVar28 = (byte *)((long)local_2d8 + 1);
    if ((*local_2d8 & 1) != 0) {
      pbVar28 = (byte *)local_2d8[2];
    }
    if (pbVar28[uVar31] != bVar10) goto LAB_011edecc;
    plVar34 = (long *)*param_1;
    uVar31 = (ulong)((int)uVar31 + 1);
    if (plVar34[3] == plVar34[4]) {
      (**(code **)(*plVar34 + 0x50))();
    }
    else {
      plVar34[3] = plVar34[3] + 1;
    }
    goto LAB_011edd88;
  }
LAB_011ede90:
  if (puVar13 != puVar27) {
    local_290 = 0;
    __check_grouping((basic_string *)&local_228,puVar13,puVar27,&local_290);
    if (local_290 != 0) {
LAB_011edecc:
      uVar26 = 0;
      *param_6 = *param_6 | 4;
      goto joined_r0x011edee0;
    }
  }
  uVar26 = 1;
joined_r0x011edee0:
  if ((local_288 & 1) != 0) {
    operator_delete(local_278);
  }
  if ((local_270 & 1) != 0) {
    operator_delete(local_260);
  }
  if ((local_258 & 1) != 0) {
    operator_delete(local_248);
  }
  if ((local_240 & 1) != 0) {
    operator_delete(local_230);
  }
  if ((local_228 & 1) != 0) {
    operator_delete(local_218);
  }
  if (puVar13 != (uint *)0x0) {
    (*pcVar29)(puVar13);
  }
  if (*(long *)(lVar7 + 0x28) == local_70[0]) {
    return uVar26;
  }
LAB_011edfc4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

