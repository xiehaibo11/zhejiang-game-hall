
/* cocos2d::Material::parseShader(cocos2d::Pass*, cocos2d::Properties*) */

undefined8 __thiscall
cocos2d::Material::parseShader(Material *this,Pass *param_1,Properties *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  GLProgramState *pGVar7;
  char *pcVar8;
  Properties *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pcVar4 = (char *)Properties::getString(param_2,"vertexShader",(char *)0x0);
  pcVar5 = (char *)Properties::getString(param_2,"fragmentShader",(char *)0x0);
  pcVar6 = (char *)Properties::getString(param_2,"defines",(char *)0x0);
  pcVar8 = "";
  if (pcVar6 != (char *)0x0) {
    pcVar8 = pcVar6;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,pcVar8);
  resetOptionalString(this,(basic_string *)local_70);
  if ((pcVar4 != (char *)0x0) && (pcVar5 != (char *)0x0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_88,pcVar4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_a0,pcVar5);
    pGVar7 = (GLProgramState *)
             GLProgramState::getOrCreateWithShaders
                       ((basic_string *)local_88,(basic_string *)local_a0,(basic_string *)local_70);
    if (((byte)local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if (((byte)local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    Pass::setGLProgramState(param_1,pGVar7);
    pcVar8 = (char *)Properties::getNextProperty(param_2);
    while (pcVar8 != (char *)0x0) {
      iVar3 = strcmp(pcVar8,"defines");
      if ((iVar3 != 0) && (iVar3 = strcmp(pcVar8,"vertexShader"), iVar3 != 0)) {
        uVar2 = strcmp(pcVar8,"fragmentShader");
        if (uVar2 != 0) {
                    /* catch() { ... } // from try @ 00fdef04 with catch @ 00fdee9c */
          parseUniform((Material *)(ulong)uVar2,pGVar7,param_2,pcVar8);
        }
      }
      pcVar8 = (char *)Properties::getNextProperty(param_2);
    }
    this_00 = (Properties *)Properties::getNextNamespace(param_2);
    while (this_00 != (Properties *)0x0) {
      pcVar8 = (char *)Properties::getNamespace(this_00);
      iVar3 = strcmp(pcVar8,"sampler");
      if (iVar3 == 0) {
        parseSampler((Material *)0x0,pGVar7,this_00);
      }
      this_00 = (Properties *)Properties::getNextNamespace(param_2);
                    /* try { // try from 00fdeecc to 010deed3 has its CatchHandler @ 00fdef4c */
    }
  }
                    /* try { // try from 00fdeef8 to 010def03 has its CatchHandler @ 00fdef54 */
  if (((byte)local_70[0] & 1) != 0) {
                    /* try { // try from 00fdef04 to 010def77 has its CatchHandler @ 00fdee9c */
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

