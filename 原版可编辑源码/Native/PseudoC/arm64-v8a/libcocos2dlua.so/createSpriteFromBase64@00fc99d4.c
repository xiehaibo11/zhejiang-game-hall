
/* cocos2d::utils::createSpriteFromBase64(char const*) */

undefined8 cocos2d::utils::createSpriteFromBase64(char *param_1)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  Image *this;
  ulong uVar4;
  Texture2D *this_00;
  undefined8 uVar5;
  uchar *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sVar3 = strlen(param_1);
  iVar2 = base64Decode(param_1,sVar3,&local_40);
  this = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this == (Image *)0x0) {
    this = (Image *)0x0;
  }
  else {
    Image::Image(this);
  }
  uVar4 = Image::initWithImageData(this,local_40,(long)iVar2);
  free(local_40);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    if (this != (Image *)0x0) {
      Ref::release((Ref *)this);
      uVar5 = 0;
    }
  }
  else {
    this_00 = operator_new(0x88,(nothrow_t *)&std::nothrow);
    if (this_00 != (Texture2D *)0x0) {
      Texture2D::Texture2D(this_00);
    }
    Texture2D::initWithImage(this_00,this);
    Texture2D::setAliasTexParameters(this_00);
    Ref::release((Ref *)this);
    uVar5 = Sprite::createWithTexture(this_00);
    Ref::release((Ref *)this_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

