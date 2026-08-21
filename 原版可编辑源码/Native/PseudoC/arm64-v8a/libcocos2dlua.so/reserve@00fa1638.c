
/* std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::reserve(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          *this,ulong param_1)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  void *pvVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pbVar6 = *(byte **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)pbVar6 >> 3) * -0x5555555555555555) < param_1) {
    if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pbVar7 = *(byte **)(this + 8);
    pvVar4 = operator_new(param_1 * 0x18);
    lVar1 = (long)pvVar4 + ((long)pbVar7 - (long)pbVar6);
    pvVar4 = (void *)((long)pvVar4 + param_1 * 0x18);
    lVar5 = lVar1;
    if ((long)pbVar7 - (long)pbVar6 == 0) {
      *(long *)this = lVar1;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar4;
    }
    else {
      do {
        uVar9 = *(undefined8 *)(pbVar7 + -0x10);
        uVar8 = *(undefined8 *)(pbVar7 + -0x18);
        *(undefined8 *)(lVar5 + -8) = *(undefined8 *)(pbVar7 + -8);
        *(undefined8 *)(lVar5 + -0x10) = uVar9;
        *(undefined8 *)(lVar5 + -0x18) = uVar8;
        pbVar7[-0x10] = 0;
        pbVar7[-0xf] = 0;
        pbVar7[-0xe] = 0;
        pbVar7[-0xd] = 0;
        pbVar7[-0xc] = 0;
        pbVar7[-0xb] = 0;
        pbVar7[-10] = 0;
        pbVar7[-9] = 0;
        pbVar7[-8] = 0;
        pbVar7[-7] = 0;
        pbVar7[-6] = 0;
        pbVar7[-5] = 0;
        pbVar7[-4] = 0;
        pbVar7[-3] = 0;
        pbVar7[-2] = 0;
        pbVar7[-1] = 0;
        pbVar7[-0x18] = 0;
        pbVar7[-0x17] = 0;
        pbVar7[-0x16] = 0;
        pbVar7[-0x15] = 0;
        pbVar7[-0x14] = 0;
        pbVar7[-0x13] = 0;
        pbVar7[-0x12] = 0;
        pbVar7[-0x11] = 0;
        pbVar7 = pbVar7 + -0x18;
        lVar5 = lVar5 + -0x18;
      } while (pbVar6 != pbVar7);
      pbVar6 = *(byte **)this;
      pbVar7 = *(byte **)(this + 8);
      *(long *)this = lVar5;
      *(long *)(this + 8) = lVar1;
      *(void **)(this + 0x10) = pvVar4;
      if (pbVar7 != pbVar6) {
        bVar2 = pbVar7[-0x18];
        pbVar3 = pbVar7 + -0x18;
        while( true ) {
          if ((bVar2 & 1) != 0) {
            operator_delete(*(void **)(pbVar7 + -8));
          }
          if (pbVar6 == pbVar3) break;
          bVar2 = pbVar3[-0x18];
          pbVar7 = pbVar3;
          pbVar3 = pbVar3 + -0x18;
        }
      }
    }
    if (pbVar6 != (byte *)0x0) {
      operator_delete(pbVar6);
      return;
    }
  }
  return;
}

