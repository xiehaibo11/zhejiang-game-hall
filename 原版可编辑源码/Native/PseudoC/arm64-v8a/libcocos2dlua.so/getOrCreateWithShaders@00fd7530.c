
/* cocos2d::GLProgramState::getOrCreateWithShaders(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

GLProgramState *
cocos2d::GLProgramState::getOrCreateWithShaders
          (basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  GLProgramCache *this;
  ulong *puVar4;
  GLProgram *pGVar5;
  GLProgramState *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this = (GLProgramCache *)GLProgramCache::getInstance();
  FUN_007c1fb0(local_b8,param_1,&DAT_0145fc2f);
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)((byte)*param_2 >> 1);
  }
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append(local_b8,(char *)pbVar2,uVar1);
  local_90 = (void *)puVar4[2];
  uStack_98 = puVar4[1];
  local_a0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_a0,"+",1);
  local_70 = (void *)puVar4[2];
  uStack_78 = puVar4[1];
  local_80 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)((byte)*param_3 >> 1);
  }
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_80,(char *)pbVar2,uVar1);
  local_50 = (void *)puVar4[2];
  uStack_58 = puVar4[1];
  local_60 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  pGVar5 = (GLProgram *)GLProgramCache::getGLProgram(this,(basic_string *)&local_60);
  if (pGVar5 == (GLProgram *)0x0) {
                    /* catch() { ... } // from try @ 00fd76b8 with catch @ 00fd7650 */
    pGVar5 = (GLProgram *)GLProgram::createWithFilenames(param_1,param_2,param_3);
    GLProgramCache::addGLProgram(this,pGVar5,(basic_string *)&local_60);
  }
  this_00 = operator_new(0x110,(nothrow_t *)&std::nothrow);
  if (this_00 != (GLProgramState *)0x0) {
                    /* try { // try from 00fd768c to 010d7693 has its CatchHandler @ 00fd7734 */
    GLProgramState(this_00);
    init(this_00,pGVar5);
    Ref::autorelease((Ref *)this_00);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 00fd76b4 to 010d76b7 has its CatchHandler @ 00fd7724 */
                    /* try { // try from 00fd76b8 to 010d774f has its CatchHandler @ 00fd7650 */
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}

