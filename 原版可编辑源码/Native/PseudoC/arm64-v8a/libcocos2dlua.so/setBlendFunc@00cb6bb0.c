
/* non-virtual thunk to cocostudio::timeline::BoneNode::setBlendFunc(cocos2d::BlendFunc const&) */

void __thiscall cocostudio::timeline::BoneNode::setBlendFunc(BoneNode *this,BlendFunc *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if ((*(int *)(this + 0x58) != *(int *)param_1) || (*(int *)(this + 0x5c) != *(int *)(param_1 + 4))
     ) {
    plVar1 = *(long **)(this + 0x98);
    plVar2 = *(long **)(this + 0xa0);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)param_1;
    if (plVar1 != plVar2) {
      lVar3 = *plVar1;
      while( true ) {
        if ((lVar3 != 0) &&
           (plVar4 = (long *)__dynamic_cast(lVar3,&cocos2d::Node::typeinfo,
                                            &cocos2d::BlendProtocol::typeinfo,0xfffffffffffffffe),
           plVar4 != (long *)0x0)) {
          (**(code **)(*plVar4 + 0x10))(plVar4,this + 0x58);
        }
        plVar1 = plVar1 + 1;
        if (plVar2 == plVar1) break;
        lVar3 = *plVar1;
      }
    }
  }
  return;
}

