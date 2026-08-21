
/* cocos2d::renderer::BaseRenderer::allocTextureUnit() */

int __thiscall cocos2d::renderer::BaseRenderer::allocTextureUnit(BaseRenderer *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc);
  if (*(int *)(*(long *)(this + 0x10) + 0x3c) <= iVar1) {
    __android_log_print(5,"renderer",
                        " (376): Trying to use %d texture uints while this GPU only supports %d\n");
    iVar1 = *(int *)(this + 0xc);
  }
  *(int *)(this + 0xc) = iVar1 + 1;
  return iVar1;
}

