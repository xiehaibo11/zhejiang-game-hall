
/* std::__ndk1::__deque_base<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::clear() */

void __thiscall
std::__ndk1::
__deque_base<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::clear(__deque_base<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        *this)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long *plVar9;
  undefined8 *puVar5;
  
  uVar6 = *(ulong *)(this + 0x20);
  puVar2 = *(undefined8 **)(this + 8);
  puVar5 = *(undefined8 **)(this + 0x10);
  if (puVar5 != puVar2) {
    pbVar8 = (byte *)(puVar2[uVar6 / 0xaa] + (uVar6 % 0xaa) * 0x18);
    pbVar7 = (byte *)(puVar2[(*(long *)(this + 0x28) + uVar6) / 0xaa] +
                     ((*(long *)(this + 0x28) + uVar6) % 0xaa) * 0x18);
    if (pbVar7 != pbVar8) {
      plVar9 = puVar2 + uVar6 / 0xaa;
      bVar1 = *pbVar8;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar8 + 0x10));
        }
        pbVar8 = pbVar8 + 0x18;
        if ((long)pbVar8 - *plVar9 == 0xff0) {
          plVar9 = plVar9 + 1;
          pbVar8 = (byte *)*plVar9;
        }
        if (pbVar7 == pbVar8) break;
        bVar1 = *pbVar8;
      }
      puVar2 = *(undefined8 **)(this + 8);
      puVar5 = *(undefined8 **)(this + 0x10);
    }
  }
  *(undefined8 *)(this + 0x28) = 0;
  lVar4 = (long)puVar5 - (long)puVar2;
  while (uVar6 = lVar4 >> 3, 2 < uVar6) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(this + 8) + 8);
    *(undefined8 **)(this + 8) = puVar2;
    lVar4 = *(long *)(this + 0x10) - (long)puVar2;
  }
  if (uVar6 == 1) {
    uVar3 = 0x55;
  }
  else {
    if (uVar6 != 2) {
      return;
    }
    uVar3 = 0xaa;
  }
  *(undefined8 *)(this + 0x20) = uVar3;
  return;
}

