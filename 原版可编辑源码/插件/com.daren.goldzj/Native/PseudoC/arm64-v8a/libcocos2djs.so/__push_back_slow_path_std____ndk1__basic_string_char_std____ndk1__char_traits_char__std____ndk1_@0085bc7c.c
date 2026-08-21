
/* void std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::
__push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
          (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,basic_string *param_1)

{
  ulong *puVar1;
  byte *pbVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  void *__src;
  void *__dest;
  byte *pbVar9;
  ulong uVar10;
  ulong *puVar11;
  
  pbVar8 = *(byte **)this;
  pbVar9 = *(byte **)(this + 8);
  lVar4 = (long)pbVar9 - (long)pbVar8 >> 3;
  uVar10 = 0xaaaaaaaaaaaaaaa;
  uVar7 = lVar4 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar7) goto LAB_0085be60;
  lVar6 = *(long *)(this + 0x10) - (long)pbVar8 >> 3;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x555555555555555) {
    uVar5 = lVar6 * 0x5555555555555556;
    uVar10 = uVar7;
    if (uVar7 <= uVar5) {
      uVar10 = uVar5;
    }
    if (uVar10 != 0) goto LAB_0085bd00;
    pvVar3 = (void *)0x0;
  }
  else {
LAB_0085bd00:
    pvVar3 = operator_new(uVar10 * 0x18);
  }
  puVar11 = (ulong *)((long)pvVar3 + lVar4 * 8);
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 8);
    uVar7 = *(ulong *)param_1;
    puVar11[2] = *(ulong *)(param_1 + 0x10);
    puVar11[1] = uVar5;
    *puVar11 = uVar7;
    goto LAB_0085bdac;
  }
  uVar7 = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < uVar7) {
LAB_0085be60:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __src = *(void **)(param_1 + 0x10);
  if (uVar7 < 0x17) {
    __dest = (void *)((long)puVar11 + 1);
    *(char *)puVar11 = (char)((int)uVar7 << 1);
    if (uVar7 != 0) goto LAB_0085bd90;
  }
  else {
    uVar5 = uVar7 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    *(ulong *)((long)pvVar3 + lVar4 * 8 + 8) = uVar7;
    *(void **)((long)pvVar3 + lVar4 * 8 + 0x10) = __dest;
    *puVar11 = uVar5 | 1;
LAB_0085bd90:
    memcpy(__dest,__src,uVar7);
  }
  *(undefined1 *)((long)__dest + uVar7) = 0;
  pbVar8 = *(byte **)this;
  pbVar9 = *(byte **)(this + 8);
LAB_0085bdac:
  puVar1 = puVar11 + 3;
  if (pbVar9 != pbVar8) {
    do {
      uVar5 = *(ulong *)(pbVar9 + -0x10);
      uVar7 = *(ulong *)(pbVar9 + -0x18);
      puVar11[-1] = *(ulong *)(pbVar9 + -8);
      puVar11[-2] = uVar5;
      puVar11[-3] = uVar7;
      pbVar9[-0x10] = 0;
      pbVar9[-0xf] = 0;
      pbVar9[-0xe] = 0;
      pbVar9[-0xd] = 0;
      pbVar9[-0xc] = 0;
      pbVar9[-0xb] = 0;
      pbVar9[-10] = 0;
      pbVar9[-9] = 0;
      pbVar9[-8] = 0;
      pbVar9[-7] = 0;
      pbVar9[-6] = 0;
      pbVar9[-5] = 0;
      pbVar9[-4] = 0;
      pbVar9[-3] = 0;
      pbVar9[-2] = 0;
      pbVar9[-1] = 0;
      pbVar9[-0x18] = 0;
      pbVar9[-0x17] = 0;
      pbVar9[-0x16] = 0;
      pbVar9[-0x15] = 0;
      pbVar9[-0x14] = 0;
      pbVar9[-0x13] = 0;
      pbVar9[-0x12] = 0;
      pbVar9[-0x11] = 0;
      pbVar9 = pbVar9 + -0x18;
      puVar11 = puVar11 + -3;
    } while (pbVar8 != pbVar9);
    pbVar8 = *(byte **)this;
    pbVar9 = *(byte **)(this + 8);
  }
  *(ulong **)this = puVar11;
  *(ulong **)(this + 8) = puVar1;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar10 * 0x18);
  while (pbVar2 = pbVar9, pbVar2 != pbVar8) {
    pbVar9 = pbVar2 + -0x18;
    if ((*pbVar9 & 1) != 0) {
      operator_delete(*(void **)(pbVar2 + -8));
    }
  }
  if (pbVar8 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar8);
  return;
}

