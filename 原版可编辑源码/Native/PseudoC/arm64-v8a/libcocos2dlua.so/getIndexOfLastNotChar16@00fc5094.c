
/* cocos2d::StringUtils::getIndexOfLastNotChar16(std::__ndk1::vector<char16_t,
   std::__ndk1::allocator<char16_t> > const&, char16_t) */

int cocos2d::StringUtils::getIndexOfLastNotChar16(vector *param_1,wchar16 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(long *)(param_1 + 8) - *(long *)param_1) * 0x80000000 >> 0x20;
  do {
    lVar2 = lVar1;
    if (lVar2 < 1) break;
    lVar1 = lVar2 + -1;
  } while (*(wchar16 *)(*(long *)param_1 + -2 + lVar2 * 2) == param_2);
  return (int)lVar2 + -1;
}

