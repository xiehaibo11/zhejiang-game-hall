
/* WARNING: Removing unreachable block (ram,0x0085b02c) */
/* cocos2d::FileUtilsAndroid::getNewFilename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void __thiscall
cocos2d::FileUtilsAndroid::getNewFilename(FileUtilsAndroid *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  ulong uVar2;
  size_t sVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  byte bVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  ulong *puVar10;
  int iVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar12;
  ulong *puVar13;
  void *pvVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  void *pvVar18;
  ulong *puVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong *local_80;
  ulong *local_78;
  ulong *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FileUtils::getNewFilename((basic_string *)this);
  uVar15 = *(ulong *)(in_x8 + 8);
  pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (in_x8 + 0x10);
  if (((byte)*in_x8 & 1) == 0) {
    pbVar4 = in_x8 + 1;
    uVar15 = (ulong)((byte)*in_x8 >> 1);
  }
  if (2 < (long)uVar15) {
    pbVar1 = pbVar4 + uVar15;
    pbVar12 = pbVar4;
    do {
      if ((uVar15 - 2 == 0) ||
         (pbVar12 = memchr(pbVar12,0x2e,uVar15 - 2),
         pbVar12 ==
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0))
      break;
      iVar11 = memcmp(pbVar12,&DAT_01896b8b,3);
      if (iVar11 == 0) {
        if ((pbVar12 != pbVar1) &&
           ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x1 <
            pbVar12 + (1 - (long)pbVar4))) {
          puVar13 = operator_new(0x48);
          local_78 = puVar13 + 9;
          puVar13[6] = 0;
          puVar13[7] = 0;
          puVar13[3] = 0;
          puVar13[2] = 0;
          puVar13[5] = 0;
          puVar13[4] = 0;
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13[8] = 0;
          local_80 = puVar13;
          local_70 = local_78;
          if ((puVar13[3] & 1) == 0) {
            bVar5 = (byte)*puVar13;
          }
          else {
            operator_delete((void *)puVar13[5]);
            bVar5 = (byte)*puVar13;
          }
          if ((bVar5 & 1) != 0) {
            operator_delete((void *)puVar13[2]);
          }
          bVar6 = *in_x8;
          uVar16 = *(ulong *)(in_x8 + 8);
          pvVar18 = (void *)((ulong)&local_b8 | 1);
          uVar15 = 0;
          uVar2 = (ulong)((byte)bVar6 >> 1);
          if (((byte)bVar6 & 1) != 0) {
            uVar2 = uVar16;
          }
          bVar9 = false;
          local_78 = puVar13;
          goto LAB_0085ac98;
        }
        break;
      }
      pbVar12 = pbVar12 + 1;
      uVar15 = (long)pbVar1 - (long)pbVar12;
    } while (2 < (long)uVar15);
  }
LAB_0085b0dc:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0085ac98:
  pbVar4 = in_x8 + 1;
  uVar22 = (ulong)((byte)bVar6 >> 1);
  if (((byte)bVar6 & 1) != 0) {
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (in_x8 + 0x10);
    uVar22 = uVar16;
  }
  uVar16 = uVar22 - uVar15;
  if ((uVar22 < uVar15 || uVar16 == 0) || (uVar16 == 0)) {
LAB_0085ad30:
    local_90 = (void *)0x0;
    uStack_98 = 0;
    local_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = (void *)0x0;
    if (uVar22 < uVar15) goto LAB_0085b10c;
    uVar16 = uVar22 - uVar15;
    if (uVar2 - uVar15 <= uVar22 - uVar15) {
      uVar16 = uVar2 - uVar15;
    }
    if (0xffffffffffffffef < uVar16) goto LAB_0085b10c;
    if (uVar16 < 0x17) {
      local_b8 = (ulong)(byte)((int)uVar16 << 1);
      pvVar14 = pvVar18;
      if (uVar16 != 0) goto LAB_0085ad90;
    }
    else {
      uVar22 = uVar16 + 0x10 & 0xfffffffffffffff0;
      pvVar14 = operator_new(uVar22);
      local_b8 = uVar22 | 1;
      uStack_b0 = uVar16;
      local_a8 = pvVar14;
LAB_0085ad90:
      memcpy(pvVar14,pbVar4 + uVar15,uVar16);
    }
    *(undefined1 *)((long)pvVar14 + uVar16) = 0;
    bVar8 = false;
    lVar20 = -1;
  }
  else {
    pvVar14 = memchr(pbVar4 + uVar15,0x2f,uVar16);
    if (pvVar14 == (void *)0x0) goto LAB_0085ad30;
    lVar20 = (long)pvVar14 - (long)pbVar4;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = (void *)0x0;
    if (lVar20 == -1) goto LAB_0085ad30;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = (void *)0x0;
    if (uVar22 < uVar15) goto LAB_0085b10c;
    uVar22 = (lVar20 - uVar15) + 1;
    if (uVar22 <= uVar16) {
      uVar16 = uVar22;
    }
    if (0xffffffffffffffef < uVar16) goto LAB_0085b10c;
    if (uVar16 < 0x17) {
      local_b8 = (ulong)(byte)((int)uVar16 << 1);
      pvVar14 = pvVar18;
      if (uVar16 != 0) goto LAB_0085aff0;
    }
    else {
      uVar22 = uVar16 + 0x10 & 0xfffffffffffffff0;
      pvVar14 = operator_new(uVar22);
      local_b8 = uVar22 | 1;
      uStack_b0 = uVar16;
      local_a8 = pvVar14;
LAB_0085aff0:
      memcpy(pvVar14,pbVar4 + uVar15,uVar16);
    }
    *(undefined1 *)((long)pvVar14 + uVar16) = 0;
    bVar8 = true;
  }
  puVar13 = local_78;
  local_90 = local_a8;
  uStack_98 = uStack_b0;
  local_a0 = local_b8;
  if ((long)local_78 - (long)local_80 == 0) {
LAB_0085af08:
    pvVar14 = local_90;
    uVar15 = uStack_98;
    if (local_70 == puVar13) {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)&local_80,(basic_string *)&local_a0);
    }
    else {
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      if ((local_a0 & 1) == 0) {
        puVar13[2] = (ulong)local_90;
        puVar13[1] = uStack_98;
        *puVar13 = local_a0;
      }
      else {
        if (0xffffffffffffffef < uStack_98) {
LAB_0085b10c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (uStack_98 < 0x17) {
          pbVar21 = (byte *)((long)puVar13 + 1);
          *(byte *)puVar13 = (byte)((int)uStack_98 << 1);
          if (uStack_98 != 0) goto LAB_0085af98;
        }
        else {
          uVar16 = uStack_98 + 0x10 & 0xfffffffffffffff0;
          pbVar21 = operator_new(uVar16);
          puVar13[1] = uVar15;
          puVar13[2] = (ulong)pbVar21;
          *puVar13 = uVar16 | 1;
LAB_0085af98:
          memcpy(pbVar21,pvVar14,uVar15);
        }
        pbVar21[uVar15] = 0;
      }
      local_78 = local_78 + 3;
    }
  }
  else {
    lVar17 = ((long)local_78 - (long)local_80 >> 3) * -0x5555555555555555 + -1;
    bVar5 = (byte)local_80[lVar17 * 3];
    if ((bVar5 & 1) == 0) {
      uVar15 = (ulong)(bVar5 >> 1);
      pbVar21 = (byte *)((long)(local_80 + lVar17 * 3) + 1);
    }
    else {
      uVar15 = local_80[lVar17 * 3 + 1];
      pbVar21 = (byte *)local_80[lVar17 * 3 + 2];
    }
    sVar3 = 3;
    if (uVar15 < 4) {
      sVar3 = uVar15;
    }
    if (((sVar3 == 0) || (iVar11 = memcmp(pbVar21,&DAT_01896b8b,sVar3), iVar11 == 0)) &&
       (3 < uVar15 != 2 < uVar15)) goto LAB_0085af08;
    uVar16 = local_a0;
    uVar15 = local_a0 >> 1 & 0x7f;
    if ((local_a0 & 1) != 0) {
      uVar15 = uStack_98;
    }
    sVar3 = 3;
    if (uVar15 < 4) {
      sVar3 = uVar15;
    }
    if (sVar3 == 0) {
LAB_0085ae7c:
      if (3 < uVar15 == 2 < uVar15) goto LAB_0085ae94;
    }
    else {
      pvVar14 = (void *)((ulong)&local_a0 | 1);
      if ((local_a0 & 1) != 0) {
        pvVar14 = local_90;
      }
      iVar11 = memcmp(pvVar14,&DAT_01896b8b,sVar3);
      if (iVar11 == 0) goto LAB_0085ae7c;
LAB_0085ae94:
      sVar3 = 2;
      if (uVar15 < 3) {
        sVar3 = uVar15;
      }
      if (sVar3 != 0) {
        pvVar14 = (void *)((ulong)&local_a0 | 1);
        if ((uVar16 & 1) != 0) {
          pvVar14 = local_90;
        }
        iVar11 = memcmp(pvVar14,&DAT_01896105,sVar3);
        if (iVar11 != 0) goto LAB_0085af08;
      }
      if (2 < uVar15 == 1 < uVar15) goto LAB_0085af08;
    }
    if ((puVar13[-3] & 1) != 0) {
      operator_delete((void *)puVar13[-1]);
    }
    bVar9 = true;
    local_78 = puVar13 + -3;
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  puVar13 = local_78;
  if (!bVar8) goto LAB_0085b014;
  bVar6 = *in_x8;
  uVar16 = *(ulong *)(in_x8 + 8);
  uVar15 = lVar20 + 1;
  goto LAB_0085ac98;
LAB_0085b014:
  if (bVar9) {
    puVar19 = local_80;
    if (((byte)*in_x8 & 1) == 0) {
      *(undefined2 *)in_x8 = 0;
    }
    else {
      **(undefined1 **)(in_x8 + 0x10) = 0;
      *(undefined8 *)(in_x8 + 8) = 0;
    }
    for (; puVar19 != puVar13; puVar19 = puVar19 + 3) {
      uVar15 = puVar19[1];
      pbVar21 = (byte *)puVar19[2];
      if (((byte)*puVar19 & 1) == 0) {
        pbVar21 = (byte *)((long)puVar19 + 1);
        uVar15 = (ulong)(byte)((byte)*puVar19 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(in_x8,(char *)pbVar21,uVar15);
    }
  }
  puVar13 = local_80;
  puVar19 = local_78;
  if (local_80 != (ulong *)0x0) {
    while (puVar10 = puVar19, puVar10 != puVar13) {
      puVar19 = puVar10 + -3;
      if ((*puVar19 & 1) != 0) {
        operator_delete((void *)puVar10[-1]);
      }
    }
    local_78 = puVar13;
    operator_delete(local_80);
  }
  goto LAB_0085b0dc;
}

