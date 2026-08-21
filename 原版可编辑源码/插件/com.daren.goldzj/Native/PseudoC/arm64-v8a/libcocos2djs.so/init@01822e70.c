
/* std::__ndk1::__time_get_storage<wchar_t>::init(std::__ndk1::ctype<wchar_t> const&) */

void std::__ndk1::__time_get_storage<wchar_t>::init(ctype *param_1)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  ctype cVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  __locale_t p_Var6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ctype *pcVar11;
  ulong uVar12;
  ctype *pcVar13;
  ctype *pcVar14;
  long lVar15;
  long lVar16;
  ctype *pcVar17;
  long lVar18;
  undefined8 *puVar19;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
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
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar21 = 0;
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
    local_2a0.tm_wday = (int)uVar21;
    strftime(acStack_d4,100,"%A",&local_2a0);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2c8 = acStack_d4;
    p_Var6 = uselocale(*(__locale_t *)param_1);
    sVar7 = mbsrtowcs((wchar_t *)local_264,&local_2c8,100,&local_2a8);
    if (p_Var6 != (__locale_t)0x0) {
      uselocale(p_Var6);
    }
    if (sVar7 == 0xffffffffffffffff) goto LAB_01823ab0;
    pbVar20 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + uVar21 * 0x18 + 8);
    bVar1 = *pbVar20;
    uVar10 = (long)(sVar7 << 2) >> 2;
    if (((byte)bVar1 & 1) == 0) {
      uVar12 = (ulong)(byte)bVar1;
      uVar8 = 4;
      uVar9 = uVar10 - 4;
      if (3 < uVar10 && uVar9 != 0) goto LAB_01822f50;
LAB_01822f70:
      if ((uVar12 & 1) == 0) goto LAB_01822f74;
LAB_01822fa4:
      pcVar11 = *(ctype **)(param_1 + uVar21 * 0x18 + 0x18);
    }
    else {
      uVar12 = *(ulong *)pbVar20;
      uVar8 = (uVar12 & 0xfffffffffffffffe) - 1;
      uVar9 = uVar10 - uVar8;
      if (uVar10 < uVar8 || uVar9 == 0) goto LAB_01822f70;
LAB_01822f50:
      if (((byte)bVar1 & 1) == 0) {
        uVar12 = (ulong)((byte)bVar1 >> 1);
      }
      else {
        uVar12 = *(ulong *)(param_1 + uVar21 * 0x18 + 0x10);
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      __grow_by(pbVar20,uVar8,uVar9,uVar12,0,uVar12,0);
      if (((byte)*pbVar20 & 1) != 0) goto LAB_01822fa4;
LAB_01822f74:
      pcVar11 = param_1 + uVar21 * 0x18 + 0xc;
    }
    if (sVar7 != 0) {
      lVar15 = sVar7 * 4;
      pcVar14 = local_264;
      lVar18 = lVar15 - (long)pcVar14;
      uVar9 = (lVar15 - 4U >> 2) + 1;
      pcVar17 = pcVar11;
      if ((uVar9 < 8) || ((pcVar11 < local_264 + lVar15 && (pcVar14 < pcVar11 + lVar15)))) {
LAB_01823040:
        do {
          pcVar13 = pcVar14 + 4;
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar13;
          pcVar17 = pcVar17 + 4;
        } while (local_264 + sVar7 * 4 != pcVar13);
      }
      else {
        uVar12 = uVar9 & 0x7ffffffffffffff8;
        pcVar17 = pcVar11 + uVar12 * 4;
        pcVar14 = local_264 + uVar12 * 4;
        pcVar13 = pcVar11 + 0x10;
        uVar8 = uVar12;
        puVar19 = auStack_25c + 1;
        do {
          puVar4 = puVar19 + -1;
          uVar22 = puVar19[-2];
          uVar24 = puVar19[1];
          uVar23 = *puVar19;
          puVar19 = puVar19 + 4;
          uVar8 = uVar8 - 8;
          *(undefined8 *)(pcVar13 + -8) = *puVar4;
          *(undefined8 *)(pcVar13 + -0x10) = uVar22;
          *(undefined8 *)(pcVar13 + 8) = uVar24;
          *(undefined8 *)pcVar13 = uVar23;
          pcVar13 = pcVar13 + 0x20;
        } while (uVar8 != 0);
        if (uVar9 != uVar12) goto LAB_01823040;
      }
      pcVar11 = pcVar11 + (long)(local_264 + lVar18);
    }
    *(undefined4 *)pcVar11 = 0;
    if (((byte)*pbVar20 & 1) == 0) {
      *pbVar20 = SUB41((int)sVar7 << 1,0);
    }
    else {
      *(ulong *)(param_1 + uVar21 * 0x18 + 0x10) = uVar10;
    }
    strftime(acStack_d4,100,"%a",&local_2a0);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2c8 = acStack_d4;
    p_Var6 = uselocale(*(__locale_t *)param_1);
    sVar7 = mbsrtowcs((wchar_t *)local_264,&local_2c8,100,&local_2a8);
    if (p_Var6 != (__locale_t)0x0) {
      uselocale(p_Var6);
    }
    if (sVar7 == 0xffffffffffffffff) goto LAB_01823ab0;
    lVar18 = uVar21 + 7;
    pbVar20 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + lVar18 * 0x18 + 8);
    bVar1 = *pbVar20;
    uVar10 = (long)(sVar7 << 2) >> 2;
    if (((byte)bVar1 & 1) == 0) {
      uVar12 = (ulong)(byte)bVar1;
      uVar8 = 4;
      uVar9 = uVar10 - 4;
      if (3 < uVar10 && uVar9 != 0) goto LAB_018230f8;
LAB_01823118:
      if ((uVar12 & 1) == 0) goto LAB_0182311c;
LAB_0182314c:
      pcVar11 = *(ctype **)(param_1 + lVar18 * 0x18 + 0x18);
    }
    else {
      uVar12 = *(ulong *)pbVar20;
      uVar8 = (uVar12 & 0xfffffffffffffffe) - 1;
      uVar9 = uVar10 - uVar8;
      if (uVar10 < uVar8 || uVar9 == 0) goto LAB_01823118;
LAB_018230f8:
      if (((byte)bVar1 & 1) == 0) {
        uVar12 = (ulong)((byte)bVar1 >> 1);
      }
      else {
        uVar12 = *(ulong *)(param_1 + lVar18 * 0x18 + 0x10);
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      __grow_by(pbVar20,uVar8,uVar9,uVar12,0,uVar12,0);
      if (((byte)*pbVar20 & 1) != 0) goto LAB_0182314c;
LAB_0182311c:
      pcVar11 = param_1 + lVar18 * 0x18 + 0xc;
    }
    if (sVar7 != 0) {
      lVar16 = sVar7 * 4;
      pcVar14 = local_264;
      lVar15 = lVar16 - (long)pcVar14;
      uVar9 = (lVar16 - 4U >> 2) + 1;
      pcVar17 = pcVar11;
      if ((uVar9 < 8) || ((pcVar11 < local_264 + lVar16 && (pcVar14 < pcVar11 + lVar16)))) {
LAB_018231e8:
        do {
          pcVar13 = pcVar14 + 4;
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar13;
          pcVar17 = pcVar17 + 4;
        } while (local_264 + sVar7 * 4 != pcVar13);
      }
      else {
        uVar12 = uVar9 & 0x7ffffffffffffff8;
        pcVar17 = pcVar11 + uVar12 * 4;
        pcVar14 = local_264 + uVar12 * 4;
        pcVar13 = pcVar11 + 0x10;
        uVar8 = uVar12;
        puVar19 = auStack_25c + 1;
        do {
          puVar4 = puVar19 + -1;
          uVar22 = puVar19[-2];
          uVar24 = puVar19[1];
          uVar23 = *puVar19;
          puVar19 = puVar19 + 4;
          uVar8 = uVar8 - 8;
          *(undefined8 *)(pcVar13 + -8) = *puVar4;
          *(undefined8 *)(pcVar13 + -0x10) = uVar22;
          *(undefined8 *)(pcVar13 + 8) = uVar24;
          *(undefined8 *)pcVar13 = uVar23;
          pcVar13 = pcVar13 + 0x20;
        } while (uVar8 != 0);
        if (uVar9 != uVar12) goto LAB_018231e8;
      }
      pcVar11 = pcVar11 + (long)(local_264 + lVar15);
    }
    *(undefined4 *)pcVar11 = 0;
    if (((byte)*pbVar20 & 1) == 0) {
      *pbVar20 = SUB41((int)sVar7 << 1,0);
    }
    else {
      *(ulong *)(param_1 + lVar18 * 0x18 + 0x10) = uVar10;
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 < 7);
  uVar21 = 0;
  do {
    local_2a0.tm_mon = (int)uVar21;
    strftime(acStack_d4,100,"%B",&local_2a0);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2c8 = acStack_d4;
    p_Var6 = uselocale(*(__locale_t *)param_1);
    sVar7 = mbsrtowcs((wchar_t *)local_264,&local_2c8,100,&local_2a8);
    if (p_Var6 != (__locale_t)0x0) {
      uselocale(p_Var6);
    }
    if (sVar7 == 0xffffffffffffffff) goto LAB_01823ab0;
    cVar2 = param_1[uVar21 * 0x18 + 0x158];
    pbVar20 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + uVar21 * 0x18 + 0x158);
    uVar10 = (long)(sVar7 << 2) >> 2;
    if (((byte)cVar2 & 1) == 0) {
      uVar12 = (ulong)(byte)cVar2;
      uVar8 = 4;
      uVar9 = uVar10 - 4;
      if (3 < uVar10 && uVar9 != 0) goto LAB_018232cc;
LAB_018232ec:
      if ((uVar12 & 1) == 0) goto LAB_018232f0;
LAB_01823320:
      pcVar11 = *(ctype **)(param_1 + uVar21 * 0x18 + 0x168);
    }
    else {
      uVar12 = *(ulong *)pbVar20;
      uVar8 = (uVar12 & 0xfffffffffffffffe) - 1;
      uVar9 = uVar10 - uVar8;
      if (uVar10 < uVar8 || uVar9 == 0) goto LAB_018232ec;
LAB_018232cc:
      if (((byte)cVar2 & 1) == 0) {
        uVar12 = (ulong)((byte)cVar2 >> 1);
      }
      else {
        uVar12 = *(ulong *)(param_1 + uVar21 * 0x18 + 0x160);
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      __grow_by(pbVar20,uVar8,uVar9,uVar12,0,uVar12,0);
      if (((byte)*pbVar20 & 1) != 0) goto LAB_01823320;
LAB_018232f0:
      pcVar11 = param_1 + uVar21 * 0x18 + 0x15c;
    }
    if (sVar7 != 0) {
      lVar15 = sVar7 * 4;
      pcVar14 = local_264;
      lVar18 = lVar15 - (long)pcVar14;
      uVar9 = (lVar15 - 4U >> 2) + 1;
      pcVar17 = pcVar11;
      if ((uVar9 < 8) || ((pcVar11 < local_264 + lVar15 && (pcVar14 < pcVar11 + lVar15)))) {
LAB_018233bc:
        do {
          pcVar13 = pcVar14 + 4;
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar13;
          pcVar17 = pcVar17 + 4;
        } while (local_264 + sVar7 * 4 != pcVar13);
      }
      else {
        uVar12 = uVar9 & 0x7ffffffffffffff8;
        pcVar17 = pcVar11 + uVar12 * 4;
        pcVar14 = local_264 + uVar12 * 4;
        pcVar13 = pcVar11 + 0x10;
        uVar8 = uVar12;
        puVar19 = auStack_25c + 1;
        do {
          puVar4 = puVar19 + -1;
          uVar22 = puVar19[-2];
          uVar24 = puVar19[1];
          uVar23 = *puVar19;
          puVar19 = puVar19 + 4;
          uVar8 = uVar8 - 8;
          *(undefined8 *)(pcVar13 + -8) = *puVar4;
          *(undefined8 *)(pcVar13 + -0x10) = uVar22;
          *(undefined8 *)(pcVar13 + 8) = uVar24;
          *(undefined8 *)pcVar13 = uVar23;
          pcVar13 = pcVar13 + 0x20;
        } while (uVar8 != 0);
        if (uVar9 != uVar12) goto LAB_018233bc;
      }
      pcVar11 = pcVar11 + (long)(local_264 + lVar18);
    }
    *(undefined4 *)pcVar11 = 0;
    if (((byte)*pbVar20 & 1) == 0) {
      *pbVar20 = SUB41((int)sVar7 << 1,0);
    }
    else {
      *(ulong *)(param_1 + uVar21 * 0x18 + 0x160) = uVar10;
    }
    strftime(acStack_d4,100,"%b",&local_2a0);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2c8 = acStack_d4;
    p_Var6 = uselocale(*(__locale_t *)param_1);
    sVar7 = mbsrtowcs((wchar_t *)local_264,&local_2c8,100,&local_2a8);
    if (p_Var6 != (__locale_t)0x0) {
      uselocale(p_Var6);
    }
    if (sVar7 == 0xffffffffffffffff) goto LAB_01823ab0;
    lVar18 = uVar21 + 0xc;
    cVar2 = param_1[lVar18 * 0x18 + 0x158];
    pbVar20 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + lVar18 * 0x18 + 0x158);
    uVar10 = (long)(sVar7 << 2) >> 2;
    if (((byte)cVar2 & 1) == 0) {
      uVar12 = (ulong)(byte)cVar2;
      uVar8 = 4;
      uVar9 = uVar10 - 4;
      if (3 < uVar10 && uVar9 != 0) goto LAB_01823478;
LAB_01823498:
      if ((uVar12 & 1) == 0) goto LAB_0182349c;
LAB_018234cc:
      pcVar11 = *(ctype **)(param_1 + lVar18 * 0x18 + 0x168);
    }
    else {
      uVar12 = *(ulong *)pbVar20;
      uVar8 = (uVar12 & 0xfffffffffffffffe) - 1;
      uVar9 = uVar10 - uVar8;
      if (uVar10 < uVar8 || uVar9 == 0) goto LAB_01823498;
LAB_01823478:
      if (((byte)cVar2 & 1) == 0) {
        uVar12 = (ulong)((byte)cVar2 >> 1);
      }
      else {
        uVar12 = *(ulong *)(param_1 + lVar18 * 0x18 + 0x160);
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      __grow_by(pbVar20,uVar8,uVar9,uVar12,0,uVar12,0);
      if (((byte)*pbVar20 & 1) != 0) goto LAB_018234cc;
LAB_0182349c:
      pcVar11 = param_1 + lVar18 * 0x18 + 0x15c;
    }
    if (sVar7 != 0) {
      lVar16 = sVar7 * 4;
      pcVar14 = local_264;
      lVar15 = lVar16 - (long)pcVar14;
      uVar9 = (lVar16 - 4U >> 2) + 1;
      pcVar17 = pcVar11;
      if ((uVar9 < 8) || ((pcVar11 < local_264 + lVar16 && (pcVar14 < pcVar11 + lVar16)))) {
LAB_01823568:
        do {
          pcVar13 = pcVar14 + 4;
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar13;
          pcVar17 = pcVar17 + 4;
        } while (local_264 + sVar7 * 4 != pcVar13);
      }
      else {
        uVar12 = uVar9 & 0x7ffffffffffffff8;
        pcVar17 = pcVar11 + uVar12 * 4;
        pcVar14 = local_264 + uVar12 * 4;
        pcVar13 = pcVar11 + 0x10;
        uVar8 = uVar12;
        puVar19 = auStack_25c + 1;
        do {
          puVar4 = puVar19 + -1;
          uVar22 = puVar19[-2];
          uVar24 = puVar19[1];
          uVar23 = *puVar19;
          puVar19 = puVar19 + 4;
          uVar8 = uVar8 - 8;
          *(undefined8 *)(pcVar13 + -8) = *puVar4;
          *(undefined8 *)(pcVar13 + -0x10) = uVar22;
          *(undefined8 *)(pcVar13 + 8) = uVar24;
          *(undefined8 *)pcVar13 = uVar23;
          pcVar13 = pcVar13 + 0x20;
        } while (uVar8 != 0);
        if (uVar9 != uVar12) goto LAB_01823568;
      }
      pcVar11 = pcVar11 + (long)(local_264 + lVar15);
    }
    *(undefined4 *)pcVar11 = 0;
    if (((byte)*pbVar20 & 1) == 0) {
      *pbVar20 = SUB41((int)sVar7 << 1,0);
    }
    else {
      *(ulong *)(param_1 + lVar18 * 0x18 + 0x160) = uVar10;
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 < 0xc);
  local_2a0.tm_hour = 1;
  strftime(acStack_d4,100,"%p",&local_2a0);
  local_2a8.__count = 0;
  local_2a8.__value = (_union_27)0x0;
  local_2b0 = acStack_d4;
  p_Var6 = uselocale(*(__locale_t *)param_1);
  sVar7 = mbsrtowcs((wchar_t *)local_264,&local_2b0,100,&local_2a8);
  if (p_Var6 != (__locale_t)0x0) {
    uselocale(p_Var6);
  }
  if (sVar7 != 0xffffffffffffffff) {
    cVar2 = param_1[0x398];
    pbVar20 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)(param_1 + 0x398);
    uVar21 = (long)(sVar7 << 2) >> 2;
    if (((byte)cVar2 & 1) == 0) {
      uVar9 = 4;
      uVar8 = (ulong)(byte)cVar2;
      uVar10 = uVar21 - 4;
      if (3 < uVar21 && uVar10 != 0) goto LAB_01823634;
LAB_01823654:
      if ((uVar8 & 1) == 0) goto LAB_01823658;
LAB_01823684:
      pcVar11 = *(ctype **)(param_1 + 0x3a8);
    }
    else {
      uVar8 = *(ulong *)pbVar20;
      uVar9 = (uVar8 & 0xfffffffffffffffe) - 1;
      uVar10 = uVar21 - uVar9;
      if (uVar21 < uVar9 || uVar10 == 0) goto LAB_01823654;
LAB_01823634:
      if (((byte)cVar2 & 1) == 0) {
        uVar8 = (ulong)((byte)cVar2 >> 1);
      }
      else {
        uVar8 = *(ulong *)(param_1 + 0x3a0);
      }
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      __grow_by(pbVar20,uVar9,uVar10,uVar8,0,uVar8,0);
      if (((byte)*pbVar20 & 1) != 0) goto LAB_01823684;
LAB_01823658:
      pcVar11 = param_1 + 0x39c;
    }
    if (sVar7 != 0) {
      lVar18 = sVar7 * 4;
      uVar10 = (lVar18 - 4U >> 2) + 1;
      pcVar14 = local_264;
      pcVar17 = pcVar11;
      if ((uVar10 < 8) ||
         ((pcVar11 < local_264 + lVar18 && (pcVar14 = local_264, local_264 < pcVar11 + lVar18)))) {
LAB_01823728:
        do {
          pcVar13 = pcVar14 + 4;
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
          pcVar17 = pcVar17 + 4;
          pcVar14 = pcVar13;
        } while (local_264 + sVar7 * 4 != pcVar13);
      }
      else {
        uVar8 = uVar10 & 0x7ffffffffffffff8;
        puVar19 = auStack_25c + 1;
        pcVar17 = pcVar11 + uVar8 * 4;
        pcVar14 = local_264 + uVar8 * 4;
        pcVar13 = pcVar11 + 0x10;
        uVar9 = uVar8;
        do {
          puVar4 = puVar19 + -1;
          uVar22 = puVar19[-2];
          uVar24 = puVar19[1];
          uVar23 = *puVar19;
          puVar19 = puVar19 + 4;
          uVar9 = uVar9 - 8;
          *(undefined8 *)(pcVar13 + -8) = *puVar4;
          *(undefined8 *)(pcVar13 + -0x10) = uVar22;
          *(undefined8 *)(pcVar13 + 8) = uVar24;
          *(undefined8 *)pcVar13 = uVar23;
          pcVar13 = pcVar13 + 0x20;
        } while (uVar9 != 0);
        if (uVar10 != uVar8) goto LAB_01823728;
      }
      pcVar11 = pcVar11 + (long)(local_264 + (lVar18 - (long)local_264));
    }
    *(undefined4 *)pcVar11 = 0;
    if (((byte)*pbVar20 & 1) == 0) {
      *pbVar20 = SUB41((int)sVar7 << 1,0);
    }
    else {
      *(ulong *)(param_1 + 0x3a0) = uVar21;
    }
    local_2a0.tm_hour = 0xd;
    strftime(acStack_d4,100,"%p",&local_2a0);
    local_2a8.__count = 0;
    local_2a8.__value = (_union_27)0x0;
    local_2b0 = acStack_d4;
    p_Var6 = uselocale(*(__locale_t *)param_1);
    sVar7 = mbsrtowcs((wchar_t *)local_264,&local_2b0,100,&local_2a8);
    if (p_Var6 != (__locale_t)0x0) {
      uselocale(p_Var6);
    }
    if (sVar7 != 0xffffffffffffffff) {
      cVar2 = param_1[0x3b0];
      pbVar20 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *)(param_1 + 0x3b0);
      uVar21 = (long)(sVar7 << 2) >> 2;
      if (((byte)cVar2 & 1) == 0) {
        uVar9 = 4;
        uVar8 = (ulong)(byte)cVar2;
        uVar10 = uVar21 - 4;
        if (3 < uVar21 && uVar10 != 0) goto LAB_018237e0;
LAB_01823800:
        if ((uVar8 & 1) == 0) goto LAB_01823804;
LAB_01823830:
        pcVar11 = *(ctype **)(param_1 + 0x3c0);
      }
      else {
        uVar8 = *(ulong *)pbVar20;
        uVar9 = (uVar8 & 0xfffffffffffffffe) - 1;
        uVar10 = uVar21 - uVar9;
        if (uVar21 < uVar9 || uVar10 == 0) goto LAB_01823800;
LAB_018237e0:
        if (((byte)cVar2 & 1) == 0) {
          uVar8 = (ulong)((byte)cVar2 >> 1);
        }
        else {
          uVar8 = *(ulong *)(param_1 + 0x3b8);
        }
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(pbVar20,uVar9,uVar10,uVar8,0,uVar8,0);
        if (((byte)*pbVar20 & 1) != 0) goto LAB_01823830;
LAB_01823804:
        pcVar11 = param_1 + 0x3b4;
      }
      if (sVar7 != 0) {
        lVar18 = sVar7 * 4;
        uVar10 = (lVar18 - 4U >> 2) + 1;
        pcVar14 = local_264;
        pcVar17 = pcVar11;
        if ((uVar10 < 8) ||
           ((pcVar11 < local_264 + lVar18 && (pcVar14 = local_264, local_264 < pcVar11 + lVar18))))
        {
LAB_018238d4:
          do {
            pcVar13 = pcVar14 + 4;
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
            pcVar17 = pcVar17 + 4;
            pcVar14 = pcVar13;
          } while (local_264 + sVar7 * 4 != pcVar13);
        }
        else {
          uVar8 = uVar10 & 0x7ffffffffffffff8;
          puVar19 = auStack_25c + 1;
          pcVar17 = pcVar11 + uVar8 * 4;
          pcVar14 = local_264 + uVar8 * 4;
          pcVar13 = pcVar11 + 0x10;
          uVar9 = uVar8;
          do {
            puVar4 = puVar19 + -1;
            uVar22 = puVar19[-2];
            uVar24 = puVar19[1];
            uVar23 = *puVar19;
            puVar19 = puVar19 + 4;
            uVar9 = uVar9 - 8;
            *(undefined8 *)(pcVar13 + -8) = *puVar4;
            *(undefined8 *)(pcVar13 + -0x10) = uVar22;
            *(undefined8 *)(pcVar13 + 8) = uVar24;
            *(undefined8 *)pcVar13 = uVar23;
            pcVar13 = pcVar13 + 0x20;
          } while (uVar9 != 0);
          if (uVar10 != uVar8) goto LAB_018238d4;
        }
        pcVar11 = pcVar11 + (long)(local_264 + (lVar18 - (long)local_264));
      }
      *(undefined4 *)pcVar11 = 0;
      if (((byte)*pbVar20 & 1) == 0) {
        *pbVar20 = SUB41((int)sVar7 << 1,0);
      }
      else {
        *(ulong *)(param_1 + 0x3b8) = uVar21;
      }
      cVar5 = (char)param_1;
      __analyze(cVar5,(ctype *)0x63);
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
      __analyze(cVar5,(ctype *)0x72);
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
      __analyze(cVar5,(ctype *)0x78);
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
      __analyze(cVar5,(ctype *)0x58);
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
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
      goto LAB_01823abc;
    }
  }
LAB_01823ab0:
  __throw_runtime_error("locale not supported");
LAB_01823abc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

