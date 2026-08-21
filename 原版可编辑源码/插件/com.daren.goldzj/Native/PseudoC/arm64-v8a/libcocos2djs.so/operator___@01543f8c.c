
/* std::__ndk1::bitset<128ul>::TEMPNAMEPLACEHOLDERVALUE(unsigned long) */

bitset<128ul> * __thiscall
std::__ndk1::bitset<128ul>::operator>>=(bitset<128ul> *this,ulong param_1)

{
  bitset<128ul> *pbVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  bitset<128ul> *__s;
  ulong uVar5;
  size_t __n;
  __ndk1 a_Stack_88 [16];
  bitset<128ul> *local_78;
  undefined4 local_70;
  bitset<128ul> *local_68;
  undefined4 local_60;
  bitset<128ul> *local_58;
  uint local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (0x7f < param_1) {
    param_1 = 0x80;
  }
  uVar5 = param_1 >> 6;
  local_50 = (uint)param_1 & 0x3f;
  local_58 = this + uVar5 * 8;
  local_68 = this + 0x10;
  local_78 = this;
  if ((param_1 & 0x3f) == 0) {
    local_50 = 0;
    local_60 = 0;
    local_70 = 0;
    __copy_aligned<std::__ndk1::__bitset<2ul,128ul>,false>(a_Stack_88,&local_58,&local_68,&local_78)
    ;
  }
  else {
    local_60 = 0;
    local_70 = 0;
    __copy_unaligned<std::__ndk1::__bitset<2ul,128ul>,false>
              (a_Stack_88,&local_58,&local_68,&local_78);
  }
  if (param_1 != 0) {
    uVar4 = 0x80 - param_1;
    uVar2 = (uint)uVar4 & 0x3f;
    pbVar1 = this + (uVar4 >> 3 & 0x1ffffffffffffff8);
    __s = pbVar1;
    if ((uVar4 & 0x3f) != 0) {
      uVar4 = (ulong)(0x40 - uVar2);
      uVar5 = param_1;
      if (uVar4 <= param_1) {
        uVar5 = uVar4;
      }
      param_1 = param_1 - uVar5;
      __s = pbVar1 + 8;
      *(ulong *)pbVar1 =
           *(ulong *)pbVar1 &
           (0xffffffffffffffffU >> (uVar4 - uVar5 & 0x3f) & -1L << uVar2 ^ 0xffffffffffffffff);
      uVar5 = param_1 >> 6;
    }
    __n = uVar5 * 8;
    memset(__s,0,__n);
    if ((param_1 & 0x3f) != 0) {
      *(ulong *)(__s + __n) =
           *(ulong *)(__s + __n) &
           (0xffffffffffffffffU >> (-(param_1 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

