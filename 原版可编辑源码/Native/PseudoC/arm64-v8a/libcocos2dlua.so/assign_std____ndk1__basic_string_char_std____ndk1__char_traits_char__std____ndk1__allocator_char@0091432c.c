
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >*>::value&&is_constructible<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::iterator_traits<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*>::reference>::value, void>::type
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::assign<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >*>(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >*) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::
assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
          (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this,basic_string *param_1,basic_string *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  ulong uVar10;
  
                    /* try { // try from 00914330 to 00a14397 has its CatchHandler @ 00914330
                       catch() { ... } // from try @ 00914330 with catch @ 00914330
                       catch() { ... } // from try @ 00914504 with catch @ 00914330
                       catch() { ... } // from try @ 00914624 with catch @ 00914330
                       catch() { ... } // from try @ 009146a4 with catch @ 00914330 */
  lVar4 = *(long *)(this + 0x10);
  pbVar9 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this;
  uVar10 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  lVar8 = lVar4 - (long)pbVar9 >> 3;
  if (uVar10 < (ulong)(lVar8 * -0x5555555555555555) || uVar10 + lVar8 * 0x5555555555555555 == 0) {
                    /* try { // try from 009143bc to 00a143d3 has its CatchHandler @ 009147b0 */
    lVar4 = *(long *)(this + 8) - (long)pbVar9 >> 3;
    pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + (*(long *)(this + 8) - (long)pbVar9));
    pbVar3 = pbVar5;
    if (uVar10 < (ulong)(lVar4 * -0x5555555555555555) || uVar10 + lVar4 * 0x5555555555555555 == 0) {
      pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               param_2;
    }
                    /* try { // try from 009143dc to 00a143e7 has its CatchHandler @ 00914774 */
    for (; pbVar3 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)param_1; param_1 = param_1 + 0x18) {
      if (param_1 != (basic_string *)pbVar9) {
        uVar7 = *(ulong *)(param_1 + 8);
        pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(param_1 + 0x10);
        if (((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)param_1 & 1) == 0) {
          pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(param_1 + 1);
          uVar7 = (ulong)((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)param_1 >> 1);
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                  (pbVar9,(char *)pbVar1,uVar7);
      }
      pbVar9 = pbVar9 + 0x18;
    }
    if ((ulong)(lVar4 * -0x5555555555555555) <= uVar10 && uVar10 + lVar4 * 0x5555555555555555 != 0)
    {
      pbVar9 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 8);
      while (pbVar3 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)param_2) {
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                  (pbVar9,(basic_string *)pbVar5);
                    /* try { // try from 00914404 to 00a14407 has its CatchHandler @ 009146e4 */
        pbVar9 = pbVar9 + 0x18;
        pbVar5 = pbVar5 + 0x18;
        pbVar3 = pbVar5;
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
        bVar2 = pbVar5[-0x18];
        pbVar3 = pbVar5 + -0x18;
        while( true ) {
                    /* try { // try from 00914398 to 00a143af has its CatchHandler @ 009147f4 */
          if (((byte)bVar2 & 1) != 0) {
            operator_delete(*(void **)(pbVar5 + -8));
          }
          if (pbVar9 == pbVar3) break;
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
                    /* try { // try from 009144a0 to 00a144b7 has its CatchHandler @ 00914844 */
      lVar4 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0xaaaaaaaaaaaaaaa < uVar10) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 009144c4 to 00a144db has its CatchHandler @ 009147d4 */
    uVar7 = 0xaaaaaaaaaaaaaaa;
                    /* try { // try from 009144e8 to 00a14503 has its CatchHandler @ 009147d0 */
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
                    /* try { // try from 00914504 to 00a145fb has its CatchHandler @ 00914330 */
    for (; param_1 != param_2; param_1 = param_1 + 0x18) {
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                (pbVar9,param_1);
      pbVar9 = pbVar9 + 0x18;
    }
  }
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
       pbVar9;
  return;
}

