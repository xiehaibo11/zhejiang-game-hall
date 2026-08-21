
/* cocos2d::SpriteBatchNode::addSpriteWithoutQuad(cocos2d::Sprite*, int, int) */

SpriteBatchNode * __thiscall
cocos2d::SpriteBatchNode::addSpriteWithoutQuad
          (SpriteBatchNode *this,Sprite *param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  Node *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x308) = (long)param_2;
  plVar2 = *(long **)(this + 0x388);
  plVar4 = *(long **)(this + 0x390);
  plVar3 = plVar2;
  if (plVar4 != plVar2) {
    lVar5 = *(long *)(*plVar2 + 0x308);
    while ((plVar3 = plVar2, lVar5 < param_2 &&
           (plVar2 = plVar2 + 1, plVar3 = plVar4, plVar4 != plVar2))) {
      lVar5 = *(long *)(*plVar2 + 0x308);
    }
  }
  local_40 = (Node *)param_1;
  std::__ndk1::vector<cocos2d::Sprite*,std::__ndk1::allocator<cocos2d::Sprite*>>::insert
            ((vector<cocos2d::Sprite*,std::__ndk1::allocator<cocos2d::Sprite*>> *)(this + 0x388),
             plVar3,&local_40);
  Node::addChild((Node *)this,local_40,param_2,param_3);
  this[0x1fb] = (SpriteBatchNode)0x0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

