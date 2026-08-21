
/* __JSPlistDelegator::endElement(void*, char const*) */

void __thiscall __JSPlistDelegator::endElement(__JSPlistDelegator *this,void *param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  __JSPlistDelegator *p_Var3;
  int iVar4;
  size_t __n;
  ulong *puVar5;
  basic_string *pbVar6;
  int *piVar7;
  ulong uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  ulong local_60;
  ulong local_58;
  int *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this[0x28] = (__JSPlistDelegator)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (int *)0x0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    piVar7 = (int *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_008e29c8;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
    piVar7 = operator_new(uVar8);
    local_60 = uVar8 | 1;
    local_58 = __n;
    local_50 = piVar7;
LAB_008e29c8:
    memcpy(piVar7,param_2,__n);
  }
  *(undefined1 *)((long)piVar7 + __n) = 0;
  uVar8 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    uVar8 = local_58;
  }
  switch(uVar8) {
  case 3:
    piVar7 = (int *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      piVar7 = local_50;
    }
    pbVar6 = (basic_string *)0x3;
    iVar4 = memcmp(piVar7,"key",3);
    if (iVar4 != 0) break;
    std::__ndk1::operator+((__ndk1 *)&DAT_01a61e87,(char *)(this + 0x30),pbVar6);
    puVar5 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_98,"\":",2);
    local_70 = (char *)puVar5[2];
    uStack_78 = puVar5[1];
    local_80 = *puVar5;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar8 = local_80 >> 1 & 0x7f;
    pcVar2 = (char *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      uVar8 = uStack_78;
      pcVar2 = local_70;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x10),pcVar2,uVar8);
LAB_008e2bb4:
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (((byte)local_98[0] & 1) == 0) break;
    operator_delete(local_88);
    if ((local_60 & 1) == 0) goto LAB_008e2c64;
    goto LAB_008e2c5c;
  case 4:
    piVar7 = (int *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      piVar7 = local_50;
    }
    if (*piVar7 == 0x74636964) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x10),"}",1);
    }
    else if (*piVar7 == 0x65757274) {
LAB_008e2c8c:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x10),(char *)piVar7,uVar8);
    }
    else if (*piVar7 == 0x6c616572) goto LAB_008e2c30;
    break;
  case 5:
    piVar7 = (int *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      piVar7 = local_50;
    }
    iVar4 = memcmp(piVar7,"array",5);
    if (iVar4 == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x10),"]",1);
    }
    else {
      iVar4 = memcmp(piVar7,"false",5);
      if (iVar4 == 0) goto LAB_008e2c8c;
    }
    break;
  case 6:
    piVar7 = (int *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      piVar7 = local_50;
    }
    pbVar6 = (basic_string *)0x6;
    iVar4 = memcmp(piVar7,"string",6);
    if (iVar4 == 0) {
      std::__ndk1::operator+((__ndk1 *)&DAT_01a61e87,(char *)(this + 0x30),pbVar6);
      puVar5 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::append(local_98,"\"",1);
      local_70 = (char *)puVar5[2];
      uStack_78 = puVar5[1];
      local_80 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      uVar8 = local_80 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        uVar8 = uStack_78;
        pcVar2 = local_70;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x10),pcVar2,uVar8);
      goto LAB_008e2bb4;
    }
    break;
  case 7:
    piVar7 = (int *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      piVar7 = local_50;
    }
    iVar4 = memcmp(piVar7,"integer",7);
    if (iVar4 == 0) {
LAB_008e2c30:
      uVar8 = (ulong)((byte)this[0x30] >> 1);
      p_Var3 = this + 0x31;
      if (((byte)this[0x30] & 1) != 0) {
        uVar8 = *(ulong *)(this + 0x38);
        p_Var3 = *(__JSPlistDelegator **)(this + 0x40);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x10),(char *)p_Var3,uVar8);
    }
  }
  if ((local_60 & 1) != 0) {
LAB_008e2c5c:
    operator_delete(local_50);
  }
LAB_008e2c64:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

