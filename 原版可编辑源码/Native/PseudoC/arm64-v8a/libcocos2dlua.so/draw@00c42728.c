
/* cocostudio::BatchNode::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocostudio::BatchNode::draw(BatchNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  Renderer *this_00;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(this + 0x178);
  puVar1 = *(undefined8 **)(this + 0x180);
  if (puVar6 == puVar1) {
    return;
  }
  bVar2 = false;
  plVar5 = (long *)*puVar6;
  if (plVar5 != (long *)0x0) goto LAB_00c427b0;
  do {
    cocos2d::Renderer::popGroup(param_1);
    (**(code **)(*plVar5 + 0x358))(plVar5,param_1,param_2,param_3);
    bVar2 = false;
    while( true ) {
      puVar6 = puVar6 + 1;
      if (puVar1 == puVar6) {
        return;
      }
      plVar5 = (long *)*puVar6;
      if (plVar5 == (long *)0x0) break;
LAB_00c427b0:
      plVar3 = (long *)__dynamic_cast(plVar5,&cocos2d::Node::typeinfo,&Armature::typeinfo,0);
      if (plVar3 == (long *)0x0) break;
      if (!bVar2) {
        lVar4 = cocos2d::Director::getInstance();
        this_00 = *(Renderer **)(lVar4 + 0x1b0);
        cocos2d::GroupCommand::init(*(GroupCommand **)(this + 0x2f8),*(float *)(this + 0x170));
        cocos2d::Renderer::addCommand(this_00,*(RenderCommand **)(this + 0x2f8));
        cocos2d::Renderer::pushGroup(this_00,*(int *)(*(long *)(this + 0x2f8) + 0x18));
      }
      (**(code **)(*plVar3 + 0x358))(plVar3,param_1,param_2,param_3);
      bVar2 = true;
    }
  } while( true );
}

