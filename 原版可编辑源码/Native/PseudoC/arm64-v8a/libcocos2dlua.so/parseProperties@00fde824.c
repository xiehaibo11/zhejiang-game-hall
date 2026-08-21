
/* cocos2d::Material::parseProperties(cocos2d::Properties*) */

undefined8 __thiscall cocos2d::Material::parseProperties(Material *this,Properties *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  Properties *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong local_68;
  char *local_60;
  long local_58;
  
                    /* try { // try from 00fde824 to 010de89b has its CatchHandler @ 00fde7ac */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pcVar4 = (char *)Properties::getId(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,pcVar4);
                    /* catch() { ... } // from try @ 00fde7e4 with catch @ 00fde870 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x60) != local_70) {
                    /* catch() { ... } // from try @ 00fde810 with catch @ 00fde878 */
    uVar1 = (ulong)((byte)local_70[0] >> 1);
    pcVar4 = (char *)((ulong)local_70 | 1);
    if (((byte)local_70[0] & 1) != 0) {
      uVar1 = local_68;
      pcVar4 = local_60;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x60),pcVar4,uVar1);
  }
                    /* catch() { ... } // from try @ 00fde914 with catch @ 00fde89c */
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  this_00 = (Properties *)Properties::getNextNamespace(param_1);
  while (this_00 != (Properties *)0x0) {
    pcVar4 = (char *)Properties::getNamespace(this_00);
    iVar3 = strcmp(pcVar4,"technique");
                    /* try { // try from 00fde8fc to 010de913 has its CatchHandler @ 00fde978 */
    if (iVar3 == 0) {
                    /* try { // try from 00fde8d0 to 010de8d7 has its CatchHandler @ 00fde970 */
      parseTechnique(this,this_00);
    }
    else {
      iVar3 = strcmp(pcVar4,"renderState");
      if (iVar3 == 0) {
                    /* try { // try from 00fde914 to 010de99b has its CatchHandler @ 00fde89c */
        parseRenderState((Material *)0x0,(RenderState *)this,this_00);
      }
    }
    this_00 = (Properties *)Properties::getNextNamespace(param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

