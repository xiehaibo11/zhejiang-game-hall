
/* cocostudio::timeline::BoneNode::setBlendFunc(cocos2d::BlendFunc const&) */

void __thiscall cocostudio::timeline::BoneNode::setBlendFunc(BoneNode *this,BlendFunc *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if ((*(int *)(this + 0x350) != *(int *)param_1) ||
     (*(int *)(this + 0x354) != *(int *)(param_1 + 4))) {
    plVar3 = *(long **)(this + 0x390);
    plVar4 = *(long **)(this + 0x398);
    *(undefined8 *)(this + 0x350) = *(undefined8 *)param_1;
    if (plVar3 != plVar4) {
      lVar1 = *plVar3;
      while( true ) {
        if ((lVar1 != 0) &&
           (plVar2 = (long *)__dynamic_cast(lVar1,&cocos2d::Node::typeinfo,
                                            &cocos2d::BlendProtocol::typeinfo,0xfffffffffffffffe),
           plVar2 != (long *)0x0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2,this + 0x350);
        }
        plVar3 = plVar3 + 1;
        if (plVar4 == plVar3) break;
        lVar1 = *plVar3;
      }
    }
  }
  return;
}

