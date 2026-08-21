
/* cocos2d::Bundle3D::clear() */

void __thiscall cocos2d::Bundle3D::clear(Bundle3D *this)

{
  long lVar1;
  long lVar2;
  
  if (this[0x130] == (Bundle3D)0x0) {
    if (((byte)this[0x50] & 1) == 0) {
      *(undefined2 *)(this + 0x50) = 0;
    }
    else {
      **(undefined1 **)(this + 0x60) = 0;
      *(undefined8 *)(this + 0x58) = 0;
    }
  }
  else {
    Data::clear((Data *)(this + 0xd0));
    lVar2 = *(long *)(this + 0x128);
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + -8);
      if (lVar1 != 0) {
        lVar1 = lVar1 << 5;
        do {
          if ((*(byte *)(lVar2 + lVar1 + -0x20) & 1) != 0) {
            operator_delete(*(void **)(lVar2 + lVar1 + -0x10));
          }
          lVar1 = lVar1 + -0x20;
        } while (lVar1 != 0);
      }
      operator_delete__((long *)(lVar2 + -8));
      *(undefined8 *)(this + 0x128) = 0;
    }
  }
  return;
}

