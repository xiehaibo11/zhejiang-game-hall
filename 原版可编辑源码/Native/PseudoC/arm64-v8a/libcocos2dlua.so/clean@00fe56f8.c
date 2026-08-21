
/* cocos2d::Renderer::clean() */

void __thiscall cocos2d::Renderer::clean(Renderer *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(this + 0x48) - *(long *)(this + 0x40);
  if (lVar1 != 0) {
    uVar2 = 0;
    puVar3 = (undefined8 *)(*(long *)(this + 0x40) + 0x38);
    do {
      uVar2 = uVar2 + 1;
      puVar3[-6] = puVar3[-7];
      puVar3[-3] = puVar3[-4];
      *puVar3 = puVar3[-1];
      puVar3[3] = puVar3[2];
      puVar3[6] = puVar3[5];
      puVar3 = puVar3 + 0x10;
    } while (uVar2 < (ulong)(lVar1 >> 7));
  }
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this + 0x1b0090) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  return;
}

