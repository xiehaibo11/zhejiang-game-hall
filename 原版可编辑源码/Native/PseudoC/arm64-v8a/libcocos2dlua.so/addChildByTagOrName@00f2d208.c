
/* cocos2d::ParticleBatchNode::addChildByTagOrName(cocos2d::ParticleSystem*, int, int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, bool) */

void __thiscall
cocos2d::ParticleBatchNode::addChildByTagOrName
          (ParticleBatchNode *this,ParticleSystem *param_1,int param_2,int param_3,
          basic_string *param_4,bool param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x178) == *(long *)(this + 0x180)) {
    uVar5 = (**(code **)(*(long *)param_1 + 0x688))(param_1);
    (**(code **)(*(long *)this + 0x540))(this,uVar5);
  }
  if (param_5) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,"");
    iVar3 = addChildHelper(this,param_1,param_2,param_3,(basic_string *)local_70,true);
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  else {
                    /* try { // try from 00f2d300 to 0102d343 has its CatchHandler @ 00f2d300
                       catch() { ... } // from try @ 00f2d300 with catch @ 00f2d300
                       catch() { ... } // from try @ 00f2d34c with catch @ 00f2d300 */
    iVar3 = addChildHelper(this,param_1,param_2,0,param_4,false);
  }
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    plVar4 = *(long **)(*(long *)(this + 0x178) + (long)(iVar3 + -1) * 8);
    lVar2 = plVar4[0x8d];
    iVar3 = (**(code **)(*plVar4 + 0x660))();
    iVar3 = iVar3 + (int)lVar2;
  }
  insertChild(this,param_1,iVar3);
  (**(code **)(*(long *)param_1 + 0x658))(param_1,this);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00f2d344 to 0102d34b has its CatchHandler @ 00f2d378 */
                    /* try { // try from 00f2d34c to 0102d393 has its CatchHandler @ 00f2d300 */
  return;
}

