
/* dragonBones::Animation::setAnimations(std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::AnimationData*,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   dragonBones::AnimationData*> > > const&) */

void __thiscall dragonBones::Animation::setAnimations(Animation *this,map *param_1)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
  *this_00;
  basic_string *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  ulong uVar6;
  __tree_node_base **pp_Var7;
  __tree_node_base *p_Var8;
  byte *pbVar9;
  map *pmVar10;
  long lVar11;
  byte *pbVar12;
  __tree_node_base *p_Var13;
  map *pmVar14;
  undefined8 uVar15;
  __tree_end_node *local_70;
  long local_68;
  
                    /* try { // try from 00d72a1c to 00e72a1f has its CatchHandler @ 00d73024 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00d72a3c to 00e72a5f has its CatchHandler @ 00d7302c */
  if ((*(long *)(this + 0x60) != *(long *)(param_1 + 0x10)) ||
     (uVar6 = FUN_00d732e4(*(undefined8 *)(this + 0x50),this + 0x58,*(undefined8 *)param_1),
     (uVar6 & 1) == 0)) {
    pbVar12 = *(byte **)(this + 0x20);
    this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
               *)(this + 0x50);
    pbVar9 = *(byte **)(this + 0x28);
    if (pbVar9 != pbVar12) {
      bVar2 = pbVar9[-0x18];
      pbVar4 = pbVar9 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar9 + -8));
        }
                    /* try { // try from 00d72a78 to 00e72a7b has its CatchHandler @ 00d73028 */
        if (pbVar12 == pbVar4) break;
        bVar2 = pbVar4[-0x18];
        pbVar9 = pbVar4;
        pbVar4 = pbVar4 + -0x18;
      }
    }
                    /* try { // try from 00d72a98 to 00e72abb has its CatchHandler @ 00d73030 */
    *(byte **)(this + 0x28) = pbVar12;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
    ::destroy(this_00,*(__tree_node **)(this + 0x58));
    *(Animation **)(this + 0x50) = this + 0x58;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    pmVar14 = *(map **)param_1;
    while (pmVar14 != param_1 + 8) {
                    /* try { // try from 00d72ad0 to 00e72ad3 has its CatchHandler @ 00d73020 */
      this_01 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0x28);
      pbVar1 = (basic_string *)(pmVar14 + 0x20);
      if (this_01 ==
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0x30)) {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)(this + 0x20),pbVar1);
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(this_01,pbVar1);
                    /* try { // try from 00d72af0 to 00e72b27 has its CatchHandler @ 00d73034 */
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x28) = this_01 + 0x18;
      }
      uVar15 = *(undefined8 *)(pmVar14 + 0x38);
      pp_Var7 = std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                ::
                __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          (this_00,&local_70,pbVar1);
      p_Var13 = *pp_Var7;
      if (p_Var13 == (__tree_node_base *)0x0) {
        p_Var13 = operator_new(0x40);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(p_Var13 + 0x20),pbVar1);
        *(undefined8 *)(p_Var13 + 0x38) = 0;
        *(undefined8 *)p_Var13 = 0;
        *(undefined8 *)(p_Var13 + 8) = 0;
                    /* try { // try from 00d72b48 to 00e72b53 has its CatchHandler @ 00d731c8 */
        *(__tree_end_node **)(p_Var13 + 0x10) = local_70;
        *pp_Var7 = p_Var13;
        p_Var8 = p_Var13;
        if (**(long **)this_00 != 0) {
          *(long *)this_00 = **(long **)this_00;
          p_Var8 = *pp_Var7;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x58),p_Var8);
        *(long *)(this + 0x60) = *(long *)(this + 0x60) + 1;
      }
      *(undefined8 *)(p_Var13 + 0x38) = uVar15;
      pmVar10 = *(map **)(pmVar14 + 8);
      if (*(map **)(pmVar14 + 8) == (map *)0x0) {
        pmVar10 = pmVar14 + 0x10;
        bVar5 = *(map **)*(map **)pmVar10 != pmVar14;
        pmVar14 = *(map **)pmVar10;
        if (bVar5) {
          do {
            lVar11 = *(long *)pmVar10;
            pmVar10 = (map *)(lVar11 + 0x10);
            pmVar14 = *(map **)pmVar10;
          } while (*(long *)pmVar14 != lVar11);
        }
      }
      else {
        do {
          pmVar14 = pmVar10;
          pmVar10 = *(map **)pmVar14;
        } while (*(map **)pmVar14 != (map *)0x0);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

