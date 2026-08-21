
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   >*>::value&&is_constructible<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::iterator_traits<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >*>::reference>::value,
   void>::type std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
   >::assign<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >*>(std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >*,
   std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >*) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::
assign<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
          (vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
           *this,pair *param_1,pair *param_2)

{
  basic_string *pbVar1;
  byte *pbVar2;
  basic_string *pbVar3;
  byte *pbVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  pair *ppVar10;
  pair *ppVar11;
  pair *ppVar12;
  ulong uVar13;
  
  lVar6 = *(long *)(this + 0x10);
  ppVar12 = *(pair **)this;
  uVar13 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  lVar9 = lVar6 - (long)ppVar12 >> 4;
  if (uVar13 < (ulong)(lVar9 * -0x5555555555555555) || uVar13 + lVar9 * 0x5555555555555555 == 0) {
    lVar6 = *(long *)(this + 8) - (long)ppVar12 >> 4;
    pbVar1 = (basic_string *)(param_1 + (*(long *)(this + 8) - (long)ppVar12));
    pbVar3 = pbVar1;
    if (uVar13 < (ulong)(lVar6 * -0x5555555555555555) || uVar13 + lVar6 * 0x5555555555555555 == 0) {
      pbVar3 = (basic_string *)param_2;
    }
    if (pbVar3 != (basic_string *)param_1) {
      lVar9 = 0;
      do {
        if (param_1 != ppVar12) {
          pbVar2 = param_1 + lVar9;
          uVar8 = *(ulong *)(pbVar2 + 8);
          pbVar4 = *(byte **)(pbVar2 + 0x10);
          if ((*pbVar2 & 1) == 0) {
            pbVar4 = pbVar2 + 1;
            uVar8 = (ulong)(*pbVar2 >> 1);
          }
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(ppVar12 + lVar9),(char *)pbVar4,uVar8);
          uVar8 = (ulong)(pbVar2[0x18] >> 1);
          pbVar4 = pbVar2 + 0x19;
          if ((pbVar2[0x18] & 1) != 0) {
            uVar8 = *(ulong *)(pbVar2 + 0x20);
            pbVar4 = *(byte **)(pbVar2 + 0x28);
          }
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(ppVar12 + lVar9) + 0x18,(char *)pbVar4,uVar8);
        }
        lVar9 = lVar9 + 0x30;
      } while ((long)pbVar3 - (long)param_1 != lVar9);
      ppVar12 = ppVar12 + lVar9;
    }
    if (uVar13 < (ulong)(lVar6 * -0x5555555555555555) || uVar13 + lVar6 * 0x5555555555555555 == 0) {
      ppVar11 = *(pair **)(this + 8);
      while (ppVar10 = ppVar11, ppVar10 != ppVar12) {
        if ((ppVar10[-0x18] & 1) != 0) {
          operator_delete(*(void **)(ppVar10 + -8));
        }
        ppVar11 = ppVar10 + -0x30;
        if ((ppVar10[-0x30] & 1) != 0) {
          operator_delete(*(void **)(ppVar10 + -0x20));
        }
      }
      *(pair **)(this + 8) = ppVar12;
    }
    else {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 8);
      while (pbVar3 != (basic_string *)param_2) {
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                  (pbVar5,pbVar1);
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                  (pbVar5 + 0x18,pbVar1 + 0x18);
        pbVar5 = pbVar5 + 0x30;
        pbVar1 = pbVar1 + 0x30;
        pbVar3 = pbVar1;
      }
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8)
           = pbVar5;
    }
  }
  else {
    if (ppVar12 != (pair *)0x0) {
      ppVar11 = ppVar12;
      ppVar10 = *(pair **)(this + 8);
      if (*(pair **)(this + 8) != ppVar12) {
        do {
          if ((ppVar10[-0x18] & 1) != 0) {
            operator_delete(*(void **)(ppVar10 + -8));
          }
          ppVar11 = ppVar10 + -0x30;
          if ((ppVar10[-0x30] & 1) != 0) {
            operator_delete(*(void **)(ppVar10 + -0x20));
          }
          ppVar10 = ppVar11;
        } while (ppVar12 != ppVar11);
        ppVar11 = *(pair **)this;
      }
      *(pair **)(this + 8) = ppVar12;
      operator_delete(ppVar11);
      lVar6 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0x555555555555555 < uVar13) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    uVar8 = 0x555555555555555;
    if (((ulong)((lVar6 >> 4) * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) &&
       (uVar7 = (lVar6 >> 4) * 0x5555555555555556, uVar8 = uVar13, uVar13 <= uVar7)) {
      uVar8 = uVar7;
    }
    pbVar5 = operator_new(uVar8 * 0x30);
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this =
         pbVar5;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
         pbVar5;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = pbVar5 + uVar8 * 0x30;
    for (; param_1 != param_2; param_1 = param_1 + 0x30) {
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                (pbVar5,(basic_string *)param_1);
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                (pbVar5 + 0x18,(basic_string *)(param_1 + 0x18));
      pbVar5 = pbVar5 + 0x30;
    }
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
         pbVar5;
  }
  return;
}

