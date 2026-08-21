
void FUN_00e06b6c(long param_1,undefined8 *param_2,basic_string *param_3)

{
  basic_string bVar1;
  long lVar2;
  basic_string *pbVar3;
  basic_string *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pbVar3 = (basic_string *)*param_2;
  this = *(basic_string **)(param_1 + 8);
  if (pbVar3[0x30] == (basic_string)0x0) {
    std::__ndk1::operator+((__ndk1 *)"Unable to decompress file ",(char *)(pbVar3 + 0x18),param_3);
    (**(code **)(**(long **)(this + 0x48) + 0x178))(*(long **)(this + 0x48),pbVar3 + 0x18);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,"");
    cocos2d::extension::AssetsManagerEx::dispatchUpdateEvent
              ((AssetsManagerEx *)this,10,local_68,local_50,0,0);
    if (((byte)local_68[0] & 1) != 0) {
                    /* try { // try from 00e06c18 to 00f06c27 has its CatchHandler @ 00e06ea8 */
      operator_delete(local_58);
    }
                    /* try { // try from 00e06c2c to 00f06c3f has its CatchHandler @ 00e06ebc */
    cocos2d::extension::AssetsManagerEx::fileError((AssetsManagerEx *)this,pbVar3,local_50,0,0);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    bVar1 = pbVar3[0x18];
  }
  else {
    cocos2d::extension::AssetsManagerEx::fileSuccess(this,pbVar3);
    bVar1 = pbVar3[0x18];
  }
  if (((byte)bVar1 & 1) != 0) {
    operator_delete(*(void **)(pbVar3 + 0x28));
  }
  if (((byte)*pbVar3 & 1) != 0) {
    operator_delete(*(void **)(pbVar3 + 0x10));
  }
  operator_delete(pbVar3);
                    /* try { // try from 00e06c74 to 00f06c87 has its CatchHandler @ 00e06ec8 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

