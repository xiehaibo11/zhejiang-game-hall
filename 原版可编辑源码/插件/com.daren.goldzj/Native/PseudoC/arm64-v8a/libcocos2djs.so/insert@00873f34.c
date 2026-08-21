
/* std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   >::insert(std::__ndk1::__wrap_iter<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::
vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::insert(vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
         *this,basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
               *param_2,
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_3)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  void *__src;
  ulong uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  ulong uVar11;
  undefined8 uVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *pvStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)this;
  pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 8);
  lVar7 = (long)param_2 - lVar3 >> 3;
  if (pbVar10 < *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0x10)) {
    pbVar8 = param_2;
    if (param_2 != pbVar10) {
      pbVar2 = pbVar10;
      for (pbVar4 = pbVar10 + -0x18; pbVar4 < pbVar10; pbVar4 = pbVar4 + 0x18) {
        uVar12 = *(undefined8 *)(pbVar4 + 8);
        uVar6 = *(undefined8 *)pbVar4;
        *(undefined8 *)(pbVar2 + 0x10) = *(undefined8 *)(pbVar4 + 0x10);
        *(undefined8 *)(pbVar2 + 8) = uVar12;
        *(undefined8 *)pbVar2 = uVar6;
        *(undefined8 *)(pbVar4 + 8) = 0;
        *(undefined8 *)(pbVar4 + 0x10) = 0;
        *(undefined8 *)pbVar4 = 0;
        pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (*(long *)(this + 8) + 0x18);
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 8) = pbVar2;
      }
      if ((long)pbVar10 - (long)(param_2 + 0x18) != 0) {
        pbVar2 = pbVar10 + -0x18;
        lVar3 = ((long)pbVar10 - (long)(param_2 + 0x18) >> 3) * 8;
        do {
          if (((byte)*pbVar2 & 1) == 0) {
            *(undefined2 *)pbVar2 = 0;
          }
          else {
            **(undefined1 **)(pbVar2 + 0x10) = 0;
            *(undefined8 *)(pbVar2 + 8) = 0;
            if (((byte)*pbVar2 & 1) != 0) {
              operator_delete(*(void **)(pbVar2 + 0x10));
              *(undefined8 *)pbVar2 = 0;
            }
          }
          uVar12 = *(undefined8 *)(param_2 + lVar3 + -0x10);
          uVar6 = *(undefined8 *)(param_2 + lVar3 + -0x18);
          lVar7 = lVar3 + -0x18;
          *(undefined8 *)(pbVar2 + 0x10) = *(undefined8 *)(param_2 + lVar3 + -8);
          *(undefined8 *)(pbVar2 + 8) = uVar12;
          *(undefined8 *)pbVar2 = uVar6;
          *(undefined8 *)(param_2 + lVar3 + -0x10) = 0;
          *(undefined8 *)(param_2 + lVar3 + -8) = 0;
          *(undefined8 *)(param_2 + lVar3 + -0x18) = 0;
          pbVar2 = pbVar2 + -0x18;
          lVar3 = lVar7;
        } while (lVar7 != 0);
      }
      pbVar10 = param_3;
      if ((param_2 <= param_3) &&
         (pbVar10 = param_3 + 0x18,
         *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
          (this + 8) <= param_3)) {
        pbVar10 = param_3;
      }
      if (param_2 != pbVar10) {
        uVar9 = *(ulong *)(pbVar10 + 8);
        pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar10 + 0x10);
        if (((byte)*pbVar10 & 1) == 0) {
          pbVar2 = pbVar10 + 1;
          uVar9 = (ulong)((byte)*pbVar10 >> 1);
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                  (param_2,(char *)pbVar2,uVar9);
      }
      goto LAB_008742d0;
    }
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)param_2 = 0;
    if (((byte)*param_3 & 1) == 0) {
      uVar12 = *(undefined8 *)(param_3 + 8);
      uVar6 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 8) = uVar12;
      *(undefined8 *)param_2 = uVar6;
    }
    else {
      uVar9 = *(ulong *)(param_3 + 8);
      if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
        __basic_string_common<true>::__throw_length_error();
      }
      __src = *(void **)(param_3 + 0x10);
      if (uVar9 < 0x17) {
        pbVar10 = param_2 + 1;
        *param_2 = SUB41((int)uVar9 << 1,0);
        if (uVar9 != 0) goto LAB_008742b0;
      }
      else {
        uVar11 = uVar9 + 0x10 & 0xfffffffffffffff0;
        pbVar10 = operator_new(uVar11);
        lVar3 = lVar3 + lVar7 * 8;
        *(ulong *)(lVar3 + 8) = uVar9;
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (lVar3 + 0x10) = pbVar10;
        *(ulong *)param_2 = uVar11 | 1;
LAB_008742b0:
        memcpy(pbVar10,__src,uVar9);
      }
      pbVar10[uVar9] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    *(long *)(this + 8) = *(long *)(this + 8) + 0x18;
    goto LAB_008742d0;
  }
  uVar9 = 0xaaaaaaaaaaaaaaa;
  uVar11 = ((long)pbVar10 - lVar3 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar3 = (long)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0x10) - lVar3 >> 3;
  pvStack_70 = this + 0x10;
  if ((ulong)(lVar3 * -0x5555555555555555) < 0x555555555555555) {
    uVar5 = lVar3 * 0x5555555555555556;
    uVar9 = uVar11;
    if (uVar11 <= uVar5) {
      uVar9 = uVar5;
    }
    if (uVar9 != 0) goto LAB_0087410c;
    local_90 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0
    ;
  }
  else {
LAB_0087410c:
    local_78 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0
    ;
    local_90 = operator_new(uVar9 * 0x18);
  }
  local_88 = local_90 + lVar7 * 8;
  local_78 = local_90 + uVar9 * 0x18;
  local_80 = local_88;
  FUN_0087ce2c(&local_90,param_3);
  pbVar8 = local_88;
  pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this;
  for (pbVar10 = param_2; pbVar2 != pbVar10; pbVar10 = pbVar10 + -0x18) {
    uVar12 = *(undefined8 *)(pbVar10 + -0x10);
    uVar6 = *(undefined8 *)(pbVar10 + -0x18);
    *(undefined8 *)(local_88 + -8) = *(undefined8 *)(pbVar10 + -8);
    *(undefined8 *)(local_88 + -0x10) = uVar12;
    *(undefined8 *)(local_88 + -0x18) = uVar6;
    *(undefined8 *)(pbVar10 + -0x10) = 0;
    *(undefined8 *)(pbVar10 + -8) = 0;
    *(undefined8 *)(pbVar10 + -0x18) = 0;
    local_88 = local_88 + -0x18;
  }
  pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 8);
  if (pbVar10 != param_2) {
    do {
      uVar12 = *(undefined8 *)(param_2 + 8);
      uVar6 = *(undefined8 *)param_2;
      *(undefined8 *)(local_80 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(local_80 + 8) = uVar12;
      *(undefined8 *)local_80 = uVar6;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      pbVar2 = param_2 + 0x18;
      *(undefined8 *)param_2 = 0;
      local_80 = local_80 + 0x18;
      param_2 = pbVar2;
    } while (pbVar10 != pbVar2);
    pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 8);
  }
  pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this;
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this =
       local_88;
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
       local_80;
  uVar6 = *(undefined8 *)(this + 0x10);
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 0x10)
       = local_78;
  local_90 = pbVar2;
  local_88 = pbVar2;
  local_78 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)uVar6
  ;
  while (pbVar4 = pbVar10, pbVar4 != pbVar2) {
    local_80 = pbVar4 + -0x18;
    pbVar10 = local_80;
    if (((byte)pbVar4[-0x18] & 1) != 0) {
      operator_delete(*(void **)(pbVar4 + -8));
      pbVar10 = local_80;
    }
  }
  local_80 = pbVar4;
  if (local_90 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
    operator_delete(local_90);
  }
LAB_008742d0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return pbVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

