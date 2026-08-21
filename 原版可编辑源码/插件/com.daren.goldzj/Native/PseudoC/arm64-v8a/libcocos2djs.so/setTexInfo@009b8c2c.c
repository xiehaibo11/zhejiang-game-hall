
/* cocos2d::renderer::Texture2D::setTexInfo() */

void __thiscall cocos2d::renderer::Texture2D::setTexInfo(Texture2D *this)

{
  ushort uVar1;
  undefined4 uVar2;
  Texture2D TVar3;
  byte bVar4;
  
  uVar1 = *(ushort *)(this + 0x24);
  if ((((uVar1 == 0) || ((uVar1 - 1 & uVar1) != 0)) ||
      (uVar1 = *(ushort *)(this + 0x26), uVar1 == 0)) || ((uVar1 - 1 & uVar1) != 0)) {
    if ((*(short *)(this + 0x20) != -0x7ed1) || (*(short *)(this + 0x22) != -0x7ed1)) {
      __android_log_print(5,"renderer",
                          " (270): WebGL1 doesn\'t support all wrap modes with NPOT textures\n");
      *(undefined4 *)(this + 0x20) = 0x812f812f;
    }
                    /* try { // try from 009b8cb0 to 00ab8d9f has its CatchHandler @ 009b8a70 */
    bVar4 = 1;
    TVar3 = this[0x38];
  }
  else {
    TVar3 = this[0x38];
    bVar4 = 0;
  }
  if (TVar3 != (Texture2D)0x0) {
    TVar3 = this[0x2b];
    if ((bool)(bVar4 ^ 1) || TVar3 == (Texture2D)0xff) goto LAB_009b8cf0;
    __android_log_print(5,"renderer"," (278): NPOT textures do not support mipmap filter\n");
  }
  TVar3 = (Texture2D)0xff;
LAB_009b8cf0:
  uVar2 = Texture::glFilter(this[0x29],TVar3);
  glTexParameteri(0xde1,0x2801,uVar2);
  uVar2 = Texture::glFilter(this[0x2a],0xff);
  glTexParameteri(0xde1,0x2800,uVar2);
                    /* catch() { ... } // from try @ 009b8afc with catch @ 009b8d30 */
  glTexParameteri(0xde1,0x2802,*(undefined2 *)(this + 0x20));
                    /* catch() { ... } // from try @ 009b8af0 with catch @ 009b8d34 */
                    /* catch() { ... } // from try @ 009b8ad0 with catch @ 009b8d38 */
                    /* catch() { ... } // from try @ 009b8b08 with catch @ 009b8d48 */
  glTexParameteri(0xde1,0x2803,*(undefined2 *)(this + 0x22));
  return;
}

