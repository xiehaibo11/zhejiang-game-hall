
/* std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::BoneTimelineState*,
   std::__ndk1::allocator<dragonBones::BoneTimelineState*> > >,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::BoneTimelineState*,
   std::__ndk1::allocator<dragonBones::BoneTimelineState*> > >,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::BoneTimelineState*,
   std::__ndk1::allocator<dragonBones::BoneTimelineState*> > > >
   >::erase(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::BoneTimelineState*,
   std::__ndk1::allocator<dragonBones::BoneTimelineState*> > >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::vector<dragonBones::BoneTimelineState*,
   std::__ndk1::allocator<dragonBones::BoneTimelineState*> > >, void*>*, long>) */

long * __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
::erase(__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneTimelineState*,std::__ndk1::allocator<dragonBones::BoneTimelineState*>>>>>
        *this,__tree_node_base *param_2)

{
  long *plVar1;
  void *pvVar2;
  __tree_node_base *p_Var3;
  long lVar4;
  long *plVar5;
  
  plVar1 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
                    /* try { // try from 00d77e04 to 00e77e0b has its CatchHandler @ 00d78080 */
    p_Var3 = param_2 + 0x10;
    plVar5 = *(long **)p_Var3;
                    /* try { // try from 00d77e0c to 00e77e13 has its CatchHandler @ 00d78070 */
                    /* try { // try from 00d77e14 to 00e77e17 has its CatchHandler @ 00d78080 */
    if ((__tree_node_base *)*plVar5 != param_2) {
      do {
                    /* try { // try from 00d77e18 to 00e77e1f has its CatchHandler @ 00d7806c */
        lVar4 = *(long *)p_Var3;
                    /* try { // try from 00d77e20 to 00e77e23 has its CatchHandler @ 00d78080 */
        p_Var3 = (__tree_node_base *)(lVar4 + 0x10);
        plVar5 = *(long **)p_Var3;
                    /* try { // try from 00d77e24 to 00e77e2b has its CatchHandler @ 00d78068 */
                    /* try { // try from 00d77e2c to 00e77e33 has its CatchHandler @ 00d78080 */
      } while (*plVar5 != lVar4);
    }
  }
  else {
    do {
                    /* try { // try from 00d77df4 to 00e77dfb has its CatchHandler @ 00d7807c */
      plVar5 = plVar1;
                    /* try { // try from 00d77dfc to 00e77e03 has its CatchHandler @ 00d78074 */
      plVar1 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
                    /* try { // try from 00d77e34 to 00e77e3b has its CatchHandler @ 00d78064 */
  if (*(__tree_node_base **)this == param_2) {
                    /* try { // try from 00d77e3c to 00e77e43 has its CatchHandler @ 00d78060 */
    *(long **)this = plVar5;
  }
                    /* try { // try from 00d77e44 to 00e77e4b has its CatchHandler @ 00d7805c */
                    /* try { // try from 00d77e4c to 00e77e53 has its CatchHandler @ 00d78058 */
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
                    /* try { // try from 00d77e54 to 00e77e57 has its CatchHandler @ 00d78078 */
  __tree_remove<std::__ndk1::__tree_node_base<void*>*>(*(__tree_node_base **)(this + 8),param_2);
                    /* try { // try from 00d77e58 to 00e77e5b has its CatchHandler @ 00d78080 */
  pvVar2 = *(void **)(param_2 + 0x38);
                    /* try { // try from 00d77e5c to 00e77e5f has its CatchHandler @ 00d78054 */
  if (pvVar2 != (void *)0x0) {
                    /* try { // try from 00d77e60 to 00e77e67 has its CatchHandler @ 00d78050 */
    *(void **)(param_2 + 0x40) = pvVar2;
    operator_delete(pvVar2);
  }
                    /* try { // try from 00d77e68 to 00e77e6f has its CatchHandler @ 00d7804c */
  if (((byte)param_2[0x20] & 1) != 0) {
                    /* try { // try from 00d77e70 to 00e77e77 has its CatchHandler @ 00d78048 */
    operator_delete(*(void **)(param_2 + 0x30));
  }
                    /* try { // try from 00d77e78 to 00e77e7f has its CatchHandler @ 00d78044 */
  operator_delete(param_2);
                    /* try { // try from 00d77e80 to 00e77e87 has its CatchHandler @ 00d78040 */
                    /* try { // try from 00d77e88 to 00e77e8f has its CatchHandler @ 00d7803c */
  return plVar5;
}

