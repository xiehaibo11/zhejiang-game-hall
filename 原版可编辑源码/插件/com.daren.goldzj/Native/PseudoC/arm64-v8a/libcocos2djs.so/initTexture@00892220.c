
/* cocos2d::RenderTexture::initTexture() */

void __thiscall cocos2d::RenderTexture::initTexture(RenderTexture *this)

{
  int iVar1;
  uint uVar2;
  void *__s;
  undefined4 uVar3;
  
  glGenTextures(1,this);
  glBindTexture(0xde1,*(undefined4 *)this);
  iVar1 = *(int *)(this + 0x34);
  uVar2 = *(int *)(this + 0x30) * 3;
  __s = malloc((long)(int)(uVar2 * iVar1));
  memset(__s,0,(long)(int)(uVar2 * iVar1));
  if ((uVar2 & 7) == 0) {
    uVar3 = 8;
  }
  else if ((uVar2 & 3) == 0) {
    uVar3 = 4;
  }
  else {
    uVar3 = 1;
    if ((uVar2 & 1) == 0) {
      uVar3 = 2;
    }
  }
  glPixelStorei(0xcf5,uVar3);
  glTexImage2D(0xde1,0,0x1907,*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34),0,0x1907,
               0x1401,__s);
  free(__s);
  glTexParameteri(0xde1,0x2800,0x2601);
  glTexParameteri(0xde1,0x2801,0x2601);
  glTexParameteri(0xde1,0x2802,0x812f);
  glTexParameteri(0xde1,0x2803,0x812f);
  glBindTexture(0xde1,0);
  return;
}

