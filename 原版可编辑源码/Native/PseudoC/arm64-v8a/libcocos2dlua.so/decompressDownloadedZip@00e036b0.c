
/* cocos2d::extension::AssetsManagerEx::decompressDownloadedZip(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::extension::AssetsManagerEx::decompressDownloadedZip
          (AssetsManagerEx *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  AsyncTaskPool *pAVar4;
  code *pcVar5;
  undefined **local_e0;
  AssetsManagerEx *pAStack_d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_d0;
  long *local_c0;
  undefined **local_b0 [4];
  undefined ***local_90;
  undefined **local_80;
  AssetsManagerEx *pAStack_78;
  undefined ***local_60;
  long local_48;
  
                    /* catch() { ... } // from try @ 00e035dc with catch @ 00e036b0 */
                    /* catch() { ... } // from try @ 00e035cc with catch @ 00e036b4 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00e036d8 to 00f03753 has its CatchHandler @ 00e036d8
                       catch() { ... } // from try @ 00e036d8 with catch @ 00e036d8
                       catch() { ... } // from try @ 00e038c8 with catch @ 00e036d8 */
  this_00 = operator_new(0x38);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar1);
  }
  if (this_00 + 0x18 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00 + 0x18,(char *)pbVar2,uVar1);
  }
  local_60 = &local_80;
                    /* try { // try from 00e03754 to 00f03767 has its CatchHandler @ 00e039b8 */
  this_00[0x30] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  local_80 = &PTR_FUN_016e81b8;
  pAStack_78 = this;
  pAVar4 = (AsyncTaskPool *)AsyncTaskPool::getInstance();
                    /* try { // try from 00e0376c to 00f03793 has its CatchHandler @ 00e039d0 */
  if (local_60 == (undefined ***)0x0) {
    local_90 = (undefined ***)0x0;
  }
  else if (&local_80 == local_60) {
    local_90 = local_b0;
                    /* try { // try from 00e037a4 to 00f037b7 has its CatchHandler @ 00e039b4 */
    (*(code *)(*local_60)[3])(local_60,local_b0);
  }
  else {
    local_90 = local_60;
    local_60 = (undefined ***)0x0;
  }
  local_e0 = &PTR_FUN_016e8238;
                    /* try { // try from 00e037bc to 00f037e3 has its CatchHandler @ 00e039cc */
  pAStack_d8 = this;
  local_d0 = this_00;
  local_c0 = (long *)&local_e0;
  AsyncTaskPool::enqueue(pAVar4,2,local_b0,this_00,&local_e0);
  if (&local_e0 == (undefined ***)local_c0) {
                    /* try { // try from 00e037f4 to 00f03807 has its CatchHandler @ 00e039b0 */
    pcVar5 = *(code **)(*local_c0 + 0x20);
LAB_00e037fc:
    (*pcVar5)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar5 = *(code **)(*local_c0 + 0x28);
    goto LAB_00e037fc;
  }
                    /* try { // try from 00e0380c to 00f03833 has its CatchHandler @ 00e039c8 */
  if (local_b0 == local_90) {
    pcVar5 = (code *)(*local_90)[4];
LAB_00e03828:
    (*pcVar5)();
  }
  else if (local_90 != (undefined ***)0x0) {
    pcVar5 = (code *)(*local_90)[5];
    goto LAB_00e03828;
  }
  if (&local_80 == local_60) {
                    /* try { // try from 00e03850 to 00f0385b has its CatchHandler @ 00e039a8 */
    pcVar5 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_00e03858;
                    /* try { // try from 00e03844 to 00f0384b has its CatchHandler @ 00e039ac */
    pcVar5 = (code *)(*local_60)[5];
  }
  (*pcVar5)();
LAB_00e03858:
                    /* try { // try from 00e0385c to 00f03867 has its CatchHandler @ 00e039a4 */
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00e0386c to 00f03873 has its CatchHandler @ 00e039a0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

