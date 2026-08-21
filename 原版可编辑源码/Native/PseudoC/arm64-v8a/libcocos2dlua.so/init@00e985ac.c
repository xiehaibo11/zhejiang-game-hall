
/* cocos2d::network::HttpURLConnection::init(cocos2d::network::HttpRequest*) */

void __thiscall
cocos2d::network::HttpURLConnection::init(HttpURLConnection *this,HttpRequest *param_1)

{
  ulong __n;
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  void *pvVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined8 uVar10;
  HttpRequest *pHVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  size_t __n_00;
  ulong uVar15;
  char *pcVar16;
  uint uVar17;
  ulong local_b0;
  ulong local_a8;
  char *local_a0;
  ulong local_98;
  ulong local_90;
  char *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80;
  undefined7 uStack_7f;
  byte *local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (((byte)param_1[0x28] & 1) == 0) {
    pHVar11 = param_1 + 0x29;
  }
  else {
    pHVar11 = *(HttpRequest **)(param_1 + 0x38);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_80,(char *)pHVar11);
  createHttpURLConnection(this,(basic_string *)&local_80);
  if (((byte)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  uVar6 = configure(this);
  if ((uVar6 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::vector((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)&local_80,(vector *)(param_1 + 200));
    pbVar5 = local_78;
    pbVar9 = (byte *)CONCAT71(uStack_7f,local_80);
    if (pbVar9 != local_78) {
      pcVar12 = (char *)((ulong)&local_98 | 1);
      pcVar16 = (char *)((ulong)&local_b0 | 1);
      uVar6 = (ulong)*pbVar9;
      if ((*pbVar9 & 1) == 0) goto LAB_00e98678;
LAB_00e98688:
      __n_00 = *(size_t *)(pbVar9 + 8);
      pbVar2 = *(byte **)(pbVar9 + 0x10);
      do {
        if (__n_00 != 0) {
          pvVar7 = memchr(pbVar2,0x3a,__n_00);
          lVar13 = (long)pvVar7 - (long)pbVar2;
          if (pvVar7 == (void *)0x0) {
            lVar13 = -1;
          }
          uVar17 = (uint)lVar13;
          if ((uVar17 != 0xffffffff) && ((int)uVar17 < (int)__n_00)) {
            local_90 = 0;
            local_88 = (char *)0x0;
            local_98 = 0;
            uVar15 = *(ulong *)(pbVar9 + 8);
            pbVar2 = *(byte **)(pbVar9 + 0x10);
            if ((uVar6 & 1) == 0) {
              pbVar2 = pbVar9 + 1;
              uVar15 = uVar6 >> 1;
            }
            if ((ulong)(long)(int)uVar17 <= uVar15) {
              uVar15 = (long)(int)uVar17;
            }
            if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uVar15 < 0x17) {
              local_98 = (ulong)(byte)((int)uVar15 << 1);
              pcVar8 = pcVar12;
              if (uVar15 != 0) goto LAB_00e98728;
            }
            else {
              uVar6 = uVar15 + 0x10 & 0xfffffffffffffff0;
              pcVar8 = operator_new(uVar6);
              local_98 = uVar6 | 1;
              local_90 = uVar15;
              local_88 = pcVar8;
LAB_00e98728:
              memcpy(pcVar8,pbVar2,uVar15);
            }
            pcVar8[uVar15] = '\0';
            local_a8 = 0;
            local_a0 = (char *)0x0;
            local_b0 = 0;
            bVar3 = *pbVar9;
            uVar15 = (lVar13 << 0x20) + 0x100000000 >> 0x20;
            uVar6 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              uVar6 = *(ulong *)(pbVar9 + 8);
            }
            if (uVar6 < uVar15) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            uVar14 = (ulong)(int)(~uVar17 + (int)__n_00);
            pbVar2 = pbVar9 + 1;
            if ((bVar3 & 1) != 0) {
              pbVar2 = *(byte **)(pbVar9 + 0x10);
            }
            __n = uVar6 - uVar15;
            if (uVar14 <= uVar6 - uVar15) {
              __n = uVar14;
            }
            if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (__n < 0x17) {
              local_b0 = (ulong)(byte)((int)__n << 1);
              pcVar8 = pcVar16;
              if (__n != 0) goto LAB_00e987d8;
            }
            else {
              uVar6 = __n + 0x10 & 0xfffffffffffffff0;
              pcVar8 = operator_new(uVar6);
              local_b0 = uVar6 | 1;
              local_a8 = __n;
              local_a0 = pcVar8;
LAB_00e987d8:
              memcpy(pcVar8,pbVar2 + uVar15,__n);
            }
            pcVar8[__n] = '\0';
            pcVar8 = pcVar12;
            if ((local_98 & 1) != 0) {
              pcVar8 = local_88;
            }
            pcVar1 = pcVar16;
            if ((local_b0 & 1) != 0) {
              pcVar1 = local_a0;
            }
            addRequestHeader(this,pcVar8,pcVar1);
            if ((local_b0 & 1) != 0) {
              operator_delete(local_a0);
            }
            if ((local_98 & 1) != 0) {
              operator_delete(local_88);
            }
          }
        }
        pbVar9 = pbVar9 + 0x18;
        if (pbVar5 == pbVar9) break;
        uVar6 = (ulong)*pbVar9;
        if ((*pbVar9 & 1) != 0) goto LAB_00e98688;
LAB_00e98678:
        __n_00 = uVar6 >> 1;
        pbVar2 = pbVar9 + 1;
      } while( true );
    }
    addCookiesForRequestHeader(this);
    pbVar9 = (byte *)CONCAT71(uStack_7f,local_80);
    if (pbVar9 != (byte *)0x0) {
      if (local_78 != pbVar9) {
        bVar3 = local_78[-0x18];
        pbVar5 = local_78 + -0x18;
        while( true ) {
          pbVar2 = pbVar5;
          if ((bVar3 & 1) != 0) {
            operator_delete(*(void **)(local_78 + -8));
          }
          if (pbVar9 == pbVar2) break;
          bVar3 = pbVar2[-0x18];
          pbVar5 = pbVar2 + -0x18;
          local_78 = pbVar2;
        }
        pbVar9 = (byte *)CONCAT71(uStack_7f,local_80);
      }
      operator_delete(pbVar9);
    }
    uVar10 = 1;
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

