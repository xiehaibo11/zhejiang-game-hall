
/* cocostudio::BatchNode::removeChild(cocos2d::Node*, bool) */

void __thiscall cocostudio::BatchNode::removeChild(BatchNode *this,Node *param_1,bool param_2)

{
  long *plVar1;
  
  if ((param_1 != (Node *)0x0) &&
     (plVar1 = (long *)__dynamic_cast(param_1,&cocos2d::Node::typeinfo,&Armature::typeinfo,0),
     plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x5d0))(plVar1,0);
  }
  cocos2d::Node::removeChild((Node *)this,param_1,param_2);
  return;
}

