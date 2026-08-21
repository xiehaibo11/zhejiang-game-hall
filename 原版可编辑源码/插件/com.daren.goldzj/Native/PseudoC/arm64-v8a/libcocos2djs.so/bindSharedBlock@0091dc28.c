
/* cocos2d::LabelRenderer::bindSharedBlock(se::Object*, void*, void*) */

void __thiscall
cocos2d::LabelRenderer::bindSharedBlock
          (LabelRenderer *this,Object *param_1,void *param_2,void *param_3)

{
  *(Object **)(this + 0x18) = param_1;
  *(void **)(this + 0x20) = param_2;
  *(void **)(this + 0x28) = param_3;
  return;
}

