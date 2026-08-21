
/* WARNING: Removing unreachable block (ram,0x007cab34) */
/* cocos2d::FileUtilsAndroid::getNewFilename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void __thiscall
cocos2d::FileUtilsAndroid::getNewFilename(FileUtilsAndroid *this,basic_string *param_1)

{
  ulong *puVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  byte bVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar6;
  size_t sVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  ulong *puVar11;
  void *__src;
  int iVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  ulong *puVar14;
  void *pvVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong *puVar22;
  long lVar23;
  byte *pbVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  FileUtils::getNewFilename((basic_string *)this);
  uVar16 = *(ulong *)(in_x8 + 8);
  pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (in_x8 + 0x10);
  if (((byte)*in_x8 & 1) == 0) {
    pbVar4 = in_x8 + 1;
    uVar16 = (ulong)((byte)*in_x8 >> 1);
  }
  if (2 < (long)uVar16) {
    pbVar2 = pbVar4 + uVar16;
    pbVar13 = pbVar4;
    do {
      if ((uVar16 - 2 == 0) ||
         (pbVar13 = memchr(pbVar13,0x2e,uVar16 - 2),
         pbVar13 ==
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0))
      break;
      iVar12 = memcmp(pbVar13,&DAT_013c94bb,3);
      if (iVar12 == 0) {
        if ((pbVar13 != pbVar2) &&
           ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x1 <
            pbVar13 + (1 - (long)pbVar4))) {
          puVar14 = operator_new(0x48);
          *puVar14 = 0;
          puVar14[1] = 0;
          puVar14[2] = 0;
          puVar14[3] = 0;
          puVar14[4] = 0;
          puVar14[5] = 0;
          puVar14[7] = 0;
          puVar14[8] = 0;
          puVar14[6] = 0;
          puVar25 = puVar14 + 9;
          if ((puVar14[3] & 1) != 0) {
            operator_delete((void *)puVar14[5]);
          }
          if ((*puVar14 & 1) != 0) {
            operator_delete((void *)puVar14[2]);
          }
          bVar6 = *in_x8;
          uVar19 = *(ulong *)(in_x8 + 8);
          uVar16 = 0;
          uVar3 = (ulong)((byte)bVar6 >> 1);
          if (((byte)bVar6 & 1) != 0) {
            uVar3 = uVar19;
          }
          bVar10 = false;
          puVar26 = puVar14;
          goto LAB_007cab98;
        }
        break;
      }
      pbVar13 = pbVar13 + 1;
      uVar16 = (long)pbVar2 - (long)pbVar13;
    } while (2 < (long)uVar16);
  }
LAB_007cb0a8:
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_007cab98:
  pbVar4 = in_x8 + 1;
  uVar21 = (ulong)((byte)bVar6 >> 1);
  if (((byte)bVar6 & 1) != 0) {
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (in_x8 + 0x10);
    uVar21 = uVar19;
  }
  sVar7 = uVar21 - uVar16;
  if (((uVar21 < uVar16 || sVar7 == 0) || (sVar7 == 0)) ||
     (pvVar15 = memchr(pbVar4 + uVar16,0x2f,sVar7), pvVar15 == (void *)0x0)) {
LAB_007cac14:
    local_90 = (void *)0x0;
    uStack_98 = 0;
    local_a0 = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_80,(ulong)in_x8,uVar16,(allocator *)(uVar3 - uVar16));
    bVar9 = false;
    lVar23 = -1;
  }
  else {
    lVar23 = (long)pvVar15 - (long)pbVar4;
    uStack_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    if (lVar23 == -1) goto LAB_007cac14;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_80,(ulong)in_x8,uVar16,(allocator *)((lVar23 - uVar16) + 1))
    ;
    bVar9 = true;
  }
  lVar20 = (long)puVar14 - (long)puVar26 >> 3;
  local_90 = local_70;
  uStack_98 = uStack_78;
  local_a0 = local_80;
  puVar22 = puVar26;
  if ((long)puVar14 - (long)puVar26 == 0) {
LAB_007cad84:
    pvVar15 = local_90;
    uVar16 = uStack_98;
    if (puVar14 == puVar25) {
      uVar16 = lVar20 * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar16) goto LAB_007cb0d8;
      lVar17 = (long)puVar25 - (long)puVar26 >> 3;
      uVar19 = 0xaaaaaaaaaaaaaaa;
      if ((ulong)(lVar17 * -0x5555555555555555) < 0x555555555555555) {
        uVar21 = lVar17 * 0x5555555555555556;
        uVar19 = uVar16;
        if (uVar16 <= uVar21) {
          uVar19 = uVar21;
        }
        if (uVar19 != 0) goto LAB_007cae00;
        pvVar15 = (void *)0x0;
      }
      else {
LAB_007cae00:
        pvVar15 = operator_new(uVar19 * 0x18);
      }
      __src = local_90;
      uVar16 = uStack_98;
      puVar22 = (ulong *)((long)pvVar15 + lVar20 * 8);
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      if ((local_a0 & 1) == 0) {
        puVar22[2] = (ulong)local_90;
        puVar22[1] = uStack_98;
        *puVar22 = local_a0;
      }
      else {
        if (0xffffffffffffffef < uStack_98) {
LAB_007cb0d8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (uStack_98 < 0x17) {
          pbVar24 = (byte *)((long)puVar22 + 1);
          *(byte *)puVar22 = (byte)((int)uStack_98 << 1);
          if (uStack_98 != 0) goto LAB_007caf20;
        }
        else {
          uVar21 = uStack_98 + 0x10 & 0xfffffffffffffff0;
          pbVar24 = operator_new(uVar21);
          *(ulong *)((long)pvVar15 + lVar20 * 8 + 8) = uVar16;
          *(byte **)((long)pvVar15 + lVar20 * 8 + 0x10) = pbVar24;
          *puVar22 = uVar21 | 1;
LAB_007caf20:
          memcpy(pbVar24,__src,uVar16);
        }
        pbVar24[uVar16] = 0;
      }
      puVar25 = (ulong *)((long)pvVar15 + uVar19 * 0x18);
      puVar1 = puVar22 + 3;
      puVar18 = puVar14;
      if (puVar14 != puVar26) {
        do {
          uVar19 = puVar18[-2];
          uVar16 = puVar18[-3];
          puVar22[-1] = puVar18[-1];
          puVar22[-2] = uVar19;
          puVar22[-3] = uVar16;
          puVar18[-2] = 0;
          puVar18[-1] = 0;
          puVar18[-3] = 0;
          puVar18 = puVar18 + -3;
          puVar22 = puVar22 + -3;
        } while (puVar26 != puVar18);
        bVar5 = (byte)puVar14[-3];
        puVar18 = puVar14 + -3;
        while( true ) {
          puVar11 = puVar18;
          if ((bVar5 & 1) != 0) {
            operator_delete((void *)puVar14[-1]);
          }
          if (puVar26 == puVar11) break;
          bVar5 = (byte)puVar11[-3];
          puVar18 = puVar11 + -3;
          puVar14 = puVar11;
        }
      }
      puVar14 = puVar1;
      if (puVar26 != (ulong *)0x0) {
        operator_delete(puVar26);
      }
    }
    else {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      if ((local_a0 & 1) == 0) {
        puVar14[2] = (ulong)local_90;
        puVar14[1] = uStack_98;
        *puVar14 = local_a0;
      }
      else {
        if (0xffffffffffffffef < uStack_98) goto LAB_007cb0d8;
        if (uStack_98 < 0x17) {
          pbVar24 = (byte *)((long)puVar14 + 1);
          *(byte *)puVar14 = (byte)((int)uStack_98 << 1);
          if (uStack_98 != 0) goto LAB_007caebc;
        }
        else {
          uVar19 = uStack_98 + 0x10 & 0xfffffffffffffff0;
          pbVar24 = operator_new(uVar19);
          puVar14[1] = uVar16;
          puVar14[2] = (ulong)pbVar24;
          *puVar14 = uVar19 | 1;
LAB_007caebc:
          memcpy(pbVar24,pvVar15,uVar16);
        }
        pbVar24[uVar16] = 0;
      }
      puVar14 = puVar14 + 3;
    }
  }
  else {
    lVar17 = lVar20 * -0x5555555555555555 + -1;
    bVar5 = (byte)puVar26[lVar17 * 3];
    if ((bVar5 & 1) == 0) {
      uVar16 = (ulong)(bVar5 >> 1);
      pbVar24 = (byte *)((long)(puVar26 + lVar17 * 3) + 1);
    }
    else {
      uVar16 = puVar26[lVar17 * 3 + 1];
      pbVar24 = (byte *)puVar26[lVar17 * 3 + 2];
    }
    sVar7 = 3;
    if (uVar16 < 4) {
      sVar7 = uVar16;
    }
    if (((sVar7 == 0) || (iVar12 = memcmp(pbVar24,&DAT_013c94bb,sVar7), iVar12 == 0)) &&
       (3 < uVar16 != 2 < uVar16)) goto LAB_007cad84;
    uVar19 = local_a0;
    uVar16 = local_a0 >> 1 & 0x7f;
    if ((local_a0 & 1) != 0) {
      uVar16 = uStack_98;
    }
    sVar7 = 3;
    if (uVar16 < 4) {
      sVar7 = uVar16;
    }
    if (sVar7 == 0) {
LAB_007cad00:
      if (3 < uVar16 == 2 < uVar16) goto LAB_007cad18;
    }
    else {
      pvVar15 = (void *)((ulong)&local_a0 | 1);
      if ((local_a0 & 1) != 0) {
        pvVar15 = local_90;
      }
      iVar12 = memcmp(pvVar15,&DAT_013c94bb,sVar7);
      if (iVar12 == 0) goto LAB_007cad00;
LAB_007cad18:
      sVar7 = 2;
      if (uVar16 < 3) {
        sVar7 = uVar16;
      }
      if (sVar7 != 0) {
        pvVar15 = (void *)((ulong)&local_a0 | 1);
        if ((uVar19 & 1) != 0) {
          pvVar15 = local_90;
        }
        iVar12 = memcmp(pvVar15,&DAT_013c8a35,sVar7);
        if (iVar12 != 0) goto LAB_007cad84;
      }
      if (2 < uVar16 == 1 < uVar16) goto LAB_007cad84;
    }
    if ((puVar14[-3] & 1) != 0) {
      operator_delete((void *)puVar14[-1]);
    }
    bVar10 = true;
    puVar14 = puVar14 + -3;
  }
  puVar26 = puVar22;
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (!bVar9) goto LAB_007caff4;
  bVar6 = *in_x8;
  uVar19 = *(ulong *)(in_x8 + 8);
  uVar16 = lVar23 + 1;
  goto LAB_007cab98;
LAB_007caff4:
  if (bVar10) {
    puVar25 = puVar26;
    if (((byte)*in_x8 & 1) == 0) {
      *(undefined2 *)in_x8 = 0;
    }
    else {
      **(undefined1 **)(in_x8 + 0x10) = 0;
      *(undefined8 *)(in_x8 + 8) = 0;
    }
    for (; puVar25 != puVar14; puVar25 = puVar25 + 3) {
      uVar16 = puVar25[1];
      pbVar24 = (byte *)puVar25[2];
      if (((byte)*puVar25 & 1) == 0) {
        pbVar24 = (byte *)((long)puVar25 + 1);
        uVar16 = (ulong)(byte)((byte)*puVar25 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(in_x8,(char *)pbVar24,uVar16);
    }
  }
  if (puVar26 != (ulong *)0x0) {
    if (puVar26 != puVar14) {
      bVar5 = (byte)puVar14[-3];
      puVar25 = puVar14 + -3;
      while( true ) {
        puVar22 = puVar25;
        if ((bVar5 & 1) != 0) {
          operator_delete((void *)puVar14[-1]);
        }
        if (puVar26 == puVar22) break;
        bVar5 = (byte)puVar22[-3];
        puVar25 = puVar22 + -3;
        puVar14 = puVar22;
      }
    }
    operator_delete(puVar26);
  }
  goto LAB_007cb0a8;
}

