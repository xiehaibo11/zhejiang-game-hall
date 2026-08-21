
/* void std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::
__push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,basic_string *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar4 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar11 = 0xaaaaaaaaaaaaaaa;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x555555555555555) {
    uVar6 = lVar5 * 0x5555555555555556;
    uVar11 = uVar1;
    if (uVar1 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar11 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_0087c100;
    }
  }
  pvVar3 = operator_new(uVar11 * 0x18);
LAB_0087c100:
  uVar13 = *(undefined8 *)(param_1 + 8);
  uVar12 = *(undefined8 *)param_1;
  puVar7 = (undefined8 *)((long)pvVar3 + lVar4 * 8);
  puVar7[2] = *(undefined8 *)(param_1 + 0x10);
  puVar7[1] = uVar13;
  *puVar7 = uVar12;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  pbVar9 = *(byte **)this;
  pbVar8 = *(byte **)(this + 8);
  puVar2 = puVar7 + 3;
  pbVar10 = pbVar9;
  if (pbVar8 != pbVar9) {
    do {
      uVar13 = *(undefined8 *)(pbVar8 + -0x10);
      uVar12 = *(undefined8 *)(pbVar8 + -0x18);
      puVar7[-1] = *(undefined8 *)(pbVar8 + -8);
      puVar7[-2] = uVar13;
      puVar7[-3] = uVar12;
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
      puVar7 = puVar7 + -3;
    } while (pbVar9 != pbVar8);
    pbVar9 = *(byte **)(this + 8);
    pbVar10 = *(byte **)this;
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar11 * 0x18);
  while (pbVar8 = pbVar9, pbVar8 != pbVar10) {
    pbVar9 = pbVar8 + -0x18;
    if ((*pbVar9 & 1) != 0) {
      operator_delete(*(void **)(pbVar8 + -8));
    }
  }
  if (pbVar10 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar10);
  return;
}

