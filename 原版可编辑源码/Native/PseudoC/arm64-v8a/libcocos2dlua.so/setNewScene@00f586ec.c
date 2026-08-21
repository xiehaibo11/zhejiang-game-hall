
/* cocos2d::TransitionScene::setNewScene(float) */

void cocos2d::TransitionScene::setNewScene(float param_1)

{
  _func_void_float *in_x0;
  Director *this;
  
                    /* try { // try from 00f586fc to 010587eb has its CatchHandler @ 00f58580 */
  Node::unschedule(in_x0);
  this = (Director *)Director::getInstance();
  *(Director *)(in_x0 + 0x385) = this[0x168];
  Director::replaceScene(this,*(Scene **)(in_x0 + 0x370));
                    /* WARNING: Could not recover jumptable at 0x00f58738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(in_x0 + 0x378) + 0x170))(*(long **)(in_x0 + 0x378),1);
  return;
}

