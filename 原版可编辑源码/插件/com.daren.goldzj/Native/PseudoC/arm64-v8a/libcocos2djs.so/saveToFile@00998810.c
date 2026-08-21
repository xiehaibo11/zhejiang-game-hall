
/* cocos2d::Image::saveToFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) */

uint __thiscall cocos2d::Image::saveToFile(Image *this,basic_string *param_1,bool param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  byte local_60 [8];
  ulong local_58;
  int *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 0099882c to 00a98883 has its CatchHandler @ 0099882c
                       catch() { ... } // from try @ 0099882c with catch @ 0099882c
                       catch() { ... } // from try @ 00998aec with catch @ 0099882c */
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = isCompressed(this);
  if (((uVar4 & 1) != 0) || ((*(uint *)(this + 0x2c) & 0xfffffffe) != 2)) {
    uVar3 = 0;
    goto LAB_009988dc;
  }
  plVar5 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar5 + 0x100))(local_60,plVar5,param_1);
  uVar4 = (ulong)(local_60[0] >> 1);
                    /* try { // try from 00998884 to 00a9889b has its CatchHandler @ 00998bc4 */
  if ((local_60[0] & 1) != 0) {
    uVar4 = local_58;
  }
  if (uVar4 == 4) {
    piVar1 = (int *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      piVar1 = local_50;
    }
                    /* try { // try from 009988a4 to 00a988af has its CatchHandler @ 00998bc0 */
                    /* try { // try from 009988b0 to 00a988bb has its CatchHandler @ 00998bbc */
    if (*piVar1 == 0x676e702e) {
      uVar3 = saveImageToPNG(this,param_1,param_2);
    }
    else {
                    /* try { // try from 009988bc to 00a988d3 has its CatchHandler @ 00998bd4 */
      if (*piVar1 != 0x67706a2e) goto LAB_009988c8;
      uVar3 = saveImageToJPG(this,param_1);
    }
  }
  else {
LAB_009988c8:
    uVar3 = 0;
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_009988dc:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009988fc to 00a98917 has its CatchHandler @ 00998b68 */
  return uVar3 & 1;
}

