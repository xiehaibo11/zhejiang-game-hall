
/* cocos2d::StringUtils::StringUTF8::replace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::StringUtils::StringUTF8::replace(StringUTF8 *this,basic_string *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  ulong *puVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  byte *pbVar7;
  void *__src;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  basic_string *pbVar11;
  void *__dest;
  ulong uVar12;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pbVar2 = *(byte **)this;
  pbVar4 = *(byte **)(this + 8);
  if (pbVar4 != pbVar2) {
    bVar5 = pbVar4[-0x18];
    pbVar7 = pbVar4 + -0x18;
    while( true ) {
      if ((bVar5 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
      if (pbVar2 == pbVar7) break;
      bVar5 = pbVar7[-0x18];
      pbVar4 = pbVar7;
      pbVar7 = pbVar7 + -0x18;
    }
  }
  *(byte **)(this + 8) = pbVar2;
  bVar8 = ((byte)*param_1 & 1) != 0;
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (bVar8) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    pbVar11 = *(basic_string **)(param_1 + 0x10);
    if (!bVar8) {
      pbVar11 = param_1 + 1;
    }
    iVar9 = getUTF8StringLength(pbVar11);
    if (iVar9 != 0) {
LAB_00fc6c98:
      if (*pbVar11 != (basic_string)0x0) {
        do {
          uVar10 = getNumBytesForUTF8();
          uStack_78 = 0;
          local_70 = (void *)0x0;
          local_80 = 0;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_80,(char *)pbVar11,uVar10 & 0xffffffff);
          __src = local_70;
          uVar1 = uStack_78;
          puVar3 = *(ulong **)(this + 8);
          if (puVar3 == *(ulong **)(this + 0x10)) {
            std::__ndk1::
            vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
            ::__push_back_slow_path<cocos2d::StringUtils::StringUTF8::CharUTF8_const&>
                      ((vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
                        *)this,(CharUTF8 *)&local_80);
          }
          else {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            if ((local_80 & 1) == 0) {
              puVar3[2] = (ulong)local_70;
              puVar3[1] = uStack_78;
              *puVar3 = local_80;
            }
            else {
              if (0xffffffffffffffef < uStack_78) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (uStack_78 < 0x17) {
                __dest = (void *)((long)puVar3 + 1);
                *(char *)puVar3 = (char)((int)uStack_78 << 1);
                if (uStack_78 != 0) goto LAB_00fc6d4c;
              }
              else {
                uVar12 = uStack_78 + 0x10 & 0xfffffffffffffff0;
                __dest = operator_new(uVar12);
                puVar3[1] = uVar1;
                puVar3[2] = (ulong)__dest;
                *puVar3 = uVar12 | 1;
LAB_00fc6d4c:
                memcpy(__dest,__src,uVar1);
              }
              *(undefined1 *)((long)__dest + uVar1) = 0;
            }
            *(ulong **)(this + 8) = puVar3 + 3;
          }
          pbVar11 = pbVar11 + (uVar10 & 0xffffffff);
          if ((local_80 & 1) == 0) goto LAB_00fc6c98;
          operator_delete(local_70);
          if (*pbVar11 == (basic_string)0x0) break;
        } while( true );
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

