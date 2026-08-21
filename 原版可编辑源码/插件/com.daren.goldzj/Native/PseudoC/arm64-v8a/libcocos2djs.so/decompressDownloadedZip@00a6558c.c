
/* cocos2d::extension::AssetsManagerEx::decompressDownloadedZip(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::extension::AssetsManagerEx::decompressDownloadedZip
          (AssetsManagerEx *this,basic_string *param_1,basic_string *param_2)

{
  mutex *this_00;
  basic_string *pbVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined **local_f0;
  AssetsManagerEx *pAStack_e8;
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_90;
  long local_80 [4];
  long *local_60;
  long local_48;
  
                    /* try { // try from 00a655a0 to 00b655fb has its CatchHandler @ 00a652fc */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_01 = operator_new(0x38);
                    /* catch() { ... } // from try @ 00a6534c with catch @ 00a655d0 */
  *(undefined8 *)(this_01 + 0x18) = 0;
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x28) = 0;
  *(undefined8 *)(this_01 + 0x20) = 0;
  *(undefined8 *)(this_01 + 8) = 0;
  *(undefined8 *)this_01 = 0;
  if (this_01 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
                    /* catch() { ... } // from try @ 00a6533c with catch @ 00a655e0 */
    uVar8 = *(ulong *)(param_1 + 8);
    pbVar1 = *(basic_string **)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 00a65324 with catch @ 00a655e4 */
                    /* catch() { ... } // from try @ 00a65378 with catch @ 00a655e8 */
    if (((byte)*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar8 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_01,(char *)pbVar1,uVar8);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a6566c with catch @ 00a655fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00a6569c with catch @ 00a655fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00a656cc with catch @ 00a655fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00a656f4 with catch @ 00a655fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00a65720 with catch @ 00a655fc
                        */
  if (this_01 + 0x18 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar8 = *(ulong *)(param_2 + 8);
    pbVar1 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar1 = param_2 + 1;
      uVar8 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_01 + 0x18,(char *)pbVar1,uVar8);
  }
  this_01[0x30] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  local_f0 = &PTR_FUN_01c6e938;
  pAStack_e8 = this;
  local_d0 = (long *)&local_f0;
  lVar3 = AsyncTaskPool::getInstance();
  this_00 = (mutex *)(lVar3 + 0x1f8);
  std::__ndk1::mutex::lock(this_00);
  if (*(char *)(lVar3 + 0x250) == '\0') {
                    /* try { // try from 00a65690 to 00b6569b has its CatchHandler @ 00a65760 */
    local_a0 = (long *)0x0;
    if (local_d0 == (long *)0x0) {
      local_60 = (long *)0x0;
    }
    else {
                    /* try { // try from 00a6569c to 00b656c3 has its CatchHandler @ 00a655fc */
      if (&local_f0 == (undefined ***)local_d0) {
                    /* try { // try from 00a656c4 to 00b656cb has its CatchHandler @ 00a6575c */
        local_60 = local_80;
                    /* try { // try from 00a656cc to 00b656eb has its CatchHandler @ 00a655fc */
        (**(code **)(*local_d0 + 0x18))(local_d0,local_80);
      }
      else {
        local_60 = (long *)(**(code **)(*local_d0 + 0x10))();
      }
    }
    FUN_00a6903c(local_80,alStack_c0);
                    /* try { // try from 00a656ec to 00b656f3 has its CatchHandler @ 00a6575c */
                    /* try { // try from 00a656f4 to 00b65713 has its CatchHandler @ 00a655fc */
    if (local_80 == local_60) {
      pcVar6 = *(code **)(*local_60 + 0x20);
LAB_00a65710:
      (*pcVar6)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar6 = *(code **)(*local_60 + 0x28);
      goto LAB_00a65710;
    }
                    /* try { // try from 00a65714 to 00b6571f has its CatchHandler @ 00a6575c */
    lVar10 = *(long *)(lVar3 + 0x1a0);
    lVar7 = *(long *)(lVar3 + 0x1a8);
                    /* try { // try from 00a65720 to 00b65763 has its CatchHandler @ 00a655fc */
    uVar8 = 0;
    if (lVar7 - lVar10 != 0) {
      uVar8 = (lVar7 - lVar10 >> 3) * 0x55 - 1;
    }
    uVar9 = *(long *)(lVar3 + 0x1c0) + *(long *)(lVar3 + 0x1b8);
    local_90 = this_01;
    if (uVar8 == uVar9) {
      std::__ndk1::
      deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
      __add_back_capacity((deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
                           *)(lVar3 + 0x198));
      lVar10 = *(long *)(lVar3 + 0x1a0);
      lVar7 = *(long *)(lVar3 + 0x1a8);
      uVar9 = *(long *)(lVar3 + 0x1b8) + *(long *)(lVar3 + 0x1c0);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a656c4 with catch @ 00a6575c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a656ec with catch @ 00a6575c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a65714 with catch @ 00a6575c
                        */
    if (lVar7 == lVar10) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a65664 with catch @ 00a65760
                       catch(type#1 @ 00000000) { ... } // from try @ 00a65690 with catch @ 00a65760
                        */
      puVar5 = (undefined8 *)(*(long *)(lVar10 + (uVar9 / 0x55) * 8) + (uVar9 % 0x55) * 0x30);
    }
    puVar5[1] = this;
    puVar5[2] = this_01;
    puVar5[4] = puVar5;
    *puVar5 = &PTR_FUN_01c6e9b8;
    lVar10 = *(long *)(lVar3 + 0x1d0);
    lVar7 = *(long *)(lVar3 + 0x1d8);
    uVar8 = *(long *)(lVar3 + 0x1f0) + *(long *)(lVar3 + 0x1e8);
    uVar9 = 0;
    if (lVar7 - lVar10 != 0) {
      uVar9 = (lVar7 - lVar10) * 8 - 1;
    }
                    /* try { // try from 00a657c4 to 00b657fb has its CatchHandler @ 00a657c4
                       catch() { ... } // from try @ 00a657c4 with catch @ 00a657c4
                       catch() { ... } // from try @ 00a65830 with catch @ 00a657c4 */
    *(long *)(lVar3 + 0x1c0) = *(long *)(lVar3 + 0x1c0) + 1;
    if (uVar9 == uVar8) {
      std::__ndk1::
      deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
      ::__add_back_capacity
                ((deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
                  *)(lVar3 + 0x1c8));
      lVar10 = *(long *)(lVar3 + 0x1d0);
      lVar7 = *(long *)(lVar3 + 0x1d8);
      uVar8 = *(long *)(lVar3 + 0x1e8) + *(long *)(lVar3 + 0x1f0);
    }
    if (lVar7 == lVar10) {
      lVar10 = 0;
                    /* try { // try from 00a65830 to 00b65883 has its CatchHandler @ 00a657c4 */
      if (local_a0 == (long *)0x0) goto LAB_00a65834;
LAB_00a65808:
      if (alStack_c0 == local_a0) {
        *(long *)(lVar10 + 0x20) = lVar10;
        (**(code **)(*local_a0 + 0x18))(local_a0,lVar10);
      }
      else {
        uVar4 = (**(code **)(*local_a0 + 0x10))();
        *(undefined8 *)(lVar10 + 0x20) = uVar4;
      }
    }
    else {
                    /* try { // try from 00a657fc to 00b6582f has its CatchHandler @ 00a65870 */
      lVar10 = *(long *)(lVar10 + (uVar8 >> 3 & 0x1ffffffffffffff8)) + (uVar8 & 0x3f) * 0x40;
      if (local_a0 != (long *)0x0) goto LAB_00a65808;
LAB_00a65834:
      *(undefined8 *)(lVar10 + 0x20) = 0;
    }
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (lVar10 + 0x30) = local_90;
    *(long *)(lVar3 + 0x1f0) = *(long *)(lVar3 + 0x1f0) + 1;
                    /* catch() { ... } // from try @ 00a657fc with catch @ 00a65870 */
    if (alStack_c0 == local_a0) {
      pcVar6 = *(code **)(*local_a0 + 0x20);
LAB_00a65890:
      (*pcVar6)();
    }
    else if (local_a0 != (long *)0x0) {
      pcVar6 = *(code **)(*local_a0 + 0x28);
      goto LAB_00a65890;
    }
    std::__ndk1::mutex::unlock(this_00);
    std::__ndk1::condition_variable::notify_one((condition_variable *)(lVar3 + 0x220));
  }
  else {
                    /* try { // try from 00a65664 to 00b6566b has its CatchHandler @ 00a65760 */
                    /* try { // try from 00a6566c to 00b6568f has its CatchHandler @ 00a655fc */
    __android_log_print(6,"assert","%s function:%s line:%d",
                        "F:/darenneiqian/frameworks/cocos2d-x/extensions/assets-manager/CCAsyncTaskPool.h"
                        ,"enqueue",0xab);
    std::__ndk1::mutex::unlock(this_00);
  }
  if (&local_f0 == (undefined ***)local_d0) {
    pcVar6 = *(code **)(*local_d0 + 0x20);
  }
  else {
    if (local_d0 == (long *)0x0) goto LAB_00a658d0;
    pcVar6 = *(code **)(*local_d0 + 0x28);
  }
  (*pcVar6)();
LAB_00a658d0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

