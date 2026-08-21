
/* std::__ndk1::enable_if<__is_forward_iterator<cocos2d::Properties::Property*>::value&&is_constructible<cocos2d::Properties::Property,
   std::__ndk1::iterator_traits<cocos2d::Properties::Property*>::reference>::value, void>::type
   std::__ndk1::vector<cocos2d::Properties::Property,
   std::__ndk1::allocator<cocos2d::Properties::Property>
   >::assign<cocos2d::Properties::Property*>(cocos2d::Properties::Property*,
   cocos2d::Properties::Property*) */

void __thiscall
std::__ndk1::
vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>::
assign<cocos2d::Properties::Property*>
          (vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>
           *this,Property *param_1,Property *param_2)

{
  basic_string *pbVar1;
  basic_string *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  Property *pPVar8;
  Property *pPVar9;
  Property *pPVar10;
  ulong uVar11;
  
  lVar4 = *(long *)(this + 0x10);
  pPVar10 = *(Property **)this;
  uVar11 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  lVar7 = lVar4 - (long)pPVar10 >> 4;
  if (uVar11 < (ulong)(lVar7 * -0x5555555555555555) || uVar11 + lVar7 * 0x5555555555555555 == 0) {
    lVar4 = *(long *)(this + 8) - (long)pPVar10 >> 4;
    pbVar1 = (basic_string *)(param_1 + (*(long *)(this + 8) - (long)pPVar10));
    pbVar2 = pbVar1;
    if (uVar11 < (ulong)(lVar4 * -0x5555555555555555) || uVar11 + lVar4 * 0x5555555555555555 == 0) {
      pbVar2 = (basic_string *)param_2;
    }
    if (pbVar2 != (basic_string *)param_1) {
      lVar7 = 0;
      do {
        if (param_1 != pPVar10) {
          pPVar9 = param_1 + lVar7;
          uVar6 = *(ulong *)(pPVar9 + 8);
          pPVar8 = *(Property **)(pPVar9 + 0x10);
          if (((byte)*pPVar9 & 1) == 0) {
            pPVar8 = pPVar9 + 1;
            uVar6 = (ulong)((byte)*pPVar9 >> 1);
          }
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(pPVar10 + lVar7),(char *)pPVar8,uVar6);
          uVar6 = (ulong)((byte)pPVar9[0x18] >> 1);
          pPVar8 = pPVar9 + 0x19;
                    /* try { // try from 00fb1cec to 010b1cef has its CatchHandler @ 00fb1cfc */
          if (((byte)pPVar9[0x18] & 1) != 0) {
            uVar6 = *(ulong *)(pPVar9 + 0x20);
            pPVar8 = *(Property **)(pPVar9 + 0x28);
          }
                    /* try { // try from 00fb1cf0 to 010b1cf3 has its CatchHandler @ 00fb1cf8 */
                    /* try { // try from 00fb1cf4 to 010b1ddf has its CatchHandler @ 00fb1700 */
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(pPVar10 + lVar7) + 0x18,(char *)pPVar8,uVar6);
                    /* catch() { ... } // from try @ 00fb1cf0 with catch @ 00fb1cf8 */
        }
        lVar7 = lVar7 + 0x30;
      } while ((long)pbVar2 - (long)param_1 != lVar7);
                    /* catch() { ... } // from try @ 00fb1cec with catch @ 00fb1cfc */
                    /* catch() { ... } // from try @ 00fb180c with catch @ 00fb1d00 */
      pPVar10 = pPVar10 + lVar7;
    }
                    /* catch() { ... } // from try @ 00fb179c with catch @ 00fb1d04 */
                    /* catch() { ... } // from try @ 00fb19ac with catch @ 00fb1d08 */
    if (uVar11 < (ulong)(lVar4 * -0x5555555555555555) || uVar11 + lVar4 * 0x5555555555555555 == 0) {
      pPVar9 = *(Property **)(this + 8);
      while (pPVar8 = pPVar9, pPVar8 != pPVar10) {
        if (((byte)pPVar8[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pPVar8 + -8));
        }
        pPVar9 = pPVar8 + -0x30;
        if (((byte)pPVar8[-0x30] & 1) != 0) {
          operator_delete(*(void **)(pPVar8 + -0x20));
        }
      }
      *(Property **)(this + 8) = pPVar10;
    }
    else {
      pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 8);
      while (pbVar2 != (basic_string *)param_2) {
                    /* catch() { ... } // from try @ 00fb19a0 with catch @ 00fb1d20 */
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                  (pbVar3,pbVar1);
                    /* catch() { ... } // from try @ 00fb19d0 with catch @ 00fb1d24 */
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                  (pbVar3 + 0x18,pbVar1 + 0x18);
        pbVar3 = pbVar3 + 0x30;
        pbVar1 = pbVar1 + 0x30;
        pbVar2 = pbVar1;
      }
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8)
           = pbVar3;
    }
  }
  else {
    if (pPVar10 != (Property *)0x0) {
      pPVar9 = pPVar10;
      pPVar8 = *(Property **)(this + 8);
      if (*(Property **)(this + 8) != pPVar10) {
        do {
          if (((byte)pPVar8[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pPVar8 + -8));
          }
          pPVar9 = pPVar8 + -0x30;
          if (((byte)pPVar8[-0x30] & 1) != 0) {
            operator_delete(*(void **)(pPVar8 + -0x20));
          }
          pPVar8 = pPVar9;
        } while (pPVar10 != pPVar9);
        pPVar9 = *(Property **)this;
      }
      *(Property **)(this + 8) = pPVar10;
      operator_delete(pPVar9);
      lVar4 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0x555555555555555 < uVar11) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00fb1de0 to 010b1edf has its CatchHandler @ 00fb1de0
                       catch() { ... } // from try @ 00fb1de0 with catch @ 00fb1de0
                       catch() { ... } // from try @ 00fb1f1c with catch @ 00fb1de0 */
    uVar6 = 0x555555555555555;
    if (((ulong)((lVar4 >> 4) * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) &&
       (uVar5 = (lVar4 >> 4) * 0x5555555555555556, uVar6 = uVar11, uVar11 <= uVar5)) {
      uVar6 = uVar5;
    }
    pbVar3 = operator_new(uVar6 * 0x30);
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this =
         pbVar3;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
         pbVar3;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = pbVar3 + uVar6 * 0x30;
    for (; param_1 != param_2; param_1 = param_1 + 0x30) {
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                (pbVar3,(basic_string *)param_1);
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                (pbVar3 + 0x18,(basic_string *)(param_1 + 0x18));
      pbVar3 = pbVar3 + 0x30;
    }
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
         pbVar3;
  }
  return;
}

