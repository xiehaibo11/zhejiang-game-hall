
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::Properties::readProperties() */

void __thiscall cocos2d::Properties::readProperties(Properties *this)

{
  vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>
  *this_00;
  vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>> *this_01;
  void *pvVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  Data *pDVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  size_t sVar9;
  void *pvVar10;
  size_t sVar11;
  Properties *pPVar12;
  char cVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  void *pvVar18;
  long *plVar19;
  long lVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char cVar25;
  char *pcVar26;
  long lVar27;
  char *pcVar28;
  char *pcVar29;
  ulong uVar30;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_9d0;
  undefined7 uStack_9cf;
  ulong uStack_9c8;
  void *local_9c0;
  Properties *local_9b8;
  ulong uStack_9b0;
  void *local_9a8;
  Properties *local_9a0;
  ulong uStack_998;
  void *local_990;
  undefined8 local_988;
  ulong uStack_980;
  void *local_978;
  char acStack_970 [254];
  char acStack_872 [2];
  undefined2 local_870;
  long local_70;
  
  lVar5 = tpidr_el0;
  this_00 = (vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>
             *)(this + 0x58);
  this_01 = (vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>> *)
            (this + 0x78);
  local_70 = *(long *)(lVar5 + 0x28);
  pvVar18 = (void *)((ulong)&local_9a0 | 1);
  pvVar1 = (void *)((long)&local_988 + 1);
  bVar7 = false;
  pcVar14 = acStack_872 + 1;
LAB_00fad6ac:
  while( true ) {
    plVar17 = *(long **)this;
    plVar19 = *(long **)(this + 8);
    lVar27 = *plVar17;
    do {
      if (lVar27 < plVar19[1]) {
        lVar15 = *plVar19;
        *plVar17 = lVar27 + 1;
        cVar25 = *(char *)(lVar15 + lVar27);
        lVar27 = lVar27 + 1;
      }
      else {
        cVar25 = -1;
      }
      iVar8 = isspace((int)cVar25);
    } while ((cVar25 != -1) && (iVar8 != 0));
                    /* catch() { ... } // from try @ 00fad634 with catch @ 00fad6f4 */
    if (cVar25 != -1) {
      lVar27 = lVar27 + -1;
      *plVar17 = lVar27;
    }
    if (plVar19[1] <= lVar27) break;
    uVar16 = 0;
    do {
                    /* try { // try from 00fad710 to 010ad727 has its CatchHandler @ 00fad710
                       catch() { ... } // from try @ 00fad710 with catch @ 00fad710
                       catch() { ... } // from try @ 00fad730 with catch @ 00fad710 */
      cVar25 = *(char *)(*plVar19 + lVar27 + uVar16);
      if (cVar25 == '\n') break;
                    /* try { // try from 00fad728 to 010ad72f has its CatchHandler @ 00fad748 */
      *(char *)((long)&local_870 + uVar16) = cVar25;
      if (uVar16 == 0x7ff) {
                    /* catch() { ... } // from try @ 00fad728 with catch @ 00fad748 */
        uVar16 = 0x800;
        break;
      }
                    /* try { // try from 00fad730 to 010ad75b has its CatchHandler @ 00fad710 */
      uVar16 = uVar16 + 1;
    } while ((long)(lVar27 + uVar16) < plVar19[1]);
    *(undefined1 *)((long)&local_870 + (uVar16 & 0xffffffff)) = 0;
    *plVar17 = lVar27 + (uVar16 & 0xffffffff);
                    /* catch() { ... } // from try @ 00fadb34 with catch @ 00fad75c */
    if (!bVar7) goto LAB_00fad7a0;
    bVar7 = false;
    if (local_870 != 0x2f2a) {
      if ((char)local_870 != '\0') {
        pcVar21 = (char *)&local_870;
        pcVar23 = pcVar14;
        cVar25 = (char)local_870;
        do {
          iVar8 = isspace((int)cVar25);
          if (iVar8 == 0) {
            sVar9 = strlen(pcVar21);
            pcVar23 = pcVar23 + sVar9;
            goto LAB_00fad828;
          }
          pcVar21 = pcVar21 + 1;
          cVar25 = *pcVar21;
          pcVar23 = pcVar23 + 1;
        } while (cVar25 != '\0');
      }
      goto LAB_00fad848;
    }
  }
  goto LAB_00fae554;
LAB_00fad7a0:
  bVar7 = true;
  if ((local_870 == 0x2a2f) || (bVar7 = false, local_870 == 0x2f2f)) goto LAB_00fad6ac;
  lVar27 = __strchr_chk(&local_870,0x3d,0x800);
  if (lVar27 == 0) {
    cVar25 = (char)local_870;
    if ((char)local_870 != '\0') {
      pcVar23 = (char *)&local_870;
      pcVar21 = pcVar14;
      cVar13 = (char)local_870;
      do {
                    /* try { // try from 00fad89c to 010ad9cf has its CatchHandler @ 00fadc00 */
        iVar8 = isspace((int)cVar13);
        if (iVar8 == 0) {
          sVar9 = strlen(pcVar23);
          pcVar21 = pcVar21 + sVar9;
          goto LAB_00fad9fc;
        }
        pcVar23 = pcVar23 + 1;
        cVar13 = *pcVar23;
        pcVar21 = pcVar21 + 1;
      } while (cVar13 != '\0');
      goto joined_r0x00fada24;
    }
    pcVar23 = (char *)&local_870;
    pcVar21 = (char *)&local_870;
    goto LAB_00fada74;
  }
  pcVar21 = strtok((char *)&local_870,"=");
                    /* try { // try from 00fad7ec to 010ad83b has its CatchHandler @ 00fadbfc */
  if (pcVar21 == (char *)0x0) goto LAB_00fae554;
  cVar25 = *pcVar21;
  if (cVar25 != '\0') {
    pcVar23 = pcVar21 + -1;
    do {
      iVar8 = isspace((int)cVar25);
      if (iVar8 == 0) {
        sVar9 = strlen(pcVar21);
        pcVar23 = pcVar23 + sVar9;
        goto LAB_00fad8c8;
      }
      pcVar21 = pcVar21 + 1;
      cVar25 = *pcVar21;
      pcVar23 = pcVar23 + 1;
    } while (cVar25 != '\0');
  }
LAB_00fad8e8:
  pcVar23 = strtok((char *)0x0,"");
  if (pcVar23 == (char *)0x0) goto LAB_00fae554;
  cVar25 = *pcVar23;
  if (cVar25 != '\0') {
    pcVar28 = pcVar23 + -1;
    do {
      iVar8 = isspace((int)cVar25);
      if (iVar8 == 0) {
        sVar9 = strlen(pcVar23);
        pcVar28 = pcVar28 + sVar9;
        goto LAB_00fad934;
      }
      pcVar23 = pcVar23 + 1;
      cVar25 = *pcVar23;
      pcVar28 = pcVar28 + 1;
    } while (cVar25 != '\0');
  }
LAB_00fad954:
  uVar16 = FUN_00fafa28(pcVar21,acStack_970);
  if ((uVar16 & 1) != 0) {
    setVariable(this,acStack_970,pcVar23);
    bVar7 = false;
    goto LAB_00fad6ac;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_9b8,pcVar21);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_9d0,pcVar23);
  pvVar6 = local_9a8;
  uVar16 = uStack_9b0;
  uStack_998 = 0;
  local_990 = (void *)0x0;
  local_9a0 = (Properties *)0x0;
  if (((ulong)local_9b8 & 1) == 0) {
    uStack_998 = uStack_9b0;
    local_9a0 = local_9b8;
    local_990 = local_9a8;
  }
  else {
    if (0xffffffffffffffef < uStack_9b0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_9b0 < 0x17) {
      local_9a0 = (Properties *)(ulong)(byte)((int)uStack_9b0 << 1);
      pvVar10 = pvVar18;
      if (uStack_9b0 != 0) goto LAB_00fadbe0;
    }
    else {
      uVar30 = uStack_9b0 + 0x10 & 0xfffffffffffffff0;
      pvVar10 = operator_new(uVar30);
      local_9a0 = (Properties *)(uVar30 | 1);
      uStack_998 = uVar16;
      local_990 = pvVar10;
LAB_00fadbe0:
      memcpy(pvVar10,pvVar6,uVar16);
    }
    *(undefined1 *)((long)pvVar10 + uVar16) = 0;
  }
  pvVar6 = local_9c0;
  uVar16 = uStack_9c8;
                    /* catch() { ... } // from try @ 00fad7ec with catch @ 00fadbfc */
  local_988 = 0;
  uStack_980 = 0;
                    /* catch() { ... } // from try @ 00fad89c with catch @ 00fadc00
                       catch() { ... } // from try @ 00fada28 with catch @ 00fadc00 */
  local_978 = (void *)0x0;
  if (((byte)local_9d0 & 1) == 0) {
    local_988 = CONCAT71(uStack_9cf,local_9d0);
    local_978 = local_9c0;
    uStack_980 = uStack_9c8;
    goto LAB_00fadc80;
  }
                    /* try { // try from 00fadc1c to 010add2b has its CatchHandler @ 00fadc1c
                       catch() { ... } // from try @ 00fadc1c with catch @ 00fadc1c
                       catch() { ... } // from try @ 00fade7c with catch @ 00fadc1c
                       catch() { ... } // from try @ 00fadebc with catch @ 00fadc1c
                       catch() { ... } // from try @ 00fadecc with catch @ 00fadc1c */
  if (0xffffffffffffffef < uStack_9c8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uStack_9c8 < 0x17) {
    local_988 = (ulong)(byte)((int)uStack_9c8 << 1);
    pvVar10 = pvVar1;
    if (uStack_9c8 != 0) goto LAB_00fadc68;
  }
  else {
    uVar30 = uStack_9c8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar30);
    local_988 = uVar30 | 1;
    uStack_980 = uVar16;
    local_978 = pvVar10;
LAB_00fadc68:
    memcpy(pvVar10,pvVar6,uVar16);
  }
  *(undefined1 *)((long)pvVar10 + uVar16) = 0;
LAB_00fadc80:
  puVar2 = *(ulong **)(this + 0x60);
  if (puVar2 < *(ulong **)(this + 0x68)) {
    puVar2[2] = (ulong)local_990;
    puVar2[1] = uStack_998;
    *puVar2 = (ulong)local_9a0;
    uStack_998 = 0;
    local_990 = (void *)0x0;
    local_9a0 = (Properties *)0x0;
    puVar2[5] = (ulong)local_978;
    puVar2[4] = uStack_980;
    puVar2[3] = local_988;
    *(ulong **)(this + 0x60) = puVar2 + 6;
  }
  else {
    std::__ndk1::
    vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>::
    __push_back_slow_path<cocos2d::Properties::Property>(this_00,(Property *)&local_9a0);
    if ((local_988 & 1) != 0) {
                    /* try { // try from 00fadd2c to 010add3b has its CatchHandler @ 00fadf04 */
      operator_delete(local_978);
    }
    if (((ulong)local_9a0 & 1) != 0) {
      operator_delete(local_990);
    }
  }
  if (((byte)local_9d0 & 1) != 0) {
    operator_delete(local_9c0);
  }
  if (((ulong)local_9b8 & 1) != 0) {
    operator_delete(local_9a8);
  }
  bVar7 = false;
  goto LAB_00fad6ac;
  while( true ) {
    iVar8 = isspace((int)*pcVar28);
    pcVar21 = pcVar28 + -1;
    if (iVar8 == 0) break;
LAB_00fad9fc:
    pcVar28 = pcVar21;
                    /* try { // try from 00fada04 to 010ada13 has its CatchHandler @ 00fadb8c */
    if (pcVar28 <= pcVar23) break;
  }
  pcVar28[1] = '\0';
  cVar25 = (char)local_870;
joined_r0x00fada24:
  pcVar21 = (char *)&local_870;
  if (cVar25 != '\0') {
                    /* try { // try from 00fada28 to 010ada3f has its CatchHandler @ 00fadc00 */
    pcVar21 = (char *)&local_870;
    pcVar28 = pcVar14;
    do {
      iVar8 = isspace((int)cVar25);
      if (iVar8 == 0) {
        sVar9 = strlen(pcVar21);
        pcVar28 = pcVar28 + sVar9;
        goto LAB_00fada54;
      }
      pcVar21 = pcVar21 + 1;
      cVar25 = *pcVar21;
      pcVar28 = pcVar28 + 1;
    } while (cVar25 != '\0');
  }
  goto LAB_00fada74;
  while( true ) {
    iVar8 = isspace((int)*pcVar29);
    pcVar28 = pcVar29 + -1;
    if (iVar8 == 0) break;
LAB_00fada54:
    pcVar29 = pcVar28;
    if (pcVar29 <= pcVar21) break;
  }
  pcVar29[1] = '\0';
LAB_00fada74:
  sVar9 = strlen(pcVar21);
  lVar27 = __strchr_chk(&local_870,0x7b,0x800);
  lVar15 = __strchr_chk(&local_870,0x3a,0x800);
                    /* try { // try from 00fadaac to 010adaef has its CatchHandler @ 00fadb8c */
  pcVar21 = (char *)__strchr_chk(&local_870,0x7d,0x800);
  pcVar28 = strtok((char *)&local_870," \t\n{");
  if (pcVar28 == (char *)0x0) {
LAB_00fae554:
    if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  cVar25 = *pcVar28;
  if (cVar25 != '\0') {
    pcVar29 = pcVar28 + -1;
    do {
      iVar8 = isspace((int)cVar25);
      if (iVar8 == 0) {
        sVar11 = strlen(pcVar28);
        pcVar29 = pcVar29 + sVar11;
        goto LAB_00fadb08;
      }
      pcVar28 = pcVar28 + 1;
      cVar25 = *pcVar28;
      pcVar29 = pcVar29 + 1;
    } while (cVar25 != '\0');
  }
LAB_00fadb34:
                    /* try { // try from 00fadb34 to 010adc1b has its CatchHandler @ 00fad75c */
  pcVar29 = strtok((char *)0x0,":{");
  if ((pcVar29 != (char *)0x0) && (cVar25 = *pcVar29, cVar25 != '\0')) {
    pcVar26 = pcVar29 + -1;
    do {
      iVar8 = isspace((int)cVar25);
      if (iVar8 == 0) {
        sVar11 = strlen(pcVar29);
        pcVar26 = pcVar26 + sVar11;
        goto LAB_00fadd50;
      }
      pcVar29 = pcVar29 + 1;
      cVar25 = *pcVar29;
      pcVar26 = pcVar26 + 1;
    } while (cVar25 != '\0');
  }
joined_r0x00fadd78:
  if (lVar15 == 0) {
    pcVar26 = (char *)0x0;
  }
  else {
    pcVar26 = strtok((char *)0x0,"{");
                    /* catch() { ... } // from try @ 00fada04 with catch @ 00fadb8c
                       catch() { ... } // from try @ 00fadaac with catch @ 00fadb8c */
    if ((pcVar26 != (char *)0x0) && (cVar25 = *pcVar26, cVar25 != '\0')) {
      pcVar22 = pcVar26 + -1;
      do {
        iVar8 = isspace((int)cVar25);
        if (iVar8 == 0) {
          sVar11 = strlen(pcVar26);
          pcVar22 = pcVar22 + sVar11;
          goto LAB_00fadd9c;
        }
        pcVar26 = pcVar26 + 1;
        cVar25 = *pcVar26;
                    /* catch() { ... } // from try @ 00fadb24 with catch @ 00fadbac */
        pcVar22 = pcVar22 + 1;
      } while (cVar25 != '\0');
    }
  }
joined_r0x00faddc4:
  pcVar23 = pcVar23 + (sVar9 - 1);
  if ((pcVar29 != (char *)0x0) && (*pcVar29 == '{')) {
    if (pcVar21 != (char *)0x0 && pcVar21 == pcVar23) {
      plVar17 = *(long **)this;
      lVar15 = *plVar17;
      lVar27 = lVar15 + -1;
      *plVar17 = lVar27;
      if (0 < lVar15) {
        plVar19 = *(long **)(this + 8);
        lVar20 = plVar19[1];
        if (lVar15 <= lVar20) {
          do {
            lVar15 = lVar27;
            if (lVar27 < lVar20) {
              lVar20 = *plVar19;
              *plVar17 = lVar27 + 1;
              lVar15 = lVar27 + 1;
              if (*(char *)(lVar20 + lVar27) == '}') goto LAB_00fae148;
            }
            lVar27 = lVar15 + -2;
            *plVar17 = lVar27;
            if ((lVar27 < 0) || (lVar20 = plVar19[1], lVar20 <= lVar27)) break;
          } while( true );
        }
      }
      goto LAB_00fae554;
    }
LAB_00fae15c:
    pPVar12 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
    if (pPVar12 != (Properties *)0x0) {
      plVar17 = *(long **)this;
      pDVar4 = *(Data **)(this + 8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_9a0,pcVar28);
      Properties(pPVar12,pDVar4,plVar17,(basic_string *)&local_9a0,(char *)0x0,pcVar26,this);
      if (((ulong)local_9a0 & 1) != 0) {
        operator_delete(local_990);
      }
    }
    puVar3 = *(undefined8 **)(this + 0x80);
    local_9b8 = pPVar12;
    if (puVar3 == *(undefined8 **)(this + 0x88)) {
      std::__ndk1::vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>>::
      __push_back_slow_path<cocos2d::Properties*const&>(this_01,&local_9b8);
    }
    else {
      *puVar3 = pPVar12;
      *(undefined8 **)(this + 0x80) = puVar3 + 1;
    }
    if (pcVar21 != (char *)0x0 && pcVar21 == pcVar23) {
      lVar15 = **(long **)this;
      lVar27 = lVar15 + 1;
      **(long **)this = lVar27;
      if ((lVar15 < -1) || (*(long *)(*(long *)(this + 8) + 8) <= lVar27)) goto LAB_00fae554;
    }
    bVar7 = false;
    goto LAB_00fad6ac;
  }
  if (lVar27 != 0) {
                    /* try { // try from 00fade74 to 010ade7b has its CatchHandler @ 00faded0 */
    if (pcVar21 != (char *)0x0 && pcVar21 == pcVar23) {
      plVar17 = *(long **)this;
                    /* try { // try from 00fade7c to 010adeb7 has its CatchHandler @ 00fadc1c */
      lVar15 = *plVar17;
      lVar27 = lVar15 + -1;
      *plVar17 = lVar27;
      if (0 < lVar15) {
        plVar19 = *(long **)(this + 8);
        lVar20 = plVar19[1];
        if (lVar15 <= lVar20) {
          do {
            lVar15 = lVar27;
            if (lVar27 < lVar20) {
              lVar20 = *plVar19;
              *plVar17 = lVar27 + 1;
              lVar15 = lVar27 + 1;
                    /* try { // try from 00fadeb8 to 010adebb has its CatchHandler @ 00fadecc */
              if (*(char *)(lVar20 + lVar27) == '}') goto LAB_00fae050;
            }
                    /* try { // try from 00fadec4 to 010adecb has its CatchHandler @ 00faded0 */
            lVar27 = lVar15 + -2;
            *plVar17 = lVar27;
                    /* catch() { ... } // from try @ 00fadeb8 with catch @ 00fadecc
                       try { // try from 00fadecc to 010adf27 has its CatchHandler @ 00fadc1c */
                    /* catch() { ... } // from try @ 00fade74 with catch @ 00faded0
                       catch() { ... } // from try @ 00fadec4 with catch @ 00faded0 */
            if ((lVar27 < 0) || (lVar20 = plVar19[1], lVar20 <= lVar27)) break;
          } while( true );
        }
      }
      goto LAB_00fae554;
    }
LAB_00fae064:
    pPVar12 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
    if (pPVar12 != (Properties *)0x0) {
      plVar17 = *(long **)this;
      pDVar4 = *(Data **)(this + 8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_9a0,pcVar28);
      Properties(pPVar12,pDVar4,plVar17,(basic_string *)&local_9a0,pcVar29,pcVar26,this);
      if (((ulong)local_9a0 & 1) != 0) {
        operator_delete(local_990);
      }
    }
    puVar3 = *(undefined8 **)(this + 0x80);
    local_9b8 = pPVar12;
    if (puVar3 == *(undefined8 **)(this + 0x88)) {
      std::__ndk1::vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>>::
      __push_back_slow_path<cocos2d::Properties*const&>(this_01,&local_9b8);
    }
    else {
      *puVar3 = pPVar12;
      *(undefined8 **)(this + 0x80) = puVar3 + 1;
    }
    if (pcVar21 != (char *)0x0 && pcVar21 == pcVar23) {
      lVar15 = **(long **)this;
      lVar27 = lVar15 + 1;
      **(long **)this = lVar27;
      if ((lVar15 < -1) || (*(long *)(*(long *)(this + 8) + 8) <= lVar27)) goto LAB_00fae554;
    }
    bVar7 = false;
    goto LAB_00fad6ac;
  }
  plVar17 = *(long **)this;
  pDVar4 = *(Data **)(this + 8);
                    /* catch() { ... } // from try @ 00faddb8 with catch @ 00fadee4
                       catch() { ... } // from try @ 00fadec0 with catch @ 00fadee4 */
  lVar27 = *plVar17;
  do {
    if (lVar27 < *(long *)(pDVar4 + 8)) {
      lVar15 = *(long *)pDVar4;
      *plVar17 = lVar27 + 1;
      cVar25 = *(char *)(lVar15 + lVar27);
      lVar27 = lVar27 + 1;
                    /* catch() { ... } // from try @ 00fadd2c with catch @ 00fadf04 */
    }
    else {
      cVar25 = -1;
    }
    iVar8 = isspace((int)cVar25);
  } while ((cVar25 != -1) && (iVar8 != 0));
  if (cVar25 != -1) {
    lVar27 = lVar27 + -1;
    *plVar17 = lVar27;
  }
  lVar15 = lVar27;
  if (lVar27 < *(long *)(pDVar4 + 8)) {
    lVar20 = *(long *)pDVar4;
    lVar15 = lVar27 + 1;
    *plVar17 = lVar15;
    if (*(char *)(lVar20 + lVar27) == '{') {
      pPVar12 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
      if (pPVar12 != (Properties *)0x0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_9a0,pcVar28);
        Properties(pPVar12,pDVar4,plVar17,(basic_string *)&local_9a0,pcVar29,pcVar26,this);
        if (((ulong)local_9a0 & 1) != 0) {
          operator_delete(local_990);
        }
      }
      puVar3 = *(undefined8 **)(this + 0x80);
      local_9b8 = pPVar12;
      if (puVar3 == *(undefined8 **)(this + 0x88)) {
        std::__ndk1::vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>>::
        __push_back_slow_path<cocos2d::Properties*const&>(this_01,&local_9b8);
        bVar7 = false;
      }
      else {
        *puVar3 = pPVar12;
        *(undefined8 **)(this + 0x80) = puVar3 + 1;
        bVar7 = false;
      }
      goto LAB_00fad6ac;
    }
  }
  *plVar17 = lVar15 + -1;
  if (pcVar29 == (char *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_9b8,pcVar28);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_9d0,"");
    pvVar6 = local_9a8;
    uVar16 = uStack_9b0;
    uStack_998 = 0;
    local_990 = (void *)0x0;
    local_9a0 = (Properties *)0x0;
    if (((ulong)local_9b8 & 1) == 0) {
      uStack_998 = uStack_9b0;
      local_9a0 = local_9b8;
      local_990 = local_9a8;
    }
    else {
      if (0xffffffffffffffef < uStack_9b0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_9b0 < 0x17) {
        local_9a0 = (Properties *)(ulong)(byte)((int)uStack_9b0 << 1);
        pvVar10 = pvVar18;
        if (uStack_9b0 != 0) goto LAB_00fae3f4;
      }
      else {
        uVar30 = uStack_9b0 + 0x10 & 0xfffffffffffffff0;
        pvVar10 = operator_new(uVar30);
        local_9a0 = (Properties *)(uVar30 | 1);
        uStack_998 = uVar16;
        local_990 = pvVar10;
LAB_00fae3f4:
        memcpy(pvVar10,pvVar6,uVar16);
      }
      *(undefined1 *)((long)pvVar10 + uVar16) = 0;
    }
    pvVar6 = local_9c0;
    uVar16 = uStack_9c8;
    local_988 = 0;
    uStack_980 = 0;
    local_978 = (void *)0x0;
    if (((byte)local_9d0 & 1) == 0) {
      local_988 = CONCAT71(uStack_9cf,local_9d0);
      local_978 = local_9c0;
      uStack_980 = uStack_9c8;
      goto LAB_00fae494;
    }
    if (0xffffffffffffffef < uStack_9c8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_9c8 < 0x17) {
      local_988 = (ulong)(byte)((int)uStack_9c8 << 1);
      pvVar10 = pvVar1;
      if (uStack_9c8 != 0) goto LAB_00fae47c;
    }
    else {
      uVar30 = uStack_9c8 + 0x10 & 0xfffffffffffffff0;
      pvVar10 = operator_new(uVar30);
      local_988 = uVar30 | 1;
      uStack_980 = uVar16;
      local_978 = pvVar10;
LAB_00fae47c:
      memcpy(pvVar10,pvVar6,uVar16);
    }
    *(undefined1 *)((long)pvVar10 + uVar16) = 0;
LAB_00fae494:
    puVar2 = *(ulong **)(this + 0x60);
    if (puVar2 < *(ulong **)(this + 0x68)) {
      puVar2[2] = (ulong)local_990;
      puVar2[1] = uStack_998;
      *puVar2 = (ulong)local_9a0;
      uStack_998 = 0;
      local_990 = (void *)0x0;
      local_9a0 = (Properties *)0x0;
      puVar2[5] = (ulong)local_978;
      puVar2[4] = uStack_980;
      puVar2[3] = local_988;
      *(ulong **)(this + 0x60) = puVar2 + 6;
    }
    else {
      std::__ndk1::
      vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>::
      __push_back_slow_path<cocos2d::Properties::Property>(this_00,(Property *)&local_9a0);
      if ((local_988 & 1) != 0) {
        operator_delete(local_978);
      }
      if (((ulong)local_9a0 & 1) != 0) {
        operator_delete(local_990);
      }
    }
    if (((byte)local_9d0 & 1) != 0) {
      operator_delete(local_9c0);
    }
    if (((ulong)local_9b8 & 1) != 0) {
      operator_delete(local_9a8);
    }
    bVar7 = false;
    goto LAB_00fad6ac;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_9b8,pcVar28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_9d0,pcVar29);
  pvVar6 = local_9a8;
  uVar16 = uStack_9b0;
  uStack_998 = 0;
  local_990 = (void *)0x0;
  local_9a0 = (Properties *)0x0;
  if (((ulong)local_9b8 & 1) == 0) {
    uStack_998 = uStack_9b0;
    local_9a0 = local_9b8;
    local_990 = local_9a8;
  }
  else {
    if (0xffffffffffffffef < uStack_9b0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_9b0 < 0x17) {
      local_9a0 = (Properties *)(ulong)(byte)((int)uStack_9b0 << 1);
      pvVar10 = pvVar18;
      if (uStack_9b0 != 0) goto LAB_00fae260;
    }
    else {
      uVar30 = uStack_9b0 + 0x10 & 0xfffffffffffffff0;
      pvVar10 = operator_new(uVar30);
      local_9a0 = (Properties *)(uVar30 | 1);
      uStack_998 = uVar16;
      local_990 = pvVar10;
LAB_00fae260:
      memcpy(pvVar10,pvVar6,uVar16);
    }
    *(undefined1 *)((long)pvVar10 + uVar16) = 0;
  }
  pvVar6 = local_9c0;
  uVar16 = uStack_9c8;
  local_988 = 0;
  uStack_980 = 0;
  local_978 = (void *)0x0;
  if (((byte)local_9d0 & 1) == 0) {
    local_988 = CONCAT71(uStack_9cf,local_9d0);
    local_978 = local_9c0;
    uStack_980 = uStack_9c8;
    goto LAB_00fae300;
  }
  if (0xffffffffffffffef < uStack_9c8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uStack_9c8 < 0x17) {
    local_988 = (ulong)(byte)((int)uStack_9c8 << 1);
    pvVar10 = pvVar1;
    if (uStack_9c8 != 0) goto LAB_00fae2e8;
  }
  else {
    uVar30 = uStack_9c8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar30);
    local_988 = uVar30 | 1;
    uStack_980 = uVar16;
    local_978 = pvVar10;
LAB_00fae2e8:
    memcpy(pvVar10,pvVar6,uVar16);
  }
  *(undefined1 *)((long)pvVar10 + uVar16) = 0;
LAB_00fae300:
  puVar2 = *(ulong **)(this + 0x60);
  if (puVar2 < *(ulong **)(this + 0x68)) {
    puVar2[2] = (ulong)local_990;
    puVar2[1] = uStack_998;
    *puVar2 = (ulong)local_9a0;
    uStack_998 = 0;
    local_990 = (void *)0x0;
    local_9a0 = (Properties *)0x0;
    puVar2[5] = (ulong)local_978;
    puVar2[4] = uStack_980;
    puVar2[3] = local_988;
    *(ulong **)(this + 0x60) = puVar2 + 6;
  }
  else {
    std::__ndk1::
    vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>::
    __push_back_slow_path<cocos2d::Properties::Property>(this_00,(Property *)&local_9a0);
    if ((local_988 & 1) != 0) {
      operator_delete(local_978);
    }
    if (((ulong)local_9a0 & 1) != 0) {
      operator_delete(local_990);
    }
  }
  if (((byte)local_9d0 & 1) != 0) {
    operator_delete(local_9c0);
  }
  if (((ulong)local_9b8 & 1) != 0) {
    operator_delete(local_9a8);
  }
  bVar7 = false;
  goto LAB_00fad6ac;
  while( true ) {
    iVar8 = isspace((int)*pcVar26);
    pcVar29 = pcVar26 + -1;
    if (iVar8 == 0) break;
LAB_00fadb08:
    pcVar26 = pcVar29;
    if (pcVar26 <= pcVar28) break;
  }
                    /* try { // try from 00fadb24 to 010adb33 has its CatchHandler @ 00fadbac */
  pcVar26[1] = '\0';
  if (*pcVar28 == '}') goto LAB_00fae554;
  goto LAB_00fadb34;
  while( true ) {
    iVar8 = isspace((int)*pcVar22);
    pcVar26 = pcVar22 + -1;
    if (iVar8 == 0) break;
LAB_00fadd50:
    pcVar22 = pcVar26;
    if (pcVar22 <= pcVar29) break;
  }
  pcVar22[1] = '\0';
  goto joined_r0x00fadd78;
  while( true ) {
    iVar8 = isspace((int)*pcVar24);
    pcVar22 = pcVar24 + -1;
    if (iVar8 == 0) break;
LAB_00fadd9c:
    pcVar24 = pcVar22;
    if (pcVar24 <= pcVar26) break;
  }
                    /* try { // try from 00faddb8 to 010ade67 has its CatchHandler @ 00fadee4 */
  pcVar24[1] = '\0';
  goto joined_r0x00faddc4;
LAB_00fae148:
  *plVar17 = lVar27;
  if ((lVar27 < 0) || (plVar19[1] <= lVar27)) goto LAB_00fae554;
  goto LAB_00fae15c;
LAB_00fae050:
  *plVar17 = lVar27;
  if ((lVar27 < 0) || (plVar19[1] <= lVar27)) goto LAB_00fae554;
  goto LAB_00fae064;
  while( true ) {
    iVar8 = isspace((int)*pcVar28);
    pcVar23 = pcVar28 + -1;
    if (iVar8 == 0) break;
LAB_00fad8c8:
    pcVar28 = pcVar23;
    if (pcVar28 <= pcVar21) break;
  }
  pcVar28[1] = '\0';
  goto LAB_00fad8e8;
  while( true ) {
    iVar8 = isspace((int)*pcVar29);
    pcVar28 = pcVar29 + -1;
    if (iVar8 == 0) break;
LAB_00fad934:
    pcVar29 = pcVar28;
    if (pcVar29 <= pcVar23) break;
  }
  pcVar29[1] = '\0';
  goto LAB_00fad954;
  while( true ) {
    iVar8 = isspace((int)*pcVar28);
    pcVar23 = pcVar28 + -1;
    if (iVar8 == 0) break;
LAB_00fad828:
    pcVar28 = pcVar23;
    if (pcVar28 <= pcVar21) break;
  }
  pcVar28[1] = '\0';
LAB_00fad848:
  uVar16 = __strlen_chk(&local_870,0x800);
  bVar7 = true;
  if (1 < uVar16) {
    iVar8 = strncmp(acStack_872 + uVar16,"*/",2);
    bVar7 = iVar8 != 0;
  }
  goto LAB_00fad6ac;
}

