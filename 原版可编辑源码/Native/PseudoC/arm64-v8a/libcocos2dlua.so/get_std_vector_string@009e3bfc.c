
/* universe::get_std_vector_string(lua_State*, int,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >*, char const*) */

undefined4
universe::get_std_vector_string(lua_State *param_1,int param_2,vector *param_3,char *param_4)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong __n;
  void *__src;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80;
  undefined7 uStack_7f;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
                    /* try { // try from 009e3bfc to 00ae3c03 has its CatchHandler @ 009e3cf8 */
                    /* try { // try from 009e3c04 to 00ae3c27 has its CatchHandler @ 009e3b94 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 009e3c28 to 00ae3c33 has its CatchHandler @ 009e3cf8 */
                    /* try { // try from 009e3c34 to 00ae3c5b has its CatchHandler @ 009e3b94 */
  iVar4 = lua_type();
  if (iVar4 == 5) {
    lVar5 = lua_objlen(param_1,param_2);
                    /* try { // try from 009e3c5c to 00ae3c63 has its CatchHandler @ 009e3cf4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_80,"");
                    /* try { // try from 009e3c64 to 00ae3c83 has its CatchHandler @ 009e3b94 */
    lVar8 = 0;
    if (lVar5 != 0) {
      do {
        lVar1 = lVar8 + 1;
        lua_pushinteger(param_1,lVar1);
                    /* try { // try from 009e3cac to 00ae3cb7 has its CatchHandler @ 009e3cf4 */
        lua_gettable(param_1,param_2);
                    /* try { // try from 009e3cb8 to 00ae3cfb has its CatchHandler @ 009e3b94 */
        iVar4 = lua_isstring(param_1,0xffffffff);
        if (iVar4 == 0) {
                    /* try { // try from 009e3de0 to 00ae3e03 has its CatchHandler @ 009e3cfc */
                    /* catch() { ... } // from try @ 009e3d4c with catch @ 009e3de8
                       catch() { ... } // from try @ 009e3dcc with catch @ 009e3de8 */
          luaL_error(param_1,"%s: arg %d index %d is not a string",param_4,param_2,lVar8);
LAB_009e3e0c:
          uVar7 = 0;
          if (((byte)local_80 & 1) == 0) goto LAB_009e3e20;
          goto LAB_009e3e18;
        }
        uVar6 = get_string(param_1,-1,(basic_string *)&local_80,param_4);
        __src = local_70;
        __n = uStack_78;
        if ((uVar6 & 1) == 0) {
          luaL_error(param_1,"%s: arg %d index %d get string failed",param_4,param_2,lVar8);
          goto LAB_009e3e0c;
        }
        puVar2 = *(ulong **)(param_3 + 8);
        if (puVar2 == *(ulong **)(param_3 + 0x10)) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)param_3,(basic_string *)&local_80);
        }
        else {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009e3c5c with catch @ 009e3cf4
                       catch(type#1 @ 00000000) { ... } // from try @ 009e3c84 with catch @ 009e3cf4
                       catch(type#1 @ 00000000) { ... } // from try @ 009e3cac with catch @ 009e3cf4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009e3bfc with catch @ 009e3cf8
                       catch(type#1 @ 00000000) { ... } // from try @ 009e3c28 with catch @ 009e3cf8
                        */
          if (((byte)local_80 & 1) == 0) {
                    /* try { // try from 009e3cfc to 00ae3d4b has its CatchHandler @ 009e3cfc
                       catch() { ... } // from try @ 009e3cfc with catch @ 009e3cfc
                       catch() { ... } // from try @ 009e3d74 with catch @ 009e3cfc
                       catch() { ... } // from try @ 009e3de0 with catch @ 009e3cfc */
            puVar2[2] = (ulong)local_70;
            puVar2[1] = uStack_78;
            *puVar2 = CONCAT71(uStack_7f,local_80);
          }
          else {
            if (0xffffffffffffffef < uStack_78) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_78 < 0x17) {
              __dest = (void *)((long)puVar2 + 1);
              *(char *)puVar2 = (char)((int)uStack_78 << 1);
              if (uStack_78 != 0) goto LAB_009e3d84;
            }
            else {
                    /* try { // try from 009e3d4c to 00ae3d73 has its CatchHandler @ 009e3de8 */
              uVar6 = uStack_78 + 0x10 & 0xfffffffffffffff0;
              __dest = operator_new(uVar6);
              puVar2[1] = __n;
              puVar2[2] = (ulong)__dest;
              *puVar2 = uVar6 | 1;
                    /* try { // try from 009e3d74 to 00ae3dcb has its CatchHandler @ 009e3cfc */
LAB_009e3d84:
              memcpy(__dest,__src,__n);
            }
            *(undefined1 *)((long)__dest + __n) = 0;
          }
          *(ulong **)(param_3 + 8) = puVar2 + 3;
        }
                    /* try { // try from 009e3c84 to 00ae3c8b has its CatchHandler @ 009e3cf4 */
                    /* try { // try from 009e3c8c to 00ae3cab has its CatchHandler @ 009e3b94 */
        lua_settop(param_1,0xfffffffe);
        lVar8 = lVar1;
      } while (lVar5 != lVar1);
    }
    uVar7 = 1;
    if (((byte)local_80 & 1) != 0) {
LAB_009e3e18:
      operator_delete(local_70);
    }
  }
  else {
    luaL_error(param_1,"%s: arg %d is not a table",param_4,param_2);
    uVar7 = 0;
  }
LAB_009e3e20:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

