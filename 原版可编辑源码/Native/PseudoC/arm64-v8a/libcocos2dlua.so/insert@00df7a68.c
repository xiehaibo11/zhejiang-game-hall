
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
               *param_2,basic_string *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  undefined8 uVar8;
  long lVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  basic_string *pbVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_68;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *pvStack_60;
  long local_58;
  
                    /* try { // try from 00df7a7c to 00ef7bdb has its CatchHandler @ 00df7a7c
                       catch() { ... } // from try @ 00df7a7c with catch @ 00df7a7c
                       catch() { ... } // from try @ 00df7be4 with catch @ 00df7a7c
                       catch() { ... } // from try @ 00df7c20 with catch @ 00df7a7c */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)this;
  pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 8);
  lVar9 = (long)param_2 - lVar4 >> 3;
  if (pbVar7 < *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10)) {
    if (param_2 == pbVar7) {
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                (param_2,param_3);
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8)
           = param_2 + 0x18;
    }
    else {
      pbVar12 = pbVar7 + -0x18;
      pbVar3 = pbVar7;
      for (pbVar10 = pbVar12; pbVar10 < pbVar7; pbVar10 = pbVar10 + 0x18) {
        uVar15 = *(undefined8 *)(pbVar10 + 8);
        uVar8 = *(undefined8 *)pbVar10;
        *(undefined8 *)(pbVar3 + 0x10) = *(undefined8 *)(pbVar10 + 0x10);
        *(undefined8 *)(pbVar3 + 8) = uVar15;
        *(undefined8 *)pbVar3 = uVar8;
        *(undefined8 *)(pbVar10 + 8) = 0;
        *(undefined8 *)(pbVar10 + 0x10) = 0;
        *(undefined8 *)pbVar10 = 0;
        pbVar3 = pbVar3 + 0x18;
      }
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8)
           = pbVar3;
      if (pbVar7 + (-0x18 - (long)param_2) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
        lVar13 = ((long)(pbVar7 + (-0x18 - (long)param_2)) >> 3) * 8;
        if (((byte)*pbVar12 & 1) != 0) goto LAB_00df7b6c;
        do {
          *(undefined2 *)pbVar12 = 0;
          pbVar7 = pbVar12;
          while( true ) {
            puVar1 = (undefined8 *)(lVar4 + lVar9 * 8 + -0x18 + lVar13);
            uVar15 = puVar1[1];
            uVar8 = *puVar1;
            lVar13 = lVar13 + -0x18;
            *(undefined8 *)(pbVar7 + 0x10) = puVar1[2];
            pbVar12 = pbVar7 + -0x18;
            *(undefined8 *)(pbVar7 + 8) = uVar15;
            *(undefined8 *)pbVar7 = uVar8;
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = 0;
            if (lVar13 == 0) goto LAB_00df7bfc;
            if (((byte)*pbVar12 & 1) == 0) break;
LAB_00df7b6c:
            **(undefined1 **)(pbVar12 + 0x10) = 0;
            *(undefined8 *)(pbVar12 + 8) = 0;
            pbVar7 = pbVar12;
            if (((byte)*pbVar12 & 1) != 0) {
              operator_delete(*(void **)(pbVar12 + 0x10));
              *(undefined8 *)pbVar12 = 0;
            }
          }
        } while( true );
      }
LAB_00df7bfc:
      pbVar11 = param_3;
      if ((param_2 <= param_3) &&
         (pbVar11 = (basic_string *)(param_3 + 0x18), *(basic_string **)(this + 8) <= param_3)) {
        pbVar11 = param_3;
      }
                    /* try { // try from 00df7c18 to 00ef7c1f has its CatchHandler @ 00df7f44 */
      if (param_2 !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)pbVar11)
      {
                    /* try { // try from 00df7c20 to 00ef7f5f has its CatchHandler @ 00df7a7c */
        uVar14 = *(ulong *)(pbVar11 + 8);
        pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(pbVar11 + 0x10);
        if (((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)pbVar11 & 1) == 0) {
          pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(pbVar11 + 1);
          uVar14 = (ulong)((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                   *)pbVar11 >> 1);
        }
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                  (param_2,(char *)pbVar7,uVar14);
      }
    }
    goto LAB_00df7d64;
  }
  uVar14 = 0xaaaaaaaaaaaaaaa;
  uVar5 = ((long)pbVar7 - lVar4 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar5) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar4 = (long)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0x10) - lVar4 >> 3;
  pvStack_60 = this + 0x10;
  if ((ulong)(lVar4 * -0x5555555555555555) < 0x555555555555555) {
    uVar6 = lVar4 * 0x5555555555555556;
                    /* try { // try from 00df7bdc to 00ef7be3 has its CatchHandler @ 00df7f28 */
    uVar14 = uVar5;
                    /* try { // try from 00df7be4 to 00ef7c17 has its CatchHandler @ 00df7a7c */
    if (uVar5 <= uVar6) {
      uVar14 = uVar6;
    }
    if (uVar14 != 0) goto LAB_00df7c50;
    local_80 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0
    ;
  }
  else {
LAB_00df7c50:
    local_68 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0
    ;
    local_80 = operator_new(uVar14 * 0x18);
  }
  local_78 = local_80 + lVar9 * 8;
  local_68 = local_80 + uVar14 * 0x18;
  local_70 = local_78;
  FUN_00df99f8(&local_80,param_3);
  pbVar3 = local_78;
  pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this
  ;
  for (pbVar7 = param_2; pbVar10 != pbVar7; pbVar7 = pbVar7 + -0x18) {
    uVar15 = *(undefined8 *)(pbVar7 + -0x10);
    uVar8 = *(undefined8 *)(pbVar7 + -0x18);
    *(undefined8 *)(local_78 + -8) = *(undefined8 *)(pbVar7 + -8);
    *(undefined8 *)(local_78 + -0x10) = uVar15;
    *(undefined8 *)(local_78 + -0x18) = uVar8;
    *(undefined8 *)(pbVar7 + -0x10) = 0;
    *(undefined8 *)(pbVar7 + -8) = 0;
    *(undefined8 *)(pbVar7 + -0x18) = 0;
    local_78 = local_78 + -0x18;
  }
  pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 8);
  if (pbVar7 != param_2) {
    do {
      uVar15 = *(undefined8 *)(param_2 + 8);
      uVar8 = *(undefined8 *)param_2;
      *(undefined8 *)(local_70 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(local_70 + 8) = uVar15;
      *(undefined8 *)local_70 = uVar8;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      pbVar10 = param_2 + 0x18;
      *(undefined8 *)param_2 = 0;
      local_70 = local_70 + 0x18;
      param_2 = pbVar10;
    } while (pbVar7 != pbVar10);
    pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 8);
  }
  pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this
  ;
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this =
       local_78;
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
       local_70;
  uVar8 = *(undefined8 *)(this + 0x10);
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 0x10)
       = local_68;
  local_80 = pbVar10;
  local_78 = pbVar10;
  local_68 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)uVar8
  ;
  while (pbVar12 = pbVar7, pbVar12 != pbVar10) {
    local_70 = pbVar12 + -0x18;
    pbVar7 = local_70;
    if (((byte)pbVar12[-0x18] & 1) != 0) {
      operator_delete(*(void **)(pbVar12 + -8));
      pbVar7 = local_70;
    }
  }
  param_2 = pbVar3;
  local_70 = pbVar12;
  if (local_80 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
    operator_delete(local_80);
  }
LAB_00df7d64:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

