
/* cocostudio::BatchNode::addChild(cocos2d::Node*, int, int) */

void __thiscall
cocostudio::BatchNode::addChild(BatchNode *this,Node *param_1,int param_2,int param_3)

{
  long *plVar1;
  GroupCommand *this_00;
  
  cocos2d::Node::addChild((Node *)this,param_1,param_2,param_3);
  if (((param_1 != (Node *)0x0) &&
      (plVar1 = (long *)__dynamic_cast(param_1,&cocos2d::Node::typeinfo,&Armature::typeinfo,0),
      plVar1 != (long *)0x0)) &&
     ((**(code **)(*plVar1 + 0x5d0))(plVar1,this), *(long *)(this + 0x2f8) == 0)) {
    this_00 = operator_new(0x20,(nothrow_t *)&std::nothrow);
    if (this_00 != (GroupCommand *)0x0) {
      cocos2d::GroupCommand::GroupCommand(this_00);
    }
    *(GroupCommand **)(this + 0x2f8) = this_00;
  }
  return;
}

