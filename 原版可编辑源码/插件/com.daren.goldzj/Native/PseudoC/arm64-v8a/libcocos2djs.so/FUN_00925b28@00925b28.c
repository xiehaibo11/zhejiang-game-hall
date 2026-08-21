
void FUN_00925b28(long param_1,int *param_2)

{
  RenderFlow *this;
  
  this = *(RenderFlow **)(param_1 + 8);
  if (*(int *)(this + 0x40) == 4) {
    cocos2d::renderer::RenderFlow::calculateLevelWorldMatrix((int)this,*param_2);
    return;
  }
  if (*(int *)(this + 0x40) == 2) {
    cocos2d::renderer::RenderFlow::calculateLocalMatrix(this,*param_2);
    return;
  }
  return;
}

