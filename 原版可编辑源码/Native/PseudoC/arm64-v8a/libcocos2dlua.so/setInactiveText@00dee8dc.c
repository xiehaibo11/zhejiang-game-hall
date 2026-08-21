
/* cocos2d::ui::EditBoxImplCommon::setInactiveText(char const*) */

void __thiscall
cocos2d::ui::EditBoxImplCommon::setInactiveText(EditBoxImplCommon *this,char *param_1)

{
  long lVar1;
  size_t sVar2;
  float *pfVar3;
  Size *pSVar4;
  long *plVar5;
  float local_58;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00dee8f4 to 00eee8f7 has its CatchHandler @ 00dee974 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dee8f8 to 00eee98f has its CatchHandler @ 00dee754 */
  if (*(int *)(this + 0x2c) == 0) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    for (sVar2 = strlen(param_1); sVar2 != 0; sVar2 = sVar2 - 1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee8c8 with catch @ 00dee954
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee7c0 with catch @ 00dee958
                        */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_50,&DAT_014206a0,3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee858 with catch @ 00dee95c
                        */
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee8f4 with catch @ 00dee974
                        */
    (**(code **)(**(long **)(this + 0x18) + 0x588))(*(long **)(this + 0x18),&local_50);
  }
  else {
    plVar5 = *(long **)(this + 0x18);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_50,param_1);
    (**(code **)(*plVar5 + 0x588))(plVar5,&local_50);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee844 with catch @ 00dee978
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee828 with catch @ 00dee97c
                       catch(type#1 @ 00000000) { ... } // from try @ 00dee888 with catch @ 00dee97c
                        */
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
                    /* try { // try from 00dee990 to 00eee993 has its CatchHandler @ 00dee9c0 */
                    /* try { // try from 00dee994 to 00eee9d3 has its CatchHandler @ 00dee754 */
  pfVar3 = (float *)(**(code **)(**(long **)(this + 0x10) + 0x168))();
  Size::Size((Size *)&local_50,*pfVar3 + -10.0,pfVar3[1]);
  pSVar4 = (Size *)(**(code **)(**(long **)(this + 0x18) + 0x168))();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dee990 with catch @ 00dee9c0
                        */
  Size::Size((Size *)&local_58,pSVar4);
  if (((float)local_50 < local_58) || (local_50._4_4_ < local_54)) {
    Label::setDimensions(*(Label **)(this + 0x18),(float)local_50,local_50._4_4_);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

