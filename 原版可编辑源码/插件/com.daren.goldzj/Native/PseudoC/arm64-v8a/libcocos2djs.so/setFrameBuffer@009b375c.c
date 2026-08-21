
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::renderer::DeviceGraphics::setFrameBuffer(cocos2d::renderer::FrameBuffer const*) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setFrameBuffer(DeviceGraphics *this,FrameBuffer *param_1)

{
  uint uVar1;
  int iVar2;
  Ref *this_00;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  this_00 = *(Ref **)(this + 0x58);
  if (this_00 == (Ref *)param_1) {
    return;
  }
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  if (this_00 != (Ref *)0x0) {
    Ref::release(this_00);
  }
  *(FrameBuffer **)(this + 0x58) = param_1;
  if (param_1 == (FrameBuffer *)0x0) {
    glBindFramebuffer(0x8d40,*(undefined4 *)(this + 0x30));
    return;
  }
  Ref::retain((Ref *)param_1);
  glBindFramebuffer(0x8d40,*(undefined4 *)(param_1 + 0xc));
  plVar3 = (long *)FrameBuffer::getColorBuffers(param_1);
  plVar8 = (long *)*plVar3;
  plVar9 = (long *)plVar3[1];
  if (plVar8 != plVar9) {
    do {
      lVar7 = *plVar8;
      uVar5 = _DAT_0000000c;
      if (lVar7 == 0) {
LAB_009b3820:
        glFramebufferRenderbuffer(0x8d40,0x8ce0,0x8d41,uVar5);
      }
      else {
        lVar4 = __dynamic_cast(lVar7,&RenderTarget::typeinfo,&Texture2D::typeinfo,0);
        uVar5 = *(undefined4 *)(lVar7 + 0xc);
        if (lVar4 == 0) goto LAB_009b3820;
        glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,*(undefined4 *)(lVar7 + 0xc),0);
      }
      plVar8 = plVar8 + 1;
    } while (plVar9 != plVar8);
    plVar8 = (long *)*plVar3;
    plVar9 = (long *)plVar3[1];
  }
  uVar6 = (ulong)((long)plVar9 - (long)plVar8) >> 3;
  if ((int)uVar6 < *(int *)(this + 0x48)) {
    do {
      glFramebufferTexture2D(0x8d40,(int)uVar6 + 0x8ce0,0xde1,0,0);
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
    } while ((int)uVar1 < *(int *)(this + 0x48));
  }
  lVar7 = FrameBuffer::getDepthBuffer(*(FrameBuffer **)(this + 0x58));
  if (lVar7 != 0) {
    lVar7 = FrameBuffer::getDepthBuffer(*(FrameBuffer **)(this + 0x58));
    uVar5 = _DAT_0000000c;
    if (lVar7 != 0) {
      lVar4 = __dynamic_cast(lVar7,&RenderTarget::typeinfo,&Texture2D::typeinfo,0);
      uVar5 = *(undefined4 *)(lVar7 + 0xc);
      if (lVar4 != 0) {
        glFramebufferTexture2D(0x8d40,0x8d00,0xde1,*(undefined4 *)(lVar7 + 0xc),0);
        goto LAB_009b390c;
      }
    }
    glFramebufferRenderbuffer(0x8d40,0x8d00,0x8d41,uVar5);
  }
LAB_009b390c:
  lVar7 = FrameBuffer::getStencilBuffer(*(FrameBuffer **)(this + 0x58));
  if (lVar7 != 0) {
    lVar7 = FrameBuffer::getStencilBuffer(*(FrameBuffer **)(this + 0x58));
    uVar5 = _DAT_0000000c;
    if (lVar7 != 0) {
      lVar4 = __dynamic_cast(lVar7,&RenderTarget::typeinfo,&Texture2D::typeinfo,0);
      uVar5 = *(undefined4 *)(lVar7 + 0xc);
      if (lVar4 != 0) {
        glFramebufferTexture2D(0x8d40,0x8d20,0xde1,*(undefined4 *)(lVar7 + 0xc),0);
        goto LAB_009b3978;
      }
    }
    glFramebufferRenderbuffer(0x8d40,0x8d20,0x8d41,uVar5);
  }
LAB_009b3978:
  iVar2 = glCheckFramebufferStatus(0x8d40);
  if (iVar2 == 0x8cd5) {
    return;
  }
  __android_log_print(6,"renderer"," (117): Framebuffer status error: 0x%x\n",iVar2);
  return;
}

