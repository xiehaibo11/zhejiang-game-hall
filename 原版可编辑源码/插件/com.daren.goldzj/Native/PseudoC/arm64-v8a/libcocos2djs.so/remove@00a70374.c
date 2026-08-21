
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::list<int,
   std::__ndk1::allocator<int> > >,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::list<int, std::__ndk1::allocator<int> > >,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::list<int, std::__ndk1::allocator<int> > >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::list<int,
   std::__ndk1::allocator<int> > > >
   >::remove(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::list<int,
   std::__ndk1::allocator<int> > >, void*>*>) */

void std::__ndk1::
     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::list<int,std::__ndk1::allocator<int>>>>>
     ::remove(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_2[1];
  uVar6 = param_3[1];
  uVar8 = uVar2 - 1;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar6 / uVar2;
  }
                    /* try { // try from 00a70384 to 00b7039b has its CatchHandler @ 00a70ea0 */
  uVar1 = uVar6;
  if (uVar2 <= uVar6) {
    uVar1 = uVar6 - uVar3 * uVar2;
  }
  uVar3 = uVar8 & uVar2;
  if (uVar3 == 0) {
    uVar1 = uVar8 & uVar6;
  }
  plVar5 = *(long **)(*param_2 + uVar1 * 8);
  do {
    plVar7 = plVar5;
                    /* try { // try from 00a703a4 to 00b703af has its CatchHandler @ 00a70e9c */
    plVar5 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
                    /* try { // try from 00a703b0 to 00b703bb has its CatchHandler @ 00a70e98 */
  if (plVar7 != param_2 + 2) {
                    /* try { // try from 00a703bc to 00b703c3 has its CatchHandler @ 00a70eb0 */
    uVar6 = plVar7[1];
    if (uVar3 == 0) {
      uVar6 = uVar6 & uVar8;
                    /* try { // try from 00a7040c to 00b70423 has its CatchHandler @ 00a70db0 */
    }
    else if (uVar2 <= uVar6) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar6 / uVar2;
      }
      uVar6 = uVar6 - uVar4 * uVar2;
    }
    if (uVar6 == uVar1) goto LAB_00a70428;
  }
  if (*param_3 != 0) {
    uVar6 = *(ulong *)(*param_3 + 8);
    if (uVar3 == 0) {
      uVar6 = uVar6 & uVar8;
    }
    else if (uVar2 <= uVar6) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar6 / uVar2;
      }
      uVar6 = uVar6 - uVar4 * uVar2;
    }
    if (uVar6 == uVar1) goto LAB_00a70428;
  }
  *(undefined8 *)(*param_2 + uVar1 * 8) = 0;
LAB_00a70428:
                    /* try { // try from 00a70428 to 00b7042f has its CatchHandler @ 00a70d78 */
  if (*param_3 != 0) {
                    /* try { // try from 00a70430 to 00b7043b has its CatchHandler @ 00a70d88 */
    uVar6 = *(ulong *)(*param_3 + 8);
    if (uVar3 == 0) {
                    /* try { // try from 00a70480 to 00b70487 has its CatchHandler @ 00a70cfc */
      uVar6 = uVar6 & uVar8;
    }
    else {
                    /* try { // try from 00a7043c to 00b7044b has its CatchHandler @ 00a70d64 */
      if (uVar2 <= uVar6) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar6 / uVar2;
        }
        uVar6 = uVar6 - uVar3 * uVar2;
      }
    }
    if (uVar6 != uVar1) {
                    /* try { // try from 00a70450 to 00b7045b has its CatchHandler @ 00a70d54 */
      *(long **)(*param_2 + uVar6 * 8) = plVar7;
    }
  }
                    /* try { // try from 00a7045c to 00b7046b has its CatchHandler @ 00a70d2c */
  *plVar7 = *param_3;
  *param_3 = 0;
                    /* try { // try from 00a70470 to 00b7047b has its CatchHandler @ 00a70d14 */
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

