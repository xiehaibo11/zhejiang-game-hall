
/* cocos2d::utils::captureNode(cocos2d::Node*, float) */

void cocos2d::utils::captureNode(Node *param_1,float param_2)

{
  long lVar1;
  float *pfVar2;
  Director *this;
  RenderTexture *this_00;
  undefined8 *puVar3;
  ulong uVar4;
  Texture2D *pTVar5;
  Sprite *this_01;
  long lVar6;
  undefined4 in_register_00005004;
  undefined8 uVar7;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pfVar2 = (float *)(**(code **)(*(long *)param_1 + 0x168))();
  this = (Director *)Director::getInstance();
  Director::setNextDeltaTimeZero(this,true);
  this_00 = (RenderTexture *)RenderTexture::create((int)*pfVar2,(int)pfVar2[1],2,0x88f0);
  puVar3 = (undefined8 *)(**(code **)(*(long *)param_1 + 0xb0))(param_1);
  local_50 = *puVar3;
  uVar4 = (**(code **)(*(long *)param_1 + 0x200))(param_1);
  uVar7 = 0;
  if ((uVar4 & 1) == 0) {
    puVar3 = (undefined8 *)(**(code **)(*(long *)param_1 + 0x150))(param_1);
    uVar7 = *puVar3;
  }
  local_60[0] = CONCAT44((float)((ulong)uVar7 >> 0x20) *
                         (float)((ulong)*(undefined8 *)pfVar2 >> 0x20),
                         (float)uVar7 * (float)*(undefined8 *)pfVar2);
  (**(code **)(*(long *)param_1 + 0x98))(param_1,local_60);
  (**(code **)(*(long *)this_00 + 0x530))(this_00);
  Node::visit(param_1);
  (**(code **)(*(long *)this_00 + 0x550))(this_00);
  (**(code **)(*(long *)param_1 + 0x98))(param_1,&local_50);
  if (1e-06 <= ABS(param_2 + -1.0)) {
    Rect::Rect((Rect *)local_60,0.0,0.0,*pfVar2,pfVar2[1]);
    pTVar5 = (Texture2D *)(**(code **)(**(long **)(this_00 + 0x380) + 0x550))();
    this_01 = (Sprite *)Sprite::createWithTexture(pTVar5,(Rect *)local_60,false);
    local_68 = 0;
    (**(code **)(*(long *)this_01 + 0x148))(this_01,&local_68);
    Sprite::setFlippedY(this_01,true);
    this_00 = (RenderTexture *)
              RenderTexture::create((int)(*pfVar2 * param_2),(int)(pfVar2[1] * param_2),2,0x88f0);
    (**(code **)(*(long *)this_01 + 0x80))(CONCAT44(in_register_00005004,param_2),this_01);
    (**(code **)(*(long *)this_00 + 0x530))(this_00);
    Node::visit((Node *)this_01);
    (**(code **)(*(long *)this_00 + 0x550))(this_00);
  }
  lVar6 = Director::getInstance();
  Renderer::render(*(Renderer **)(lVar6 + 0x1b0));
  RenderTexture::newImage(this_00,true);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

