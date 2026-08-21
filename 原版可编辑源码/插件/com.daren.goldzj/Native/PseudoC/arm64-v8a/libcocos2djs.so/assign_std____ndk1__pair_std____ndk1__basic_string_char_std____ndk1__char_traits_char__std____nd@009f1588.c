
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
  pair *ppVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  pair *ppVar8;
  pair *ppVar9;
  pair *ppVar10;
  
                    /* catch() { ... } // from try @ 009f0e64 with catch @ 009f159c
                       catch() { ... } // from try @ 009f113c with catch @ 009f159c
                       catch() { ... } // from try @ 009f11d8 with catch @ 009f159c */
  lVar3 = *(long *)(this + 0x10);
  ppVar10 = *(pair **)this;
  uVar7 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  lVar6 = lVar3 - (long)ppVar10 >> 4;
  if (uVar7 < (ulong)(lVar6 * -0x5555555555555555) || uVar7 + lVar6 * 0x5555555555555555 == 0) {
    lVar3 = *(long *)(this + 8) - (long)ppVar10 >> 4;
    ppVar9 = param_1 + (*(long *)(this + 8) - (long)ppVar10);
    if (uVar7 < (ulong)(lVar3 * -0x5555555555555555) || uVar7 + lVar3 * 0x5555555555555555 == 0) {
      ppVar9 = param_2;
    }
                    /* try { // try from 009f164c to 00af1663 has its CatchHandler @ 009f191c */
    if (ppVar9 != param_1) {
      lVar6 = 0;
      do {
        if (param_1 != ppVar10) {
          ppVar8 = param_1 + lVar6;
          uVar5 = *(ulong *)(ppVar8 + 8);
          ppVar1 = *(pair **)(ppVar8 + 0x10);
                    /* try { // try from 009f166c to 00af1677 has its CatchHandler @ 009f1918 */
                    /* try { // try from 009f1678 to 00af1683 has its CatchHandler @ 009f1914 */
          if (((byte)*ppVar8 & 1) == 0) {
            ppVar1 = ppVar8 + 1;
            uVar5 = (ulong)((byte)*ppVar8 >> 1);
          }
                    /* try { // try from 009f1684 to 00af189b has its CatchHandler @ 009f192c */
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(ppVar10 + lVar6),(char *)ppVar1,uVar5);
          uVar5 = (ulong)((byte)ppVar8[0x18] >> 1);
          ppVar1 = ppVar8 + 0x19;
          if (((byte)ppVar8[0x18] & 1) != 0) {
            uVar5 = *(ulong *)(ppVar8 + 0x20);
            ppVar1 = *(pair **)(ppVar8 + 0x28);
          }
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(ppVar10 + lVar6) + 0x18,(char *)ppVar1,uVar5);
        }
        lVar6 = lVar6 + 0x30;
      } while ((long)ppVar9 - (long)param_1 != lVar6);
      ppVar10 = ppVar10 + lVar6;
    }
    if (uVar7 < (ulong)(lVar3 * -0x5555555555555555) || uVar7 + lVar3 * 0x5555555555555555 == 0) {
      ppVar9 = *(pair **)(this + 8);
      while (ppVar8 = ppVar9, ppVar8 != ppVar10) {
        if (((byte)ppVar8[-0x18] & 1) != 0) {
          operator_delete(*(void **)(ppVar8 + -8));
        }
        ppVar9 = ppVar8 + -0x30;
        if (((byte)ppVar8[-0x30] & 1) != 0) {
          operator_delete(*(void **)(ppVar8 + -0x20));
        }
      }
      *(pair **)(this + 8) = ppVar10;
      return;
    }
  }
  else {
    if (ppVar10 != (pair *)0x0) {
      ppVar9 = ppVar10;
      ppVar8 = *(pair **)(this + 8);
      if (*(pair **)(this + 8) != ppVar10) {
        do {
                    /* try { // try from 009f15f4 to 00af164b has its CatchHandler @ 009f15f4
                       catch() { ... } // from try @ 009f15f4 with catch @ 009f15f4
                       catch() { ... } // from try @ 009f189c with catch @ 009f15f4 */
          if (((byte)ppVar8[-0x18] & 1) != 0) {
            operator_delete(*(void **)(ppVar8 + -8));
          }
          ppVar9 = ppVar8 + -0x30;
          if (((byte)ppVar8[-0x30] & 1) != 0) {
            operator_delete(*(void **)(ppVar8 + -0x20));
          }
          ppVar8 = ppVar9;
        } while (ppVar10 != ppVar9);
        ppVar9 = *(pair **)this;
      }
      *(pair **)(this + 8) = ppVar10;
      operator_delete(ppVar9);
      lVar3 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0x555555555555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    uVar5 = 0x555555555555555;
    if (((ulong)((lVar3 >> 4) * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) &&
       (uVar4 = (lVar3 >> 4) * 0x5555555555555556, uVar5 = uVar7, uVar7 <= uVar4)) {
      uVar5 = uVar4;
    }
    pvVar2 = operator_new(uVar5 * 0x30);
    *(void **)this = pvVar2;
    *(void **)(this + 8) = pvVar2;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar5 * 0x30);
    ppVar9 = param_1;
  }
  __construct_at_end<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
            ((pair *)this,ppVar9,(ulong)param_2);
  return;
}

