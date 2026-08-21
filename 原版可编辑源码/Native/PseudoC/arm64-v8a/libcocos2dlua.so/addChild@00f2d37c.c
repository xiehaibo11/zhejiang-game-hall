
/* cocos2d::ParticleBatchNode::addChild(cocos2d::Node*, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::ParticleBatchNode::addChild
          (ParticleBatchNode *this,Node *param_1,int param_2,basic_string *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  
                    /* catch() { ... } // from try @ 00f2d3c0 with catch @ 00f2d394 */
  if (*(long *)(this + 0x178) == *(long *)(this + 0x180)) {
    uVar3 = (**(code **)(*(long *)param_1 + 0x688))(param_1);
                    /* try { // try from 00f2d3b8 to 0102d3bf has its CatchHandler @ 00f2d3d8 */
                    /* try { // try from 00f2d3c0 to 0102d3f3 has its CatchHandler @ 00f2d394 */
    (**(code **)(*(long *)this + 0x540))(this,uVar3);
  }
                    /* catch() { ... } // from try @ 00f2d3b8 with catch @ 00f2d3d8 */
  iVar2 = addChildHelper(this,(ParticleSystem *)param_1,param_2,0,param_3,false);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    plVar4 = *(long **)(*(long *)(this + 0x178) + (long)(iVar2 + -1) * 8);
    lVar1 = plVar4[0x8d];
    iVar2 = (**(code **)(*plVar4 + 0x660))();
    iVar2 = iVar2 + (int)lVar1;
  }
  insertChild(this,(ParticleSystem *)param_1,iVar2);
                    /* WARNING: Could not recover jumptable at 0x00f2d43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x658))(param_1,this);
  return;
}

