
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
  char *pcVar2;
  void *pvVar3;
  code *pcVar4;
  basic_string bVar5;
  long lVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  uint *puVar10;
  void *pvVar11;
  ulong uVar12;
  size_t sVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  ulong *puVar18;
  uint *puVar19;
  char *pcVar20;
  uint *puVar21;
  uint *puVar22;
  char *pcVar23;
  bool bVar24;
  byte *pbVar25;
  byte *pbVar26;
  long *plVar27;
  char *pcVar28;
  byte *pbVar29;
  uint *puVar30;
  ulong uVar31;
  byte *pbVar32;
  byte *pbVar33;
  undefined4 uVar34;
  byte *pbVar35;
  uint *puVar36;
  ulong uVar37;
  long *plVar38;
  code *pcVar39;
  ulong *local_2e0;
  uint *local_2a8;
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
  byte *local_218;
  byte local_210 [4];
  byte local_20c [4];
  pattern local_208 [3];
  char local_205;
  uint local_204 [101];
  uint auStack_70 [4];
  
  lVar6 = tpidr_el0;
  lVar17 = *(long *)(lVar6 + 0x28);
  local_228 = 0;
  local_220 = 0;
  local_218 = (byte *)0x0;
  local_240 = 0;
  local_238 = 0;
  local_230 = (byte *)0x0;
  local_258 = 0;
  local_250 = 0;
  local_248 = (char *)0x0;
  local_270 = 0;
  local_268 = 0;
  local_260 = (char *)0x0;
  local_288 = 0;
  local_280 = 0;
  local_278 = (void *)0x0;
  __money_get<char>::__gather_info
            ((bool)(param_3 & 1),param_4,local_208,(char *)local_20c,(char *)local_210,
             (basic_string *)&local_228,(basic_string *)&local_240,(basic_string *)&local_258,
             (basic_string *)&local_270,&local_28c);
  pcVar20 = (char *)((ulong)&local_270 | 1);
  local_2e0 = (ulong *)0x0;
  pcVar39 = __do_nothing;
  pbVar35 = (byte *)((ulong)&local_240 | 1);
  puVar10 = local_204 + 1;
  uVar37 = 0;
  local_2a8 = auStack_70;
  puVar36 = local_204 + 1;
  *param_10 = *param_9;
LAB_0180a894:
  plVar38 = (long *)*param_1;
  if ((plVar38 == (long *)0x0) || (plVar38[3] != plVar38[4])) {
joined_r0x0180a8a8:
    if (param_2 == (long *)0x0) goto LAB_0180a8f8;
LAB_0180a8ac:
    if ((param_2[3] == param_2[4]) && (iVar9 = (**(code **)(*param_2 + 0x48))(param_2), iVar9 == -1)
       ) goto LAB_0180a8f8;
    if (plVar38 != (long *)0x0) goto LAB_0180b628;
  }
  else {
    iVar9 = (**(code **)(*plVar38 + 0x48))(plVar38);
    if (iVar9 == -1) {
      plVar38 = (long *)0x0;
      *param_1 = 0;
      goto joined_r0x0180a8a8;
    }
    plVar38 = (long *)*param_1;
    if (param_2 != (long *)0x0) goto LAB_0180a8ac;
LAB_0180a8f8:
    param_2 = (long *)0x0;
    if (plVar38 == (long *)0x0) goto LAB_0180b628;
  }
  puVar18 = local_2e0;
  switch(local_208[uVar37]) {
  case (pattern)0x0:
    if (uVar37 != 3) goto LAB_0180adac;
    goto LAB_0180b628;
  case (pattern)0x1:
    if (uVar37 != 3) {
      plVar38 = (long *)*param_1;
      if ((byte *)plVar38[3] == (byte *)plVar38[4]) {
        bVar8 = (**(code **)(*plVar38 + 0x48))();
      }
      else {
        bVar8 = *(byte *)plVar38[3];
      }
      if ((-1 < (char)bVar8) &&
         ((*(ulong *)(*(long *)(param_8 + 0x10) + (ulong)bVar8 * 8) & 1) != 0)) {
        plVar38 = (long *)*param_1;
        pcVar23 = (char *)plVar38[3];
        if (pcVar23 == (char *)plVar38[4]) {
          cVar7 = (**(code **)(*plVar38 + 0x50))();
        }
        else {
          plVar38[3] = (long)(pcVar23 + 1);
          cVar7 = *pcVar23;
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_288,cVar7);
LAB_0180adac:
        do {
          plVar38 = (long *)*param_1;
          if ((plVar38 == (long *)0x0) || (plVar38[3] != plVar38[4])) {
joined_r0x0180adc0:
            if (param_2 == (long *)0x0) goto LAB_0180ae10;
LAB_0180adc4:
            if ((param_2[3] == param_2[4]) &&
               (iVar9 = (**(code **)(*param_2 + 0x48))(param_2), iVar9 == -1)) goto LAB_0180ae10;
            if (plVar38 != (long *)0x0) goto switchD_0180a924_default;
          }
          else {
            iVar9 = (**(code **)(*plVar38 + 0x48))(plVar38);
            if (iVar9 == -1) {
              plVar38 = (long *)0x0;
              *param_1 = 0;
              goto joined_r0x0180adc0;
            }
            plVar38 = (long *)*param_1;
            if (param_2 != (long *)0x0) goto LAB_0180adc4;
LAB_0180ae10:
            param_2 = (long *)0x0;
            if (plVar38 == (long *)0x0) goto switchD_0180a924_default;
          }
          plVar38 = (long *)*param_1;
          if ((byte *)plVar38[3] == (byte *)plVar38[4]) {
            bVar8 = (**(code **)(*plVar38 + 0x48))();
          }
          else {
            bVar8 = *(byte *)plVar38[3];
          }
          if (((char)bVar8 < '\0') ||
             ((*(ulong *)(*(long *)(param_8 + 0x10) + (ulong)bVar8 * 8) & 1) == 0))
          goto switchD_0180a924_default;
          plVar38 = (long *)*param_1;
          pcVar23 = (char *)plVar38[3];
          if (pcVar23 == (char *)plVar38[4]) {
            cVar7 = (**(code **)(*plVar38 + 0x50))();
          }
          else {
            plVar38[3] = (long)(pcVar23 + 1);
            cVar7 = *pcVar23;
          }
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_288,cVar7);
        } while( true );
      }
      goto LAB_0180b868;
    }
    goto LAB_0180b628;
  case (pattern)0x2:
    if ((1 < uVar37) && (local_2e0 == (ulong *)0x0)) {
      if (((param_5 >> 9 & 1) == 0) && (uVar37 != 2 || local_205 == '\0')) {
        local_2e0 = (ulong *)0x0;
        puVar18 = local_2e0;
        break;
      }
    }
    pbVar33 = pbVar35;
    if ((local_240 & 1) != 0) {
      pbVar33 = local_230;
    }
    pbVar32 = pbVar33;
    if ((uVar37 != 0) && ((byte)local_208[(int)uVar37 - 1] < 2)) {
      uVar15 = (ulong)((byte)local_240._0_1_ >> 1);
      if ((local_240 & 1) != 0) {
        uVar15 = local_238;
      }
      pbVar25 = pbVar33;
      if (((uVar15 != 0) && (-1 < (char)*pbVar33)) &&
         ((*(ulong *)(*(long *)(param_8 + 0x10) + (ulong)*pbVar33 * 8) & 1) != 0)) {
        pbVar1 = pbVar33 + uVar15;
        pbVar26 = pbVar33;
        while (uVar15 = uVar15 - 1, pbVar25 = pbVar1, uVar15 != 0) {
          pbVar25 = pbVar26 + 1;
          if (((char)*pbVar25 < '\0') ||
             (pbVar26 = pbVar25,
             (*(ulong *)(*(long *)(param_8 + 0x10) + (ulong)*pbVar25 * 8) & 1) == 0)) break;
        }
      }
      uVar12 = (long)pbVar25 - (long)pbVar33;
      uVar31 = local_288 >> 1 & 0x7f;
      uVar15 = uVar31;
      if ((local_288 & 1) != 0) {
        uVar15 = local_280;
      }
      if (uVar12 <= uVar15) {
        pbVar1 = (byte *)((long)local_278 + local_280);
        if ((local_288 & 1) == 0) {
          pbVar1 = (byte *)((long)&local_288 + uVar31 + 1);
        }
        pbVar32 = pbVar25;
        if (uVar12 != 0) {
          pbVar26 = pbVar1 + -uVar12;
          pbVar29 = pbVar33;
          do {
            pbVar32 = pbVar33;
            if (*pbVar26 != *pbVar29) break;
            pbVar26 = pbVar26 + 1;
            pbVar29 = pbVar29 + 1;
            pbVar32 = pbVar25;
          } while (pbVar1 != pbVar26);
        }
      }
    }
    uVar15 = (ulong)((byte)local_240._0_1_ >> 1);
    if ((local_240 & 1) != 0) {
      uVar15 = local_238;
    }
    if (pbVar33 + uVar15 != pbVar32) {
      do {
        plVar38 = (long *)*param_1;
        if ((plVar38 == (long *)0x0) || (plVar38[3] != plVar38[4])) {
joined_r0x0180af7c:
          if (param_2 == (long *)0x0) goto LAB_0180afcc;
LAB_0180af80:
          if ((param_2[3] == param_2[4]) &&
             (iVar9 = (**(code **)(*param_2 + 0x48))(param_2), iVar9 == -1)) goto LAB_0180afcc;
          if (plVar38 != (long *)0x0) break;
        }
        else {
          iVar9 = (**(code **)(*plVar38 + 0x48))(plVar38);
          if (iVar9 == -1) {
            plVar38 = (long *)0x0;
            *param_1 = 0;
            goto joined_r0x0180af7c;
          }
          plVar38 = (long *)*param_1;
          if (param_2 != (long *)0x0) goto LAB_0180af80;
LAB_0180afcc:
          param_2 = (long *)0x0;
          if (plVar38 == (long *)0x0) break;
        }
        plVar38 = (long *)*param_1;
        if ((byte *)plVar38[3] == (byte *)plVar38[4]) {
          bVar8 = (**(code **)(*plVar38 + 0x48))();
        }
        else {
          bVar8 = *(byte *)plVar38[3];
        }
        if (*pbVar32 != bVar8) break;
        plVar38 = (long *)*param_1;
        if (plVar38[3] == plVar38[4]) {
          (**(code **)(*plVar38 + 0x50))();
        }
        else {
          plVar38[3] = plVar38[3] + 1;
        }
        pbVar32 = pbVar32 + 1;
        uVar15 = local_240 >> 1 & 0x7f;
        pbVar33 = pbVar35;
        if ((local_240 & 1) != 0) {
          uVar15 = local_238;
          pbVar33 = local_230;
        }
      } while (pbVar32 != pbVar33 + uVar15);
    }
    if ((param_5 >> 9 & 1) != 0) {
      uVar15 = local_240 >> 1 & 0x7f;
      pbVar33 = pbVar35;
      if ((local_240 & 1) != 0) {
        uVar15 = local_238;
        pbVar33 = local_230;
      }
      if (pbVar32 == pbVar33 + uVar15) break;
      goto LAB_0180b868;
    }
    break;
  case (pattern)0x3:
    uVar12 = local_258 & 0xff;
    uVar15 = (ulong)((byte)local_258._0_1_ >> 1);
    if ((local_258 & 1) != 0) {
      uVar15 = local_250;
    }
    uVar31 = (ulong)((byte)local_270._0_1_ >> 1);
    if ((local_270 & 1) != 0) {
      uVar31 = local_268;
    }
    if (uVar15 + uVar31 != 0) {
      if (uVar15 == 0) {
        plVar38 = (long *)*param_1;
        if ((char *)plVar38[3] == (char *)plVar38[4]) {
          cVar7 = (**(code **)(*plVar38 + 0x48))();
        }
        else {
          cVar7 = *(char *)plVar38[3];
        }
        pcVar23 = pcVar20;
        if (((byte)local_270._0_1_ & 1) != 0) {
          pcVar23 = local_260;
        }
        if (*pcVar23 != cVar7) break;
        plVar38 = (long *)*param_1;
        if (plVar38[3] == plVar38[4]) {
          (**(code **)(*plVar38 + 0x50))();
          bVar5 = local_270._0_1_;
        }
        else {
          plVar38[3] = plVar38[3] + 1;
          bVar5 = local_270._0_1_;
        }
LAB_0180b5c4:
        *param_7 = 1;
        uVar15 = (ulong)((byte)bVar5 >> 1);
        if (((byte)bVar5 & 1) != 0) {
          uVar15 = local_268;
        }
        puVar18 = &local_270;
      }
      else {
        plVar38 = (long *)*param_1;
        bVar8 = (byte)local_258._0_1_ & 1;
        plVar27 = plVar38 + 3;
        pcVar23 = (char *)*plVar27;
        pcVar28 = (char *)plVar38[4];
        if (uVar31 == 0) {
          if (pcVar23 == pcVar28) {
            cVar7 = (**(code **)(*plVar38 + 0x48))();
            uVar12 = local_258 & 0xff;
            bVar8 = (byte)local_258._0_1_ & 1;
          }
          else {
            cVar7 = *pcVar23;
          }
          pcVar23 = (char *)((ulong)&local_258 | 1);
          if (bVar8 != 0) {
            pcVar23 = local_248;
          }
          if (*pcVar23 != cVar7) {
            *param_7 = 1;
            break;
          }
          plVar38 = (long *)*param_1;
          if (plVar38[3] == plVar38[4]) {
            (**(code **)(*plVar38 + 0x50))();
            goto LAB_0180b5f0;
          }
          plVar38[3] = plVar38[3] + 1;
        }
        else {
          if (pcVar23 == pcVar28) {
            cVar7 = (**(code **)(*plVar38 + 0x48))();
            plVar38 = (long *)*param_1;
            uVar12 = local_258 & 0xff;
            plVar27 = plVar38 + 3;
            pcVar23 = (char *)*plVar27;
            pcVar28 = (char *)plVar38[4];
            bVar8 = (byte)local_258._0_1_ & 1;
          }
          else {
            cVar7 = *pcVar23;
          }
          pcVar2 = (char *)((ulong)&local_258 | 1);
          if (bVar8 != 0) {
            pcVar2 = local_248;
          }
          if (*pcVar2 != cVar7) {
            if (pcVar23 == pcVar28) {
              cVar7 = (**(code **)(*plVar38 + 0x48))();
            }
            else {
              cVar7 = *pcVar23;
            }
            pcVar23 = pcVar20;
            if ((local_270 & 1) != 0) {
              pcVar23 = local_260;
            }
            if (*pcVar23 == cVar7) {
              plVar38 = (long *)*param_1;
              if (plVar38[3] == plVar38[4]) {
                (**(code **)(*plVar38 + 0x50))();
                bVar5 = local_270._0_1_;
              }
              else {
                plVar38[3] = plVar38[3] + 1;
                bVar5 = local_270._0_1_;
              }
              goto LAB_0180b5c4;
            }
            goto LAB_0180b868;
          }
          if (pcVar23 == pcVar28) {
            (**(code **)(*plVar38 + 0x50))();
LAB_0180b5f0:
            uVar12 = local_258 & 0xff;
            bVar8 = (byte)local_258._0_1_ & 1;
          }
          else {
            *plVar27 = (long)(pcVar23 + 1);
          }
        }
        uVar15 = uVar12 >> 1;
        if (bVar8 != 0) {
          uVar15 = local_250;
        }
        puVar18 = &local_258;
      }
      if (uVar15 < 2) {
        puVar18 = local_2e0;
      }
    }
    break;
  case (pattern)0x4:
    uVar16 = 0;
    puVar21 = puVar10;
    puVar30 = puVar36;
LAB_0180a944:
    plVar38 = (long *)*param_1;
    if ((plVar38 == (long *)0x0) || (plVar38[3] != plVar38[4])) {
joined_r0x0180a958:
      if (param_2 == (long *)0x0) goto LAB_0180a9a8;
LAB_0180a95c:
      if ((param_2[3] == param_2[4]) &&
         (iVar9 = (**(code **)(*param_2 + 0x48))(param_2), iVar9 == -1)) goto LAB_0180a9a8;
      if (plVar38 != (long *)0x0) goto LAB_0180ac70;
    }
    else {
      iVar9 = (**(code **)(*plVar38 + 0x48))(plVar38);
      if (iVar9 == -1) {
        plVar38 = (long *)0x0;
        *param_1 = 0;
        goto joined_r0x0180a958;
      }
      plVar38 = (long *)*param_1;
      if (param_2 != (long *)0x0) goto LAB_0180a95c;
LAB_0180a9a8:
      param_2 = (long *)0x0;
      if (plVar38 == (long *)0x0) goto LAB_0180ac70;
    }
    plVar38 = (long *)*param_1;
    if ((byte *)plVar38[3] == (byte *)plVar38[4]) {
      bVar8 = (**(code **)(*plVar38 + 0x48))();
      if (-1 < (char)bVar8) goto LAB_0180a9e8;
LAB_0180a9fc:
      uVar15 = local_228 >> 1 & 0x7f;
      if ((local_228 & 1) != 0) {
        uVar15 = local_220;
      }
      if (((local_210[0] != bVar8) || (uVar16 == 0)) || (uVar15 == 0)) goto LAB_0180ac70;
      puVar10 = puVar21;
      if (puVar30 == local_2a8) {
        if ((ulong)((long)local_2a8 - (long)puVar21) < 0x7fffffffffffffff) {
          uVar12 = ((long)local_2a8 - (long)puVar21) * 2;
          uVar15 = 4;
          if (uVar12 != 0) {
            uVar15 = uVar12;
          }
        }
        else {
          uVar15 = 0xffffffffffffffff;
        }
        puVar10 = (uint *)0x0;
        if (pcVar39 != __do_nothing) {
          puVar10 = puVar21;
        }
        puVar10 = realloc(puVar10,uVar15);
        if (puVar10 == (uint *)0x0) {
          __throw_bad_alloc();
LAB_0180b93c:
          __throw_bad_alloc();
          goto LAB_0180b940;
        }
        puVar30 = (uint *)((long)puVar10 + ((long)puVar30 - (long)puVar21));
        local_2a8 = (uint *)((long)puVar10 + (uVar15 & 0xfffffffffffffffc));
        pcVar39 = free;
      }
      *puVar30 = uVar16;
      uVar16 = 0;
      puVar21 = puVar10;
      puVar30 = puVar30 + 1;
    }
    else {
      bVar8 = *(byte *)plVar38[3];
      if ((char)bVar8 < '\0') goto LAB_0180a9fc;
LAB_0180a9e8:
      if (((uint)*(undefined8 *)(*(long *)(param_8 + 0x10) + (ulong)bVar8 * 8) >> 6 & 1) == 0)
      goto LAB_0180a9fc;
      pbVar33 = (byte *)*param_10;
      if (pbVar33 == param_11) {
        pvVar3 = (void *)*param_9;
        pcVar4 = (code *)param_9[1];
        if ((ulong)((long)param_11 - (long)pvVar3) < 0x7fffffffffffffff) {
          sVar13 = ((long)param_11 - (long)pvVar3) * 2;
          if (sVar13 == 0) {
            sVar13 = 1;
          }
        }
        else {
          sVar13 = 0xffffffffffffffff;
        }
        pvVar11 = pvVar3;
        if (pcVar4 == __do_nothing) {
          pvVar11 = (void *)0x0;
        }
        pvVar11 = realloc(pvVar11,sVar13);
        if (pvVar11 != (void *)0x0) {
          if (pcVar4 == __do_nothing) {
            lVar14 = *param_9;
            *param_9 = (long)pvVar11;
            if (lVar14 != 0) {
              (*(code *)param_9[1])(lVar14);
              pvVar11 = (void *)*param_9;
            }
          }
          else {
            *param_9 = (long)pvVar11;
          }
          pbVar33 = (byte *)((long)pvVar11 + ((long)pbVar33 - (long)pvVar3));
          param_9[1] = (long)free;
          *param_10 = (long)pbVar33;
          param_11 = (byte *)(*param_9 + sVar13);
          goto LAB_0180ab7c;
        }
        goto LAB_0180b93c;
      }
LAB_0180ab7c:
      *param_10 = (long)(pbVar33 + 1);
      *pbVar33 = bVar8;
      uVar16 = uVar16 + 1;
    }
    plVar38 = (long *)*param_1;
    if (plVar38[3] == plVar38[4]) {
      (**(code **)(*plVar38 + 0x50))();
    }
    else {
      plVar38[3] = plVar38[3] + 1;
    }
    goto LAB_0180a944;
  }
  goto switchD_0180a924_default;
LAB_0180ac70:
  puVar10 = puVar21;
  puVar36 = puVar30;
  if ((puVar21 != puVar30) && (uVar16 != 0)) {
    if (puVar30 == local_2a8) {
      if ((ulong)((long)local_2a8 - (long)puVar21) < 0x7fffffffffffffff) {
        uVar12 = ((long)local_2a8 - (long)puVar21) * 2;
        uVar15 = 4;
        if (uVar12 != 0) {
          uVar15 = uVar12;
        }
      }
      else {
        uVar15 = 0xffffffffffffffff;
      }
      puVar10 = (uint *)0x0;
      if (pcVar39 != __do_nothing) {
        puVar10 = puVar21;
      }
      puVar10 = realloc(puVar10,uVar15);
      if (puVar10 == (uint *)0x0) {
LAB_0180b940:
        __throw_bad_alloc();
LAB_0180b94c:
        __throw_bad_alloc();
        goto LAB_0180b950;
      }
      puVar30 = (uint *)((long)puVar10 + ((long)puVar30 - (long)puVar21));
      local_2a8 = (uint *)((long)puVar10 + (uVar15 & 0xfffffffffffffffc));
      pcVar39 = free;
    }
    puVar36 = puVar30 + 1;
    *puVar30 = uVar16;
  }
  if (0 < local_28c) {
    plVar38 = (long *)*param_1;
    if ((plVar38 == (long *)0x0) || (plVar38[3] != plVar38[4])) {
joined_r0x0180b100:
      if (param_2 == (long *)0x0) goto LAB_0180b214;
LAB_0180b104:
      if ((param_2[3] == param_2[4]) &&
         (iVar9 = (**(code **)(*param_2 + 0x48))(param_2), iVar9 == -1)) goto LAB_0180b214;
      if (plVar38 != (long *)0x0) goto LAB_0180b868;
    }
    else {
      iVar9 = (**(code **)(*plVar38 + 0x48))(plVar38);
      if (iVar9 == -1) {
        plVar38 = (long *)0x0;
        *param_1 = 0;
        goto joined_r0x0180b100;
      }
      plVar38 = (long *)*param_1;
      if (param_2 != (long *)0x0) goto LAB_0180b104;
LAB_0180b214:
      if (plVar38 == (long *)0x0) goto LAB_0180b868;
      param_2 = (long *)0x0;
    }
    plVar38 = (long *)*param_1;
    if ((byte *)plVar38[3] == (byte *)plVar38[4]) {
      bVar8 = (**(code **)(*plVar38 + 0x48))();
    }
    else {
      bVar8 = *(byte *)plVar38[3];
    }
    if (local_20c[0] != bVar8) goto LAB_0180b868;
    plVar38 = (long *)*param_1;
    if (plVar38[3] == plVar38[4]) {
      (**(code **)(*plVar38 + 0x50))();
    }
    else {
      plVar38[3] = plVar38[3] + 1;
    }
    while (0 < local_28c) {
      plVar38 = (long *)*param_1;
      if ((plVar38 == (long *)0x0) || (plVar38[3] != plVar38[4])) {
joined_r0x0180b2b4:
        if (param_2 == (long *)0x0) goto LAB_0180b30c;
LAB_0180b2b8:
        if ((param_2[3] == param_2[4]) &&
           (iVar9 = (**(code **)(*param_2 + 0x48))(param_2), iVar9 == -1)) goto LAB_0180b30c;
        if (plVar38 != (long *)0x0) goto LAB_0180b868;
      }
      else {
        iVar9 = (**(code **)(*plVar38 + 0x48))(plVar38);
        if (iVar9 == -1) {
          plVar38 = (long *)0x0;
          *param_1 = 0;
          goto joined_r0x0180b2b4;
        }
        plVar38 = (long *)*param_1;
        if (param_2 != (long *)0x0) goto LAB_0180b2b8;
LAB_0180b30c:
        if (plVar38 == (long *)0x0) goto LAB_0180b868;
        param_2 = (long *)0x0;
      }
      plVar38 = (long *)*param_1;
      if ((byte *)plVar38[3] == (byte *)plVar38[4]) {
        bVar8 = (**(code **)(*plVar38 + 0x48))();
      }
      else {
        bVar8 = *(byte *)plVar38[3];
      }
      if (((char)bVar8 < '\0') ||
         (((uint)*(undefined8 *)(*(long *)(param_8 + 0x10) + (ulong)bVar8 * 8) >> 6 & 1) == 0))
      goto LAB_0180b868;
      pbVar33 = (byte *)*param_10;
      if (pbVar33 == param_11) {
        pvVar3 = (void *)*param_9;
        pcVar4 = (code *)param_9[1];
        if ((ulong)((long)param_11 - (long)pvVar3) < 0x7fffffffffffffff) {
          sVar13 = ((long)param_11 - (long)pvVar3) * 2;
          if (sVar13 == 0) {
            sVar13 = 1;
          }
        }
        else {
          sVar13 = 0xffffffffffffffff;
        }
        pvVar11 = pvVar3;
        if (pcVar4 == __do_nothing) {
          pvVar11 = (void *)0x0;
        }
        pvVar11 = realloc(pvVar11,sVar13);
        if (pvVar11 == (void *)0x0) goto LAB_0180b94c;
        if (pcVar4 == __do_nothing) {
          lVar14 = *param_9;
          *param_9 = (long)pvVar11;
          if (lVar14 != 0) {
            (*(code *)param_9[1])(lVar14);
            pvVar11 = (void *)*param_9;
          }
        }
        else {
          *param_9 = (long)pvVar11;
        }
        pbVar33 = (byte *)((long)pvVar11 + ((long)pbVar33 - (long)pvVar3));
        param_9[1] = (long)free;
        *param_10 = (long)pbVar33;
        param_11 = (byte *)(*param_9 + sVar13);
      }
      plVar38 = (long *)*param_1;
      if ((byte *)plVar38[3] == (byte *)plVar38[4]) {
        bVar8 = (**(code **)(*plVar38 + 0x48))();
        pbVar33 = (byte *)*param_10;
      }
      else {
        bVar8 = *(byte *)plVar38[3];
      }
      *param_10 = (long)(pbVar33 + 1);
      *pbVar33 = bVar8;
      local_28c = local_28c + -1;
      plVar38 = (long *)*param_1;
      if (plVar38[3] == plVar38[4]) {
        (**(code **)(*plVar38 + 0x50))();
      }
      else {
        plVar38[3] = plVar38[3] + 1;
      }
    }
  }
  if (*param_10 == *param_9) goto LAB_0180b868;
switchD_0180a924_default:
  local_2e0 = puVar18;
  uVar37 = uVar37 + 1;
  if (3 < uVar37) goto LAB_0180b628;
  goto LAB_0180a894;
LAB_0180b628:
  if (local_2e0 != (ulong *)0x0) {
    uVar37 = 1;
LAB_0180b64c:
    if (((byte)*local_2e0 & 1) == 0) {
      uVar15 = (ulong)(byte)((byte)*local_2e0 >> 1);
    }
    else {
      uVar15 = local_2e0[1];
    }
    if (uVar15 <= uVar37) goto LAB_0180b754;
    plVar38 = (long *)*param_1;
    if ((plVar38 == (long *)0x0) || (plVar38[3] != plVar38[4])) {
joined_r0x0180b678:
      if (param_2 == (long *)0x0) goto LAB_0180b6d8;
LAB_0180b67c:
      if ((param_2[3] == param_2[4]) &&
         (iVar9 = (**(code **)(*param_2 + 0x48))(param_2), iVar9 == -1)) goto LAB_0180b6d8;
      if (plVar38 != (long *)0x0) goto LAB_0180b868;
    }
    else {
      iVar9 = (**(code **)(*plVar38 + 0x48))(plVar38);
      if (iVar9 == -1) {
        plVar38 = (long *)0x0;
        *param_1 = 0;
        goto joined_r0x0180b678;
      }
      plVar38 = (long *)*param_1;
      if (param_2 != (long *)0x0) goto LAB_0180b67c;
LAB_0180b6d8:
      if (plVar38 == (long *)0x0) goto LAB_0180b868;
      param_2 = (long *)0x0;
    }
    plVar38 = (long *)*param_1;
    if ((byte *)plVar38[3] == (byte *)plVar38[4]) {
      bVar8 = (**(code **)(*plVar38 + 0x48))();
    }
    else {
      bVar8 = *(byte *)plVar38[3];
    }
    pbVar35 = (byte *)((long)local_2e0 + 1);
    if ((*local_2e0 & 1) != 0) {
      pbVar35 = (byte *)local_2e0[2];
    }
    if (pbVar35[uVar37] != bVar8) goto LAB_0180b868;
    plVar38 = (long *)*param_1;
    uVar37 = (ulong)((int)uVar37 + 1);
    if (plVar38[3] == plVar38[4]) {
      (**(code **)(*plVar38 + 0x50))();
    }
    else {
      plVar38[3] = plVar38[3] + 1;
    }
    goto LAB_0180b64c;
  }
LAB_0180b754:
  if (puVar10 != puVar36) {
    uVar37 = (ulong)((byte)local_228._0_1_ >> 1);
    if ((local_228 & 1) != 0) {
      uVar37 = local_220;
    }
    if (uVar37 != 0) {
      puVar36 = puVar36 + -1;
      puVar21 = puVar36;
      puVar30 = puVar10;
      if (puVar10 < puVar36) {
        do {
          puVar19 = puVar30 + 1;
          uVar16 = *puVar30;
          *puVar30 = *puVar21;
          puVar22 = puVar21 + -1;
          *puVar21 = uVar16;
          puVar21 = puVar22;
          puVar30 = puVar19;
        } while (puVar19 < puVar22);
      }
      pbVar35 = (byte *)((ulong)&local_228 | 1);
      if ((local_228 & 1) != 0) {
        pbVar35 = local_218;
      }
      uVar16 = (uint)*pbVar35;
      bVar24 = 1 < (byte)(*pbVar35 + 1);
      if (puVar10 < puVar36) {
        pbVar33 = pbVar35;
        puVar30 = puVar10;
        uVar37 = (ulong)((byte)local_228._0_1_ >> 1);
        if ((local_228 & 1) != 0) {
          uVar37 = local_220;
        }
        do {
          if ((bVar24) && (*puVar30 != uVar16)) goto LAB_0180b868;
          if (1 < (long)(pbVar35 + (uVar37 - (long)pbVar33))) {
            pbVar33 = pbVar33 + 1;
          }
          uVar16 = (uint)*pbVar33;
          puVar30 = puVar30 + 1;
          bVar24 = 1 < (uVar16 + 1 & 0xff);
        } while (puVar30 < puVar36);
      }
      if ((bVar24) && (uVar16 <= *puVar36 - 1)) {
LAB_0180b868:
        uVar34 = 0;
        *param_6 = *param_6 | 4;
        goto joined_r0x0180b87c;
      }
    }
  }
  uVar34 = 1;
joined_r0x0180b87c:
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
    (*pcVar39)(puVar10);
  }
  if (*(long *)(lVar6 + 0x28) == lVar17) {
    return uVar34;
  }
LAB_0180b950:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

