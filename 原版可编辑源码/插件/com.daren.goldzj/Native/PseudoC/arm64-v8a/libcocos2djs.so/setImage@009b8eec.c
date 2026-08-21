
/* cocos2d::renderer::Texture2D::setImage(cocos2d::renderer::Texture::ImageOption const&) */

void __thiscall cocos2d::renderer::Texture2D::setImage(Texture2D *this,ImageOption *param_1)

{
  uint uVar1;
  ImageOption IVar2;
  ImageOption IVar3;
  ushort uVar4;
  void *in_x5;
  int iVar5;
  
  IVar2 = param_1[0x18];
  IVar3 = param_1[0x19];
  if (this[0x38] == (Texture2D)0x0) {
    iVar5 = 1;
  }
  else {
    iVar5 = 1;
    if (((byte)this[0x28] != 0) && (this[0x39] == (Texture2D)0x0)) {
      uVar4 = (ushort)(byte)this[0x28] * *(short *)(param_1 + 0x14);
      if ((uVar4 & 0x38) == 0) {
        iVar5 = 8;
      }
      else if ((uVar4 & 0x18) == 0) {
        iVar5 = 4;
      }
      else {
        iVar5 = 1;
        if ((uVar4 & 8) == 0) {
          iVar5 = 2;
        }
      }
    }
  }
  ccPixelStorei(0xcf5,iVar5);
  ccPixelStorei(0x9240,(uint)(byte)IVar2);
  ccPixelStorei(0x9241,(uint)(byte)IVar3);
  uVar1 = *(uint *)(param_1 + 8) >> 2;
  if (*(int *)(this + 0x34) != 0x1406) {
    uVar1 = *(uint *)(param_1 + 8);
  }
  ccFlipYOrPremultiptyAlphaIfNeeded
            ((cocos2d *)(ulong)*(uint *)(this + 0x30),(uint)*(ushort *)(param_1 + 0x14),
             (uint)*(ushort *)(param_1 + 0x16),uVar1,(uint)*(undefined8 *)param_1,in_x5);
  if (this[0x39] == (Texture2D)0x0) {
    glTexImage2D(0xde1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(this + 0x2c),
                 *(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),0,
                 *(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34),*(undefined8 *)param_1);
    return;
  }
  glCompressedTexImage2D(0xde1);
  return;
}

