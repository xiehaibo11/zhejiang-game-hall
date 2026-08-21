
/* cocosbuilder::LabelTTFLoader::onHandlePropTypeFontTTF(cocos2d::Node*, cocos2d::Node*, char
   const*, char const*, cocosbuilder::CCBReader*) */

void cocosbuilder::LabelTTFLoader::onHandlePropTypeFontTTF
               (Node *param_1,Node *param_2,char *param_3,char *param_4,CCBReader *param_5)

{
  long lVar1;
  int iVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = strcmp(param_4,"fontName");
  if (iVar2 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,(char *)param_5);
    (**(code **)(*(long *)param_2 + 0x560))(param_2,local_70);
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
    NodeLoader::onHandlePropTypeFontTTF(param_1,param_2,param_3,param_4,param_5);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

