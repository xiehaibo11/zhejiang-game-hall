
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
  code *pcVar1;
  basic_string bVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  wchar_t wVar6;
  int iVar7;
  long *plVar8;
  uint *puVar9;
  void *pvVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  long lVar17;
  ulong *puVar18;
  uint *puVar19;
  byte bVar20;
  uint *puVar21;
  uint *puVar22;
  byte *pbVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  ulong uVar27;
  void *pvVar28;
  int *piVar29;
  ulong uVar30;
  wchar_t *pwVar31;
  ulong uVar32;
  uint *puVar33;
  uint *puVar34;
  int *piVar35;
  code *pcVar36;
  ulong *local_2e8;
  uint *local_2b0;
  wchar_t *local_2a8;
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
  byte *local_218;
  wchar_t local_210;
  wchar_t local_20c;
  pattern local_208 [3];
  char local_205;
  uint local_204 [101];
  uint auStack_70 [4];
  
  lVar3 = tpidr_el0;
  lVar17 = *(long *)(lVar3 + 0x28);
  local_228 = 0;
  local_220 = 0;
  local_218 = (byte *)0x0;
  local_240 = 0;
  local_238 = 0;
  local_230 = (int *)0x0;
  local_258 = 0;
  local_250 = 0;
  local_248 = (int *)0x0;
  local_270 = 0;
  local_268 = 0;
  local_260 = (int *)0x0;
  local_288 = 0;
  local_280 = 0;
  local_278 = (void *)0x0;
  __money_get<wchar_t>::__gather_info
            ((bool)(param_3 & 1),param_4,local_208,&local_20c,&local_210,(basic_string *)&local_228,
             (basic_string *)&local_240,(basic_string *)&local_258,(basic_string *)&local_270,
             &local_28c);
  piVar24 = (int *)((ulong)&local_240 | 4);
  local_2a8 = param_11;
  piVar25 = (int *)((ulong)&local_270 | 4);
  local_2e8 = (ulong *)0x0;
  pcVar36 = __do_nothing;
  puVar34 = local_204 + 1;
  uVar32 = 0;
  local_2b0 = auStack_70;
  puVar33 = local_204 + 1;
  *param_10 = *param_9;
LAB_0180c528:
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
LAB_0180c54c:
    bVar4 = true;
    if (param_2 == (long *)0x0) goto LAB_0180c594;
LAB_0180c57c:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    if (iVar7 == -1) goto LAB_0180c594;
    if (!bVar4) goto LAB_0180d38c;
  }
  else {
    if ((int *)plVar8[3] == (int *)plVar8[4]) {
      iVar7 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      iVar7 = *(int *)plVar8[3];
    }
    if (iVar7 == -1) {
      *param_1 = 0;
      goto LAB_0180c54c;
    }
    bVar4 = *param_1 == 0;
    if (param_2 != (long *)0x0) goto LAB_0180c57c;
LAB_0180c594:
    param_2 = (long *)0x0;
    if (bVar4) goto LAB_0180d38c;
  }
  puVar18 = local_2e8;
  switch(local_208[uVar32]) {
  case (pattern)0x0:
    if (uVar32 != 3) goto LAB_0180ca78;
    goto LAB_0180d38c;
  case (pattern)0x1:
    if (uVar32 != 3) {
      plVar8 = (long *)*param_1;
      if ((undefined4 *)plVar8[3] == (undefined4 *)plVar8[4]) {
        uVar5 = (**(code **)(*plVar8 + 0x48))();
      }
      else {
        uVar5 = *(undefined4 *)plVar8[3];
      }
      uVar14 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar5);
      if ((uVar14 & 1) != 0) {
        plVar8 = (long *)*param_1;
        pwVar31 = (wchar_t *)plVar8[3];
        if (pwVar31 == (wchar_t *)plVar8[4]) {
          wVar6 = (**(code **)(*plVar8 + 0x50))();
        }
        else {
          plVar8[3] = (long)(pwVar31 + 1);
          wVar6 = *pwVar31;
        }
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        push_back((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *)&local_288,wVar6);
LAB_0180ca78:
        do {
          plVar8 = (long *)*param_1;
          if (plVar8 == (long *)0x0) {
LAB_0180ca9c:
            bVar4 = true;
            if (param_2 == (long *)0x0) goto LAB_0180cae4;
LAB_0180cacc:
            if ((int *)param_2[3] == (int *)param_2[4]) {
              iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            else {
              iVar7 = *(int *)param_2[3];
            }
            if (iVar7 == -1) goto LAB_0180cae4;
            if (!bVar4) goto switchD_0180c5e4_default;
          }
          else {
            if ((int *)plVar8[3] == (int *)plVar8[4]) {
              iVar7 = (**(code **)(*plVar8 + 0x48))();
            }
            else {
              iVar7 = *(int *)plVar8[3];
            }
            if (iVar7 == -1) {
              *param_1 = 0;
              goto LAB_0180ca9c;
            }
            bVar4 = *param_1 == 0;
            if (param_2 != (long *)0x0) goto LAB_0180cacc;
LAB_0180cae4:
            param_2 = (long *)0x0;
            if (bVar4) goto switchD_0180c5e4_default;
          }
          plVar8 = (long *)*param_1;
          if ((undefined4 *)plVar8[3] == (undefined4 *)plVar8[4]) {
            uVar5 = (**(code **)(*plVar8 + 0x48))();
          }
          else {
            uVar5 = *(undefined4 *)plVar8[3];
          }
          uVar14 = (**(code **)(*param_8 + 0x18))(param_8,1,uVar5);
          if ((uVar14 & 1) == 0) goto switchD_0180c5e4_default;
          plVar8 = (long *)*param_1;
          pwVar31 = (wchar_t *)plVar8[3];
          if (pwVar31 == (wchar_t *)plVar8[4]) {
            wVar6 = (**(code **)(*plVar8 + 0x50))();
          }
          else {
            plVar8[3] = (long)(pwVar31 + 1);
            wVar6 = *pwVar31;
          }
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                     *)&local_288,wVar6);
        } while( true );
      }
      goto LAB_0180d5d0;
    }
    goto LAB_0180d38c;
  case (pattern)0x2:
    if ((1 < uVar32) && (local_2e8 == (ulong *)0x0)) {
      if (((param_5 >> 9 & 1) == 0) && (uVar32 != 2 || local_205 == '\0')) {
        local_2e8 = (ulong *)0x0;
        puVar18 = local_2e8;
        break;
      }
    }
    uVar14 = local_240 & 0xff;
    bVar20 = (byte)local_240._0_1_ & 1;
    piVar26 = piVar24;
    if ((local_240 & 1) != 0) {
      piVar26 = local_230;
    }
    piVar29 = piVar26;
    if ((uVar32 != 0) && ((byte)local_208[(int)uVar32 - 1] < 2)) {
      uVar12 = (ulong)((byte)local_240._0_1_ >> 1);
      if ((local_240 & 1) != 0) {
        uVar12 = local_238;
      }
      piVar35 = piVar26;
      if (uVar12 != 0) {
        do {
          uVar14 = (**(code **)(*param_8 + 0x18))(param_8,1,*piVar26);
          if ((uVar14 & 1) == 0) break;
          piVar26 = piVar26 + 1;
          uVar14 = (ulong)((byte)local_240._0_1_ >> 1);
          piVar29 = piVar24;
          if ((local_240 & 1) != 0) {
            uVar14 = local_238;
            piVar29 = local_230;
          }
        } while (piVar26 != piVar29 + uVar14);
        uVar14 = local_240 & 0xff;
        bVar20 = (byte)local_240._0_1_ & 1;
        piVar35 = piVar26;
      }
      piVar26 = piVar24;
      if (bVar20 != 0) {
        piVar26 = local_230;
      }
      uVar30 = local_288 >> 1 & 0x7f;
      uVar27 = (long)piVar35 - (long)piVar26 >> 2;
      uVar12 = uVar30;
      if ((local_288 & 1) != 0) {
        uVar12 = local_280;
      }
      piVar29 = piVar26;
      if (uVar27 <= uVar12) {
        if ((local_288 & 1) == 0) {
          pvVar28 = (void *)((long)&local_288 + uVar30 * 4 + 4);
        }
        else {
          pvVar28 = (void *)((long)local_278 + local_280 * 4);
        }
        pvVar10 = (void *)((long)pvVar28 + uVar27 * -4);
        piVar29 = piVar35;
        if (pvVar10 != pvVar28) {
          lVar13 = 0;
          do {
            piVar29 = piVar26;
            if (*(int *)((long)pvVar10 + lVar13) != *(int *)((long)piVar26 + lVar13)) break;
            lVar13 = lVar13 + 4;
            piVar29 = piVar35;
          } while ((long)pvVar28 - (long)pvVar10 != lVar13);
        }
      }
    }
    uVar14 = uVar14 >> 1;
    if (bVar20 != 0) {
      uVar14 = local_238;
    }
    if (piVar26 + uVar14 != piVar29) {
      do {
        plVar8 = (long *)*param_1;
        if (plVar8 == (long *)0x0) {
LAB_0180d0f0:
          bVar4 = true;
          if (param_2 == (long *)0x0) goto LAB_0180d138;
LAB_0180d120:
          if ((int *)param_2[3] == (int *)param_2[4]) {
            iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          else {
            iVar7 = *(int *)param_2[3];
          }
          if (iVar7 == -1) goto LAB_0180d138;
          if (!bVar4) break;
        }
        else {
          if ((int *)plVar8[3] == (int *)plVar8[4]) {
            iVar7 = (**(code **)(*plVar8 + 0x48))();
          }
          else {
            iVar7 = *(int *)plVar8[3];
          }
          if (iVar7 == -1) {
            *param_1 = 0;
            goto LAB_0180d0f0;
          }
          bVar4 = *param_1 == 0;
          if (param_2 != (long *)0x0) goto LAB_0180d120;
LAB_0180d138:
          param_2 = (long *)0x0;
          if (bVar4) break;
        }
        plVar8 = (long *)*param_1;
        if ((int *)plVar8[3] == (int *)plVar8[4]) {
          iVar7 = (**(code **)(*plVar8 + 0x48))();
        }
        else {
          iVar7 = *(int *)plVar8[3];
        }
        if (iVar7 != *piVar29) break;
        plVar8 = (long *)*param_1;
        if (plVar8[3] == plVar8[4]) {
          (**(code **)(*plVar8 + 0x50))();
        }
        else {
          plVar8[3] = plVar8[3] + 4;
        }
        piVar29 = piVar29 + 1;
        uVar14 = local_240 >> 1 & 0x7f;
        piVar26 = piVar24;
        if ((local_240 & 1) != 0) {
          uVar14 = local_238;
          piVar26 = local_230;
        }
      } while (piVar29 != piVar26 + uVar14);
    }
    if ((param_5 >> 9 & 1) == 0) break;
    uVar14 = local_240 >> 1 & 0x7f;
    piVar26 = piVar24;
    if ((local_240 & 1) != 0) {
      uVar14 = local_238;
      piVar26 = local_230;
    }
    if (piVar29 != piVar26 + uVar14) goto LAB_0180d5d0;
    break;
  case (pattern)0x3:
    uVar12 = local_258 & 0xff;
    uVar14 = (ulong)((byte)local_258._0_1_ >> 1);
    if ((local_258 & 1) != 0) {
      uVar14 = local_250;
    }
    uVar27 = (ulong)((byte)local_270._0_1_ >> 1);
    if ((local_270 & 1) != 0) {
      uVar27 = local_268;
    }
    if (uVar14 + uVar27 != 0) {
      if (uVar14 == 0) {
        plVar8 = (long *)*param_1;
        if ((int *)plVar8[3] == (int *)plVar8[4]) {
          iVar7 = (**(code **)(*plVar8 + 0x48))();
        }
        else {
          iVar7 = *(int *)plVar8[3];
        }
        piVar26 = piVar25;
        if (((byte)local_270._0_1_ & 1) != 0) {
          piVar26 = local_260;
        }
        if (iVar7 != *piVar26) break;
        plVar8 = (long *)*param_1;
        if (plVar8[3] == plVar8[4]) {
          (**(code **)(*plVar8 + 0x50))();
          bVar2 = local_270._0_1_;
        }
        else {
          plVar8[3] = plVar8[3] + 4;
          bVar2 = local_270._0_1_;
        }
LAB_0180d328:
        *param_7 = 1;
        uVar14 = (ulong)((byte)bVar2 >> 1);
        if (((byte)bVar2 & 1) != 0) {
          uVar14 = local_268;
        }
        puVar18 = &local_270;
      }
      else {
        plVar8 = (long *)*param_1;
        bVar20 = (byte)local_258._0_1_ & 1;
        plVar11 = plVar8 + 3;
        piVar26 = (int *)*plVar11;
        piVar29 = (int *)plVar8[4];
        if (uVar27 == 0) {
          if (piVar26 == piVar29) {
            iVar7 = (**(code **)(*plVar8 + 0x48))();
            uVar12 = local_258 & 0xff;
            bVar20 = (byte)local_258._0_1_ & 1;
          }
          else {
            iVar7 = *piVar26;
          }
          piVar26 = (int *)((ulong)&local_258 | 4);
          if (bVar20 != 0) {
            piVar26 = local_248;
          }
          if (iVar7 != *piVar26) {
            *param_7 = 1;
            break;
          }
          plVar8 = (long *)*param_1;
          if (plVar8[3] == plVar8[4]) {
            (**(code **)(*plVar8 + 0x50))();
            goto LAB_0180d354;
          }
          plVar8[3] = plVar8[3] + 4;
        }
        else {
          if (piVar26 == piVar29) {
            iVar7 = (**(code **)(*plVar8 + 0x48))();
            plVar8 = (long *)*param_1;
            uVar12 = local_258 & 0xff;
            plVar11 = plVar8 + 3;
            piVar26 = (int *)*plVar11;
            piVar29 = (int *)plVar8[4];
            bVar20 = (byte)local_258._0_1_ & 1;
          }
          else {
            iVar7 = *piVar26;
          }
          piVar35 = (int *)((ulong)&local_258 | 4);
          if (bVar20 != 0) {
            piVar35 = local_248;
          }
          if (iVar7 != *piVar35) {
            if (piVar26 == piVar29) {
              iVar7 = (**(code **)(*plVar8 + 0x48))();
            }
            else {
              iVar7 = *piVar26;
            }
            piVar26 = piVar25;
            if ((local_270 & 1) != 0) {
              piVar26 = local_260;
            }
            if (iVar7 == *piVar26) {
              plVar8 = (long *)*param_1;
              if (plVar8[3] == plVar8[4]) {
                (**(code **)(*plVar8 + 0x50))();
                bVar2 = local_270._0_1_;
              }
              else {
                plVar8[3] = plVar8[3] + 4;
                bVar2 = local_270._0_1_;
              }
              goto LAB_0180d328;
            }
            goto LAB_0180d5d0;
          }
          if (piVar26 == piVar29) {
            (**(code **)(*plVar8 + 0x50))();
LAB_0180d354:
            uVar12 = local_258 & 0xff;
            bVar20 = (byte)local_258._0_1_ & 1;
          }
          else {
            *plVar11 = (long)(piVar26 + 1);
          }
        }
        uVar14 = uVar12 >> 1;
        if (bVar20 != 0) {
          uVar14 = local_250;
        }
        puVar18 = &local_258;
      }
      if (uVar14 < 2) {
        puVar18 = local_2e8;
      }
    }
    break;
  case (pattern)0x4:
    uVar16 = 0;
LAB_0180c604:
    plVar8 = (long *)*param_1;
    if (plVar8 == (long *)0x0) {
LAB_0180c628:
      bVar4 = true;
      if (param_2 == (long *)0x0) goto LAB_0180c670;
LAB_0180c658:
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
        if (iVar7 != -1) goto LAB_0180c694;
        goto LAB_0180c670;
      }
      if (*(int *)param_2[3] == -1) goto LAB_0180c670;
LAB_0180c694:
      if (!bVar4) goto LAB_0180c948;
    }
    else {
      if ((int *)plVar8[3] == (int *)plVar8[4]) {
        iVar7 = (**(code **)(*plVar8 + 0x48))();
      }
      else {
        iVar7 = *(int *)plVar8[3];
      }
      if (iVar7 == -1) {
        *param_1 = 0;
        goto LAB_0180c628;
      }
      bVar4 = *param_1 == 0;
      if (param_2 != (long *)0x0) goto LAB_0180c658;
LAB_0180c670:
      param_2 = (long *)0x0;
      if (bVar4) goto LAB_0180c948;
    }
    plVar8 = (long *)*param_1;
    if ((wchar_t *)plVar8[3] == (wchar_t *)plVar8[4]) {
      wVar6 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      wVar6 = *(wchar_t *)plVar8[3];
    }
    uVar14 = (**(code **)(*param_8 + 0x18))(param_8,0x40,wVar6);
    puVar9 = puVar34;
    if ((uVar14 & 1) == 0) {
      uVar14 = local_228 >> 1 & 0x7f;
      if ((local_228 & 1) != 0) {
        uVar14 = local_220;
      }
      if (((wVar6 != local_210) || (uVar16 == 0)) || (uVar14 == 0)) goto LAB_0180c948;
      if (puVar33 == local_2b0) {
        if ((ulong)((long)local_2b0 - (long)puVar34) < 0x7fffffffffffffff) {
          uVar12 = ((long)local_2b0 - (long)puVar34) * 2;
          uVar14 = 4;
          if (uVar12 != 0) {
            uVar14 = uVar12;
          }
        }
        else {
          uVar14 = 0xffffffffffffffff;
        }
        puVar9 = (uint *)0x0;
        if (pcVar36 != __do_nothing) {
          puVar9 = puVar34;
        }
        puVar9 = realloc(puVar9,uVar14);
        if (puVar9 == (uint *)0x0) {
          __throw_bad_alloc();
          goto LAB_0180d6a8;
        }
        puVar33 = (uint *)((long)puVar9 + ((long)puVar33 - (long)puVar34));
        local_2b0 = (uint *)((long)puVar9 + (uVar14 & 0xfffffffffffffffc));
        pcVar36 = free;
      }
      puVar34 = puVar33 + 1;
      *puVar33 = uVar16;
      uVar16 = 0;
    }
    else {
      pwVar31 = (wchar_t *)*param_10;
      if (pwVar31 == local_2a8) {
        pvVar28 = (void *)*param_9;
        pcVar1 = (code *)param_9[1];
        if ((ulong)((long)local_2a8 - (long)pvVar28) < 0x7fffffffffffffff) {
          uVar12 = ((long)local_2a8 - (long)pvVar28) * 2;
          uVar14 = 4;
          if (uVar12 != 0) {
            uVar14 = uVar12;
          }
        }
        else {
          uVar14 = 0xffffffffffffffff;
        }
        pvVar10 = pvVar28;
        if (pcVar1 == __do_nothing) {
          pvVar10 = (void *)0x0;
        }
        pvVar10 = realloc(pvVar10,uVar14);
        if (pvVar10 == (void *)0x0) {
LAB_0180d6a8:
          __throw_bad_alloc();
          goto LAB_0180d6ac;
        }
        if (pcVar1 == __do_nothing) {
          lVar13 = *param_9;
          *param_9 = (long)pvVar10;
          if (lVar13 != 0) {
            (*(code *)param_9[1])(lVar13);
            pvVar10 = (void *)*param_9;
          }
        }
        else {
          *param_9 = (long)pvVar10;
        }
        pwVar31 = (wchar_t *)((long)pvVar10 + ((long)pwVar31 - (long)pvVar28 >> 2) * 4);
        param_9[1] = (long)free;
        *param_10 = (long)pwVar31;
        local_2a8 = (wchar_t *)(*param_9 + (uVar14 & 0xfffffffffffffffc));
      }
      *param_10 = (long)(pwVar31 + 1);
      *pwVar31 = wVar6;
      uVar16 = uVar16 + 1;
      puVar34 = puVar33;
    }
    plVar8 = (long *)*param_1;
    puVar33 = puVar34;
    puVar34 = puVar9;
    if (plVar8[3] == plVar8[4]) {
      (**(code **)(*plVar8 + 0x50))();
    }
    else {
      plVar8[3] = plVar8[3] + 4;
    }
    goto LAB_0180c604;
  }
switchD_0180c5e4_default:
  local_2e8 = puVar18;
  uVar32 = uVar32 + 1;
  if (3 < uVar32) goto LAB_0180d38c;
  goto LAB_0180c528;
LAB_0180c948:
  if ((puVar34 != puVar33) && (uVar16 != 0)) {
    puVar9 = puVar34;
    if (puVar33 == local_2b0) {
      if ((ulong)((long)local_2b0 - (long)puVar34) < 0x7fffffffffffffff) {
        uVar12 = ((long)local_2b0 - (long)puVar34) * 2;
        uVar14 = 4;
        if (uVar12 != 0) {
          uVar14 = uVar12;
        }
      }
      else {
        uVar14 = 0xffffffffffffffff;
      }
      puVar9 = (uint *)0x0;
      if (pcVar36 != __do_nothing) {
        puVar9 = puVar34;
      }
      puVar9 = realloc(puVar9,uVar14);
      if (puVar9 == (uint *)0x0) {
LAB_0180d6ac:
        __throw_bad_alloc();
LAB_0180d6b4:
        __throw_bad_alloc();
        goto LAB_0180d6b8;
      }
      puVar33 = (uint *)((long)puVar9 + ((long)puVar33 - (long)puVar34));
      local_2b0 = (uint *)((long)puVar9 + (uVar14 & 0xfffffffffffffffc));
      pcVar36 = free;
    }
    *puVar33 = uVar16;
    puVar33 = puVar33 + 1;
    puVar34 = puVar9;
  }
  if (local_28c < 1) {
LAB_0180cf48:
    if (*param_10 == *param_9) goto LAB_0180d5d0;
    goto switchD_0180c5e4_default;
  }
  plVar8 = (long *)*param_1;
  if (plVar8 != (long *)0x0) {
    if ((int *)plVar8[3] == (int *)plVar8[4]) {
      iVar7 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      iVar7 = *(int *)plVar8[3];
    }
    if (iVar7 != -1) {
      bVar4 = *param_1 == 0;
      goto joined_r0x0180cc28;
    }
    *param_1 = 0;
  }
  bVar4 = true;
joined_r0x0180cc28:
  if (param_2 == (long *)0x0) {
    if (bVar4) goto LAB_0180d5d0;
    plVar8 = (long *)0x0;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    plVar8 = (long *)0x0;
    if (iVar7 != -1) {
      plVar8 = param_2;
    }
    if (!(bool)(bVar4 ^ iVar7 == -1)) goto LAB_0180d5d0;
  }
  plVar11 = (long *)*param_1;
  if ((wchar_t *)plVar11[3] == (wchar_t *)plVar11[4]) {
    wVar6 = (**(code **)(*plVar11 + 0x48))();
  }
  else {
    wVar6 = *(wchar_t *)plVar11[3];
  }
  if (wVar6 == local_20c) {
    plVar11 = (long *)*param_1;
    param_2 = plVar8;
    if (plVar11[3] == plVar11[4]) {
      (**(code **)(*plVar11 + 0x50))();
    }
    else {
      plVar11[3] = plVar11[3] + 4;
    }
joined_r0x0180ccf8:
    plVar8 = param_2;
    if (0 < local_28c) {
      do {
        plVar11 = (long *)*param_1;
        if (plVar11 == (long *)0x0) {
LAB_0180cd20:
          bVar4 = true;
          if (plVar8 == (long *)0x0) goto LAB_0180cd60;
LAB_0180cd28:
          if ((int *)plVar8[3] == (int *)plVar8[4]) {
            iVar7 = (**(code **)(*plVar8 + 0x48))(plVar8);
          }
          else {
            iVar7 = *(int *)plVar8[3];
          }
          param_2 = (long *)0x0;
          if (iVar7 != -1) {
            param_2 = plVar8;
          }
          if (!(bool)(bVar4 ^ iVar7 == -1)) goto LAB_0180d5d0;
        }
        else {
          if ((int *)plVar11[3] == (int *)plVar11[4]) {
            iVar7 = (**(code **)(*plVar11 + 0x48))();
          }
          else {
            iVar7 = *(int *)plVar11[3];
          }
          if (iVar7 == -1) {
            *param_1 = 0;
            goto LAB_0180cd20;
          }
          bVar4 = *param_1 == 0;
          if (plVar8 != (long *)0x0) goto LAB_0180cd28;
LAB_0180cd60:
          if (bVar4) goto LAB_0180d5d0;
          param_2 = (long *)0x0;
        }
        plVar8 = (long *)*param_1;
        if ((undefined4 *)plVar8[3] == (undefined4 *)plVar8[4]) {
          uVar5 = (**(code **)(*plVar8 + 0x48))();
        }
        else {
          uVar5 = *(undefined4 *)plVar8[3];
        }
        uVar14 = (**(code **)(*param_8 + 0x18))(param_8,0x40,uVar5);
        if ((uVar14 & 1) == 0) goto LAB_0180d5d0;
        pwVar31 = (wchar_t *)*param_10;
        if (pwVar31 == local_2a8) {
          pvVar28 = (void *)*param_9;
          pcVar1 = (code *)param_9[1];
          if ((ulong)((long)local_2a8 - (long)pvVar28) < 0x7fffffffffffffff) {
            uVar12 = ((long)local_2a8 - (long)pvVar28) * 2;
            uVar14 = 4;
            if (uVar12 != 0) {
              uVar14 = uVar12;
            }
          }
          else {
            uVar14 = 0xffffffffffffffff;
          }
          pvVar10 = pvVar28;
          if (pcVar1 == __do_nothing) {
            pvVar10 = (void *)0x0;
          }
          pvVar10 = realloc(pvVar10,uVar14);
          if (pvVar10 == (void *)0x0) goto LAB_0180d6b4;
          if (pcVar1 == __do_nothing) {
            lVar13 = *param_9;
            *param_9 = (long)pvVar10;
            if (lVar13 != 0) {
              (*(code *)param_9[1])(lVar13);
              pvVar10 = (void *)*param_9;
            }
          }
          else {
            *param_9 = (long)pvVar10;
          }
          pwVar31 = (wchar_t *)((long)pvVar10 + ((long)pwVar31 - (long)pvVar28 >> 2) * 4);
          param_9[1] = (long)free;
          *param_10 = (long)pwVar31;
          local_2a8 = (wchar_t *)(*param_9 + (uVar14 & 0xfffffffffffffffc));
        }
        plVar8 = (long *)*param_1;
        if ((wchar_t *)plVar8[3] == (wchar_t *)plVar8[4]) {
          wVar6 = (**(code **)(*plVar8 + 0x48))();
          pwVar31 = (wchar_t *)*param_10;
        }
        else {
          wVar6 = *(wchar_t *)plVar8[3];
        }
        *param_10 = (long)(pwVar31 + 1);
        *pwVar31 = wVar6;
        local_28c = local_28c + -1;
        plVar8 = (long *)*param_1;
        if (plVar8[3] == plVar8[4]) goto LAB_0180cf30;
        plVar8[3] = plVar8[3] + 4;
        plVar8 = param_2;
        if (local_28c < 1) break;
      } while( true );
    }
    goto LAB_0180cf48;
  }
  goto LAB_0180d5d0;
LAB_0180cf30:
  (**(code **)(*plVar8 + 0x50))();
  goto joined_r0x0180ccf8;
LAB_0180d38c:
  if (local_2e8 != (ulong *)0x0) {
    uVar32 = 1;
LAB_0180d3ac:
    if (((byte)*local_2e8 & 1) == 0) {
      uVar14 = (ulong)(byte)((byte)*local_2e8 >> 1);
    }
    else {
      uVar14 = local_2e8[1];
    }
    if (uVar14 <= uVar32) goto LAB_0180d4d0;
    plVar8 = (long *)*param_1;
    if (plVar8 == (long *)0x0) {
LAB_0180d3e8:
      bVar4 = true;
      if (param_2 == (long *)0x0) goto LAB_0180d438;
LAB_0180d3f0:
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        iVar7 = *(int *)param_2[3];
      }
      plVar8 = (long *)0x0;
      if (iVar7 != -1) {
        plVar8 = param_2;
      }
      if (!(bool)(bVar4 ^ iVar7 == -1)) goto LAB_0180d5d0;
    }
    else {
      if ((int *)plVar8[3] == (int *)plVar8[4]) {
        iVar7 = (**(code **)(*plVar8 + 0x48))();
      }
      else {
        iVar7 = *(int *)plVar8[3];
      }
      if (iVar7 == -1) {
        *param_1 = 0;
        goto LAB_0180d3e8;
      }
      bVar4 = *param_1 == 0;
      if (param_2 != (long *)0x0) goto LAB_0180d3f0;
LAB_0180d438:
      if (bVar4) goto LAB_0180d5d0;
      plVar8 = (long *)0x0;
    }
    plVar11 = (long *)*param_1;
    if ((int *)plVar11[3] == (int *)plVar11[4]) {
      iVar7 = (**(code **)(*plVar11 + 0x48))();
    }
    else {
      iVar7 = *(int *)plVar11[3];
    }
    pbVar15 = (byte *)((long)local_2e8 + 4);
    if ((*local_2e8 & 1) != 0) {
      pbVar15 = (byte *)local_2e8[2];
    }
    if (iVar7 != *(int *)(pbVar15 + uVar32 * 4)) goto LAB_0180d5d0;
    plVar11 = (long *)*param_1;
    uVar32 = (ulong)((int)uVar32 + 1);
    param_2 = plVar8;
    if (plVar11[3] == plVar11[4]) {
      (**(code **)(*plVar11 + 0x50))();
    }
    else {
      plVar11[3] = plVar11[3] + 4;
    }
    goto LAB_0180d3ac;
  }
LAB_0180d4d0:
  if (puVar34 != puVar33) {
    uVar32 = (ulong)((byte)local_228._0_1_ >> 1);
    if ((local_228 & 1) != 0) {
      uVar32 = local_220;
    }
    if (uVar32 != 0) {
      puVar33 = puVar33 + -1;
      puVar21 = puVar33;
      puVar9 = puVar34;
      if (puVar34 < puVar33) {
        do {
          puVar19 = puVar9 + 1;
          uVar16 = *puVar9;
          *puVar9 = *puVar21;
          puVar22 = puVar21 + -1;
          *puVar21 = uVar16;
          puVar21 = puVar22;
          puVar9 = puVar19;
        } while (puVar19 < puVar22);
      }
      pbVar15 = (byte *)((ulong)&local_228 | 1);
      if ((local_228 & 1) != 0) {
        pbVar15 = local_218;
      }
      uVar16 = (uint)*pbVar15;
      bVar4 = 1 < (byte)(*pbVar15 + 1);
      if (puVar34 < puVar33) {
        pbVar23 = pbVar15;
        puVar9 = puVar34;
        uVar32 = (ulong)((byte)local_228._0_1_ >> 1);
        if ((local_228 & 1) != 0) {
          uVar32 = local_220;
        }
        do {
          if ((bVar4) && (*puVar9 != uVar16)) goto LAB_0180d5d0;
          if (1 < (long)(pbVar15 + (uVar32 - (long)pbVar23))) {
            pbVar23 = pbVar23 + 1;
          }
          uVar16 = (uint)*pbVar23;
          puVar9 = puVar9 + 1;
          bVar4 = 1 < (uVar16 + 1 & 0xff);
        } while (puVar9 < puVar33);
      }
      if ((bVar4) && (uVar16 <= *puVar33 - 1)) {
LAB_0180d5d0:
        uVar5 = 0;
        *param_6 = *param_6 | 4;
        goto joined_r0x0180d5c8;
      }
    }
  }
  uVar5 = 1;
joined_r0x0180d5c8:
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
  if (puVar34 != (uint *)0x0) {
    (*pcVar36)(puVar34);
  }
  if (*(long *)(lVar3 + 0x28) == lVar17) {
    return uVar5;
  }
LAB_0180d6b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

