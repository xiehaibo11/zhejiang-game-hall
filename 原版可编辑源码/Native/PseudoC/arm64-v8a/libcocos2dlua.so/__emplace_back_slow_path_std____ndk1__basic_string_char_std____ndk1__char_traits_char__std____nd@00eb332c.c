
/* void std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
   >::__emplace_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
::
__emplace_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
          (vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
           *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
                    /* try { // try from 00eb3340 to 00fb3343 has its CatchHandler @ 00eb34e4 */
                    /* try { // try from 00eb3354 to 00fb3357 has its CatchHandler @ 00eb34e0 */
  lVar4 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar11 = 0x555555555555555;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
                    /* try { // try from 00eb3368 to 00fb337f has its CatchHandler @ 00eb34e8 */
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this >> 4;
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
    uVar6 = lVar5 * 0x5555555555555556;
    uVar11 = uVar1;
    if (uVar1 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar11 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00eb33b8;
    }
  }
  pvVar3 = operator_new(uVar11 * 0x30);
LAB_00eb33b8:
                    /* try { // try from 00eb33bc to 00fb341f has its CatchHandler @ 00eb34f0 */
  uVar13 = *(undefined8 *)(param_1 + 8);
  uVar12 = *(undefined8 *)param_1;
  puVar7 = (undefined8 *)((long)pvVar3 + lVar4 * 0x10);
  puVar7[2] = *(undefined8 *)(param_1 + 0x10);
  puVar7[1] = uVar13;
  *puVar7 = uVar12;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  uVar13 = *(undefined8 *)(param_2 + 8);
  uVar12 = *(undefined8 *)param_2;
  puVar7[5] = *(undefined8 *)(param_2 + 0x10);
  puVar7[4] = uVar13;
  puVar7[3] = uVar12;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)param_2 = 0;
  pvVar9 = *(void **)this;
  pvVar8 = *(void **)(this + 8);
  puVar2 = puVar7 + 6;
  pvVar10 = pvVar9;
  if (pvVar8 != pvVar9) {
    do {
      uVar13 = *(undefined8 *)((long)pvVar8 + -0x28);
      uVar12 = *(undefined8 *)((long)pvVar8 + -0x30);
      puVar7[-4] = *(undefined8 *)((long)pvVar8 + -0x20);
      puVar7[-5] = uVar13;
      puVar7[-6] = uVar12;
      uVar13 = *(undefined8 *)((long)pvVar8 + -0x10);
      uVar12 = *(undefined8 *)((long)pvVar8 + -0x18);
      *(undefined8 *)((long)pvVar8 + -0x28) = 0;
      *(undefined8 *)((long)pvVar8 + -0x20) = 0;
      *(undefined8 *)((long)pvVar8 + -0x30) = 0;
      puVar7[-1] = *(undefined8 *)((long)pvVar8 + -8);
      puVar7[-2] = uVar13;
      puVar7[-3] = uVar12;
                    /* try { // try from 00eb3430 to 00fb343b has its CatchHandler @ 00eb34dc */
      *(undefined8 *)((long)pvVar8 + -0x10) = 0;
      *(undefined8 *)((long)pvVar8 + -8) = 0;
      *(undefined8 *)((long)pvVar8 + -0x18) = 0;
      pvVar8 = (void *)((long)pvVar8 + -0x30);
      puVar7 = puVar7 + -6;
    } while (pvVar9 != pvVar8);
    pvVar9 = *(void **)this;
    pvVar10 = *(void **)(this + 8);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar11 * 0x30);
  while (pvVar3 = pvVar10, pvVar3 != pvVar9) {
    if ((*(byte *)((long)pvVar3 + -0x18) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar3 + -8));
    }
    pvVar10 = (void *)((long)pvVar3 + -0x30);
    if ((*(byte *)((long)pvVar3 + -0x30) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar3 + -0x20));
    }
  }
  if (pvVar9 != (void *)0x0) {
                    /* try { // try from 00eb3470 to 00fb3473 has its CatchHandler @ 00eb354c */
                    /* try { // try from 00eb3474 to 00fb3503 has its CatchHandler @ 00eb3208 */
    operator_delete(pvVar9);
    return;
  }
  return;
}

