
/* std::__ndk1::__time_get_storage<wchar_t>::init(std::__ndk1::ctype<wchar_t> const&) */

void std::__ndk1::__time_get_storage<wchar_t>::init(ctype *param_1)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  ctype cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  char cVar6;
  __locale_t p_Var7;
  size_t sVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ctype *pcVar12;
  long lVar13;
  ctype *pcVar14;
  ulong uVar15;
  ctype *pcVar16;
  ctype *pcVar17;
  undefined8 *puVar18;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  char *local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  char *local_2b0;
  mbstate_t local_2a8;
  tm local_2a0;
  ctype local_264 [8];
  undefined8 auStack_25c [49];
  char acStack_d4 [100];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  lVar20 = 0;
  local_2a0.tm_zone = (char *)0x0;
  local_2a0.tm_wday = 0;
  local_2a0.tm_yday = 0;
  local_2a0.tm_mon = 0;
  local_2a0.tm_year = 0;
  local_2a0.tm_gmtoff = 0;
  local_2a0.tm_isdst = 0;
  local_2a0._36_4_ = 0;
  local_2a0.tm_hour = 0;
  local_2a0.tm_mday = 0;
  local_2a0.tm_sec = 0;
  local_2a0.tm_min = 0;
  local_2a8.__count = 0;
  local_2a8.__value = (_union_27)0x0;
  do {
    local_2a0.tm_wday = (int)lVar20;
    strftime(acStack_d4,100,"%A",&local_2a0);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2c8 = acStack_d4;
    p_Var7 = uselocale(*(__locale_t *)param_1);
    sVar8 = mbsrtowcs((wchar_t *)local_264,&local_2c8,100,&local_2a8);
    if (p_Var7 != (__locale_t)0x0) {
      uselocale(p_Var7);
    }
    if (sVar8 == 0xffffffffffffffff) goto LAB_01203b10;
    pbVar19 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + lVar20 * 0x18 + 8);
    bVar1 = *pbVar19;
    uVar3 = (long)(sVar8 << 2) >> 2;
    if (((byte)bVar1 & 1) == 0) {
      uVar15 = (ulong)(byte)bVar1;
      uVar9 = 4;
      uVar10 = uVar3 - 4;
      if (uVar3 < 4 || uVar10 == 0) goto LAB_01203048;
LAB_012030c0:
      if (((byte)bVar1 & 1) == 0) {
        uVar15 = (ulong)((byte)bVar1 >> 1);
      }
      else {
        uVar15 = *(ulong *)(param_1 + lVar20 * 0x18 + 0x10);
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      __grow_by(pbVar19,uVar9,uVar10,uVar15,0,uVar15,0);
      if (((byte)*pbVar19 & 1) != 0) goto LAB_012030f0;
LAB_0120304c:
      pcVar16 = param_1 + lVar20 * 0x18 + 0xc;
    }
    else {
      uVar15 = *(ulong *)pbVar19;
      uVar9 = (uVar15 & 0xfffffffffffffffe) - 1;
      uVar10 = uVar3 - uVar9;
      if (uVar9 <= uVar3 && uVar10 != 0) goto LAB_012030c0;
LAB_01203048:
      if ((uVar15 & 1) == 0) goto LAB_0120304c;
LAB_012030f0:
      pcVar16 = *(ctype **)(param_1 + lVar20 * 0x18 + 0x18);
    }
    if (sVar8 != 0) {
      lVar11 = sVar8 * 4;
      uVar10 = (lVar11 - 4U >> 2) + 1;
      pcVar14 = local_264;
      pcVar17 = pcVar16;
      if ((7 < uVar10) && ((local_264 + lVar11 <= pcVar16 || (pcVar16 + lVar11 <= pcVar14)))) {
        uVar15 = uVar10 & 0x7ffffffffffffff8;
        pcVar17 = pcVar16 + uVar15 * 4;
        pcVar14 = local_264 + uVar15 * 4;
        pcVar16 = pcVar16 + 0x10;
        uVar9 = uVar15;
        puVar18 = auStack_25c + 1;
        do {
          puVar5 = puVar18 + -1;
          uVar21 = puVar18[-2];
          uVar23 = puVar18[1];
          uVar22 = *puVar18;
          puVar18 = puVar18 + 4;
          uVar9 = uVar9 - 8;
          *(undefined8 *)(pcVar16 + -8) = *puVar5;
          *(undefined8 *)(pcVar16 + -0x10) = uVar21;
          *(undefined8 *)(pcVar16 + 8) = uVar23;
          *(undefined8 *)pcVar16 = uVar22;
          pcVar16 = pcVar16 + 0x20;
        } while (uVar9 != 0);
        pcVar16 = pcVar17;
        if (uVar10 == uVar15) goto LAB_01203100;
      }
      do {
        pcVar12 = pcVar14 + 4;
        pcVar16 = pcVar17 + 4;
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar12;
        pcVar17 = pcVar16;
      } while (local_264 + sVar8 * 4 != pcVar12);
    }
LAB_01203100:
    *(undefined4 *)pcVar16 = 0;
    if (((byte)*pbVar19 & 1) == 0) {
      *pbVar19 = SUB41((int)sVar8 << 1,0);
    }
    else {
      *(ulong *)(param_1 + lVar20 * 0x18 + 0x10) = uVar3;
    }
    strftime(acStack_d4,100,"%a",&local_2a0);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2c8 = acStack_d4;
    p_Var7 = uselocale(*(__locale_t *)param_1);
    sVar8 = mbsrtowcs((wchar_t *)local_264,&local_2c8,100,&local_2a8);
    if (p_Var7 != (__locale_t)0x0) {
      uselocale(p_Var7);
    }
    if (sVar8 == 0xffffffffffffffff) goto LAB_01203b10;
    lVar11 = lVar20 + 7;
    pbVar19 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + lVar11 * 0x18 + 8);
    bVar1 = *pbVar19;
    uVar3 = (long)(sVar8 << 2) >> 2;
    if (((byte)bVar1 & 1) == 0) {
      uVar15 = (ulong)(byte)bVar1;
      uVar9 = 4;
      uVar10 = uVar3 - 4;
      if (uVar3 < 4 || uVar10 == 0) goto LAB_0120319c;
LAB_01203214:
      if (((byte)bVar1 & 1) == 0) {
        uVar15 = (ulong)((byte)bVar1 >> 1);
      }
      else {
        uVar15 = *(ulong *)(param_1 + lVar11 * 0x18 + 0x10);
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      __grow_by(pbVar19,uVar9,uVar10,uVar15,0,uVar15,0);
      if (((byte)*pbVar19 & 1) != 0) goto LAB_01203244;
LAB_012031a0:
      pcVar16 = param_1 + lVar11 * 0x18 + 0xc;
    }
    else {
      uVar15 = *(ulong *)pbVar19;
      uVar9 = (uVar15 & 0xfffffffffffffffe) - 1;
      uVar10 = uVar3 - uVar9;
      if (uVar9 <= uVar3 && uVar10 != 0) goto LAB_01203214;
LAB_0120319c:
      if ((uVar15 & 1) == 0) goto LAB_012031a0;
LAB_01203244:
      pcVar16 = *(ctype **)(param_1 + lVar11 * 0x18 + 0x18);
    }
    if (sVar8 != 0) {
      lVar13 = sVar8 * 4;
      uVar10 = (lVar13 - 4U >> 2) + 1;
      pcVar14 = local_264;
      pcVar17 = pcVar16;
      if ((7 < uVar10) && ((local_264 + lVar13 <= pcVar16 || (pcVar16 + lVar13 <= pcVar14)))) {
        uVar15 = uVar10 & 0x7ffffffffffffff8;
        pcVar17 = pcVar16 + uVar15 * 4;
        pcVar14 = local_264 + uVar15 * 4;
        pcVar16 = pcVar16 + 0x10;
        uVar9 = uVar15;
        puVar18 = auStack_25c + 1;
        do {
          puVar5 = puVar18 + -1;
          uVar21 = puVar18[-2];
          uVar23 = puVar18[1];
          uVar22 = *puVar18;
          puVar18 = puVar18 + 4;
          uVar9 = uVar9 - 8;
          *(undefined8 *)(pcVar16 + -8) = *puVar5;
          *(undefined8 *)(pcVar16 + -0x10) = uVar21;
          *(undefined8 *)(pcVar16 + 8) = uVar23;
          *(undefined8 *)pcVar16 = uVar22;
          pcVar16 = pcVar16 + 0x20;
        } while (uVar9 != 0);
        pcVar16 = pcVar17;
        if (uVar10 == uVar15) goto LAB_01203254;
      }
      do {
        pcVar12 = pcVar14 + 4;
        pcVar16 = pcVar17 + 4;
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar12;
        pcVar17 = pcVar16;
      } while (local_264 + sVar8 * 4 != pcVar12);
    }
LAB_01203254:
    *(undefined4 *)pcVar16 = 0;
    if (((byte)*pbVar19 & 1) == 0) {
      *pbVar19 = SUB41((int)sVar8 << 1,0);
    }
    else {
      *(ulong *)(param_1 + lVar11 * 0x18 + 0x10) = uVar3;
    }
    lVar20 = lVar20 + 1;
  } while (lVar20 != 7);
  lVar20 = 0;
  do {
    local_2a0.tm_mon = (int)lVar20;
    strftime(acStack_d4,100,"%B",&local_2a0);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2c8 = acStack_d4;
    p_Var7 = uselocale(*(__locale_t *)param_1);
    sVar8 = mbsrtowcs((wchar_t *)local_264,&local_2c8,100,&local_2a8);
    if (p_Var7 != (__locale_t)0x0) {
      uselocale(p_Var7);
    }
    if (sVar8 == 0xffffffffffffffff) goto LAB_01203b10;
    cVar2 = param_1[lVar20 * 0x18 + 0x158];
    pbVar19 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + lVar20 * 0x18 + 0x158);
    uVar3 = (long)(sVar8 << 2) >> 2;
    if (((byte)cVar2 & 1) == 0) {
      uVar15 = (ulong)(byte)cVar2;
      uVar9 = 4;
      uVar10 = uVar3 - 4;
      if (uVar3 < 4 || uVar10 == 0) goto LAB_012033a0;
LAB_01203418:
      if (((byte)cVar2 & 1) == 0) {
        uVar15 = (ulong)((byte)cVar2 >> 1);
      }
      else {
        uVar15 = *(ulong *)(param_1 + lVar20 * 0x18 + 0x160);
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      __grow_by(pbVar19,uVar9,uVar10,uVar15,0,uVar15,0);
      if (((byte)*pbVar19 & 1) != 0) goto LAB_01203448;
LAB_012033a4:
      pcVar16 = param_1 + lVar20 * 0x18 + 0x15c;
    }
    else {
      uVar15 = *(ulong *)pbVar19;
      uVar9 = (uVar15 & 0xfffffffffffffffe) - 1;
      uVar10 = uVar3 - uVar9;
      if (uVar9 <= uVar3 && uVar10 != 0) goto LAB_01203418;
LAB_012033a0:
      if ((uVar15 & 1) == 0) goto LAB_012033a4;
LAB_01203448:
      pcVar16 = *(ctype **)(param_1 + lVar20 * 0x18 + 0x168);
    }
    if (sVar8 != 0) {
      lVar11 = sVar8 * 4;
      uVar10 = (lVar11 - 4U >> 2) + 1;
      pcVar14 = local_264;
      pcVar17 = pcVar16;
      if ((7 < uVar10) && ((local_264 + lVar11 <= pcVar16 || (pcVar16 + lVar11 <= pcVar14)))) {
        uVar15 = uVar10 & 0x7ffffffffffffff8;
        pcVar17 = pcVar16 + uVar15 * 4;
        pcVar14 = local_264 + uVar15 * 4;
        pcVar16 = pcVar16 + 0x10;
        uVar9 = uVar15;
        puVar18 = auStack_25c + 1;
        do {
          puVar5 = puVar18 + -1;
          uVar21 = puVar18[-2];
          uVar23 = puVar18[1];
          uVar22 = *puVar18;
          puVar18 = puVar18 + 4;
          uVar9 = uVar9 - 8;
          *(undefined8 *)(pcVar16 + -8) = *puVar5;
          *(undefined8 *)(pcVar16 + -0x10) = uVar21;
          *(undefined8 *)(pcVar16 + 8) = uVar23;
          *(undefined8 *)pcVar16 = uVar22;
          pcVar16 = pcVar16 + 0x20;
        } while (uVar9 != 0);
        pcVar16 = pcVar17;
        if (uVar10 == uVar15) goto LAB_01203458;
      }
      do {
        pcVar12 = pcVar14 + 4;
        pcVar16 = pcVar17 + 4;
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar12;
        pcVar17 = pcVar16;
      } while (local_264 + sVar8 * 4 != pcVar12);
    }
LAB_01203458:
    *(undefined4 *)pcVar16 = 0;
    if (((byte)*pbVar19 & 1) == 0) {
      *pbVar19 = SUB41((int)sVar8 << 1,0);
    }
    else {
      *(ulong *)(param_1 + lVar20 * 0x18 + 0x160) = uVar3;
    }
    strftime(acStack_d4,100,"%b",&local_2a0);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2c8 = acStack_d4;
    p_Var7 = uselocale(*(__locale_t *)param_1);
    sVar8 = mbsrtowcs((wchar_t *)local_264,&local_2c8,100,&local_2a8);
    if (p_Var7 != (__locale_t)0x0) {
      uselocale(p_Var7);
    }
    if (sVar8 == 0xffffffffffffffff) goto LAB_01203b10;
    lVar11 = lVar20 + 0xc;
    cVar2 = param_1[lVar11 * 0x18 + 0x158];
    pbVar19 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + lVar11 * 0x18 + 0x158);
    uVar3 = (long)(sVar8 << 2) >> 2;
    if (((byte)cVar2 & 1) == 0) {
      uVar15 = (ulong)(byte)cVar2;
      uVar9 = 4;
      uVar10 = uVar3 - 4;
      if (uVar3 < 4 || uVar10 == 0) goto LAB_012034f8;
LAB_01203570:
      if (((byte)cVar2 & 1) == 0) {
        uVar15 = (ulong)((byte)cVar2 >> 1);
      }
      else {
        uVar15 = *(ulong *)(param_1 + lVar11 * 0x18 + 0x160);
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      __grow_by(pbVar19,uVar9,uVar10,uVar15,0,uVar15,0);
      if (((byte)*pbVar19 & 1) != 0) goto LAB_012035a0;
LAB_012034fc:
      pcVar16 = param_1 + lVar11 * 0x18 + 0x15c;
    }
    else {
      uVar15 = *(ulong *)pbVar19;
      uVar9 = (uVar15 & 0xfffffffffffffffe) - 1;
      uVar10 = uVar3 - uVar9;
      if (uVar9 <= uVar3 && uVar10 != 0) goto LAB_01203570;
LAB_012034f8:
      if ((uVar15 & 1) == 0) goto LAB_012034fc;
LAB_012035a0:
      pcVar16 = *(ctype **)(param_1 + lVar11 * 0x18 + 0x168);
    }
    if (sVar8 != 0) {
      lVar13 = sVar8 * 4;
      uVar10 = (lVar13 - 4U >> 2) + 1;
      pcVar14 = local_264;
      pcVar17 = pcVar16;
      if ((7 < uVar10) && ((local_264 + lVar13 <= pcVar16 || (pcVar16 + lVar13 <= pcVar14)))) {
        uVar15 = uVar10 & 0x7ffffffffffffff8;
        pcVar17 = pcVar16 + uVar15 * 4;
        pcVar14 = local_264 + uVar15 * 4;
        pcVar16 = pcVar16 + 0x10;
        uVar9 = uVar15;
        puVar18 = auStack_25c + 1;
        do {
          puVar5 = puVar18 + -1;
          uVar21 = puVar18[-2];
          uVar23 = puVar18[1];
          uVar22 = *puVar18;
          puVar18 = puVar18 + 4;
          uVar9 = uVar9 - 8;
          *(undefined8 *)(pcVar16 + -8) = *puVar5;
          *(undefined8 *)(pcVar16 + -0x10) = uVar21;
          *(undefined8 *)(pcVar16 + 8) = uVar23;
          *(undefined8 *)pcVar16 = uVar22;
          pcVar16 = pcVar16 + 0x20;
        } while (uVar9 != 0);
        pcVar16 = pcVar17;
        if (uVar10 == uVar15) goto LAB_012035b0;
      }
      do {
        pcVar12 = pcVar14 + 4;
        pcVar16 = pcVar17 + 4;
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
        pcVar14 = pcVar12;
        pcVar17 = pcVar16;
      } while (local_264 + sVar8 * 4 != pcVar12);
    }
LAB_012035b0:
    *(undefined4 *)pcVar16 = 0;
    if (((byte)*pbVar19 & 1) == 0) {
      *pbVar19 = SUB41((int)sVar8 << 1,0);
    }
    else {
      *(ulong *)(param_1 + lVar11 * 0x18 + 0x160) = uVar3;
    }
    lVar20 = lVar20 + 1;
  } while (lVar20 != 0xc);
  local_2a0.tm_hour = 1;
  strftime(acStack_d4,100,"%p",&local_2a0);
  local_2a8.__count = 0;
  local_2a8.__value = (_union_27)0x0;
  local_2b0 = acStack_d4;
  p_Var7 = uselocale(*(__locale_t *)param_1);
  sVar8 = mbsrtowcs((wchar_t *)local_264,&local_2b0,100,&local_2a8);
  if (p_Var7 != (__locale_t)0x0) {
    uselocale(p_Var7);
  }
  if (sVar8 != 0xffffffffffffffff) {
    cVar2 = param_1[0x398];
    pbVar19 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + 0x398);
    uVar3 = (long)(sVar8 << 2) >> 2;
    if (((byte)cVar2 & 1) == 0) {
      uVar9 = 4;
      uVar15 = (ulong)(byte)cVar2;
      uVar10 = uVar3 - 4;
      if (uVar3 < 4 || uVar10 == 0) goto LAB_012036cc;
LAB_01203744:
      if (((byte)cVar2 & 1) == 0) {
        uVar15 = (ulong)((byte)cVar2 >> 1);
      }
      else {
        uVar15 = *(ulong *)(param_1 + 0x3a0);
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      __grow_by(pbVar19,uVar9,uVar10,uVar15,0,uVar15,0);
      if (((byte)*pbVar19 & 1) != 0) goto LAB_01203770;
LAB_012036d0:
      pcVar16 = param_1 + 0x39c;
    }
    else {
      uVar15 = *(ulong *)pbVar19;
      uVar9 = (uVar15 & 0xfffffffffffffffe) - 1;
      uVar10 = uVar3 - uVar9;
      if (uVar9 <= uVar3 && uVar10 != 0) goto LAB_01203744;
LAB_012036cc:
      if ((uVar15 & 1) == 0) goto LAB_012036d0;
LAB_01203770:
      pcVar16 = *(ctype **)(param_1 + 0x3a8);
    }
    if (sVar8 != 0) {
      lVar20 = sVar8 * 4;
      uVar10 = (lVar20 - 4U >> 2) + 1;
      if ((uVar10 < 8) || ((pcVar16 < local_264 + lVar20 && (local_264 < pcVar16 + lVar20)))) {
        pcVar14 = local_264;
        pcVar17 = pcVar16;
      }
      else {
        uVar15 = uVar10 & 0x7ffffffffffffff8;
        puVar18 = auStack_25c + 1;
        pcVar17 = pcVar16 + uVar15 * 4;
        pcVar14 = local_264 + uVar15 * 4;
        pcVar16 = pcVar16 + 0x10;
        uVar9 = uVar15;
        do {
          puVar5 = puVar18 + -1;
          uVar21 = puVar18[-2];
          uVar23 = puVar18[1];
          uVar22 = *puVar18;
          puVar18 = puVar18 + 4;
          uVar9 = uVar9 - 8;
          *(undefined8 *)(pcVar16 + -8) = *puVar5;
          *(undefined8 *)(pcVar16 + -0x10) = uVar21;
          *(undefined8 *)(pcVar16 + 8) = uVar23;
          *(undefined8 *)pcVar16 = uVar22;
          pcVar16 = pcVar16 + 0x20;
        } while (uVar9 != 0);
        pcVar16 = pcVar17;
        if (uVar10 == uVar15) goto LAB_0120377c;
      }
      do {
        pcVar12 = pcVar14 + 4;
        pcVar16 = pcVar17 + 4;
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
        pcVar17 = pcVar16;
        pcVar14 = pcVar12;
      } while (local_264 + sVar8 * 4 != pcVar12);
    }
LAB_0120377c:
    *(undefined4 *)pcVar16 = 0;
    if (((byte)*pbVar19 & 1) == 0) {
      *pbVar19 = SUB41((int)sVar8 << 1,0);
    }
    else {
      *(ulong *)(param_1 + 0x3a0) = uVar3;
    }
    local_2a0.tm_hour = 0xd;
    strftime(acStack_d4,100,"%p",&local_2a0);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2b0 = acStack_d4;
    p_Var7 = uselocale(*(__locale_t *)param_1);
    sVar8 = mbsrtowcs((wchar_t *)local_264,&local_2b0,100,&local_2a8);
    if (p_Var7 != (__locale_t)0x0) {
      uselocale(p_Var7);
    }
    if (sVar8 != 0xffffffffffffffff) {
      cVar2 = param_1[0x3b0];
      pbVar19 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *)(param_1 + 0x3b0);
      uVar3 = (long)(sVar8 << 2) >> 2;
      if (((byte)cVar2 & 1) == 0) {
        uVar9 = 4;
        uVar15 = (ulong)(byte)cVar2;
        uVar10 = uVar3 - 4;
        if (uVar3 < 4 || uVar10 == 0) goto LAB_01203818;
LAB_01203890:
        if (((byte)cVar2 & 1) == 0) {
          uVar15 = (ulong)((byte)cVar2 >> 1);
        }
        else {
          uVar15 = *(ulong *)(param_1 + 0x3b8);
        }
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(pbVar19,uVar9,uVar10,uVar15,0,uVar15,0);
        if (((byte)*pbVar19 & 1) != 0) goto LAB_012038bc;
LAB_0120381c:
        pcVar16 = param_1 + 0x3b4;
      }
      else {
        uVar15 = *(ulong *)pbVar19;
        uVar9 = (uVar15 & 0xfffffffffffffffe) - 1;
        uVar10 = uVar3 - uVar9;
        if (uVar9 <= uVar3 && uVar10 != 0) goto LAB_01203890;
LAB_01203818:
        if ((uVar15 & 1) == 0) goto LAB_0120381c;
LAB_012038bc:
        pcVar16 = *(ctype **)(param_1 + 0x3c0);
      }
      if (sVar8 != 0) {
        lVar20 = sVar8 * 4;
        uVar10 = (lVar20 - 4U >> 2) + 1;
        if ((uVar10 < 8) || ((pcVar16 < local_264 + lVar20 && (local_264 < pcVar16 + lVar20)))) {
          pcVar14 = local_264;
          pcVar17 = pcVar16;
        }
        else {
          uVar15 = uVar10 & 0x7ffffffffffffff8;
          puVar18 = auStack_25c + 1;
          pcVar17 = pcVar16 + uVar15 * 4;
          pcVar14 = local_264 + uVar15 * 4;
          pcVar16 = pcVar16 + 0x10;
          uVar9 = uVar15;
          do {
            puVar5 = puVar18 + -1;
            uVar21 = puVar18[-2];
            uVar23 = puVar18[1];
            uVar22 = *puVar18;
            puVar18 = puVar18 + 4;
            uVar9 = uVar9 - 8;
            *(undefined8 *)(pcVar16 + -8) = *puVar5;
            *(undefined8 *)(pcVar16 + -0x10) = uVar21;
            *(undefined8 *)(pcVar16 + 8) = uVar23;
            *(undefined8 *)pcVar16 = uVar22;
            pcVar16 = pcVar16 + 0x20;
          } while (uVar9 != 0);
          pcVar16 = pcVar17;
          if (uVar10 == uVar15) goto LAB_012038c8;
        }
        do {
          pcVar12 = pcVar14 + 4;
          pcVar16 = pcVar17 + 4;
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
          pcVar17 = pcVar16;
          pcVar14 = pcVar12;
        } while (local_264 + sVar8 * 4 != pcVar12);
      }
LAB_012038c8:
      *(undefined4 *)pcVar16 = 0;
      if (((byte)*pbVar19 & 1) == 0) {
        *pbVar19 = SUB41((int)sVar8 << 1,0);
      }
      else {
        *(ulong *)(param_1 + 0x3b8) = uVar3;
      }
      cVar6 = (char)param_1;
      __analyze(cVar6,(ctype *)0x63);
      if (((byte)param_1[0x3c8] & 1) == 0) {
        *(undefined4 *)(param_1 + 0x3cc) = 0;
        param_1[0x3c8] = (ctype)0x0;
      }
      else {
        **(undefined4 **)(param_1 + 0x3d8) = 0;
        *(undefined8 *)(param_1 + 0x3d0) = 0;
        if (((byte)param_1[0x3c8] & 1) != 0) {
          operator_delete(*(void **)(param_1 + 0x3d8));
          *(undefined8 *)(param_1 + 0x3c8) = 0;
        }
      }
      *(undefined8 *)(param_1 + 0x3d8) = local_2b8;
      *(undefined8 *)(param_1 + 0x3d0) = uStack_2c0;
      *(char **)(param_1 + 0x3c8) = local_2c8;
      __analyze(cVar6,(ctype *)0x72);
      if (((byte)param_1[0x3e0] & 1) == 0) {
        *(undefined4 *)(param_1 + 0x3e4) = 0;
        param_1[0x3e0] = (ctype)0x0;
      }
      else {
        **(undefined4 **)(param_1 + 0x3f0) = 0;
        *(undefined8 *)(param_1 + 1000) = 0;
        if (((byte)param_1[0x3e0] & 1) != 0) {
          operator_delete(*(void **)(param_1 + 0x3f0));
          *(undefined8 *)(param_1 + 0x3e0) = 0;
        }
      }
      *(undefined8 *)(param_1 + 0x3f0) = local_2b8;
      *(undefined8 *)(param_1 + 1000) = uStack_2c0;
      *(char **)(param_1 + 0x3e0) = local_2c8;
      __analyze(cVar6,(ctype *)0x78);
      if (((byte)param_1[0x3f8] & 1) == 0) {
        *(undefined4 *)(param_1 + 0x3fc) = 0;
        param_1[0x3f8] = (ctype)0x0;
      }
      else {
        **(undefined4 **)(param_1 + 0x408) = 0;
        *(undefined8 *)(param_1 + 0x400) = 0;
        if (((byte)param_1[0x3f8] & 1) != 0) {
          operator_delete(*(void **)(param_1 + 0x408));
          *(undefined8 *)(param_1 + 0x3f8) = 0;
        }
      }
      *(undefined8 *)(param_1 + 0x408) = local_2b8;
      *(undefined8 *)(param_1 + 0x400) = uStack_2c0;
      *(char **)(param_1 + 0x3f8) = local_2c8;
      __analyze(cVar6,(ctype *)0x58);
      if (((byte)param_1[0x410] & 1) == 0) {
        *(undefined4 *)(param_1 + 0x414) = 0;
        param_1[0x410] = (ctype)0x0;
      }
      else {
        **(undefined4 **)(param_1 + 0x420) = 0;
        *(undefined8 *)(param_1 + 0x418) = 0;
        if (((byte)param_1[0x410] & 1) != 0) {
          operator_delete(*(void **)(param_1 + 0x420));
          *(undefined8 *)(param_1 + 0x410) = 0;
        }
      }
      *(undefined8 *)(param_1 + 0x420) = local_2b8;
      *(undefined8 *)(param_1 + 0x418) = uStack_2c0;
      *(char **)(param_1 + 0x410) = local_2c8;
      if (*(long *)(lVar4 + 0x28) == local_70) {
        return;
      }
      goto LAB_01203b1c;
    }
  }
LAB_01203b10:
  __throw_runtime_error("locale not supported");
LAB_01203b1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

