
/* cocos2d::StringUtils::StringUTF8::replace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::StringUtils::StringUTF8::replace(StringUTF8 *this,basic_string *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  ulong *puVar3;
  long lVar4;
  byte *pbVar5;
  void *__src;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  basic_string *pbVar9;
  byte *pbVar10;
  void *__dest;
  ulong uVar11;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pbVar2 = *(byte **)this;
  pbVar10 = *(byte **)(this + 8);
  while (pbVar5 = pbVar10, pbVar5 != pbVar2) {
    pbVar10 = pbVar5 + -0x18;
    if ((*pbVar10 & 1) != 0) {
      operator_delete(*(void **)(pbVar5 + -8));
    }
  }
  *(byte **)(this + 8) = pbVar2;
  bVar6 = ((byte)*param_1 & 1) != 0;
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (bVar6) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    pbVar9 = *(basic_string **)(param_1 + 0x10);
    if (!bVar6) {
      pbVar9 = param_1 + 1;
    }
    iVar7 = getUTF8StringLength(pbVar9);
    if (iVar7 != 0) {
      while (*pbVar9 != (basic_string)0x0) {
        uVar8 = getNumBytesForUTF8();
        local_70 = 0;
        uStack_68 = 0;
        local_60 = (void *)0x0;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,(char *)pbVar9,uVar8 & 0xffffffff);
        __src = local_60;
        uVar1 = uStack_68;
        puVar3 = *(ulong **)(this + 8);
        if (puVar3 == *(ulong **)(this + 0x10)) {
          std::__ndk1::
          vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
          ::__push_back_slow_path<cocos2d::StringUtils::StringUTF8::CharUTF8_const&>
                    ((vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
                      *)this,(CharUTF8 *)&local_70);
        }
        else {
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = 0;
          if ((local_70 & 1) == 0) {
            puVar3[2] = (ulong)local_60;
            puVar3[1] = uStack_68;
            *puVar3 = local_70;
          }
          else {
            if (0xffffffffffffffef < uStack_68) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_68 < 0x17) {
              __dest = (void *)((long)puVar3 + 1);
              *(char *)puVar3 = (char)((int)uStack_68 << 1);
              if (uStack_68 != 0) goto LAB_0088bf70;
            }
            else {
              uVar11 = uStack_68 + 0x10 & 0xfffffffffffffff0;
              __dest = operator_new(uVar11);
              puVar3[1] = uVar1;
              puVar3[2] = (ulong)__dest;
              *puVar3 = uVar11 | 1;
LAB_0088bf70:
              memcpy(__dest,__src,uVar1);
            }
            *(undefined1 *)((long)__dest + uVar1) = 0;
          }
          *(long *)(this + 8) = *(long *)(this + 8) + 0x18;
        }
        pbVar9 = pbVar9 + (uVar8 & 0xffffffff);
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

