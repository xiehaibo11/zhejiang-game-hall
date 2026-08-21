
/* cocos2d::renderer::Texture2D::setSubImage(cocos2d::renderer::Texture::SubImageOption const&) */

void __thiscall cocos2d::renderer::Texture2D::setSubImage(Texture2D *this,SubImageOption *param_1)

{
  SubImageOption SVar1;
  SubImageOption SVar2;
  ushort uVar3;
  void *in_x5;
  int iVar4;
  
                    /* try { // try from 009b8da0 to 00ab8dff has its CatchHandler @ 009b8da0
                       catch() { ... } // from try @ 009b8da0 with catch @ 009b8da0
                       catch() { ... } // from try @ 009b9054 with catch @ 009b8da0 */
  SVar1 = param_1[0x19];
  SVar2 = param_1[0x1a];
  if (((this[0x38] == (Texture2D)0x0) && (this[0x39] == (Texture2D)0x0)) && ((byte)this[0x28] != 0))
  {
    uVar3 = *(short *)(param_1 + 8) * (ushort)(byte)this[0x28];
    if ((uVar3 & 0x38) == 0) {
      iVar4 = 8;
    }
    else if ((uVar3 & 0x18) == 0) {
      iVar4 = 4;
    }
    else {
      iVar4 = 1;
      if ((uVar3 & 8) == 0) {
        iVar4 = 2;
      }
    }
  }
  else {
    iVar4 = 1;
  }
  ccPixelStorei(0xcf5,iVar4);
  ccPixelStorei(0x9240,(uint)(byte)SVar1);
  ccPixelStorei(0x9241,(uint)(byte)SVar2);
                    /* try { // try from 009b8e00 to 00ab8e17 has its CatchHandler @ 009b90b0 */
  ccFlipYOrPremultiptyAlphaIfNeeded
            ((cocos2d *)(ulong)*(uint *)(this + 0x30),(uint)*(ushort *)(param_1 + 8),
             (uint)*(ushort *)(param_1 + 10),*(int *)param_1,(uint)*(undefined8 *)(param_1 + 0x10),
             in_x5);
                    /* try { // try from 009b8e20 to 00ab8e2b has its CatchHandler @ 009b90ac */
  if (this[0x39] == (Texture2D)0x0) {
                    /* try { // try from 009b8e3c to 00ab9053 has its CatchHandler @ 009b90c0 */
    glTexSubImage2D(0xde1,param_1[0x18],*(undefined2 *)(param_1 + 4),*(undefined2 *)(param_1 + 6),
                    *(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 10),
                    *(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34),
                    *(undefined8 *)(param_1 + 0x10));
  }
  else {
                    /* try { // try from 009b8e2c to 00ab8e3b has its CatchHandler @ 009b90a8 */
    glCompressedTexSubImage2D(0xde1);
  }
  return;
}

