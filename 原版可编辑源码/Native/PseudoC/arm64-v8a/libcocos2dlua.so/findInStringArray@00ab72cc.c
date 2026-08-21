
/* fairygui::ToolSet::findInStringArray(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

int fairygui::ToolSet::findInStringArray(vector *param_1,basic_string *param_2)

{
  size_t sVar1;
  basic_string *pbVar2;
  size_t __n;
  basic_string *pbVar3;
  basic_string *__s2;
  basic_string bVar4;
  basic_string *pbVar5;
  basic_string *pbVar6;
  int iVar7;
  size_t sVar8;
  basic_string *__s1;
  basic_string *pbVar9;
  
  pbVar2 = *(basic_string **)param_1;
  pbVar3 = *(basic_string **)(param_1 + 8);
  pbVar9 = pbVar2;
                    /* try { // try from 00ab72e8 to 00bb72f3 has its CatchHandler @ 00ab7530 */
  if (pbVar2 == pbVar3) {
LAB_00ab7390:
    if (pbVar9 != pbVar3) {
      return (int)((ulong)((long)pbVar9 - (long)pbVar2) >> 3) * -0x55555555;
    }
  }
  else {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(basic_string **)(param_2 + 0x10);
                    /* try { // try from 00ab72fc to 00bb73ef has its CatchHandler @ 00ab7544 */
    if (((byte)*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)((byte)*param_2 >> 1);
    }
    do {
      bVar4 = *pbVar9;
      sVar8 = (size_t)((byte)bVar4 >> 1);
      sVar1 = sVar8;
      if (((byte)bVar4 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar9 + 8);
      }
      if (sVar1 == __n) {
        __s1 = *(basic_string **)(pbVar9 + 0x10);
        if (((byte)bVar4 & 1) == 0) {
          __s1 = pbVar9 + 1;
        }
        pbVar5 = pbVar9;
        pbVar6 = __s2;
        sVar1 = __n;
        if (((byte)bVar4 & 1) == 0) {
          while( true ) {
            if (sVar1 == 0) goto LAB_00ab7390;
            if (pbVar5[1] != *pbVar6) break;
            sVar8 = sVar8 - 1;
            pbVar5 = pbVar5 + 1;
            pbVar6 = pbVar6 + 1;
            sVar1 = sVar8;
          }
        }
        else if ((__n == 0) || (iVar7 = memcmp(__s1,__s2,__n), iVar7 == 0)) goto LAB_00ab7390;
      }
      pbVar9 = pbVar9 + 0x18;
    } while (pbVar9 != pbVar3);
  }
  return -1;
}

