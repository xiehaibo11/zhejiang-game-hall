
/* __JSPlistDelegator::startElement(void*, char const*, char const**) */

void __JSPlistDelegator::startElement(void *param_1,char *param_2,char **param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  int *piVar8;
  ulong local_60;
  size_t local_58;
  int *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined1 *)((long)param_1 + 0x28) = 1;
  if ((*(byte *)((long)param_1 + 0x30) & 1) == 0) {
    *(undefined2 *)((long)param_1 + 0x30) = 0;
  }
  else {
    **(undefined1 **)((long)param_1 + 0x40) = 0;
    *(undefined8 *)((long)param_1 + 0x38) = 0;
  }
  local_60 = 0;
  local_58 = 0;
  local_50 = (int *)0x0;
  sVar4 = strlen((char *)param_3);
  if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar4 < 0x17) {
    piVar8 = (int *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar4 << 1));
    if (sVar4 != 0) goto LAB_008e278c;
  }
  else {
    uVar6 = sVar4 + 0x10 & 0xfffffffffffffff0;
    piVar8 = operator_new(uVar6);
    local_60 = uVar6 | 1;
    local_58 = sVar4;
    local_50 = piVar8;
LAB_008e278c:
    memcpy(piVar8,param_3,sVar4);
  }
  *(undefined1 *)((long)piVar8 + sVar4) = 0;
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         ((long)param_1 + 0x10);
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar6 = (ulong)((byte)bVar1 >> 1);
    if ((byte)bVar1 >> 1 == 0) goto LAB_008e283c;
  }
  else {
    uVar6 = *(ulong *)((long)param_1 + 0x18);
    if ((int)uVar6 < 1) goto LAB_008e283c;
  }
  lVar7 = (long)((uVar6 << 0x20) + -0x100000000) >> 0x20;
  if (((byte)bVar1 & 1) == 0) {
    lVar5 = (long)param_1 + 0x11;
  }
  else {
    lVar5 = *(long *)((long)param_1 + 0x20);
  }
  if (*(char *)(lVar5 + lVar7) != '{') {
    if (((byte)bVar1 & 1) == 0) {
      lVar5 = (long)param_1 + 0x11;
    }
    else {
      lVar5 = *(long *)((long)param_1 + 0x20);
    }
    if (*(char *)(lVar5 + lVar7) != '[') {
      if (((byte)bVar1 & 1) == 0) {
        lVar5 = (long)param_1 + 0x11;
      }
      else {
        lVar5 = *(long *)((long)param_1 + 0x20);
      }
      if (*(char *)(lVar5 + lVar7) != ':') {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(this,",",1);
      }
    }
  }
LAB_008e283c:
  sVar4 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    sVar4 = local_58;
  }
  if (sVar4 == 5) {
    piVar8 = (int *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      piVar8 = local_50;
    }
    iVar3 = memcmp(piVar8,"array",5);
    if (iVar3 == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(this,"[",1);
    }
  }
  else if (sVar4 == 4) {
    piVar8 = (int *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      piVar8 = local_50;
    }
    if (*piVar8 == 0x74636964) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(this,"{",1);
    }
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

