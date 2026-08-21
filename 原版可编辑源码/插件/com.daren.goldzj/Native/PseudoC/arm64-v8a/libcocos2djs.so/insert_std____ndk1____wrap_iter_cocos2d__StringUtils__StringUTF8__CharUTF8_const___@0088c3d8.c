
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
           *this,basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_2,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_3,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_4)

{
  ulong *puVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  void *pvVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  ulong *puVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  byte *__dest;
  ulong *puVar14;
  ulong uVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar16;
  void *__src;
  long lVar17;
  
  if ((long)param_4 - (long)param_3 < 1) {
    return param_2;
  }
  puVar11 = *(ulong **)(this + 8);
  lVar6 = (long)param_4 - (long)param_3 >> 3;
  lVar17 = lVar6 * -0x5555555555555555;
  lVar7 = *(long *)(this + 0x10) - (long)puVar11 >> 3;
  if (lVar17 + lVar7 * 0x5555555555555555 == 0 || lVar17 < lVar7 * -0x5555555555555555) {
    lVar7 = (long)puVar11 - (long)param_2 >> 3;
    puVar14 = puVar11;
    pbVar16 = param_4;
    if (lVar17 + lVar7 * 0x5555555555555555 != 0 && lVar7 * -0x5555555555555555 <= lVar17) {
      pbVar16 = param_3 + lVar7 * 8;
      for (pbVar13 = pbVar16; pbVar13 != param_4; pbVar13 = pbVar13 + 0x18) {
        puVar14[1] = 0;
        puVar14[2] = 0;
        *puVar14 = 0;
        if (((byte)*pbVar13 & 1) == 0) {
          uVar8 = *(ulong *)(pbVar13 + 8);
          uVar15 = *(ulong *)pbVar13;
          puVar14[2] = *(ulong *)(pbVar13 + 0x10);
          puVar14[1] = uVar8;
          *puVar14 = uVar15;
        }
        else {
          uVar15 = *(ulong *)(pbVar13 + 8);
          if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
            __basic_string_common<true>::__throw_length_error();
          }
          pvVar3 = *(void **)(pbVar13 + 0x10);
          if (uVar15 < 0x17) {
            __dest = (byte *)((long)puVar14 + 1);
            *(byte *)puVar14 = (byte)((int)uVar15 << 1);
            if (uVar15 != 0) goto LAB_0088c6c8;
          }
          else {
            uVar8 = uVar15 + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar8);
            puVar14[1] = uVar15;
            puVar14[2] = (ulong)__dest;
            *puVar14 = uVar8 | 1;
LAB_0088c6c8:
            memcpy(__dest,pvVar3,uVar15);
          }
          __dest[uVar15] = 0;
        }
        puVar14 = (ulong *)(*(long *)(this + 8) + 0x18);
        *(ulong **)(this + 8) = puVar14;
      }
      if ((long)puVar11 - (long)param_2 < 1) {
        return param_2;
      }
    }
    puVar1 = puVar14;
    for (puVar5 = puVar14 + -lVar6; puVar5 < puVar11; puVar5 = puVar5 + 3) {
      uVar8 = puVar5[1];
      uVar15 = *puVar5;
      puVar1[2] = puVar5[2];
      puVar1[1] = uVar8;
      *puVar1 = uVar15;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar1 = (ulong *)(*(long *)(this + 8) + 0x18);
      *(ulong **)(this + 8) = puVar1;
    }
    pbVar13 = param_2;
    if ((long)puVar14 - (long)(param_2 + lVar6 * 8) != 0) {
      lVar6 = ((long)puVar14 - (long)(param_2 + lVar6 * 8) >> 3) << 3;
      do {
        puVar11 = puVar14 + -3;
        if ((*puVar11 & 1) == 0) {
          *(undefined2 *)puVar11 = 0;
        }
        else {
          *(undefined1 *)puVar14[-1] = 0;
          puVar14[-2] = 0;
          if ((*puVar11 & 1) != 0) {
            operator_delete((void *)puVar14[-1]);
            *puVar11 = 0;
          }
        }
        uVar8 = *(ulong *)(param_2 + lVar6 + -0x10);
        uVar15 = *(ulong *)(param_2 + lVar6 + -0x18);
        lVar7 = lVar6 + -0x18;
        puVar14[-1] = *(ulong *)(param_2 + lVar6 + -8);
        puVar14[-2] = uVar8;
        *puVar11 = uVar15;
        *(undefined8 *)(param_2 + lVar6 + -0x10) = 0;
        *(undefined8 *)(param_2 + lVar6 + -8) = 0;
        *(undefined8 *)(param_2 + lVar6 + -0x18) = 0;
        lVar6 = lVar7;
        puVar14 = puVar11;
      } while (lVar7 != 0);
    }
    for (; param_3 != pbVar16; param_3 = param_3 + 0x18) {
      if (param_3 != pbVar13) {
        uVar15 = *(ulong *)(param_3 + 8);
        pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(param_3 + 0x10);
        if (((byte)*param_3 & 1) == 0) {
          pbVar2 = param_3 + 1;
          uVar15 = (ulong)((byte)*param_3 >> 1);
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                  (pbVar13,(char *)pbVar2,uVar15);
      }
      pbVar13 = pbVar13 + 0x18;
    }
    return param_2;
  }
  pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this
  ;
  uVar15 = 0xaaaaaaaaaaaaaaa;
  uVar8 = lVar17 + ((long)puVar11 - (long)pbVar16 >> 3) * -0x5555555555555555;
  if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - (long)pbVar16 >> 3;
  if ((ulong)(lVar6 * -0x5555555555555555) < 0x555555555555555) {
    uVar4 = lVar6 * 0x5555555555555556;
    uVar15 = uVar8;
    if (uVar8 <= uVar4) {
      uVar15 = uVar4;
    }
    if (uVar15 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_0088c4b0;
    }
  }
  pvVar3 = operator_new(uVar15 * 0x18);
LAB_0088c4b0:
  pbVar10 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            ((long)pvVar3 + ((long)param_2 - (long)pbVar16 >> 3) * 8);
  pbVar13 = pbVar10;
  pbVar2 = pbVar10;
  pbVar9 = param_2;
  if (param_3 != param_4) {
    do {
      *(ulong *)(pbVar13 + 8) = 0;
      *(ulong *)(pbVar13 + 0x10) = 0;
      *(ulong *)pbVar13 = 0;
      if (((byte)*param_3 & 1) == 0) {
        uVar4 = *(ulong *)(param_3 + 8);
        uVar8 = *(ulong *)param_3;
        *(ulong *)(pbVar13 + 0x10) = *(ulong *)(param_3 + 0x10);
        *(ulong *)(pbVar13 + 8) = uVar4;
        *(ulong *)pbVar13 = uVar8;
      }
      else {
        uVar8 = *(ulong *)(param_3 + 8);
        if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
          __basic_string_common<true>::__throw_length_error();
        }
        __src = *(void **)(param_3 + 0x10);
        if (uVar8 < 0x17) {
          pbVar16 = pbVar13 + 1;
          *pbVar13 = SUB41((int)uVar8 << 1,0);
          if (uVar8 != 0) goto LAB_0088c538;
        }
        else {
          uVar4 = uVar8 + 0x10 & 0xfffffffffffffff0;
          pbVar16 = operator_new(uVar4);
          *(ulong *)(pbVar13 + 8) = uVar8;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar13 + 0x10) = pbVar16;
          *(ulong *)pbVar13 = uVar4 | 1;
LAB_0088c538:
          memcpy(pbVar16,__src,uVar8);
        }
        pbVar16[uVar8] =
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      }
      param_3 = param_3 + 0x18;
      pbVar13 = pbVar13 + 0x18;
    } while (param_4 != param_3);
    pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               this;
  }
  for (; pbVar16 != pbVar9; pbVar9 = pbVar9 + -0x18) {
    uVar4 = *(ulong *)(pbVar9 + -0x10);
    uVar8 = *(ulong *)(pbVar9 + -0x18);
    *(ulong *)(pbVar2 + -8) = *(ulong *)(pbVar9 + -8);
    *(ulong *)(pbVar2 + -0x10) = uVar4;
    *(ulong *)(pbVar2 + -0x18) = uVar8;
    *(undefined8 *)(pbVar9 + -0x10) = 0;
    *(undefined8 *)(pbVar9 + -8) = 0;
    *(undefined8 *)(pbVar9 + -0x18) = 0;
    pbVar2 = pbVar2 + -0x18;
  }
  pbVar9 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 8);
  pbVar16 = pbVar13;
  if (pbVar9 != param_2) {
    do {
      uVar4 = *(ulong *)(param_2 + 8);
      uVar8 = *(ulong *)param_2;
      *(ulong *)(pbVar16 + 0x10) = *(ulong *)(param_2 + 0x10);
      pbVar13 = pbVar16 + 0x18;
      *(ulong *)(pbVar16 + 8) = uVar4;
      *(ulong *)pbVar16 = uVar8;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      pbVar12 = param_2 + 0x18;
      *(undefined8 *)param_2 = 0;
      param_2 = pbVar12;
      pbVar16 = pbVar13;
    } while (pbVar9 != pbVar12);
    param_2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 8);
  }
  pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this
  ;
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this = pbVar2;
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
       pbVar13;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar15 * 0x18);
  while (pbVar13 = param_2, pbVar13 != pbVar16) {
    param_2 = pbVar13 + -0x18;
    if (((byte)*param_2 & 1) != 0) {
      operator_delete(*(void **)(pbVar13 + -8));
    }
  }
  if (pbVar16 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
    operator_delete(pbVar16);
  }
  return pbVar10;
}

