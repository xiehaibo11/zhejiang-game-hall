
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
  ulong *puVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  ulong uVar5;
  long lVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  void *pvVar7;
  ulong uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  void *pvVar10;
  ulong uVar11;
  
  lVar3 = *(long *)(this + 0x10);
  this_00 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this
  ;
  uVar8 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  lVar6 = lVar3 - (long)this_00 >> 3;
  if (uVar8 < (ulong)(lVar6 * -0x5555555555555555) || uVar8 + lVar6 * 0x5555555555555555 == 0) {
    lVar3 = *(long *)(this + 8) - (long)this_00 >> 3;
    pbVar9 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_1 + (*(long *)(this + 8) - (long)this_00));
    pbVar4 = pbVar9;
    if (uVar8 < (ulong)(lVar3 * -0x5555555555555555) || uVar8 + lVar3 * 0x5555555555555555 == 0) {
      pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               param_2;
    }
    for (; pbVar4 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)param_1; param_1 = param_1 + 0x18) {
      if (param_1 != (basic_string *)this_00) {
        uVar11 = *(ulong *)(param_1 + 8);
        pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(param_1 + 0x10);
        if (((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)param_1 & 1) == 0) {
          pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(param_1 + 1);
          uVar11 = (ulong)((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                   *)param_1 >> 1);
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                  (this_00,(char *)pbVar1,uVar11);
      }
      this_00 = this_00 + 0x18;
    }
    if (uVar8 < (ulong)(lVar3 * -0x5555555555555555) || uVar8 + lVar3 * 0x5555555555555555 == 0) {
      pbVar9 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 8);
      while (pbVar4 = pbVar9, pbVar4 != this_00) {
        pbVar9 = pbVar4 + -0x18;
        if (((byte)*pbVar9 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
      }
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8)
           = this_00;
    }
    else if (pbVar4 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)param_2) {
      puVar2 = *(ulong **)(this + 8);
      do {
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        if (((byte)*pbVar9 & 1) == 0) {
          uVar11 = *(ulong *)(pbVar9 + 8);
          uVar8 = *(ulong *)pbVar9;
          puVar2[2] = *(ulong *)(pbVar9 + 0x10);
          puVar2[1] = uVar11;
          *puVar2 = uVar8;
        }
        else {
          uVar8 = *(ulong *)(pbVar9 + 8);
          if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
            __basic_string_common<true>::__throw_length_error();
          }
          pvVar10 = *(void **)(pbVar9 + 0x10);
          if (uVar8 < 0x17) {
            pvVar7 = (void *)((long)puVar2 + 1);
            *(char *)puVar2 = (char)((int)uVar8 << 1);
            if (uVar8 != 0) goto LAB_0087d214;
          }
          else {
            uVar11 = uVar8 + 0x10 & 0xfffffffffffffff0;
            pvVar7 = operator_new(uVar11);
            puVar2[1] = uVar8;
            puVar2[2] = (ulong)pvVar7;
            *puVar2 = uVar11 | 1;
LAB_0087d214:
            memcpy(pvVar7,pvVar10,uVar8);
          }
          *(undefined1 *)((long)pvVar7 + uVar8) = 0;
        }
        pbVar9 = pbVar9 + 0x18;
        puVar2 = (ulong *)(*(long *)(this + 8) + 0x18);
        *(ulong **)(this + 8) = puVar2;
      } while (param_2 != (basic_string *)pbVar9);
    }
  }
  else {
    if (this_00 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
      pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 8);
      pbVar9 = this_00;
      if (pbVar4 != this_00) {
        do {
          pbVar9 = pbVar4 + -0x18;
          if (((byte)*pbVar9 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          pbVar4 = pbVar9;
        } while (this_00 != pbVar9);
        pbVar9 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )this;
      }
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8)
           = this_00;
      operator_delete(pbVar9);
      lVar3 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    uVar11 = 0xaaaaaaaaaaaaaaa;
    if (((ulong)((lVar3 >> 3) * -0x5555555555555555) < 0x555555555555555) &&
       (uVar5 = (lVar3 >> 3) * 0x5555555555555556, uVar11 = uVar8, uVar8 <= uVar5)) {
      uVar11 = uVar5;
    }
    puVar2 = operator_new(uVar11 * 0x18);
    *(ulong **)this = puVar2;
    *(ulong **)(this + 8) = puVar2;
    *(ulong **)(this + 0x10) = puVar2 + uVar11 * 3;
    for (; param_1 != param_2; param_1 = param_1 + 0x18) {
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      if (((byte)*param_1 & 1) == 0) {
        uVar11 = *(ulong *)(param_1 + 8);
        uVar8 = *(ulong *)param_1;
        puVar2[2] = *(ulong *)(param_1 + 0x10);
        puVar2[1] = uVar11;
        *puVar2 = uVar8;
      }
      else {
        uVar8 = *(ulong *)(param_1 + 8);
        if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
          __basic_string_common<true>::__throw_length_error();
        }
        pvVar10 = *(void **)(param_1 + 0x10);
        if (uVar8 < 0x17) {
          pvVar7 = (void *)((long)puVar2 + 1);
          *(char *)puVar2 = (char)((int)uVar8 << 1);
          if (uVar8 != 0) goto LAB_0087d364;
        }
        else {
          uVar11 = uVar8 + 0x10 & 0xfffffffffffffff0;
          pvVar7 = operator_new(uVar11);
          puVar2[1] = uVar8;
          puVar2[2] = (ulong)pvVar7;
          *puVar2 = uVar11 | 1;
LAB_0087d364:
          memcpy(pvVar7,pvVar10,uVar8);
        }
        *(undefined1 *)((long)pvVar7 + uVar8) = 0;
      }
      puVar2 = (ulong *)(*(long *)(this + 8) + 0x18);
      *(ulong **)(this + 8) = puVar2;
    }
  }
  return;
}

