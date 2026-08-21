
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<char32_t,
   cocos2d::FontLetterDefinition>, std::__ndk1::__unordered_map_hasher<char32_t,
   std::__ndk1::__hash_value_type<char32_t, cocos2d::FontLetterDefinition>,
   std::__ndk1::hash<char32_t>, true>, std::__ndk1::__unordered_map_equal<char32_t,
   std::__ndk1::__hash_value_type<char32_t, cocos2d::FontLetterDefinition>,
   std::__ndk1::equal_to<char32_t>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t, cocos2d::FontLetterDefinition> >
   >::swap(std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<char32_t,
   cocos2d::FontLetterDefinition>, std::__ndk1::__unordered_map_hasher<char32_t,
   std::__ndk1::__hash_value_type<char32_t, cocos2d::FontLetterDefinition>,
   std::__ndk1::hash<char32_t>, true>, std::__ndk1::__unordered_map_equal<char32_t,
   std::__ndk1::__hash_value_type<char32_t, cocos2d::FontLetterDefinition>,
   std::__ndk1::equal_to<char32_t>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t, cocos2d::FontLetterDefinition> >
   >&) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
::swap(__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
       *this,__hash_table *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar8 = *(undefined8 *)this;
  *(undefined8 *)this = 0;
  uVar5 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  pvVar4 = *(void **)this;
  *(undefined8 *)this = uVar5;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)param_1;
  *(undefined8 *)param_1 = uVar8;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar9 = *(undefined8 *)(this + 0x10);
  uVar8 = *(undefined8 *)(this + 8);
                    /* try { // try from 00f1464c to 01014673 has its CatchHandler @ 00f146a0 */
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar5;
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  *(undefined8 *)(param_1 + 8) = uVar8;
  lVar6 = *(long *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar6;
  uVar2 = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
                    /* try { // try from 00f14678 to 0101467b has its CatchHandler @ 00f1468c */
  if (*(long *)(this + 0x18) != 0) {
                    /* try { // try from 00f1467c to 010146c7 has its CatchHandler @ 00f145e0 */
    uVar1 = *(ulong *)(this + 8);
    uVar7 = *(ulong *)(*(long *)(this + 0x10) + 8);
                    /* catch() { ... } // from try @ 00f14678 with catch @ 00f1468c */
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar7 = uVar1 - 1 & uVar7;
    }
    else if (uVar1 <= uVar7) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar7 / uVar1;
      }
                    /* catch() { ... } // from try @ 00f1464c with catch @ 00f146a0 */
      uVar7 = uVar7 - uVar3 * uVar1;
    }
    *(__hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
      **)(*(long *)this + uVar7 * 8) = this + 0x10;
  }
  if (lVar6 != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    uVar7 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar7 = uVar1 - 1 & uVar7;
    }
    else if (uVar1 <= uVar7) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar7 / uVar1;
      }
      uVar7 = uVar7 - uVar3 * uVar1;
    }
    *(__hash_table **)(*(long *)param_1 + uVar7 * 8) = param_1 + 0x10;
  }
  return;
}

