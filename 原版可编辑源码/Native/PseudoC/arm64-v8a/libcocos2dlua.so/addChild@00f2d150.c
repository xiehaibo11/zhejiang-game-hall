
/* cocos2d::ParticleBatchNode::addChild(cocos2d::Node*, int, int) */

void __thiscall
cocos2d::ParticleBatchNode::addChild(ParticleBatchNode *this,Node *param_1,int param_2,int param_3)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"");
  addChildByTagOrName(this,(ParticleSystem *)param_1,param_2,param_3,(basic_string *)local_60,true);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

