
/* cocos2d::ui::RichElementCustomNode::init(int, cocos2d::Color3B const&, unsigned char,
   cocos2d::Node*) */

undefined8 __thiscall
cocos2d::ui::RichElementCustomNode::init
          (RichElementCustomNode *this,int param_1,Color3B *param_2,uchar param_3,Node *param_4)

{
  RichElementCustomNode RVar1;
  undefined2 uVar2;
  
  *(int *)(this + 0x28) = param_1;
  RVar1 = *(RichElementCustomNode *)(param_2 + 2);
  uVar2 = *(undefined2 *)param_2;
  this[0x2f] = (RichElementCustomNode)param_3;
  *(Node **)(this + 0x30) = param_4;
  this[0x2e] = RVar1;
  *(undefined2 *)(this + 0x2c) = uVar2;
  Ref::retain((Ref *)param_4);
  return 1;
}

