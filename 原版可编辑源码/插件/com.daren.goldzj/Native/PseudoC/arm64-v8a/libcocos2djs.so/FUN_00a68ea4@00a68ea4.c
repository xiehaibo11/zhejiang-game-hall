
void FUN_00a68ea4(long param_1,undefined8 *param_2,basic_string *param_3)

{
  basic_string *pbVar1;
  basic_string bVar2;
  long lVar3;
  basic_string *pbVar4;
  basic_string *this;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
                    /* try { // try from 00a68ea4 to 00b68ef3 has its CatchHandler @ 00a68ea4
                       catch() { ... } // from try @ 00a68ea4 with catch @ 00a68ea4
                       catch() { ... } // from try @ 00a68fd4 with catch @ 00a68ea4 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pbVar4 = (basic_string *)*param_2;
  this = *(basic_string **)(param_1 + 8);
  if (pbVar4[0x30] == (basic_string)0x0) {
    pbVar1 = pbVar4 + 0x18;
                    /* try { // try from 00a68ef4 to 00b68f0b has its CatchHandler @ 00a6906c */
    std::__ndk1::operator+((__ndk1 *)"Unable to decompress file ",(char *)pbVar1,param_3);
    (**(code **)(**(long **)(this + 0x28) + 0x138))(*(long **)(this + 0x28),pbVar1);
    local_68 = 0;
    uStack_60 = 0;
                    /* try { // try from 00a68f20 to 00b68f33 has its CatchHandler @ 00a69068 */
    local_58 = (void *)0x0;
                    /* try { // try from 00a68f34 to 00b68f43 has its CatchHandler @ 00a69054 */
    cocos2d::extension::AssetsManagerEx::dispatchUpdateEvent
              ((AssetsManagerEx *)this,10,&local_68,local_50,0,0);
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    cocos2d::extension::AssetsManagerEx::fileError((AssetsManagerEx *)this,pbVar4,local_50,0,0);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    bVar2 = *pbVar1;
  }
  else {
    cocos2d::extension::AssetsManagerEx::fileSuccess(this,pbVar4);
    bVar2 = pbVar4[0x18];
  }
  if (((byte)bVar2 & 1) != 0) {
                    /* try { // try from 00a68f84 to 00b68f9b has its CatchHandler @ 00a6907c */
    operator_delete(*(void **)(pbVar4 + 0x28));
  }
  if (((byte)*pbVar4 & 1) != 0) {
    operator_delete(*(void **)(pbVar4 + 0x10));
  }
                    /* try { // try from 00a68f9c to 00b68fa3 has its CatchHandler @ 00a69050 */
  operator_delete(pbVar4);
                    /* try { // try from 00a68fa4 to 00b68fd3 has its CatchHandler @ 00a69058 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

