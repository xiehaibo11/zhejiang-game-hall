
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>
   >::value&&is_constructible<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*> >::reference>::value,
   void>::type std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::assign<std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>
   >(std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >*>, std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::
assign<std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>>
          (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_2,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_3)

{
  basic_string *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  ulong uVar10;
  
                    /* try { // try from 008e4ab0 to 009e4ab3 has its CatchHandler @ 008e4b0c */
                    /* try { // try from 008e4ab4 to 009e4b1f has its CatchHandler @ 008e4a64 */
  lVar4 = *(long *)(this + 0x10);
  pbVar9 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this;
  uVar10 = ((long)param_3 - (long)param_2 >> 3) * -0x5555555555555555;
  lVar8 = lVar4 - (long)pbVar9 >> 3;
  if (uVar10 < (ulong)(lVar8 * -0x5555555555555555) || uVar10 + lVar8 * 0x5555555555555555 == 0) {
    lVar4 = *(long *)(this + 8) - (long)pbVar9 >> 3;
    pbVar1 = (basic_string *)(param_2 + (*(long *)(this + 8) - (long)pbVar9));
    if (uVar10 < (ulong)(lVar4 * -0x5555555555555555) || uVar10 + lVar4 * 0x5555555555555555 == 0) {
      pbVar1 = (basic_string *)param_3;
    }
    for (; param_2 !=
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)pbVar1;
        param_2 = param_2 + 0x18) {
      if (param_2 != pbVar9) {
        uVar7 = *(ulong *)(param_2 + 8);
        pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(param_2 + 0x10);
        if (((byte)*param_2 & 1) == 0) {
          pbVar5 = param_2 + 1;
          uVar7 = (ulong)((byte)*param_2 >> 1);
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                  (pbVar9,(char *)pbVar5,uVar7);
      }
      pbVar9 = pbVar9 + 0x18;
    }
    if ((ulong)(lVar4 * -0x5555555555555555) <= uVar10 && uVar10 + lVar4 * 0x5555555555555555 != 0)
    {
      pbVar9 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 8);
      for (; pbVar1 != (basic_string *)param_3; pbVar1 = pbVar1 + 0x18) {
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                  (pbVar9,pbVar1);
        pbVar9 = pbVar9 + 0x18;
      }
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8)
           = pbVar9;
      return;
    }
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 8);
    if (pbVar5 != pbVar9) {
      bVar2 = pbVar5[-0x18];
      pbVar3 = pbVar5 + -0x18;
      while( true ) {
        if (((byte)bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
        if (pbVar9 == pbVar3) break;
        bVar2 = pbVar3[-0x18];
        pbVar5 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
    }
  }
  else {
    if (pbVar9 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  0x0) {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 8);
      pbVar3 = pbVar9;
      if (pbVar5 != pbVar9) {
                    /* catch() { ... } // from try @ 008e4ab0 with catch @ 008e4b0c */
        bVar2 = pbVar5[-0x18];
        pbVar3 = pbVar5 + -0x18;
        while( true ) {
          if (((byte)bVar2 & 1) != 0) {
            operator_delete(*(void **)(pbVar5 + -8));
          }
          if (pbVar9 == pbVar3) break;
                    /* try { // try from 008e4b20 to 009e4cc3 has its CatchHandler @ 008e4b20
                       catch() { ... } // from try @ 008e4b20 with catch @ 008e4b20
                       catch() { ... } // from try @ 008e4d44 with catch @ 008e4b20 */
          bVar2 = pbVar3[-0x18];
          pbVar5 = pbVar3;
          pbVar3 = pbVar3 + -0x18;
        }
        pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )this;
      }
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8)
           = pbVar9;
      operator_delete(pbVar3);
      lVar4 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0xaaaaaaaaaaaaaaa < uVar10) {
                    /* try { // try from 008e4cc4 to 009e4cf7 has its CatchHandler @ 008e4dc4 */
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    uVar7 = 0xaaaaaaaaaaaaaaa;
    if (((ulong)((lVar4 >> 3) * -0x5555555555555555) < 0x555555555555555) &&
       (uVar6 = (lVar4 >> 3) * 0x5555555555555556, uVar7 = uVar10, uVar10 <= uVar6)) {
      uVar7 = uVar6;
    }
    pbVar9 = operator_new(uVar7 * 0x18);
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this =
         pbVar9;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
         pbVar9;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = pbVar9 + uVar7 * 0x18;
    for (; param_2 != param_3; param_2 = param_2 + 0x18) {
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                (pbVar9,(basic_string *)param_2);
      pbVar9 = pbVar9 + 0x18;
    }
  }
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
       pbVar9;
  return;
}

