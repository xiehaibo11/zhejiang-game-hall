
/* std::__ndk1::__tree_node_base<void*>*&
   std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::BonePose*>,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::BonePose*>,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::BonePose*> >
   >::__find_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >
   >(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
::
__find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
           *this,__tree_end_node **param_1,basic_string *param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  basic_string *__s1;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
  _Var3;
  int iVar4;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
  *p_Var5;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
  *p_Var6;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
  *p_Var7;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
  *__s1_00;
  
                    /* try { // try from 00d77fb4 to 00e77fb7 has its CatchHandler @ 00d77fd8 */
                    /* try { // try from 00d77fb8 to 00e77fbb has its CatchHandler @ 00d77fd4 */
                    /* try { // try from 00d77fbc to 00e77fbf has its CatchHandler @ 00d77fd0 */
                    /* try { // try from 00d77fc0 to 00e77fc3 has its CatchHandler @ 00d77fcc */
                    /* try { // try from 00d77fc4 to 00e77fc7 has its CatchHandler @ 00d78080 */
  p_Var5 = this + 8;
  p_Var6 = *(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
             **)p_Var5;
                    /* try { // try from 00d77fc8 to 00e7819f has its CatchHandler @ 00d766ec */
                    /* catch() { ... } // from try @ 00d77fc0 with catch @ 00d77fcc */
  if (p_Var6 == (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
                 *)0x0) {
                    /* catch() { ... } // from try @ 00d77cd4 with catch @ 00d78094 */
    *param_1 = (__tree_end_node *)p_Var5;
                    /* catch() { ... } // from try @ 00d77c28 with catch @ 00d780a4 */
                    /* catch() { ... } // from try @ 00d77c18 with catch @ 00d780a8 */
                    /* catch() { ... } // from try @ 00d77bc8 with catch @ 00d780ac */
                    /* catch() { ... } // from try @ 00d77bbc with catch @ 00d780b0 */
                    /* catch() { ... } // from try @ 00d77b98 with catch @ 00d780b4 */
                    /* catch() { ... } // from try @ 00d77b88 with catch @ 00d780b8 */
                    /* catch() { ... } // from try @ 00d77050 with catch @ 00d780bc */
                    /* catch() { ... } // from try @ 00d77040 with catch @ 00d780c0 */
    return (__tree_node_base **)p_Var5;
                    /* catch() { ... } // from try @ 00d77c70 with catch @ 00d78098 */
  }
                    /* catch() { ... } // from try @ 00d77fbc with catch @ 00d77fd0 */
                    /* catch() { ... } // from try @ 00d77fb8 with catch @ 00d77fd4 */
  uVar2 = *(ulong *)(param_2 + 8);
  __s1 = *(basic_string **)(param_2 + 0x10);
                    /* catch() { ... } // from try @ 00d77fb4 with catch @ 00d77fd8 */
                    /* catch() { ... } // from try @ 00d77f84 with catch @ 00d77fdc */
                    /* catch() { ... } // from try @ 00d77f7c with catch @ 00d77fe0 */
  p_Var5 = this + 8;
                    /* catch() { ... } // from try @ 00d77f74 with catch @ 00d77fe4 */
  if (((byte)*param_2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d77f6c with catch @ 00d77fe8 */
    __s1 = param_2 + 1;
    uVar2 = (ulong)((byte)*param_2 >> 1);
  }
  do {
    while( true ) {
                    /* catch() { ... } // from try @ 00d77f0c with catch @ 00d78008 */
      p_Var7 = p_Var6;
                    /* catch() { ... } // from try @ 00d77f04 with catch @ 00d7800c */
      _Var3 = p_Var7[0x20];
                    /* catch() { ... } // from try @ 00d77efc with catch @ 00d78010 */
                    /* catch() { ... } // from try @ 00d77ef4 with catch @ 00d78014 */
                    /* catch() { ... } // from try @ 00d77eec with catch @ 00d78018 */
      uVar1 = (ulong)((byte)_Var3 >> 1);
                    /* catch() { ... } // from try @ 00d77ee4 with catch @ 00d7801c */
      if (((byte)_Var3 & 1) != 0) {
        uVar1 = *(ulong *)(p_Var7 + 0x28);
      }
                    /* catch() { ... } // from try @ 00d77edc with catch @ 00d78020 */
      __n = uVar1;
                    /* catch() { ... } // from try @ 00d77ed4 with catch @ 00d78024 */
      if (uVar2 <= uVar1) {
        __n = uVar2;
      }
                    /* catch() { ... } // from try @ 00d77ecc with catch @ 00d78028 */
      if (__n == 0) break;
                    /* catch() { ... } // from try @ 00d77ec4 with catch @ 00d7802c */
      __s1_00 = *(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
                  **)(p_Var7 + 0x30);
                    /* catch() { ... } // from try @ 00d77eb0 with catch @ 00d78030 */
      p_Var6 = __s1_00;
                    /* catch() { ... } // from try @ 00d77ea8 with catch @ 00d78034 */
                    /* catch() { ... } // from try @ 00d77e90 with catch @ 00d78038 */
                    /* catch() { ... } // from try @ 00d77e88 with catch @ 00d7803c */
      if (((byte)_Var3 & 1) == 0) {
        p_Var6 = p_Var7 + 0x21;
      }
                    /* catch() { ... } // from try @ 00d77e80 with catch @ 00d78040 */
      iVar4 = memcmp(__s1,p_Var6,__n);
                    /* catch() { ... } // from try @ 00d77e78 with catch @ 00d78044 */
      if (iVar4 == 0) break;
                    /* catch() { ... } // from try @ 00d77e70 with catch @ 00d78048 */
      if (iVar4 < 0) goto LAB_00d78058;
LAB_00d78070:
                    /* catch() { ... } // from try @ 00d77e0c with catch @ 00d78070 */
                    /* catch() { ... } // from try @ 00d77dfc with catch @ 00d78074 */
      if (((byte)_Var3 & 1) == 0) {
        __s1_00 = p_Var7 + 0x21;
      }
                    /* catch() { ... } // from try @ 00d77e54 with catch @ 00d78078
                       catch() { ... } // from try @ 00d77eb8 with catch @ 00d78078
                       catch() { ... } // from try @ 00d77f8c with catch @ 00d78078 */
                    /* catch() { ... } // from try @ 00d77df4 with catch @ 00d7807c */
                    /* catch() { ... } // from try @ 00d77e04 with catch @ 00d78080
                       catch() { ... } // from try @ 00d77e14 with catch @ 00d78080
                       catch() { ... } // from try @ 00d77e20 with catch @ 00d78080
                       catch() { ... } // from try @ 00d77e2c with catch @ 00d78080
                       catch() { ... } // from try @ 00d77e58 with catch @ 00d78080
                       catch() { ... } // from try @ 00d77e98 with catch @ 00d78080
                       catch() { ... } // from try @ 00d77f3c with catch @ 00d78080
                       catch() { ... } // from try @ 00d77f5c with catch @ 00d78080
                       catch() { ... } // from try @ 00d77f98 with catch @ 00d78080
                       catch() { ... } // from try @ 00d77fc4 with catch @ 00d78080 */
      iVar4 = memcmp(__s1_00,__s1,__n);
                    /* catch() { ... } // from try @ 00d77d88 with catch @ 00d78084 */
      if (iVar4 == 0) goto LAB_00d77ff0;
                    /* catch() { ... } // from try @ 00d77d1c with catch @ 00d78088 */
      if (-1 < iVar4) goto LAB_00d7808c;
LAB_00d77ff8:
                    /* catch() { ... } // from try @ 00d77f2c with catch @ 00d77ff8 */
                    /* catch() { ... } // from try @ 00d77f24 with catch @ 00d77ffc */
      p_Var5 = p_Var7 + 8;
                    /* catch() { ... } // from try @ 00d77f1c with catch @ 00d78000 */
      p_Var6 = *(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
                 **)p_Var5;
      if (*(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
            **)p_Var5 ==
          (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
           *)0x0) {
LAB_00d7808c:
                    /* catch() { ... } // from try @ 00d77d04 with catch @ 00d7808c */
        *param_1 = (__tree_end_node *)p_Var7;
        return (__tree_node_base **)p_Var5;
                    /* catch() { ... } // from try @ 00d77cf8 with catch @ 00d78090 */
      }
    }
                    /* catch() { ... } // from try @ 00d77e60 with catch @ 00d78050 */
                    /* catch() { ... } // from try @ 00d77e5c with catch @ 00d78054 */
    if (uVar1 <= uVar2) {
                    /* catch() { ... } // from try @ 00d77e24 with catch @ 00d78068 */
      if (__n != 0) {
                    /* catch() { ... } // from try @ 00d77e18 with catch @ 00d7806c */
        __s1_00 = *(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
                    **)(p_Var7 + 0x30);
        goto LAB_00d78070;
      }
LAB_00d77ff0:
                    /* catch() { ... } // from try @ 00d77f54 with catch @ 00d77ff0 */
                    /* catch() { ... } // from try @ 00d77f34 with catch @ 00d77ff4 */
      if (uVar2 <= uVar1) goto LAB_00d7808c;
      goto LAB_00d77ff8;
    }
LAB_00d78058:
                    /* catch() { ... } // from try @ 00d77e4c with catch @ 00d78058 */
                    /* catch() { ... } // from try @ 00d77e44 with catch @ 00d7805c */
    p_Var5 = p_Var7;
    p_Var6 = *(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
               **)p_Var7;
    if (*(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
          **)p_Var7 ==
        (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BonePose*>>>
         *)0x0) {
                    /* catch() { ... } // from try @ 00d77c58 with catch @ 00d7809c */
      *param_1 = (__tree_end_node *)p_Var7;
      return (__tree_node_base **)p_Var7;
                    /* catch() { ... } // from try @ 00d77c4c with catch @ 00d780a0 */
    }
  } while( true );
}

