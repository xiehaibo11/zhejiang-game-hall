
/* cocos2d::Material::parseTechnique(cocos2d::Properties*) */

undefined8 __thiscall cocos2d::Material::parseTechnique(Material *this,Properties *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  Technique *this_00;
  char *pcVar4;
  Properties *this_01;
  Technique *local_70 [2];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this_00 = (Technique *)Technique::create(this);
                    /* try { // try from 00fde9e4 to 010dea1b has its CatchHandler @ 00fde9e4
                       catch() { ... } // from try @ 00fde9e4 with catch @ 00fde9e4
                       catch() { ... } // from try @ 00fdea30 with catch @ 00fde9e4 */
  puVar1 = *(undefined8 **)(this + 0x80);
  local_70[0] = this_00;
  if (puVar1 == *(undefined8 **)(this + 0x88)) {
    std::__ndk1::vector<cocos2d::Technique*,std::__ndk1::allocator<cocos2d::Technique*>>::
    __push_back_slow_path<cocos2d::Technique*const&>
              ((vector<cocos2d::Technique*,std::__ndk1::allocator<cocos2d::Technique*>> *)
               (this + 0x78),local_70);
  }
  else {
    *puVar1 = this_00;
    *(undefined8 **)(this + 0x80) = puVar1 + 1;
  }
  Ref::retain((Ref *)local_70[0]);
                    /* try { // try from 00fdea1c to 010dea2f has its CatchHandler @ 00fdea3c */
  if ((*(long *)(this + 0x90) == 0) || (this[0xa0] != (Material)0x0)) {
    *(Technique **)(this + 0x90) = this_00;
  }
                    /* try { // try from 00fdea30 to 010dea4f has its CatchHandler @ 00fde9e4 */
  pcVar4 = (char *)Properties::getId(param_1);
                    /* catch() { ... } // from try @ 00fdea1c with catch @ 00fdea3c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_70,pcVar4);
  Technique::setName(this_00,(basic_string *)local_70);
                    /* catch() { ... } // from try @ 00fdeab8 with catch @ 00fdea50 */
  if (((ulong)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  this_01 = (Properties *)Properties::getNextNamespace(param_1);
  while (this_01 != (Properties *)0x0) {
                    /* try { // try from 00fdeaa4 to 010deab7 has its CatchHandler @ 00fdeb4c */
    pcVar4 = (char *)Properties::getNamespace(this_01);
    iVar3 = strcmp(pcVar4,"pass");
    if (iVar3 == 0) {
      parsePass(this,this_00,this_01);
    }
    else {
                    /* try { // try from 00fdeab8 to 010deb6f has its CatchHandler @ 00fdea50 */
      iVar3 = strcmp(pcVar4,"renderState");
      if (iVar3 == 0) {
        parseRenderState((Material *)0x0,(RenderState *)this,this_01);
      }
    }
    this_01 = (Properties *)Properties::getNextNamespace(param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

