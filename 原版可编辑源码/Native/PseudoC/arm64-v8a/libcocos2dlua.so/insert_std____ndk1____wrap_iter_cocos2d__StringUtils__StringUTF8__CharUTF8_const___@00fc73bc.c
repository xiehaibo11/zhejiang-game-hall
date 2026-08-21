
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__wrap_iter<cocos2d::StringUtils::StringUTF8::CharUTF8
   const*> >::value&&is_constructible<cocos2d::StringUtils::StringUTF8::CharUTF8,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<cocos2d::StringUtils::StringUTF8::CharUTF8
   const*> >::reference>::value,
   std::__ndk1::__wrap_iter<cocos2d::StringUtils::StringUTF8::CharUTF8*> >::type
   std::__ndk1::vector<cocos2d::StringUtils::StringUTF8::CharUTF8,
   std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>
   >::insert<std::__ndk1::__wrap_iter<cocos2d::StringUtils::StringUTF8::CharUTF8 const*>
   >(std::__ndk1::__wrap_iter<cocos2d::StringUtils::StringUTF8::CharUTF8 const*>,
   std::__ndk1::__wrap_iter<cocos2d::StringUtils::StringUTF8::CharUTF8 const*>,
   std::__ndk1::__wrap_iter<cocos2d::StringUtils::StringUTF8::CharUTF8 const*>) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::
vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
::insert<std::__ndk1::__wrap_iter<cocos2d::StringUtils::StringUTF8::CharUTF8_const*>>
          (vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
           *this,basic_string *param_2,basic_string *param_3,basic_string *param_4)

{
  undefined8 *puVar1;
  basic_string *pbVar2;
  basic_string bVar3;
  void *pvVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  long lVar12;
  ulong uVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar14;
  long lVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if ((long)param_4 - (long)param_3 < 1) {
    return (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2
    ;
  }
  pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 8);
  lVar15 = *(long *)this;
  lVar7 = (long)param_4 - (long)param_3 >> 3;
  lVar18 = lVar7 * -0x5555555555555555;
  lVar12 = *(long *)(this + 0x10) - (long)pbVar6 >> 3;
  lVar8 = (long)param_2 - lVar15 >> 3;
  if (lVar18 + lVar12 * 0x5555555555555555 == 0 || lVar18 < lVar12 * -0x5555555555555555) {
    lVar12 = (long)pbVar6 - (long)param_2 >> 3;
    pbVar11 = param_4;
    pbVar17 = pbVar6;
    if (lVar18 + lVar12 * 0x5555555555555555 != 0 && lVar12 * -0x5555555555555555 <= lVar18) {
      pbVar11 = param_3 + lVar12 * 8;
      for (pbVar10 = pbVar11; pbVar10 != param_4; pbVar10 = pbVar10 + 0x18) {
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                  (pbVar17,pbVar10);
        pbVar17 = pbVar17 + 0x18;
      }
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8)
           = pbVar17;
      if ((long)pbVar6 - (long)param_2 < 1) {
        return (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               param_2;
      }
    }
    pbVar16 = pbVar17;
    for (pbVar14 = pbVar17 + lVar7 * -8; pbVar14 < pbVar6; pbVar14 = pbVar14 + 0x18) {
      uVar20 = *(undefined8 *)(pbVar14 + 8);
      uVar19 = *(undefined8 *)pbVar14;
      *(undefined8 *)(pbVar16 + 0x10) = *(undefined8 *)(pbVar14 + 0x10);
      *(undefined8 *)(pbVar16 + 8) = uVar20;
      *(undefined8 *)pbVar16 = uVar19;
      *(undefined8 *)(pbVar14 + 8) = 0;
      *(undefined8 *)(pbVar14 + 0x10) = 0;
      *(undefined8 *)pbVar14 = 0;
      pbVar16 = pbVar16 + 0x18;
    }
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
         pbVar16;
    if ((long)pbVar17 - (long)(param_2 + lVar7 * 8) == 0) {
LAB_00fc76d8:
      if (param_3 == pbVar11) {
        return (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               param_2;
      }
      pbVar10 = param_2;
      if (param_3 != param_2) goto LAB_00fc7704;
      while( true ) {
        param_3 = param_3 + 0x18;
        pbVar10 = pbVar10 + 0x18;
        if (pbVar11 == param_3) break;
        if (param_3 != pbVar10) {
LAB_00fc7704:
          uVar13 = *(ulong *)(param_3 + 8);
          pbVar2 = *(basic_string **)(param_3 + 0x10);
          if (((byte)*param_3 & 1) == 0) {
            pbVar2 = param_3 + 1;
            uVar13 = (ulong)((byte)*param_3 >> 1);
          }
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)pbVar10,(char *)pbVar2,uVar13);
        }
      }
      return (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_2;
    }
    pbVar6 = pbVar17 + -0x18;
    lVar7 = ((long)pbVar17 - (long)(param_2 + lVar7 * 8) >> 3) * 8;
    if (((byte)*pbVar6 & 1) != 0) goto LAB_00fc76b4;
    do {
      *(undefined2 *)pbVar6 = 0;
      pbVar17 = pbVar6;
      while( true ) {
        puVar1 = (undefined8 *)(lVar15 + lVar8 * 8 + -0x18 + lVar7);
        uVar20 = puVar1[1];
        uVar19 = *puVar1;
        lVar7 = lVar7 + -0x18;
        *(undefined8 *)(pbVar17 + 0x10) = puVar1[2];
        pbVar6 = pbVar17 + -0x18;
        *(undefined8 *)(pbVar17 + 8) = uVar20;
        *(undefined8 *)pbVar17 = uVar19;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *puVar1 = 0;
        if (lVar7 == 0) goto LAB_00fc76d8;
        if (((byte)*pbVar6 & 1) == 0) break;
LAB_00fc76b4:
        **(undefined1 **)(pbVar6 + 0x10) = 0;
        *(undefined8 *)(pbVar6 + 8) = 0;
        pbVar17 = pbVar6;
        if (((byte)*pbVar6 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + 0x10));
          *(undefined8 *)pbVar6 = 0;
        }
      }
    } while( true );
  }
  uVar13 = 0xaaaaaaaaaaaaaaa;
  uVar9 = lVar18 + ((long)pbVar6 - lVar15 >> 3) * -0x5555555555555555;
  if (0xaaaaaaaaaaaaaaa < uVar9) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar12 = *(long *)(this + 0x10) - lVar15 >> 3;
  if ((ulong)(lVar12 * -0x5555555555555555) < 0x555555555555555) {
    uVar5 = lVar12 * 0x5555555555555556;
    uVar13 = uVar9;
    if (uVar9 <= uVar5) {
      uVar13 = uVar5;
    }
    if (uVar13 == 0) {
      pvVar4 = (void *)0x0;
      goto LAB_00fc7490;
    }
  }
  pvVar4 = operator_new(uVar13 * 0x18);
LAB_00fc7490:
  pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            ((long)pvVar4 + lVar8 * 8);
  lVar7 = lVar7 * 8;
  pbVar17 = pbVar14 + lVar7;
  pbVar6 = pbVar14;
  do {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
              (pbVar6,param_3);
    pbVar6 = pbVar6 + 0x18;
    lVar7 = lVar7 + -0x18;
    param_3 = param_3 + 0x18;
  } while (lVar7 != 0);
  pbVar10 = *(basic_string **)this;
  pbVar6 = pbVar14;
  for (pbVar11 = param_2; pbVar10 != pbVar11; pbVar11 = pbVar11 + -0x18) {
    uVar20 = *(undefined8 *)(pbVar11 + -0x10);
    uVar19 = *(undefined8 *)(pbVar11 + -0x18);
    *(undefined8 *)(pbVar6 + -8) = *(undefined8 *)(pbVar11 + -8);
    *(undefined8 *)(pbVar6 + -0x10) = uVar20;
    *(undefined8 *)(pbVar6 + -0x18) = uVar19;
    *(undefined8 *)(pbVar11 + -0x10) = 0;
    *(undefined8 *)(pbVar11 + -8) = 0;
    *(undefined8 *)(pbVar11 + -0x18) = 0;
    pbVar6 = pbVar6 + -0x18;
  }
  pbVar11 = *(basic_string **)(this + 8);
  pbVar16 = pbVar17;
  if (pbVar11 != param_2) {
    do {
      uVar20 = *(undefined8 *)(param_2 + 8);
      uVar19 = *(undefined8 *)param_2;
      *(undefined8 *)(pbVar16 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      pbVar17 = pbVar16 + 0x18;
      *(undefined8 *)(pbVar16 + 8) = uVar20;
      *(undefined8 *)pbVar16 = uVar19;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      pbVar10 = param_2 + 0x18;
      *(undefined8 *)param_2 = 0;
      param_2 = pbVar10;
      pbVar16 = pbVar17;
    } while (pbVar11 != pbVar10);
    param_2 = *(basic_string **)(this + 8);
  }
  pbVar11 = *(basic_string **)this;
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this = pbVar6;
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
       pbVar17;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar13 * 0x18);
  if (param_2 != pbVar11) {
    bVar3 = param_2[-0x18];
    pbVar10 = param_2 + -0x18;
    while( true ) {
      pbVar2 = pbVar10;
      if (((byte)bVar3 & 1) != 0) {
        operator_delete(*(void **)(param_2 + -8));
      }
      if (pbVar11 == pbVar2) break;
      bVar3 = pbVar2[-0x18];
      pbVar10 = pbVar2 + -0x18;
      param_2 = pbVar2;
    }
  }
  if (pbVar11 != (basic_string *)0x0) {
    operator_delete(pbVar11);
  }
  return pbVar14;
}

