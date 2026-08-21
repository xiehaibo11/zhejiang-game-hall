
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, std::__ndk1::function<void (int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> >, std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::function<void (int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&)> >, std::__ndk1::hash<int>, true>,
   std::__ndk1::__unordered_map_equal<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::function<void (int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&)> >, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, std::__ndk1::function<void (int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&)> > > >::__rehash(unsigned long) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
::__rehash(__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
                    /* try { // try from 00a72ba4 to 00b72baf has its CatchHandler @ 00a72dd0 */
  if (param_1 == 0) {
    pvVar2 = *(void **)this;
    *(undefined8 *)this = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(this + 8) = 0;
  }
  else {
                    /* try { // try from 00a72bb4 to 00b72bbb has its CatchHandler @ 00a72dc0 */
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar2 = operator_new(param_1 << 3);
    pvVar3 = *(void **)this;
    *(void **)this = pvVar2;
    if (pvVar3 != (void *)0x0) {
                    /* try { // try from 00a72bd0 to 00b72bdb has its CatchHandler @ 00a72db0 */
      operator_delete(pvVar3);
    }
    uVar4 = 0;
    *(ulong *)(this + 8) = param_1;
    do {
                    /* try { // try from 00a72be0 to 00b72be7 has its CatchHandler @ 00a72da0 */
      *(undefined8 *)(*(long *)this + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_1 != uVar4);
    plVar5 = *(long **)(this + 0x10);
    if (plVar5 != (long *)0x0) {
      uVar4 = plVar5[1];
      uVar6 = param_1 - 1;
      if ((uVar6 & param_1) == 0) {
        uVar4 = uVar4 & uVar6;
      }
      else if (param_1 <= uVar4) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = uVar4 / param_1;
        }
        uVar4 = uVar4 - uVar8 * param_1;
                    /* try { // try from 00a72c1c to 00b72c63 has its CatchHandler @ 00a72e78 */
      }
      *(__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)>>>>
        **)(*(long *)this + uVar4 * 8) = this + 0x10;
      plVar7 = (long *)*plVar5;
joined_r0x00a72c48:
      if (plVar7 != (long *)0x0) {
        do {
          uVar8 = plVar7[1];
          if ((uVar6 & param_1) == 0) {
            uVar8 = uVar8 & uVar6;
            if (uVar8 != uVar4) goto LAB_00a72c8c;
LAB_00a72c50:
            plVar10 = (long *)*plVar7;
            plVar5 = plVar7;
          }
          else {
                    /* try { // try from 00a72c64 to 00b72cdf has its CatchHandler @ 00a72a70 */
            if (param_1 <= uVar8) {
              uVar1 = 0;
              if (param_1 != 0) {
                uVar1 = uVar8 / param_1;
              }
              uVar8 = uVar8 - uVar1 * param_1;
            }
            if (uVar8 == uVar4) goto LAB_00a72c50;
LAB_00a72c8c:
            plVar10 = plVar7;
            if (*(long *)(*(long *)this + uVar8 * 8) == 0) goto LAB_00a72ce8;
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while ((int)plVar7[2] == (int)plVar10[2]);
            *plVar5 = (long)plVar10;
            *plVar9 = **(long **)(*(long *)this + uVar8 * 8);
            **(undefined8 **)(*(long *)this + uVar8 * 8) = plVar7;
                    /* try { // try from 00a72ce0 to 00b72ceb has its CatchHandler @ 00a72e28 */
            plVar10 = (long *)*plVar5;
          }
          plVar7 = plVar10;
          if (plVar7 == (long *)0x0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
LAB_00a72ce8:
  *(long **)(*(long *)this + uVar8 * 8) = plVar5;
                    /* try { // try from 00a72cec to 00b72d13 has its CatchHandler @ 00a72a70 */
  plVar5 = plVar7;
  plVar7 = (long *)*plVar7;
  uVar4 = uVar8;
  goto joined_r0x00a72c48;
}

