
/* std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::__append(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,ulong param_1)

{
  ulong uVar1;
  byte *pbVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  void *__s;
  byte *pbVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pbVar8 = *(byte **)(this + 8);
  if (param_1 <= (ulong)((*(long *)(this + 0x10) - (long)pbVar8 >> 3) * -0x5555555555555555)) {
    do {
      pbVar8[8] = 0;
      pbVar8[9] = 0;
      pbVar8[10] = 0;
      pbVar8[0xb] = 0;
      pbVar8[0xc] = 0;
      pbVar8[0xd] = 0;
      pbVar8[0xe] = 0;
      pbVar8[0xf] = 0;
      pbVar8[0x10] = 0;
      pbVar8[0x11] = 0;
      pbVar8[0x12] = 0;
      pbVar8[0x13] = 0;
      pbVar8[0x14] = 0;
      pbVar8[0x15] = 0;
      pbVar8[0x16] = 0;
      pbVar8[0x17] = 0;
      pbVar8[0] = 0;
      pbVar8[1] = 0;
      pbVar8[2] = 0;
      pbVar8[3] = 0;
      pbVar8[4] = 0;
      pbVar8[5] = 0;
      pbVar8[6] = 0;
      pbVar8[7] = 0;
      param_1 = param_1 - 1;
      pbVar8 = (byte *)(*(long *)(this + 8) + 0x18);
      *(byte **)(this + 8) = pbVar8;
    } while (param_1 != 0);
    return;
  }
  pbVar7 = *(byte **)this;
  uVar9 = 0xaaaaaaaaaaaaaaa;
  lVar6 = (long)pbVar8 - (long)pbVar7 >> 3;
  uVar1 = lVar6 * -0x5555555555555555 + param_1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = *(long *)(this + 0x10) - (long)pbVar7 >> 3;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x555555555555555) {
    uVar5 = lVar4 * 0x5555555555555556;
    uVar9 = uVar1;
    if (uVar1 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00d236f0;
    }
  }
  pvVar3 = operator_new(uVar9 * 0x18);
LAB_00d236f0:
  __s = (void *)((long)pvVar3 + lVar6 * 8);
  memset(__s,0,param_1 * 0x18);
  if (pbVar8 != pbVar7) {
    do {
      uVar11 = *(undefined8 *)(pbVar8 + -0x10);
      uVar10 = *(undefined8 *)(pbVar8 + -0x18);
      *(undefined8 *)((long)__s + -8) = *(undefined8 *)(pbVar8 + -8);
      *(undefined8 *)((long)__s + -0x10) = uVar11;
      *(undefined8 *)((long)__s + -0x18) = uVar10;
      pbVar8[-0x10] = 0;
      pbVar8[-0xf] = 0;
      pbVar8[-0xe] = 0;
      pbVar8[-0xd] = 0;
      pbVar8[-0xc] = 0;
      pbVar8[-0xb] = 0;
      pbVar8[-10] = 0;
      pbVar8[-9] = 0;
      pbVar8[-8] = 0;
      pbVar8[-7] = 0;
      pbVar8[-6] = 0;
      pbVar8[-5] = 0;
      pbVar8[-4] = 0;
      pbVar8[-3] = 0;
      pbVar8[-2] = 0;
      pbVar8[-1] = 0;
      pbVar8[-0x18] = 0;
      pbVar8[-0x17] = 0;
      pbVar8[-0x16] = 0;
      pbVar8[-0x15] = 0;
      pbVar8[-0x14] = 0;
      pbVar8[-0x13] = 0;
      pbVar8[-0x12] = 0;
      pbVar8[-0x11] = 0;
      pbVar8 = pbVar8 + -0x18;
      __s = (void *)((long)__s + -0x18);
    } while (pbVar7 != pbVar8);
    pbVar7 = *(byte **)this;
    pbVar8 = *(byte **)(this + 8);
  }
  *(void **)this = __s;
  *(void **)(this + 8) = (void *)((long)pvVar3 + uVar1 * 0x18);
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar9 * 0x18);
  while (pbVar2 = pbVar8, pbVar2 != pbVar7) {
    pbVar8 = pbVar2 + -0x18;
    if ((*pbVar8 & 1) != 0) {
      operator_delete(*(void **)(pbVar2 + -8));
    }
  }
  if (pbVar7 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar7);
  return;
}

