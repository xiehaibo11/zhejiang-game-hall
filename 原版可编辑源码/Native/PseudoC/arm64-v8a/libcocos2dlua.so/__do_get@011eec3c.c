
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::locale const&, unsigned int, unsigned
   int&, bool&, std::__ndk1::ctype<wchar_t> const&, std::__ndk1::unique_ptr<wchar_t, void
   (*)(void*)>&, wchar_t*&, wchar_t*) */

undefined4
std::__ndk1::
money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__do_get(long *param_1,long *param_2,byte param_3,locale *param_4,uint param_5,uint *param_6,
        undefined1 *param_7,long *param_8,long *param_9,long *param_10,wchar_t *param_11)

{
  void *pvVar1;
  code *pcVar2;
  basic_string bVar3;
  long lVar4;
  bool bVar5;
  undefined4 uVar6;
  wchar_t wVar7;
  int iVar8;
  long *plVar9;
  uint *puVar10;
  uint *puVar11;
  void *pvVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong *puVar18;
  byte bVar19;
  ulong uVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  ulong uVar25;
  uint uVar26;
  wchar_t *pwVar27;
  ulong uVar28;
  uint *puVar29;
  uint *puVar30;
  int *piVar31;
  code *pcVar32;
  ulong *local_2e0;
  uint *local_2a8;
  wchar_t *local_2a0;
  uint local_290;
  int local_28c;
  undefined8 local_288;
  ulong local_280;
  void *local_278;
  ulong local_270;
  ulong local_268;
  int *local_260;
  ulong local_258;
  ulong local_250;
  int *local_248;
  ulong local_240;
  ulong local_238;
  int *local_230;
  ulong local_228;
  ulong local_220;
  void *local_218;
  wchar_t local_210;
  wchar_t local_20c;
  pattern local_208 [3];
  char local_205;
  uint auStack_200 [100];
  long local_70 [2];
  
  lVar4 = tpidr_el0;
  local_70[0] = *(long *)(lVar4 + 0x28);
  local_220 = 0;
  local_218 = (void *)0x0;
  local_230 = (int *)0x0;
  local_228 = 0;
  local_240 = 0;
  local_238 = 0;
  local_250 = 0;
  local_248 = (int *)0x0;
  local_260 = (int *)0x0;
  local_258 = 0;
  local_270 = 0;
  local_268 = 0;
  local_280 = 0;
  local_278 = (void *)0x0;
  local_288 = 0;
  __money_get<wchar_t>::__gather_info
            ((bool)(param_3 & 1),param_4,local_208,&local_20c,&local_210,(basic_string *)&local_228,
             (basic_string *)&local_240,(basic_string *)&local_258,(basic_string *)&local_270,
             &local_28c);
  piVar21 = (int *)((ulong)&local_240 | 4);
  local_2a0 = param_11;
  piVar23 = (int *)((ulong)&local_270 | 4);
  local_2e0 = (ulong *)0x0;
  pcVar32 = __do_nothing;
  puVar10 = auStack_200;
  local_2a8 = (uint *)local_70;
  uVar28 = 0;
  puVar29 = auStack_200;
  *param_10 = *param_9;
  plVar9 = (long *)*param_1;
  if (plVar9 != (long *)0x0) goto LAB_011eed80;
LAB_011eed9c:
  bVar5 = true;
  if (param_2 != (long *)0x0) goto LAB_011eedcc;
LAB_011eede4:
  param_2 = (long *)0x0;
  if (!bVar5) {
    do {
      puVar18 = local_2e0;
      switch(local_208[uVar28]) {
      case (pattern)0x0:
        if (uVar28 != 3) goto LAB_011ef2e0;
        goto LAB_011efbd0;
      case (pattern)0x1:
        if (uVar28 != 3) {
          plVar9 = (long *)*param_1;
          if ((undefined4 *)plVar9[3] == (undefined4 *)plVar9[4]) {
            uVar6 = (**(code **)(*plVar9 + 0x48))();
          }
          else {
            uVar6 = *(undefined4 *)plVar9[3];
          }
          uVar16 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar6);
          if ((uVar16 & 1) != 0) {
            plVar9 = (long *)*param_1;
            pwVar27 = (wchar_t *)plVar9[3];
            if (pwVar27 == (wchar_t *)plVar9[4]) {
              wVar7 = (**(code **)(*plVar9 + 0x50))();
            }
            else {
              plVar9[3] = (long)(pwVar27 + 1);
              wVar7 = *pwVar27;
            }
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::push_back((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                         *)&local_288,wVar7);
LAB_011ef2e0:
            do {
              plVar9 = (long *)*param_1;
              if (plVar9 == (long *)0x0) {
LAB_011ef304:
                bVar5 = true;
                if (param_2 == (long *)0x0) goto LAB_011ef34c;
LAB_011ef334:
                if ((int *)param_2[3] == (int *)param_2[4]) {
                  iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
                }
                else {
                  iVar8 = *(int *)param_2[3];
                }
                if (iVar8 == -1) goto LAB_011ef34c;
                if (!bVar5) goto switchD_011eee34_default;
              }
              else {
                if ((int *)plVar9[3] == (int *)plVar9[4]) {
                  iVar8 = (**(code **)(*plVar9 + 0x48))();
                }
                else {
                  iVar8 = *(int *)plVar9[3];
                }
                if (iVar8 == -1) {
                  *param_1 = 0;
                  goto LAB_011ef304;
                }
                bVar5 = *param_1 == 0;
                if (param_2 != (long *)0x0) goto LAB_011ef334;
LAB_011ef34c:
                param_2 = (long *)0x0;
                if (bVar5) goto switchD_011eee34_default;
              }
              plVar9 = (long *)*param_1;
              if ((undefined4 *)plVar9[3] == (undefined4 *)plVar9[4]) {
                uVar6 = (**(code **)(*plVar9 + 0x48))();
              }
              else {
                uVar6 = *(undefined4 *)plVar9[3];
              }
              uVar16 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar6);
              if ((uVar16 & 1) == 0) goto switchD_011eee34_default;
              plVar9 = (long *)*param_1;
              pwVar27 = (wchar_t *)plVar9[3];
              if (pwVar27 == (wchar_t *)plVar9[4]) {
                wVar7 = (**(code **)(*plVar9 + 0x50))();
              }
              else {
                plVar9[3] = (long)(pwVar27 + 1);
                wVar7 = *pwVar27;
              }
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                           *)&local_288,wVar7);
            } while( true );
          }
          goto LAB_011efd3c;
        }
        goto LAB_011efbd0;
      case (pattern)0x2:
        if ((1 < uVar28) && (local_2e0 == (ulong *)0x0)) {
          if (((param_5 >> 9 & 1) == 0) && (uVar28 != 2 || local_205 == '\0')) {
            local_2e0 = (ulong *)0x0;
            puVar18 = local_2e0;
            break;
          }
        }
        uVar16 = local_240 & 0xff;
        bVar19 = (byte)local_240._0_1_ & 1;
        piVar22 = piVar21;
        if ((local_240 & 1) != 0) {
          piVar22 = local_230;
        }
        piVar24 = piVar22;
        if ((uVar28 != 0) && ((byte)local_208[(int)uVar28 - 1] < 2)) {
          uVar14 = (ulong)((byte)local_240._0_1_ >> 1);
          if ((local_240 & 1) != 0) {
            uVar14 = local_238;
          }
          piVar31 = piVar22;
          if (uVar14 != 0) {
            do {
              uVar16 = (**(code **)(*param_8 + 0x18))(param_8,1,*piVar22);
              if ((uVar16 & 1) == 0) break;
              piVar22 = piVar22 + 1;
              uVar16 = (ulong)((byte)local_240._0_1_ >> 1);
              piVar24 = piVar21;
              if ((local_240 & 1) != 0) {
                uVar16 = local_238;
                piVar24 = local_230;
              }
            } while (piVar22 != piVar24 + uVar16);
            uVar16 = local_240 & 0xff;
            bVar19 = (byte)local_240._0_1_ & 1;
            piVar31 = piVar22;
          }
          piVar22 = piVar21;
          if (bVar19 != 0) {
            piVar22 = local_230;
          }
          uVar25 = (long)piVar31 - (long)piVar22 >> 2;
          uVar20 = local_288 >> 1 & 0x7f;
          uVar14 = uVar20;
          if ((local_288 & 1) != 0) {
            uVar14 = local_280;
          }
          piVar24 = piVar22;
          if (uVar25 <= uVar14) {
            bVar5 = (local_288 & 1) != 0;
            uVar14 = uVar20;
            if (bVar5) {
              uVar14 = local_280;
            }
            pvVar1 = (void *)((ulong)&local_288 | 4);
            pvVar12 = (void *)((long)&local_288 + uVar25 * -4 + uVar20 * 4 + 4);
            if (bVar5) {
              pvVar1 = local_278;
              pvVar12 = (void *)((long)local_278 + uVar25 * -4 + local_280 * 4);
            }
            pvVar1 = (void *)((long)pvVar1 + uVar14 * 4);
            piVar24 = piVar31;
            if (pvVar12 != pvVar1) {
              lVar15 = 0;
              do {
                piVar24 = piVar22;
                if (*(int *)((long)pvVar12 + lVar15) != *(int *)((long)piVar22 + lVar15)) break;
                lVar15 = lVar15 + 4;
                piVar24 = piVar31;
              } while ((long)pvVar1 - (long)pvVar12 != lVar15);
            }
          }
        }
        uVar16 = uVar16 >> 1;
        if (bVar19 != 0) {
          uVar16 = local_238;
        }
        if (piVar22 + uVar16 != piVar24) {
          do {
            plVar9 = (long *)*param_1;
            if (plVar9 == (long *)0x0) {
LAB_011ef8c4:
              bVar5 = true;
              if (param_2 == (long *)0x0) goto LAB_011ef90c;
LAB_011ef8f4:
              if ((int *)param_2[3] == (int *)param_2[4]) {
                iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
              }
              else {
                iVar8 = *(int *)param_2[3];
              }
              if (iVar8 == -1) goto LAB_011ef90c;
              if (!bVar5) break;
            }
            else {
              if ((int *)plVar9[3] == (int *)plVar9[4]) {
                iVar8 = (**(code **)(*plVar9 + 0x48))();
              }
              else {
                iVar8 = *(int *)plVar9[3];
              }
              if (iVar8 == -1) {
                *param_1 = 0;
                goto LAB_011ef8c4;
              }
              bVar5 = *param_1 == 0;
              if (param_2 != (long *)0x0) goto LAB_011ef8f4;
LAB_011ef90c:
              param_2 = (long *)0x0;
              if (bVar5) break;
            }
            plVar9 = (long *)*param_1;
            if ((int *)plVar9[3] == (int *)plVar9[4]) {
              iVar8 = (**(code **)(*plVar9 + 0x48))();
            }
            else {
              iVar8 = *(int *)plVar9[3];
            }
            if (iVar8 != *piVar24) break;
            plVar9 = (long *)*param_1;
            if (plVar9[3] == plVar9[4]) {
              (**(code **)(*plVar9 + 0x50))();
            }
            else {
              plVar9[3] = plVar9[3] + 4;
            }
            piVar24 = piVar24 + 1;
            uVar16 = local_240 >> 1 & 0x7f;
            piVar22 = piVar21;
            if ((local_240 & 1) != 0) {
              uVar16 = local_238;
              piVar22 = local_230;
            }
          } while (piVar24 != piVar22 + uVar16);
        }
        if ((param_5 >> 9 & 1) != 0) {
          uVar16 = local_240 >> 1 & 0x7f;
          piVar22 = piVar21;
          if ((local_240 & 1) != 0) {
            uVar16 = local_238;
            piVar22 = local_230;
          }
          if (piVar24 != piVar22 + uVar16) goto LAB_011efd3c;
        }
        break;
      case (pattern)0x3:
        uVar14 = local_258 & 0xff;
        uVar16 = (ulong)((byte)local_258._0_1_ >> 1);
        if ((local_258 & 1) != 0) {
          uVar16 = local_250;
        }
        uVar20 = (ulong)((byte)local_270._0_1_ >> 1);
        if ((local_270 & 1) != 0) {
          uVar20 = local_268;
        }
        if (uVar16 + uVar20 != 0) {
          if (uVar16 == 0) {
            plVar9 = (long *)*param_1;
            if ((int *)plVar9[3] == (int *)plVar9[4]) {
              iVar8 = (**(code **)(*plVar9 + 0x48))();
            }
            else {
              iVar8 = *(int *)plVar9[3];
            }
            piVar22 = piVar23;
            if (((byte)local_270._0_1_ & 1) != 0) {
              piVar22 = local_260;
            }
            if (iVar8 != *piVar22) break;
            plVar9 = (long *)*param_1;
            if (plVar9[3] == plVar9[4]) {
              (**(code **)(*plVar9 + 0x50))();
              bVar3 = local_270._0_1_;
            }
            else {
              plVar9[3] = plVar9[3] + 4;
              bVar3 = local_270._0_1_;
            }
LAB_011efb74:
            *param_7 = 1;
            uVar16 = (ulong)((byte)bVar3 >> 1);
            if (((byte)bVar3 & 1) != 0) {
              uVar16 = local_268;
            }
            puVar18 = &local_270;
          }
          else {
            plVar9 = (long *)*param_1;
            bVar19 = (byte)local_258._0_1_ & 1;
            piVar22 = (int *)plVar9[3];
            piVar24 = (int *)plVar9[4];
            if (uVar20 == 0) {
              if (piVar22 == piVar24) {
                iVar8 = (**(code **)(*plVar9 + 0x48))();
                uVar14 = local_258 & 0xff;
                bVar19 = (byte)local_258._0_1_ & 1;
              }
              else {
                iVar8 = *piVar22;
              }
              piVar22 = (int *)((ulong)&local_258 | 4);
              if (bVar19 != 0) {
                piVar22 = local_248;
              }
              if (iVar8 != *piVar22) {
                *param_7 = 1;
                break;
              }
              plVar9 = (long *)*param_1;
              piVar22 = (int *)plVar9[3];
              if (piVar22 == (int *)plVar9[4]) {
                (**(code **)(*plVar9 + 0x50))();
                goto LAB_011efba0;
              }
LAB_011efabc:
              plVar9[3] = (long)(piVar22 + 1);
            }
            else {
              if (piVar22 == piVar24) {
                iVar8 = (**(code **)(*plVar9 + 0x48))();
                plVar9 = (long *)*param_1;
                uVar14 = local_258 & 0xff;
                piVar22 = (int *)plVar9[3];
                piVar24 = (int *)plVar9[4];
                bVar19 = (byte)local_258._0_1_ & 1;
              }
              else {
                iVar8 = *piVar22;
              }
              piVar31 = (int *)((ulong)&local_258 | 4);
              if (bVar19 != 0) {
                piVar31 = local_248;
              }
              if (iVar8 != *piVar31) {
                if (piVar22 == piVar24) {
                  iVar8 = (**(code **)(*plVar9 + 0x48))();
                }
                else {
                  iVar8 = *piVar22;
                }
                piVar22 = piVar23;
                if ((local_270 & 1) != 0) {
                  piVar22 = local_260;
                }
                if (iVar8 == *piVar22) {
                  plVar9 = (long *)*param_1;
                  if (plVar9[3] == plVar9[4]) {
                    (**(code **)(*plVar9 + 0x50))();
                    bVar3 = local_270._0_1_;
                  }
                  else {
                    plVar9[3] = plVar9[3] + 4;
                    bVar3 = local_270._0_1_;
                  }
                  goto LAB_011efb74;
                }
                goto LAB_011efd3c;
              }
              if (piVar22 != piVar24) goto LAB_011efabc;
              (**(code **)(*plVar9 + 0x50))();
LAB_011efba0:
              uVar14 = local_258 & 0xff;
              bVar19 = (byte)local_258._0_1_ & 1;
            }
            uVar16 = uVar14 >> 1;
            if (bVar19 != 0) {
              uVar16 = local_250;
            }
            puVar18 = &local_258;
          }
          if (uVar16 < 2) {
            puVar18 = local_2e0;
          }
        }
        break;
      case (pattern)0x4:
        uVar26 = 0;
        plVar9 = (long *)*param_1;
        if (plVar9 != (long *)0x0) goto LAB_011eee64;
LAB_011eee80:
        bVar5 = true;
        if (param_2 != (long *)0x0) goto LAB_011eeeb0;
LAB_011eeec8:
        param_2 = (long *)0x0;
        puVar11 = puVar29;
        puVar30 = puVar10;
        if (!bVar5) {
          do {
            plVar9 = (long *)*param_1;
            if ((wchar_t *)plVar9[3] == (wchar_t *)plVar9[4]) {
              wVar7 = (**(code **)(*plVar9 + 0x48))();
            }
            else {
              wVar7 = *(wchar_t *)plVar9[3];
            }
            uVar16 = (**(code **)(*param_8 + 0x18))(param_8,0x40,wVar7);
            puVar29 = puVar11;
            puVar10 = puVar30;
            if ((uVar16 & 1) == 0) {
              uVar16 = local_228 >> 1 & 0x7f;
              if ((local_228 & 1) != 0) {
                uVar16 = local_220;
              }
              if (((wVar7 != local_210) || (uVar26 == 0)) || (uVar16 == 0)) break;
              if (puVar11 == local_2a8) {
                if ((ulong)((long)local_2a8 - (long)puVar30) < 0x7fffffffffffffff) {
                  uVar14 = ((long)local_2a8 - (long)puVar30) * 2;
                  uVar16 = 4;
                  if (uVar14 != 0) {
                    uVar16 = uVar14;
                  }
                }
                else {
                  uVar16 = 0xffffffffffffffff;
                }
                puVar10 = (uint *)0x0;
                if (pcVar32 != __do_nothing) {
                  puVar10 = puVar30;
                }
                puVar10 = realloc(puVar10,uVar16);
                if (puVar10 == (uint *)0x0) {
                  __throw_bad_alloc();
                  goto LAB_011efe20;
                }
                puVar11 = (uint *)((long)puVar10 + ((long)puVar11 - (long)puVar30));
                local_2a8 = (uint *)((long)puVar10 + (uVar16 & 0xfffffffffffffffc));
                pcVar32 = free;
              }
              puVar29 = puVar11 + 1;
              *puVar11 = uVar26;
              uVar26 = 0;
            }
            else {
              pwVar27 = (wchar_t *)*param_10;
              if (pwVar27 == local_2a0) {
                pvVar1 = (void *)*param_9;
                pcVar2 = (code *)param_9[1];
                if ((ulong)((long)local_2a0 - (long)pvVar1) < 0x7fffffffffffffff) {
                  uVar14 = ((long)local_2a0 - (long)pvVar1) * 2;
                  uVar16 = 4;
                  if (uVar14 != 0) {
                    uVar16 = uVar14;
                  }
                }
                else {
                  uVar16 = 0xffffffffffffffff;
                }
                pvVar12 = pvVar1;
                if (pcVar2 == __do_nothing) {
                  pvVar12 = (void *)0x0;
                }
                pvVar12 = realloc(pvVar12,uVar16);
                if (pvVar12 == (void *)0x0) {
LAB_011efe20:
                  __throw_bad_alloc();
                  goto LAB_011efe24;
                }
                if (pcVar2 == __do_nothing) {
                  lVar15 = *param_9;
                  *param_9 = (long)pvVar12;
                  if (lVar15 != 0) {
                    (*(code *)param_9[1])(lVar15);
                    pvVar12 = (void *)*param_9;
                  }
                }
                else {
                  *param_9 = (long)pvVar12;
                }
                pwVar27 = (wchar_t *)((long)pvVar12 + ((long)pwVar27 - (long)pvVar1 >> 2) * 4);
                param_9[1] = (long)free;
                *param_10 = (long)pwVar27;
                local_2a0 = (wchar_t *)(*param_9 + (uVar16 & 0xfffffffffffffffc));
              }
              *param_10 = (long)(pwVar27 + 1);
              *pwVar27 = wVar7;
              uVar26 = uVar26 + 1;
            }
            plVar9 = (long *)*param_1;
            if (plVar9[3] == plVar9[4]) {
              (**(code **)(*plVar9 + 0x50))();
            }
            else {
              plVar9[3] = plVar9[3] + 4;
            }
            plVar9 = (long *)*param_1;
            if (plVar9 == (long *)0x0) goto LAB_011eee80;
LAB_011eee64:
            if ((int *)plVar9[3] == (int *)plVar9[4]) {
              iVar8 = (**(code **)(*plVar9 + 0x48))();
            }
            else {
              iVar8 = *(int *)plVar9[3];
            }
            if (iVar8 == -1) {
              *param_1 = 0;
              goto LAB_011eee80;
            }
            bVar5 = *param_1 == 0;
            if (param_2 == (long *)0x0) goto LAB_011eeec8;
LAB_011eeeb0:
            if ((int *)param_2[3] == (int *)param_2[4]) {
              iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            else {
              iVar8 = *(int *)param_2[3];
            }
            if (iVar8 == -1) goto LAB_011eeec8;
            puVar11 = puVar29;
            puVar30 = puVar10;
            if (!bVar5) break;
          } while( true );
        }
        if ((puVar10 != puVar29) && (uVar26 != 0)) {
          puVar11 = puVar10;
          if (puVar29 == local_2a8) {
            if ((ulong)((long)local_2a8 - (long)puVar10) < 0x7fffffffffffffff) {
              uVar14 = ((long)local_2a8 - (long)puVar10) * 2;
              uVar16 = 4;
              if (uVar14 != 0) {
                uVar16 = uVar14;
              }
            }
            else {
              uVar16 = 0xffffffffffffffff;
            }
            puVar11 = (uint *)0x0;
            if (pcVar32 != __do_nothing) {
              puVar11 = puVar10;
            }
            puVar11 = realloc(puVar11,uVar16);
            if (puVar11 == (uint *)0x0) {
LAB_011efe24:
              __throw_bad_alloc();
LAB_011efe2c:
              __throw_bad_alloc();
              goto LAB_011efe30;
            }
            puVar29 = (uint *)((long)puVar11 + ((long)puVar29 - (long)puVar10));
            local_2a8 = (uint *)((long)puVar11 + (uVar16 & 0xfffffffffffffffc));
            pcVar32 = free;
          }
          *puVar29 = uVar26;
          puVar29 = puVar29 + 1;
          puVar10 = puVar11;
        }
        if (0 < local_28c) {
          plVar9 = (long *)*param_1;
          if (plVar9 == (long *)0x0) {
LAB_011ef474:
            bVar5 = true;
            if (param_2 != (long *)0x0) goto LAB_011ef47c;
LAB_011ef4b4:
            if (bVar5) goto LAB_011efd3c;
            plVar9 = (long *)0x0;
          }
          else {
            if ((int *)plVar9[3] == (int *)plVar9[4]) {
              iVar8 = (**(code **)(*plVar9 + 0x48))();
            }
            else {
              iVar8 = *(int *)plVar9[3];
            }
            if (iVar8 == -1) {
              *param_1 = 0;
              goto LAB_011ef474;
            }
            bVar5 = *param_1 == 0;
            if (param_2 == (long *)0x0) goto LAB_011ef4b4;
LAB_011ef47c:
            if ((int *)param_2[3] == (int *)param_2[4]) {
              iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            else {
              iVar8 = *(int *)param_2[3];
            }
            plVar9 = (long *)0x0;
            if (iVar8 != -1) {
              plVar9 = param_2;
            }
            if (!(bool)(bVar5 ^ iVar8 == -1)) goto LAB_011efd3c;
          }
          plVar13 = (long *)*param_1;
          if ((wchar_t *)plVar13[3] == (wchar_t *)plVar13[4]) {
            wVar7 = (**(code **)(*plVar13 + 0x48))();
          }
          else {
            wVar7 = *(wchar_t *)plVar13[3];
          }
          if (wVar7 == local_20c) {
            plVar13 = (long *)*param_1;
            param_2 = plVar9;
            if (plVar13[3] == plVar13[4]) {
              (**(code **)(*plVar13 + 0x50))();
            }
            else {
              plVar13[3] = plVar13[3] + 4;
            }
joined_r0x011ef548:
            plVar9 = param_2;
            if (0 < local_28c) {
              do {
                plVar13 = (long *)*param_1;
                if (plVar13 == (long *)0x0) {
LAB_011ef584:
                  bVar5 = true;
                  if (plVar9 != (long *)0x0) goto LAB_011ef58c;
LAB_011ef5c4:
                  if (bVar5) goto LAB_011efd3c;
                  param_2 = (long *)0x0;
                }
                else {
                  if ((int *)plVar13[3] == (int *)plVar13[4]) {
                    iVar8 = (**(code **)(*plVar13 + 0x48))();
                  }
                  else {
                    iVar8 = *(int *)plVar13[3];
                  }
                  if (iVar8 == -1) {
                    *param_1 = 0;
                    goto LAB_011ef584;
                  }
                  bVar5 = *param_1 == 0;
                  if (plVar9 == (long *)0x0) goto LAB_011ef5c4;
LAB_011ef58c:
                  if ((int *)plVar9[3] == (int *)plVar9[4]) {
                    iVar8 = (**(code **)(*plVar9 + 0x48))(plVar9);
                  }
                  else {
                    iVar8 = *(int *)plVar9[3];
                  }
                  param_2 = (long *)0x0;
                  if (iVar8 != -1) {
                    param_2 = plVar9;
                  }
                  if (!(bool)(bVar5 ^ iVar8 == -1)) goto LAB_011efd3c;
                }
                plVar9 = (long *)*param_1;
                if ((undefined4 *)plVar9[3] == (undefined4 *)plVar9[4]) {
                  uVar6 = (**(code **)(*plVar9 + 0x48))();
                }
                else {
                  uVar6 = *(undefined4 *)plVar9[3];
                }
                uVar16 = (**(code **)(*param_8 + 0x18))(param_8,0x40,uVar6);
                if ((uVar16 & 1) == 0) goto LAB_011efd3c;
                pwVar27 = (wchar_t *)*param_10;
                if (pwVar27 == local_2a0) {
                  pvVar1 = (void *)*param_9;
                  pcVar2 = (code *)param_9[1];
                  if ((ulong)((long)local_2a0 - (long)pvVar1) < 0x7fffffffffffffff) {
                    uVar14 = ((long)local_2a0 - (long)pvVar1) * 2;
                    uVar16 = 4;
                    if (uVar14 != 0) {
                      uVar16 = uVar14;
                    }
                  }
                  else {
                    uVar16 = 0xffffffffffffffff;
                  }
                  pvVar12 = pvVar1;
                  if (pcVar2 == __do_nothing) {
                    pvVar12 = (void *)0x0;
                  }
                  pvVar12 = realloc(pvVar12,uVar16);
                  if (pvVar12 == (void *)0x0) goto LAB_011efe2c;
                  if (pcVar2 == __do_nothing) {
                    lVar15 = *param_9;
                    *param_9 = (long)pvVar12;
                    if (lVar15 != 0) {
                      (*(code *)param_9[1])(lVar15);
                      pvVar12 = (void *)*param_9;
                    }
                  }
                  else {
                    *param_9 = (long)pvVar12;
                  }
                  pwVar27 = (wchar_t *)((long)pvVar12 + ((long)pwVar27 - (long)pvVar1 >> 2) * 4);
                  param_9[1] = (long)free;
                  *param_10 = (long)pwVar27;
                  local_2a0 = (wchar_t *)(*param_9 + (uVar16 & 0xfffffffffffffffc));
                }
                plVar9 = (long *)*param_1;
                if ((wchar_t *)plVar9[3] == (wchar_t *)plVar9[4]) {
                  wVar7 = (**(code **)(*plVar9 + 0x48))();
                  pwVar27 = (wchar_t *)*param_10;
                }
                else {
                  wVar7 = *(wchar_t *)plVar9[3];
                }
                *param_10 = (long)(pwVar27 + 1);
                *pwVar27 = wVar7;
                local_28c = local_28c + -1;
                plVar9 = (long *)*param_1;
                if (plVar9[3] != plVar9[4]) goto LAB_011ef550;
                (**(code **)(*plVar9 + 0x50))();
                plVar9 = param_2;
                if (local_28c < 1) break;
              } while( true );
            }
            goto LAB_011eed54;
          }
          goto LAB_011efd3c;
        }
LAB_011eed54:
        if (*param_10 == *param_9) goto LAB_011efd3c;
      }
switchD_011eee34_default:
      local_2e0 = puVar18;
      uVar28 = uVar28 + 1;
      if (uVar28 == 4) break;
      plVar9 = (long *)*param_1;
      if (plVar9 == (long *)0x0) goto LAB_011eed9c;
LAB_011eed80:
      if ((int *)plVar9[3] == (int *)plVar9[4]) {
        iVar8 = (**(code **)(*plVar9 + 0x48))();
      }
      else {
        iVar8 = *(int *)plVar9[3];
      }
      if (iVar8 == -1) {
        *param_1 = 0;
        goto LAB_011eed9c;
      }
      bVar5 = *param_1 == 0;
      if (param_2 == (long *)0x0) goto LAB_011eede4;
LAB_011eedcc:
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        iVar8 = *(int *)param_2[3];
      }
      if (iVar8 == -1) goto LAB_011eede4;
      if (!bVar5) break;
    } while( true );
  }
LAB_011efbd0:
  if (local_2e0 != (ulong *)0x0) {
    uVar28 = 1;
LAB_011efbf0:
    if (((byte)*local_2e0 & 1) == 0) {
      uVar16 = (ulong)(byte)((byte)*local_2e0 >> 1);
    }
    else {
      uVar16 = local_2e0[1];
    }
    if (uVar16 <= uVar28) goto LAB_011efd14;
    plVar9 = (long *)*param_1;
    if (plVar9 == (long *)0x0) {
LAB_011efc2c:
      bVar5 = true;
      if (param_2 != (long *)0x0) goto LAB_011efc34;
LAB_011efc7c:
      if (bVar5) goto LAB_011efd3c;
      plVar9 = (long *)0x0;
    }
    else {
      if ((int *)plVar9[3] == (int *)plVar9[4]) {
        iVar8 = (**(code **)(*plVar9 + 0x48))();
      }
      else {
        iVar8 = *(int *)plVar9[3];
      }
      if (iVar8 == -1) {
        *param_1 = 0;
        goto LAB_011efc2c;
      }
      bVar5 = *param_1 == 0;
      if (param_2 == (long *)0x0) goto LAB_011efc7c;
LAB_011efc34:
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        iVar8 = *(int *)param_2[3];
      }
      plVar9 = (long *)0x0;
      if (iVar8 != -1) {
        plVar9 = param_2;
      }
      if (!(bool)(bVar5 ^ iVar8 == -1)) goto LAB_011efd3c;
    }
    plVar13 = (long *)*param_1;
    if ((int *)plVar13[3] == (int *)plVar13[4]) {
      iVar8 = (**(code **)(*plVar13 + 0x48))();
    }
    else {
      iVar8 = *(int *)plVar13[3];
    }
    pbVar17 = (byte *)((long)local_2e0 + 4);
    if ((*local_2e0 & 1) != 0) {
      pbVar17 = (byte *)local_2e0[2];
    }
    if (iVar8 != *(int *)(pbVar17 + uVar28 * 4)) goto LAB_011efd3c;
    plVar13 = (long *)*param_1;
    uVar28 = (ulong)((int)uVar28 + 1);
    param_2 = plVar9;
    if (plVar13[3] == plVar13[4]) {
      (**(code **)(*plVar13 + 0x50))();
    }
    else {
      plVar13[3] = plVar13[3] + 4;
    }
    goto LAB_011efbf0;
  }
LAB_011efd14:
  if (puVar10 != puVar29) {
    local_290 = 0;
    __check_grouping((basic_string *)&local_228,puVar10,puVar29,&local_290);
    if (local_290 != 0) {
LAB_011efd3c:
      uVar6 = 0;
      *param_6 = *param_6 | 4;
      goto joined_r0x011efe0c;
    }
  }
  uVar6 = 1;
joined_r0x011efe0c:
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
  if (puVar10 != (uint *)0x0) {
    (*pcVar32)(puVar10);
  }
  if (*(long *)(lVar4 + 0x28) == local_70[0]) {
    return uVar6;
  }
LAB_011efe30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_011ef550:
  plVar9[3] = plVar9[3] + 4;
  goto joined_r0x011ef548;
}

