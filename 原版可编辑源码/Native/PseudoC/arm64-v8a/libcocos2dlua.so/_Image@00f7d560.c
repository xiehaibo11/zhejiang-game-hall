
/* cocos2d::Image::~Image() */

void __thiscall cocos2d::Image::~Image(Image *this)

{
  Image *pIVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  
  *(undefined ***)this = &PTR__Image_01722020;
  if (this[0x40] == (Image)0x0) {
    if (*(void **)(this + 0x28) != (void *)0x0) {
      free(*(void **)(this + 0x28));
      *(undefined8 *)(this + 0x28) = 0;
    }
  }
  else {
    iVar3 = *(int *)(this + 0x150);
    if (0 < iVar3) {
      lVar4 = 0;
      pIVar1 = this + 0x50;
      pvVar2 = *(void **)pIVar1;
      while( true ) {
        if (pvVar2 != (void *)0x0) {
          operator_delete__(pvVar2);
          *(undefined8 *)pIVar1 = 0;
          iVar3 = *(int *)(this + 0x150);
        }
        lVar4 = lVar4 + 1;
        pIVar1 = pIVar1 + 0x10;
        if (iVar3 <= lVar4) break;
        pvVar2 = *(void **)pIVar1;
      }
    }
  }
  if (((byte)this[0x158] & 1) != 0) {
    operator_delete(*(void **)(this + 0x168));
  }
  Ref::~Ref((Ref *)this);
  return;
}

