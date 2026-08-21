
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::regex_traits<char>::__lookup_collatename<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>, char) const */

void __thiscall
std::__ndk1::regex_traits<char>::__lookup_collatename<std::__ndk1::__wrap_iter<char_const*>>
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          regex_traits<char> *this,__ndk1 *param_3,__ndk1 *param_4)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  long lVar2;
  __ndk1 *p_Var3;
  __ndk1 *p_Var4;
  __ndk1 *extraout_x1;
  __ndk1 *p_Var5;
  ulong uVar7;
  __ndk1 *p_Var8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong local_70;
  ulong local_68;
  __ndk1 *local_60;
  long local_58;
  __ndk1 *p_Var6;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar10 = (long)param_4 - (long)param_3;
  local_70 = 0;
  local_68 = 0;
  local_60 = (__ndk1 *)0x0;
  if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar10 < 0x17) {
    local_70 = (ulong)(byte)((int)uVar10 << 1);
    p_Var4 = (__ndk1 *)((ulong)&local_70 | 1);
                    /* try { // try from 009c5a04 to 00ac5a47 has its CatchHandler @ 009c5a9c */
    p_Var3 = param_3;
  }
  else {
    uVar9 = uVar10 + 0x10 & 0xfffffffffffffff0;
    p_Var4 = operator_new(uVar9);
    local_70 = uVar9 | 1;
    local_68 = uVar10;
    local_60 = p_Var4;
    p_Var3 = extraout_x1;
  }
  if (param_3 == param_4) goto LAB_009c5ab4;
  p_Var8 = p_Var4;
  p_Var6 = param_3;
                    /* try { // try from 009c5a48 to 00ac5b1b has its CatchHandler @ 009c5844 */
  if ((uVar10 < 0x20) || ((p_Var4 < param_4 && (param_3 < p_Var4 + uVar10)))) {
LAB_009c5a9c:
    do {
                    /* catch() { ... } // from try @ 009c5910 with catch @ 009c5a9c
                       catch() { ... } // from try @ 009c5a04 with catch @ 009c5a9c */
      p_Var5 = p_Var6 + 1;
      *p_Var8 = *p_Var6;
      p_Var8 = p_Var8 + 1;
      p_Var6 = p_Var5;
    } while (param_4 != p_Var5);
  }
  else {
    uVar7 = uVar10 & 0xffffffffffffffe0;
    p_Var8 = param_3 + 0x10;
    p_Var6 = p_Var4 + 0x10;
    uVar9 = uVar7;
    do {
      p_Var5 = p_Var8 + -8;
      uVar11 = *(undefined8 *)(p_Var8 + -0x10);
      uVar13 = *(undefined8 *)(p_Var8 + 8);
      uVar12 = *(undefined8 *)p_Var8;
      p_Var8 = p_Var8 + 0x20;
      uVar9 = uVar9 - 0x20;
      *(undefined8 *)(p_Var6 + -8) = *(undefined8 *)p_Var5;
      *(undefined8 *)(p_Var6 + -0x10) = uVar11;
      *(undefined8 *)(p_Var6 + 8) = uVar13;
      *(undefined8 *)p_Var6 = uVar12;
      p_Var6 = p_Var6 + 0x20;
    } while (uVar9 != 0);
                    /* catch() { ... } // from try @ 009c58c4 with catch @ 009c5a94 */
    p_Var8 = p_Var4 + uVar7;
    p_Var6 = param_3 + uVar7;
                    /* catch() { ... } // from try @ 009c58b8 with catch @ 009c5a98 */
    if (uVar7 != uVar10) goto LAB_009c5a9c;
  }
  p_Var4 = p_Var4 + ((long)param_4 - (long)param_3);
LAB_009c5ab4:
                    /* catch() { ... } // from try @ 009c5898 with catch @ 009c5ab4 */
  *p_Var4 = (__ndk1)0x0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
                    /* catch() { ... } // from try @ 009c58d0 with catch @ 009c5ac4
                       catch() { ... } // from try @ 009c594c with catch @ 009c5ac4 */
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar10 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar10 = local_68;
  }
  if (uVar10 != 0) {
    p_Var8 = (__ndk1 *)((ulong)&local_70 | 1);
    p_Var4 = p_Var8;
    if ((local_70 & 1) != 0) {
      p_Var4 = local_60;
    }
    __get_collation_name(p_Var4,(char *)p_Var3);
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(undefined8 *)param_1 = local_88;
    bVar1 = *param_1;
    *(undefined8 *)(param_1 + 0x10) = local_78;
    uVar10 = (ulong)((byte)bVar1 >> 1);
    if (((byte)bVar1 & 1) != 0) {
      uVar10 = *(ulong *)(param_1 + 8);
    }
    if (uVar10 == 0) {
                    /* try { // try from 009c5b1c to 00ac5b73 has its CatchHandler @ 009c5b1c
                       catch() { ... } // from try @ 009c5b1c with catch @ 009c5b1c
                       catch() { ... } // from try @ 009c5d00 with catch @ 009c5b1c */
      uVar10 = local_70 >> 1 & 0x7f;
      if ((local_70 & 1) != 0) {
        uVar10 = local_68;
      }
      if (uVar10 < 3) {
        p_Var4 = p_Var8;
        if ((local_70 & 1) != 0) {
          p_Var4 = local_60;
        }
        (**(code **)(**(long **)(this + 0x10) + 0x20))
                  (&local_88,*(long **)(this + 0x10),p_Var4,p_Var4 + uVar10);
        if (((byte)bVar1 & 1) == 0) {
          *(undefined2 *)param_1 = 0;
        }
        else {
          **(undefined1 **)(param_1 + 0x10) = 0;
                    /* try { // try from 009c5b74 to 00ac5b8b has its CatchHandler @ 009c5d80 */
          *(undefined8 *)(param_1 + 8) = 0;
          if (((byte)*param_1 & 1) != 0) {
            operator_delete(*(void **)(param_1 + 0x10));
            *(undefined8 *)param_1 = 0;
          }
        }
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *(undefined8 *)param_1 = local_88;
                    /* try { // try from 009c5b94 to 00ac5b9f has its CatchHandler @ 009c5d7c */
        bVar1 = *param_1;
        *(undefined8 *)(param_1 + 0x10) = local_78;
                    /* try { // try from 009c5ba0 to 00ac5bab has its CatchHandler @ 009c5d78 */
        uVar10 = (ulong)((byte)bVar1 >> 1);
        if (((byte)bVar1 & 1) != 0) {
          uVar10 = *(ulong *)(param_1 + 8);
        }
                    /* try { // try from 009c5bac to 00ac5cff has its CatchHandler @ 009c5d90 */
        if ((uVar10 == 0xc) || (uVar10 == 1)) {
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_70 != param_1) {
            uVar10 = local_70 >> 1 & 0x7f;
            if ((local_70 & 1) != 0) {
              uVar10 = local_68;
              p_Var8 = local_60;
            }
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (param_1,(char *)p_Var8,uVar10);
          }
        }
        else if (((byte)bVar1 & 1) == 0) {
          *(undefined2 *)param_1 = 0;
        }
        else {
          **(undefined1 **)(param_1 + 0x10) = 0;
          *(undefined8 *)(param_1 + 8) = 0;
        }
      }
    }
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

